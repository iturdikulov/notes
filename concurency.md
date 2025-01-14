---
date: 2024-09-26T00:00+03:00
tags:
  - blog
  - Python
---

# Python concurrency

Various notes on concurrency in [[Python]]. Main information source is
FastAPI tutorial [^1], realpython concurrency article [^2] and official
documentation [^3].

TODO: check [^2] and [^3] in details.

The dictionary definition of concurrency is ==simultaneous== occurrence.

> In [[computer_science]] concurrency is the ability of different parts or units
> of a [[computer]], [[algorithm]], or problem to be executed out-of-order or in
> partial order, without affecting the outcome. This allows for parallel
> execution of the concurrent units, which can significantly improve overall
> speed of the execution in multi-processor and multi-core systems. In more
> technical terms, concurrency refers to the decomposability of a program,
> algorithm, or problem into order-independent or partially-ordered components
> or units of computation.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Concurrency_\(computer_science\))</cite>

Concurrency types:

- Pre-emptive multitasking (`threading`), single process/processors. Switch
  decision:
  &#10;<br>
  The operating system decides when to switch tasks external to Python.
- Cooperative multitasking (`asyncio`), single process/processors. Switch
  decision:
  &#10;<br>
  The tasks decide when to switch tasks.
- Multiprocessing (`multiprocessing`), multiple processes/processors. Difference
  between `threading` and `asyncio`?
  &#10;<br>
  The processes all run at the same time on different processors. Number of
  processes/processors many.

## When concurrency is useful

Main concurrency use cases are ==CPU bound and I/O bound== tasks.

Your program spends most of its time talking to a slow device, like a
[[computer_network]] connection, a hard drive, or a printer, this is
==[[input_output|I/O]] bound== process. Speeding it up involves overlapping the
times spent waiting for these devices.

You program spends most of its time doing CPU operations, this is ==CPU bound==
process. Speeding it up involves finding ways to do more computations in the
same amount of time with concurrency (solving the problem with more physical
cores).

## Concurrency and async / await

Coroutine (like [[Go#Goroutines]]) is just the term for the thing returned by an
`async def` function. Python knows that it is something like a function, that it
can **start** and that it will **end** at some point, but that it might be
**paused** internally too, whenever there is an ==await== inside of it.

Coroutines declared with the async/await syntax is the preferred way of writing
asyncio applications. For example, the following snippet of code prints “hello”,
waits 1 second, and then prints “world”:

```python
import asyncio

async def main():
    print('hello')
    await asyncio.sleep(1)
    print('world')

asyncio.run(main())  # run main() coroutine
```

You can only use `await` inside of functions created with ==`async def`==.

To actually run a coroutine, asyncio provides the following mechanisms:
- The ==`asyncio.run()`== function to run the top-level entry point “main()”
  function.
- Awaiting on a coroutine. The following snippet of code will print “hello”
  after waiting for 1 second, and then print “world” after waiting for another 2
  seconds:
  ```python
  import asyncio
  import time

  async def say_after(delay, what):  # say_after coroutine
      await asyncio.sleep(delay)
      print(what)

  async def main():
      print(f"started at {time.strftime('%X')}")

      await say_after(1, 'hello')  # await on say_after coroutine
      await say_after(2, 'world')  # await on say_after coroutine

      print(f"finished at {time.strftime('%X')}")

  asyncio.run(main())
  ```
- The ==`asyncio.create_task()`== function to run `coroutines` concurrently as
  `asyncio` Tasks.
  ```python
  async def main():
      task1 = asyncio.create_task(say_after(1, "hello"))
      task2 = asyncio.create_task(say_after(2, "world"))
      print(f"started at {time.strftime('%X')}")

      # Wait until both tasks are completed (should take
      # around 2 seconds.)
      await task1
      await task2

      print(f"finished at {time.strftime('%X')}")
  ```
- The `asyncio.TaskGroup` class provides a more modern alternative to
  `create_task()`. Using this API, the last example becomes:
  ```python
  async def main():
      async with asyncio.TaskGroup() as tg:
          task1 = tg.create_task(say_after(1, 'hello'))
          task2 = tg.create_task(say_after(2, 'world'))

          print(f"started at {time.strftime('%X')}")

      # The await is implicit when the context manager exits.
      print(f"finished at {time.strftime('%X')}")
  ```

Awaitable object is an object if it can be used in an ==`await`== expression.

There are three main types of awaitable objects:

- Coroutines
- Tasks
- Futures, special low-level awaitable object that represents an eventual result
  of an asynchronous operation (a good example of a low-level function that
  returns a Future object is `loop.run_in_executor()`).

## How to speed up an I/O bound program

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
Why we used `requests.Session` here?
&#10;<br>
Creating a Session object allows requests to do some fancy networking tricks and
really speed things up, we can reuse connection between requests.

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
&#10;<br>
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
&#10;<br>
The event loop object is aware of each task and knows what state it’s in.

An important point of `asyncio` is that the tasks never give up control without
intentionally doing so. They never get interrupted in the middle of an
operation. This allows us to share resources a bit more easily in `asyncio` than
in threading. You don’t have to worry about making your code ==thread-safe==.

[^1]: [Concurrency and async / await - FastAPI](https://fastapi.tiangolo.com/async/)
[^2]: [Speed Up Your Python Program With Concurrency – Real Python](https://realpython.com/python-concurrency/)
[^3]: [Coroutines and Tasks — Python documentation](https://docs.python.org/3/library/asyncio-task.html)
