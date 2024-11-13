---
date: 2024-11-11 19:59
tags:
  - inbox
  - Python
---

# Python type hints

What is [[Python]] type hint?
&#10;<br>
Optional "type hints" (also called "type annotations"), special syntax that
allow declaring the type of objects. By declaring types for your variables,
editors and tools can give you better support and analyze your code. Type hints
normally don't affect the runtime behavior of your code.

Python has rich typing support, we can check related
[Typing PEPs](https://peps.python.org/topic/typing/).

In this note I collect some of the most important features, recipes related to
type hints. Initial information is from [FastAPI python
types](https://fastapi.tiangolo.com/python-types/) intro.

## Basic examples

Initial code snippets, without any types:

```py
def get_full_name(first_name, last_name):
    full_name = first_name.title() + " " + last_name.title()
    return full_name


print(get_full_name("john", "doe"))  # John Doe
```

Rewritten with type hints:

```python
def get_full_name(first_name: str, last_name: str) -> str:
    full_name = first_name.title() + " " + last_name.title()
    return full_name


print(get_full_name("john", "doe"))  # John Doe
```

Type hints help us to analyze code better, in following example we get type hint
warning, '■ Operator "+" not supported for types "str" and "int"':

```python
def get_name_with_age(name: str, age: int) -> str:

    name_with_age = name + " is this old: " + age  # need to use str(age) here
    return name_with_age
```

## Python types and type hints

We can use following basic types:

- `int` - integer
- `float` - floating point number
- `str` - string
- `bool` - boolean

```python
def get_items(item_a: str, item_b: int, item_c: float, item_d: bool, item_e: bytes):
    return item_a, item_b, item_c, item_d, item_d, item_e

print(get_items("a", 1, 1.0, True, b"b"))
```

There are some data structures that can contain other values, like `dict`,
`list`, `set` and `tuple`. And the internal values can have their own type too
(`list(int)`). These types that have internal types are called =="generic"==
types. And it's possible to declare them, with optional internal types.

Python standard module `typing` provide runtime support for these type hints,
but newer Python version can make this obsolete.

As Python advances, **newer versions** come with improved support for these type
annotations and in many cases you won't even need to import and use the `typing`
module to declare the type annotations.

### List type

We can declare variable type as list of integers with following syntax:
&#10;<br>
`variable_name: list[int]`, in the brackets are type parameters. Usage in the
function:
```python
def process_items(items: list[str]):
    for item in items:
        print(item)
```
