---
date: 2024-11-16 22:53
tags:
  - inbox
  - Python
---

# Python function

Typical [[Python]] [[function]], function return values based on the given
arguments:

```python
def my_function(x: int, y: int):    # function declaration
    """                             # function definition start
    Return the sum of two numbers.  # function docstring
    """
    return x + y                    # function return value


print(my_function(1, 2))  # => 3
```

In python functions (like any other objects) are first-class objects (1st class
citizens), which means?
&#10;<br>
The language (Python) supports **passing** functions as arguments to other
functions, **returning** them as the values from other functions, and
**assigning** them to variables or storing them in data structures. This all
required for functional programming style ([[programming_paradigm]]).

How to change (or use) variable from global scope in some function, when are you
trying to assign value to it, python create new local variable with the same
name?
&#10;<br>
Use `global` statement.
```python
x = 0
print(x)
def f():
    global x # if you don't use this, parent x will be not changed
    x = 1
f()
print(x)
```
