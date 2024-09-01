---
date: 2023-08-27
tags:
  - inbox
  - SR_python
---

# asyncio

## [Асинхронный python без головной боли (часть 1) / Хабр](https://habr.com/ru/articles/667630/)

What is a coroutine in general, how it's modify function behavior?
&#10;
A coroutine gives the **interpreter** the ability to resume a base function that
was suspended at the location where the await keyword was placed.

If function contains `await` keyword it can be called as a coroutine.
&#10;
Strictly speaking no, it's what function with await returning (coroutine
object).
`async def f` is asynchronous function, `f()` is coroutine object.

Synchronous code:

```python
import time

def fun1(x:int):
    print(f"Function 1 result {x**2}, wait ...")
    time.sleep(3)
    print("Function 1 finished")

def fun2(x:float):
    print(f"Function 2 result {x**.05}, wait ...")
    time.sleep(3)
    print("Function 2 finished")

def main():
    fun1(4)
    fun2(4)

print(time.strftime("%X"))
main()
print(time.strftime("%X"))
```

Asynchronous code:

```python
import asyncio
import time

# async prefix, function must run asynchronically
async def fun1(x: int, break_async=False):
    print(f"Function 1: result {x**2}, wait ...")

    # await (like hey you can execute another function, I'll sleep 3 seconds)
    # asynchronical sleep (coroutine) which doesnt' block intrpereter
    if break_async:
        # time sleep is synchronous, we not able to run next coro while it working
        time.sleep(3)
    else:
        await asyncio.sleep(3)

    print("Function 1: finished")


async def fun2(x: float, break_async=False):
    print(f"Function 2: result {x**.05}, wait ...")

    if break_async:
        time.sleep(3)
    else:
        await asyncio.sleep(3)

    print("Function 2: finished")


async def main(break_async=False):
    task1 = asyncio.create_task(
        fun1(4, break_async)
    )  # schedule execution of coroutine task (fun1)
    task2 = asyncio.create_task(fun2(4, break_async))

    await task1  # wait for task to finish
    await task2


print(time.strftime("%X"))
asyncio.run(main())  # execute main coroutine
print(time.strftime("%X"))
```
