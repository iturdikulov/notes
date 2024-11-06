---
date: 2024-09-26
tags:
  - inbox
  - Python
---
# Python concurrency

Various notes on concurrency in Python. Main information source is realpython
concurrency article [^1].

The dictionary definition of concurrency is ==simultaneous== occurrence.

Concurrency types:

- Pre-emptive multitasking (`threading`), single process/processors. Switch
  decision - &#10; the operating system decides when to switch tasks external to
  Python.

- Cooperative multitasking (`asyncio`), single process/processors. Switch
  decision &#10; the tasks decide when to switch tasks.

- Multiprocessing (`multiprocessing`), multiple processes/processors. Difference
  between `threading` and `asyncio` - &#10; The processes all run at the same
  time on different processors. Number of processes/processors many.

## When concurrency is useful

Main concurrency use cases are ==CPU bound and I/O bound== tasks.

Your program spends most of its time talking to a slow device, like a network
connection, a hard drive, or a printer, this is ==I/O bound== process. Speeding
it up involves overlapping the times spent waiting for these devices.

You program spends most of its time doing CPU operations, this is ==CPU bound==
process. Speeding it up involves finding ways to do more computations in the
same amount of time (solving the problem with more physical cores).

## How to Speed Up an I/O-Bound Program

Let's say you have synchronous version of program that do I/O bound task.

```python
import requests
import logging
import time

from requests.sessions import Session

def download_site(url: str, session: Session):
    with session.get(url) as response:
        print(f"Read {len(response.content)} from {url}")


def download_all_sites(sites: list[str]):
    with requests.Session() as session:
        for url in sites:
            download_site(url, session)


if __name__ == "__main__":
    sites = [
        "https://www.jython.org",
        "https://www.wikipedia.org/",
        "http://olympus.realpython.org/dice",
    ] * 80
    start_time = time.time()
    download_all_sites(sites)
    duration = time.time() - start_time
    print(f"Downloaded {len(sites)} sites in {duration} seconds")
```

Why we used `requests.Session` here? &#10; Creating a Session object allows
requests to do some fancy networking tricks and really speed things up, we can
reuse connection between requests.

In my case I/O bound task is downloading a bunch of websites, and it takes less
than a minute to download each website with mine internet connection.

The big problem here is that it’s relatively slow compared to the other
solutions, and sometimes you can’t afford to wait that long. To solve this
problem, we can use threads.

### Threading

```python
import concurrent.futures
import requests
import threading
import time


thread_local = threading.local()


def get_session():
    """Since Session is not thread-safe, we need to create a new one for each
    thread"""
    if not hasattr(thread_local, "session"):
        thread_local.session = requests.Session()
    return thread_local.session


def download_site(url):
    session = get_session()
    with session.get(url) as response:
        print(f"Read {len(response.content)} from {url}")


def download_all_sites(sites):
    # Thread + Pool (threads union) + Executor (threads controller)
    with concurrent.futures.ThreadPoolExecutor(max_workers=5) as executor:
        executor.map(download_site, sites)  # threads generator


if __name__ == "__main__":
    sites = [
        "https://www.jython.org",
        "http://olympus.realpython.org/dice",
    ] * 80
    start_time = time.time()
    download_all_sites(sites)
    duration = time.time() - start_time
    print(f"Downloaded {len(sites)} in {duration} seconds")
```

One major possible issue with threading is race conditions.

Race conditions happen because the programmer has not sufficiently
==protected data accesses== to prevent threads from interfering with each other.

```python
import concurrent.futures


counter = 0


def increment_counter(fake_value: int):
    global counter
    for _ in range(100):
        counter += 1  #  each of the threads needs to read the current value, add one to it, and the save that value back to the variable


if __name__ == "__main__":
    fake_data = [x for x in range(5000)]
    counter = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=5000) as executor:
        _ = executor.map(increment_counter, fake_data)
    print(counter)
```
Can you explain problems with this code?
&#10;
In order to increment counter, each of the threads needs to read the current
value, add one to it, and the save that value back to the variable. That happens
in this line: `counter += 1`.\
Because the operating system knows nothing about your code and can swap
threads at any point in the execution, **it’s possible** for this swap to
happen after a thread has read the value, but before it has had the chance to
write it back. If the new code that is running modifies `counter` as well,
then the first thread has a stale copy of the data and trouble will
ensue (incorrect results).
Since this is rare situation, this type of problem quite difficult to debug.

### asyncio

Detailed explanation available in [[asyncio]] note.

General concept of event loop?
&#10;
The event loop object is aware of each task and knows what state it’s in.

An important point of `asyncio` is that the tasks never give up control without
intentionally doing so. They never get interrupted in the middle of an
operation. This allows us to share resources a bit more easily in `asyncio` than
in threading. You don’t have to worry about making your code ==thread-safe==.

## References

[^1]: [Speed Up Your Python Program With Concurrency – Real Python](https://realpython.com/python-concurrency/)
