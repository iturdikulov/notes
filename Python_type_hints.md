---
created: 2024-11-11T19:59+03:00
tags:
  - blog
  - Python
sr-due: 2025-07-17
sr-interval: 1
sr-ease: 158
---

# Python type hints

What is [[Python]] type hint?
<br class="f">
Optional "type hints" (also called "type annotations"), special syntax that
allow declaring the type of objects. By declaring types for your variables,
editors and tools can give you better support and analyze your code.

Do type hints affect the runtime behavior of your code?
<br class="f">
Type hints normally don't affect the runtime behavior of your code. Think of
type hints as similar to comments! <!--SR:!2025-02-22,9,250-->

Python has rich typing support, we can check related
[Typing PEPs](https://peps.python.org/topic/typing/).

In this note I collect some of the most important features, recipes related to
type hints. Initial information is from [FastAPI python
types](https://fastapi.tiangolo.com/python-types/) intro.

I also have commented code with type hints examples and explanations:
[python/type_hints.py](https://github.com/iturdikulov/python/blob/main/type_hints.py).

## Type hints features

- Editor provide additional support for type hints (autocomplete, analyze,
etc.).
- Type check for static analysis.
- For libraries, type hints can be used to generate documentation, define
requirements, convert data, validate data, document the API using OpenAPI.

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

### List and tuples type hints

We can declare variable type as list of integers with following syntax:
<br class="f">
`variable_name: list[str]`, in the brackets are type parameters. Usage in the
function:
```python
def process_items(items: list[str]):  # each list sequence item is a string
    for item in items:
        print(item)  # you can play with autocomplete here

def process_items(items_t: tuple[int, int, str], items_s: set[bytes]):
    """
    Process items with type hints.

    Args:
        items_t: tuple with 3 items, an int, another int, and a str.
        items_s: set of bytes.
    """
    return items_t, items_s
```

### Dict type hints

To define a `dict`, you pass ==2== type parameters, separated by commas (for key
and value types).

```python
def process_items(prices: dict[str, float]):  # key/value type parameter
    for item_name, item_price in prices.items():
        print(item_name)
        print(item_price)
```

### Union type hints

You can declare that a variable can be any of several types, for example, a
`int` or a `str`, `str` or `None`. In newer Python version we can use special
union syntax, types separated by ==a vertical bar (`|`)==.

```python
def process_item(item: int | str):  # item could be an int or a str
    print(item)

def say_hi(name: str | None = None):  # item could be possible None
  if name is not None:
      print(f"Hey {name}!")
  else:
      print("Hello World")
```

## Classes as types

You can also declare a class as the type of variable.

```python
class Person:
    def __init__(self, name: str):
        self.name = name


def get_person_name(one_person: Person):
    return one_person.name  # you can play with autocomplete here
```

## Metadata Annotations

We can put additional metadata in type hints using `Annotated` (Python 3.9+).
The first type parameter you pass to `Annotated` is the actual type. The rest,
is just metadata for other tools.

Python itself doesn't do anything with this `Annotated`. And for editors and
other tools, the type is still ==`str`==. But you can use this space in
`Annotated` to provide additional information for application for custom
behavior.
```python
from typing import Annotated


def say_hello(name: Annotated[str, "this is just metadata"]) -> str:
    return f"Hello {name}"
```

## Custom libraries

- [[Pydantic]]
- [attrs](https://www.attrs.org/en/stable/)

## External links

- [ ] [typing — Support for type hints — Python documentation](https://docs.python.org/3/library/typing.html)
- [ ] [mypy documentation](https://mypy.readthedocs.io/en/stable/index.html)
