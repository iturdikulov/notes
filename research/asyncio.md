---
date: 2023-08-27
tags:
  - inbox
  - Python
---

# asyncio

> Library to write concurrent code using the async/await syntax.
> asyncio is often a perfect fit for IO-bound and high-level structured network
> code.
> [Python documentation](https://docs.python.org/3/library/asyncio.html)

## Асинхронный python без головной боли [^1]

Series of articles.

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

Asynchronous code example, imagine that there is no async/await, then this code
will be easier to read:

```python
import asyncio
import time

# async prefix, function must run asynchronically
async def fun1(x: int):
    print(f"Function 1: result {x**2}, wait ...")

    # await (like hey you can execute another function, I'll sleep 3 seconds)
    # asynchronical sleep (coroutine) which doesnt' block intrpereter
    await asyncio.sleep(3)

    print("Function 1: finished")


async def fun2(x: float):
    print(f"Function 2: result {x**.05}, wait ...")

    await asyncio.sleep(3)

    print("Function 2: finished")


async def main():
    fun1_corutine_task_wrapper = asyncio.create_task(
        fun1(4, break_async)
    )  # schedule execution of coroutine task (fun1)

    fun2_corutine_task_wrapper = asyncio.create_task(fun2(4))

    await fun1_corutine_task_wrapper  # switching point #1 to the task wrapper
    await fun2_corutine_task_wrapper  # switching point #2 to the task wrapper


print(time.strftime("%X"))

# Execute main coroutine, need to pass an async function with await to Task's!
asyncio.run(main())

print(time.strftime("%X"))
```

Asynchronous context managers:



## [python - How does asyncio actually work? - Stack Overflow](https://stackoverflow.com/questions/49005651/how-does-asyncio-actually-work/51116910#51116910)


## References

[^1]: [Асинхронный python без головной боли (часть 1) / Хабр](https://habr.com/ru/articles/667630/)
