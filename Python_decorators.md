---
created: 2024-11-16T20:21+03:00
tags:
  - blog
  - WEAPON
sr-due: 2025-07-22
sr-interval: 1
sr-ease: 130
---

# Python decorators

Decorators are a form of syntactic sugar to make your code more concise, basically it's functions which modify the functionality of other functions, usually do something before and after original function execution (without explicitly modifying the original function).

They make code easier to read while accomplishing clunky syntax. Wrappers are one type of decorator.

Simple example of function decoration:

```python
# Step 1. Create useful function
def hello_world():
    print("Hey Mom")

# Step 2. Create wrapper structure (function with function)
def outer_function(func):
    def inner_function():
        print(f"Starting {func.__name__}")
        func()
        print(f"Finishing {func.__name__}")

    return inner_function

# Step 3. Pass useful function and call returned function from wrapper
func = outer_function(hello_world)
func()
print(func.__name__)  # inner_function
```

![[img/Python_simple_function_wrap.excalidraw|Python function wrap diagram]]\
_Function wrap_

Simplify decoration with `@` decorator:

```python
def outer_function(func):
    def inner_function():
        print(f"Starting {func.__name__}")
        func()
        print(f"Finishing {func.__name__}")

    return inner_function

@outer_function  # <-- pass hello_world as argument
def hello_world():
    print("I am the function which use simple decorator")

# hello_world automatically called by outer_function's inner_function
hello_world()
print(hello_world.__name__)  # inner_function
```

Use `functools.wraps` to update a wrapper function to look like the wrapped function (which we pass):

```python
from functools import wraps

def outer_function(func):
    @wraps(func)  # Here is main change
    def inner_function():
        print(f"Starting {func.__name__}")
        func()
        print(f"Starting {func.__name__}")
    return inner_function

@outer_function
def hello_world():
    print("I'm the function which use updated simple decorator")

hello_world()
print(hello_world.__name__)  # hello_world
```
