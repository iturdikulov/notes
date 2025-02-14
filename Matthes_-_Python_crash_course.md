---
author: Eric Matthes
date: 2025-01-14T11:41+03:00
directory: ~/Computer/programming/Matthes-Python_Crash_Course
tags:
  - blog
  - Python
  - book_annotation
sr-due: 2024-01-29
sr-interval: 4
sr-ease: 190
---

# Python Crash Course

started from p.130

## Functions

Docstring
<br class="f">
Usually placed at top of function/program
```python
"""Describe what the function does"""
```
Generated documentation also uses this docstring.

Write a function called display_message() that prints one sentence telling
everyone what you are learning about in this chapter. Call the function, and
make sure the message displays correctly.

I decide to modify it a little (like second lesson)

```python
def display_message(subject):
    print(f"In this chapter I'm learning: {subject}")

display_message("Functions")
```

Mixing argument's order when you call function, can produce
==unexpected behavior==. Mixing keywords is fine.

Using default values can simplify your function calls and clarify the ways your
functions are typically used.

When you use default values, any parameter with a default value needs to be
listed ==after all the parameters== that don’t have default values. This allows
Python to continue interpreting positional arguments correctly.

1. Location of exception (file/function)
2. Exception type with additional details

This is another motivation for giving your variables and functions
==descriptive names==. If you do, Python’s error messages will be more useful to
you and anyone else who might use your code.

**8-3. T-Shirt**: Write a function called `make_shirt()` that accepts a size
and the text of a message that should be printed on the shirt.
The function should print a sentence summarizing the size of the shirt and the
message printed on it. Call the function once using positional arguments to make
a shirt. Call the function a second time using keyword arguments

Functions 137 8-4. Large Shirts: Modify the make_shirt() function so that
shirts are large by default with a message that reads I love Python. Make a
large shirt and a medium shirt with the default message, and a shirt of any size
with a different message. 8-5. Cities: Write a function called describe_city()
that accepts the name of a city and its country. The function should print a
simple sentence, such as Reykjavik is in Iceland. Give the parameter for the
country a default value. Call your function for three different cities, at least
one of which is not in the default country.
