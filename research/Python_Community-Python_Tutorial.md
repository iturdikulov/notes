---
external:
  - https://docs.python.org/3/tutorial/index.html
date: 2023
tags:
  - research
  - inbox
  - SR_programming
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 130
---

# The Python Tutorial

Core Python language advantages?
&#10;
Python powerful, [[high-level_programming_language|high level]],
[[OOP|object-oriented]]
[[programming_language|programming language]], very useful for rapid development
and connect various components of programming system.

My notes taken from the Python Tutorial. This tutorial is cover basic concepts
of Python, most noteworthy features and language elements.

## 1. Whetting Your Appetite

In this section described when Python can be usable. For example scripting,
simple GUI, etc.

Also described strong points of Python, such as rapid development (simplify
write/compile/test/re-compile cycle), interactivity, extensibility, splitting
into modules, simple integration, automatization, batteries-included, difference
between Python and other languages, such as C, C++, Java, etc.

Python is [[Interpreter|interpreted]] language, no compilation and linking is
necessary (but possible).

Python can be used as glue language, to connect components together.

Difference between [[C]], [[Java]], etc.:
- the high-level data types allow you to express complex operations in a single
statement;
- statement grouping is done by indentation instead of beginning and ending
brackets;
- no variable or argument declarations are necessary.

## 2. Using the Python Interpreter

- Start interactive interpreter mode: `python3` or better `ipython`. On my
  machines also avaiable `ipy` and `py` aliases.
- Exit: `C-d`, `C-z` or `quit()`
- Interpreter support [[GNU_Readline|readline]] library (which is cool)
- `python -c` - execute Python code, useful for one-liners scripts, if command
contains spaces, use quotes
- `python -m [arg]` - execute Python module, `pythom -m venv .venv`
- `python -i [script]` - start interactive interpreter mode (after executing
script for example), can be combined with `-c` and `-m`.

Python interpreter support argument parsing. You can use `import sys; sys.argv`
to get current script name and arguments (list of strings). Minimal length of
`sys.argv` is 1, it can be: empty, script name (`python -`, `-` is standard
input) or module name (`python -m -i lzma`).

In `sys.argv` also stored `-c` and `-m` (`sys.argv[0]`) and their arguments.
Options found after `-c` command or `-m` module are not consumed by the Python
interpreter’s option processing but left in `sys.argv` for the command or module
to handle.

In interactive prompt usually for next command used `>>>` sign, for continuation
lines used secondary prompt ==`...`==.

By default, Python 3 source files are treated as encoded in [[Unicode|UTF-8]],
but standard library only use [[ASCII]] characters for identifiers, this
convention that any portable code should follow.

If you need to set non UTF-8 encoding, use ==`# -*- coding: encoding -*-`==
comment as first line or after [[shebang]]:

```python
#!/usr/bin/env python3
# -*- coding: cp1251 -*-
print("Здесь можно использовать кодировку cp1251")
```

## 3. An Informal Introduction to Python

```python
# this is the first comment, which continue until EOL
spam = 1  # and this is the second comment
          # ... and now a third!
text = "# This is not a comment because it's inside quotes."
```

Testing Python as Calculator:


```python
print(2 + 2)          # 4 int
print(50 - 5*6)       # 20 int
print((50 - 5*6) / 4) # 5.0 float

print(8 / 5)  # division always returns a floating point number in Python!
              # but better use explicit float format - print(8.0 / 5.0) -> 1.6

# in C - division will truncate result toward zero if both operands are integers
# in Python you can use // operator for same result
print(17 // 4)  # floor division discards the fractional part, result is::4
print(17 % 4)  # the % operator returns the remainder of the division (5 * 3) + 2, 2 here is:: remainder
print(17 / 3)  # result is::5.666666666666667
print(5 ** 2)  # 5 squared, result is::25
print(2 ** 7)  # 2 to the power of 7, result is::128
```

What is floor division (or div), what are value of `(-11) // 4` ?
&#10;
Mathematical division that rounds ==down to **nearest**== integer. The floor
division operator is `//`.  `-11 // 4` is -3, `-11 // 3.5` is -4.0.
because that is `-2.75` and `-3.14` rounded downward. <!--SR:!2024-06-06,1,180-->

The `%` operator returns the ==remainder== of the division. <!--SR:!2024-06-13,9,240-->

[[operator|Operators]] with mixed type [[operand]]'s convert the integer operand
to ==floating point, int → float==.
```python
print(4 * 3.75 - 1) # 14.0
```
<!--SR:!2024-01-02,6,240-->

Use variables:

```python
width = 20
height = 5 * 9
print(width * height)
```

Use undefined variable, will raise `NameError`:

```python
a = n + 1  # NameError: name 'n' is not defined
```

In interactive mode, the last printed expression is assigned to the variable
==`_`==, and it should be read-only (please avoid using it as real variable). <!--SR:!2024-01-02,6,240-->

```python
tax = 12.5 / 100  # tax coefficient
price = 100.50    # price
price * tax       # 12.5625
price + _         # 113.0625
round(_, 2)       # 113.06
```

Python support various [[data_type|types]] of numbers such as: Int, Float,
Decimal, Fraction, [[complex_number|Complex]] number's (complex using `j` or `J`
suffix - `3+5j`).

In Python all these types are objects, so they have methods and attributes.

Python strings (manipulate text):

```python
print("double quote is nice")  # double quotes
print('spam eggs')  # single quotes
print('doesn\'t')   # use \' to escape the single quote...
print("doesn't")    # or just use double quotes instead
print('"Yes, " they said.')
print("\"Yes,\" they said.")
print('"Isn\'t", they said.')
```

In interactive mode [[escape_sequence|escape sequences]] are not recognized, so
use `print()` function if you want interpreter them.

You can disable escaping by using raw strings:

```python
print("C:\some\name")   # here \n interpreter as newline!
print(r"C:\some\name")  # here \n is part of path, note the r before the quote
```
NOTE: A raw string may not end in an odd number of \ characters, because it will
escape last quote.

> Unlike other languages, special characters such as `\n` have the
> ==same meaning== with both single (`'...'`) and double (`"..."`) quotes. The
> only difference between the two is that within single quotes you don’t need to
> escape `"` (but you have to escape `'`) and vice versa.

[[string_literal|Strings]] can be multiple lines, wrapped by triple double quotes
(`"""`) or triple single quotes (`'''`). You can use `\` character to prevent
automatically inserting new line in output, in functions or methods at the top
this usually using for documentation (docstrings).

```python
print("""\
Usage: thingy [OPTIONS]
     -h                        Display this usage message
     -H hostname               Hostname to connect to
""")
# Output, intial new line is not included:

# Usage: thingy [OPTIONS]
#      -h                        Display this usage message
#      -H hostname               Hostname to connect to
```

You can also concatenate strings with ==`+`== operator or concatenate by
breaking them into new lines or space, but you need to quote each string.

`*` operator used for repeating string (multiplication).

```python
print(3 * "un" + "ium")   # ::"unununium"
print("Py"                # "Python"
      "thon")
print("I" "n" r"O" f"m")  # ::"InOm"

# This is useful for long strings.
text = ("Put several strings within parentheses "
        "to have them joined together.")
print(text)  # Put several strings within parentheses to have them joined together.
print(text + "?")  # concatenation using +
print(f"{text}?")  # concatenation using f-string
print(text.__add__("?"))  # concatenation using __add__ method, bad practice
```

Strings can be indexed (subscripted). In python no separate character type, a
**character** is a string of ==size one==. <!--SR:!2024-06-16,11,240-->

Positive indexing = length of string - 1

```python
word = 'Python'

print(word[0])  # character in position 0 ::<- P
print(word[-0]) # character in position 0 ::<- P
print(word[5])  # character in position 5 ::<- n
print(word[6])  # IndexError: string index out of range
```

Simple example of random indexing checking game:
```python
import random
paragarph_of_poem = """\
Я помню чудное мгновенье:
Передо мной явилась ты,
Как мимолетное виденье,
Как гений чистой красоты.
""".split()
random.shuffle(paragarph_of_poem)
for word in paragarph_of_poem:
    random_index = random.randint(0, len(word) - 1)
    user_index = input(f"Enter the letter at index {random_index} of the word '{word}': ")
    if user_index != word[random_index]:
        print("Incorrect!")
        break

```

Negative indexing, -1 is last character

```python
print(word[-1])  # last character <- n
print(word[-2])  # second last character
print(word[-6]) # first character,

print(word[-7]) # IndexError: string index out of range
```

Strings can be sliced, to obtain substring

```python
sentence = "Hello, World!"

print(sentence[0:5])  # Hello
print(sentence[:5])   # Hello, offset 5 from start

print(sentence[5:6])  # ,
print(sentence[7:13]) # World!

print(sentence[-6:])  # World!, offest 6 from end
```

What you see if you use this slice `word[0:2]`, where word is "Python"
&#10;
```python
print("Python"[0:2])
```
Characters from position 0 (included) to 2 (excluded), `'Py'` <!--SR:!2024-06-12,8,220-->

What you see if you use this slice `word[2:5]`, where word is "Python"
&#10;
Characters from position 2 (included) to 5 (excluded). `'tho'` <!--SR:!2024-06-06,2,220-->

Note: `s[:i] + s[i:] == ==s==`, start is always included, and the end always
excluded.

```python
sentence = "Hello, World!"
print(sentence[:5] + sentence[5:] == sentence)  # True
```

Attempting to use invalid index in range slice handled (with/without exception)?
&#10;
Gracefully, without raising an exception.
<!--SR:!2023-12-31,4,240-->

```python
word = 'Python'
print(word[42:])
print(word[4:42])
```

To remember how slices work, you can use this table. Think indices are pointing
between characters. How do you think this table is constructed, header is "hello,",
row 1 and row 2 are?
&#10;
```
  +---+---+---+---+---+---+
  | H | e | l | l | o | , |
  +---+---+---+---+---+---+
 .0  .1  .2  .3  .4  .5   6  # positive indices, i-j chars between i and j
 -6. -5. -4. -3. -2. -1.     # negative indices
```
For non-negative indices, the length of a slice is the difference of the
indices, if both are within bounds. For example, the length of word[1:3] is 2.
<!--SR:!2023-12-28,1,200-->

Is it possible to use index outside of string bounds?
&#10;
No, it will raise `IndexError` exception. So it's good idea to check bounds
before using index. `"Test string"[11]`. <!--SR:!2024-06-15,10,240-->

Python strings are ==[[immutable_object|immutable]]==. You can't assign new
value to character in string.
```python
word = "Python"
word[0] = "J"    # TypeError: "str" object does not support item assignment
word[2:] = "py"  # TypeError: "str" object does not support item assignment
```
But you generate new string:

```python
word = "Python"
print("J" + word[1:])  # Jython
print(word[:2] + "py") # Pypy
```
<!--SR:!2023-12-31,4,240-->

String has various built-in methods -
[String Methods](https://docs.python.org/3/library/stdtypes.html#string-methods).

Built-in function `len()` returns length of string.

```python
s = "WhosYourDaddy ISeedeadpeople"
print(len(s))  # 28
s = "😀😀😀😀😀😀😀😀😀😀" "😀😀😀😀😀😀😀😀😀😀" "😀😀😀😀😀😀😀😀"
print(len(s))  # 28
```

Most versatile [[data_type|data type]] is [[list]]. In Python list can contain
elements of ==different== types, but usually used one type of elements.
```python
squares = [1, 4, 9, 16, 25]
print(squares)  # [1, 4, 9, 16, 25]
squares = ["1", 4, "9", 16, "25"]
print(squares)
```
<!--SR:!2023-12-31,4,240-->

Lists almost like [[string_literal|string]] (but mutable) and
[[Iterator|iterators]] can be indexed and sliced.

```python
squares = [1, 4, 9, 16, 25]
print(squares[0])  # indexing returns the item::1
print(squares[-1]) # last item::25
print(squares[-3:])  # slicing returns a new list::[9, 16, 25]
```

All slice operations over list return a ==new list (shallow copy)== containing
the requested elements.
```python
squares = [1, 4, 9, 16, 25]
print(squares[:])  # [1, 4, 9, 16, 25]
```
<!--SR:!2024-06-26,4,200-->

Lists also support operations like concatenation.

```python
squares = [9, 8, 7, 6, 5]
print(squares + [4, 3, 2, 1])  # [9, 8, 7, 6, 5, 4, 3, 2, 1]
```

List are ==mutable==, unlike strings.
<!--SR:!2023-12-31,4,240-->

```python
cubes = [1, 8, 27, 65, 125]  # something's wrong here, let's check 4th element
print(4 ** 3)  # 64, the cube of 4 is 64, not 65!
cubes[3] = 64  # replace the wrong value
print(cubes)  # [1, 8, 27, 64, 125] 😀

# Adding new element to the end of the list with ==.append()== method.
cubes.append(216)  # add the cube of 6
cubes.append(7 ** 3)  # and the cube of 7
print(cubes)
```

<!-- NEXT: need to practice more -->
Is it possible to change multiple elements in list at once?
&#10;
You can also do assignments to lists (inserting/replace), which can change their
size or clear them entirely.
```python
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
# replace some values
letters[2:5] = ['C', 'D', 'E']
print(letters)  # ['a', 'b', 'C', 'D', 'E', 'f', 'g']
# now remove them, shrink list
letters[2:5] = []
print(letters)  # ['a', 'b', 'f', 'g']
# clear the list by replacing all the elements with an empty list
letters[:] = []
print(letters)
```

List also support [built-in](https://docs.python.org/3/library/functions.html)
functions `len()` and `+`.

```python
print(len(["Hello", "World"]))  # 2
```

You can also use nested lists (list containing other lists, and other data
types).
```python
a = ['a', 'b', 'c']
n = [1, 2, 3]
x = [a, n]
print(x) # [['a', 'b', 'c'], [1, 2, 3]]
```

[[fibonacci_sequence|Fibonacci sequence example]]:

<!-- NEXT: need to review this -->
Can you write Fibonacci algorithm?
&#10;
Each number is the sum of the two preceding ones.
The sequence commonly starts from 0 and 1.
\
So for example we need to build Fibonacci sequence with 7 elements.
1. 0 → first initial number
2. 1 → second initial number
3. 1 → sum of 2. and 1.
4. 2 → sum of 3. and 2.
5. 3 → sum of 4. and 3.
6. 5 → sum of 5. and 4.
7. 8 → sum of 6. and 5.
```python
a, b = 0, 1  # multiple assignment, initialize variables
while a < 10:
    print(a)
    a, b = b, a+b # equal to a, b = (b, a+b)
    # <eval 2nd> = <eval 1st>
    #              eval left-to-right
    # 0, 1
    # 1, 1
    # 1, 2
    # 2, 3
    # 3, 5

# Using the temporary variable (temp) prevents a conflict where one
# variable gets updated using the new value of the other variable before the
# other variable gets its intended updated value.
a, b = 0, 1
while a < 10:
    print(a)
    temp = a + b
    a = b
    b = temp

a, b = 0, 1
while a < 10:
    print(a)
    a = b
    b = a + b
```

<!-- NEXT: review [A Python Guide to the Fibonacci Sequence – Real Python](https://realpython.com/fibonacci-sequence-python/). -->

Order of Evaluation in Python expression (operand)?
&#10;
In Python, the left operand evaluated before the right operand (if they have
same priority). <!--SR:!2024-06-01,2,180-->

Non-zero, zero, zero length or [[null_pointer|None]] values in Python (and C)
considered as ==[[bolean_data_type|boolean]]== (at least in if/else
statements). <!--SR:!2024-06-08,3,220-->

`-3**2` in Python is?
&#10;
Since `**` operator has higher precedence than -, `-3**2` will be interpreted as
`-(3**2)` and thus result is -9, not 9. To avoid this and get 9, you can use
`(-3)**2`. <!--SR:!2024-06-06,2,200-->

## 4. More Control Flow Tools

[[control_flow|Control flow]].

```python
if x < 0:
    ...
elif x == 0:
    ...
else:  # optional, sort of default
    print('More')
```

If you’re comparing the same value to several constants, or checking for
specific types or attributes, you may also find the
[`match`](https://docs.python.org/3/tutorial/controlflow.html#tut-match)
statement useful.

For statement in Python iterates over the sequence items, in the order that they
appear. And finish when sequence is exhausted.

```python
[print(x, end="😮") for x in list("Inomoz")]  # I😮n😮o😮m😮o😮z😮

for item in [1, 2, 3, 4, 5]:
    print(item)
else:
    print("Done!")  # if no break, this will be printed
```

> Code that modifies a collection while iterating over that same collection can
> be tricky to get right. Instead, it is usually more straight-forward to loop
> over a ==copy== of the collection or to create a new collection:
```python
# Create a sample collection
users = {'Hans': 'active', 'Éléonore': 'inactive', '景太郎': 'active'}

# Strategy:  Iterate over a copy
# this looks interesting, it's avoid dict size changing during iteration
# how effective it is?
for user, status in users.copy().items():
    if status == 'inactive':
        del users[user]
print(users)

# Strategy:  Create a new collection
active_users = {}
for user, status in users.items():
    if status == 'active':
        active_users[user] = status
print(active_users)
```

`range()` is sort of converting given length to known array (`0,1,...,X`). It
generates (math) ==arithmetic progression==. <!--SR:!2024-06-08,3,220-->

Last index of `range(10)`?::`9`, from 0 to 9
```python
print(list(range(10))) # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9],
                       # ten isn't included in the generated sequence.
                       # because in that case we generate 11 items

# Multiplication table 2x2 to 9*9
for i in range(2, 10):
  for j in range(2, 10):
    print(f"{i} * {j} = {i*j}")
```

You can select range start number (not index). Some like to generate numbers
from X to Y-1.

```python
print(list(range(5, 10)))  # [5, 6, 7, 8, 9]
print(list(range(5, 10))[4]) # 9
```

How to generate numbers form 1 to 100 using `range()`?
&#10;
```python
print(list(range(1, 101)))
```

And you can also specify [[increment_and_decrement_operators|increment]] for
step size. Which can be positive or negative. Positive step size will generate
sequence in increasing order and negative step size will generate sequence in
decreasing order (alternative to `reversed()` function).

```python
print(list(range(0, 10, 1)))  # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9], default
print(list(range(0, 10, 2)))  # [0, 2, 4, 6, 8], 0 + 2, 2 + 2, 4 + 2, ..., two here is next number after 0, then 2 + 2, 4 + 2, ...
print(list(range(0, 10, 3)))  # [0, 3, 6, 9]

# Negative step size will generate sequence in reverse order.
# can be used as alternative to `reversed()`
print(list(range(10, 0, -1)))  # [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
print(list(range(-10, -100, -30))) # [-10, -40, -70], -10 - 30
print(list(range(-10, 10, 30))) # [-10], first item only
print(list(range(-10, 40, 30))) # [-10, -20], -10 + 30
```

What you will see in interactive python session if you enter this:
`list(range(10, 0))`, `list(range(10, 0, -1))` and this `list(range(10, -1, -1))`.
&#10;
```python
list(range(10, 0))  # [] empty list, because start is greater than stop
list(range(10, 0, -1))  # [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
list(range(10, -1, -1))  # [10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
```
<!--SR:!2024-01-01,5,240-->


To iterate over the indices of a sequence, you can combine `range()` and `len()`
as follows:

```python
a = ['Mary', 'had', 'a', 'little', 'lamb']
for i in range(len(a)):
    print(i, a[i])
```

But better just use `enumerate()` function when you want to repeatedly access to
iterable items (more suited for this).
```python
a = ['Mary', 'had', 'a', 'little', 'lamb']
for i, item in enumerate(a):
    print(i, item)
```

If we don't iterate over range and just print it, we will get object reference.
Because range return [[Iterator|iterable]] object, to get list we need to use
==`list()`== function.
```python
print(range(10))  # range(0, 10)
```

What you will see with this code: `sum(range(4))`?
&#10;
0 + 1 + 2 + 3 = 6 <!--SR:!2024-06-12,9,240-->

> The `break` statement, like in C, `breaks out` of the innermost enclosing
> ==`for` or `while` loop==. <!--SR:!2024-07-05,13,238-->

<!-- NEXT: Review prime number detection algorithm, rewrite with `while` -->
In python `for` and `while` statements may have a `else` clause.
It is executed if loop ==wasn't `break`ed== (we iterated over all items in `for` or
`while` condition become `False`).
```python
for n in range(2, 10):
    # multiple loops
    for x in range(2, n):
        if n % x == 0:
            print(n, 'equals', x, '*', n//x)
            break
    else:
        # loop fell through without finding a factor
        print(n, 'is a prime number')
```
<!--SR:!2024-06-15,10,220-->

When `else` runs in `try-except` statement?
&#10;
In `try-except` statement, `else` runs if no exception was raised.
If you worked on something (try, for, while) and you aren't interrupt
(break/exception), we call else method as this is likely unusual? <!--SR:!2024-06-06,1,218-->

<!-- NEXT: Review even/odd number detection algorithm -->
The `continue` statement - continue loop with the ==next== iteration of the
loop (skip anything from current place to end of loop body).
```python
for num in range(2, 10):
    if num % 2 == 0:
        print("Found an even number", num)
        continue
    print("Found an odd number", num)
for num in range(2, 10):
    if num % 2 == 0:
        print("Found an even number", num)
    else:
        print("Found an odd number", num)
```
<!--SR:!2024-01-01,2,238-->

`pass` is a ==[[null_function|null operation]]== (name, this is statement, while
`None` is an object). When it is executed, nothing happens. It is useful as
a placeholder when a statement is required syntactically, but no code needs
to be executed.
```python
while True:
    pass  # Busy-wait for keyboard interrupt (Ctrl+C)
\
def f(arg): pass    # a function that does nothing (yet)
print(f(1))
\
class C: pass       # a class with no methods (yet)
c = C()
print(c)
\
try:
    import platform
except ImportError:
    pass  # this is bad pracitce DO NOT DO THIS IN REAL CODE
```

A `match` statement comparing expression with ==successive== patterns (case
block) until one of them matches (first pattern that matches get elected).
This is [[pattern_matching|pattern matching]] like in Rust or Haskell.
```python
def http_error(status):
    match status:
        case 200: # here we compare status with 200 literal
            return "OK"
        case 400:
            return "Bad request"
        case 404:
            return "Not found"
        case 418:
            return "I'm a teapot"
        case 500 | 503 | 504: # multiple literals in one pattern, `|` is "or"
            return "Not allowed"
        case _:  # _ is a wildcard pattern and never fails to match
            return "Something's wrong with the internet"
```
<!--SR:!2023-12-31,2,238-->

> Only the first pattern that matches gets executed, and it can also
> ==extract components== (sequence elements or object attributes) from the
> value into variables in case block.
<!--SR:!2023-12-31,2,238-->

Can I use objects (classes for example) in pattern matching, can I bind class
attributes to variables?
&#10;
Yes, you can use objects (in case blocks), place them with arguments (like
a constructor), capturing class attributes also supported.
```python
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def where_is(point):
    match point:
        case Point(x=0, y=0):
            print("Origin, coordinates are 0, 0")
        case Point(x=0, y=y_exctracted):
            print(f"Y coordinate: {y_exctracted}")
        case Point(x=x_exctracted, y=0):
            print(f"X coordinate: {x_exctracted}")
        case Point():
            print("Somewhere else")
        case _:
            print("Not a point")

for point in [Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1), None]:
    where_is(point)
```
<!--SR:!2024-06-10,5,238-->

Patterns can look like ==unpacking assignments== (like tuple), and can be used
to bind variables into case block:
```python
point = (0, 100)

match point:
    case (0, 0):
        print("Origin")
    case (0, y):  # combine literal and variable, y bind point second value
        print(f"Y={y}")
    case (x, 0):
        print(f"X={x}")
    case (x, y):  # conceptualy similar to unpacking assigment
        print(f"X={x}, Y={y}")
    case _:
        raise ValueError("Not a point")
```

Can I customize class arguments order with pattern matching?
&#10;
Yes, by setting the `__match_args__` special attribute in your classes. If
it's set to ("x", "y"), the following patterns are all equivalent (and all
bind the `y` attribute to the `var` variable):
```python
Point(1, var)
Point(1, y=var)
Point(x=1, y=var)
Point(y=var, x=1)
```

Which variable names can be assigned (bind variable to value) to in a match
statement?
&#10;
Only standalone names (like `var`) are assigned to by a match statement.
Dotted names (like `foo.bar`), attribute names (the `x=` and `y=`) or class
names (recognized by the "(...)" next to them like `Point` above) are never
assigned to. <!--SR:!2024-06-09,6,238-->

Can patterns in match case be nested?
&#10;
Yes, patterns can be arbitrarily nested. For example, if we have a short list
of Points, with `__match_args__` added, we could match it like this:
```python
class Point:
    __match_args__ = ("x", "y")
    def __init__(self, x, y):
        self.x = x
        self.y = y

for points in [
  [],
  [Point(0, 0)],
  [Point(1, 2)],
  [Point(0, 1), Point(0, 2)],
  [[Point(0, 1), Point(0, 2)], None]
]:
  match points:
      case []:
          print("No points")
      case [Point(0, 0)]:
          print("The origin")
      case [Point(x, y)]:
          print(f"Single point {x}, {y}")
      case [Point(0, y1), Point(0, y2)]:
          print(f"Two on the Y axis at {y1}, {y2}")
      case [[Point(0, y1), Point(0, y2)], None]:
          print("Inner list on the Y axis at {y1}, {y2}")
      case _:
          print("Something else")
```
<!--SR:!2024-01-01,2,238-->

Can I use `if` statements in pattern matching, why it can be useful?
&#10;
Yes, `if` clause in pattern known as a "guard". If the guard
is false, `match` goes on to try the next case block. Note that value
capture happens **before** the guard is evaluated:
```python
for point in [Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1)]:
  match point:
      case Point(x, y) if x == y:
          print(f"Y=X at {x}")
      case Point(x, y):
          print(f"Not on the diagonal")
```
<!--SR:!2024-06-09,4,238-->

Several other key features of this statement:

- Like unpacking assignments, tuple and list patterns have exactly the same
  meaning and actually match arbitrary sequences. An important exception is
  that they don't match ==iterators or strings==.
```python
def where_is(point):
    match point:
        case (0, 0):
            print("Origin")
        case (x, y):
            print(f"X={x}, Y={y}")
        case _:
            print("Somewhere else")

where_is((0, 0))              # Origin
where_is("00")                # Somewhere else
where_is(iter([0, 1]))        # Somewhere else
where_is(list(iter([0, 1])))  # X=0, Y=1
```
<!--SR:!2023-12-31,2,238-->

-   Sequence patterns support extended unpacking: `[x, y, *rest]` and `(x,
    y, *rest)` work similar to unpacking assignments. The name after `*`
    may also be `_`, so `(x, y, *_)` matches a sequence of at least two
    items without ==binding the remaining items==.
```python
data = [0, 1, 2, 3]

match data:
    case [a, b, *rest]:  # you can use other name, not only rest
        print(a, b, rest)

match data:
    case [a, b, *_]: # just igonore rest values
        print(a, b)
```
<!--SR:!2024-01-01,2,238-->

- Mapping patterns: `{"bandwidth": b, "latency": l}` captures the `"bandwidth"`
and `"latency"` values from a dictionary and save them into `b` and `l`
variables. Unlike sequence patterns, extra keys are ignored. An unpacking like
`**rest` is also supported. But ==`**_`== would be redundant, so it is not
allowed.
```python
ages = {"mike": 1, "kelly": 2, "ivan": 3, "petr": 4}
match ages:
    case {"mike": mike, "kelly": kelly, "ivan": ivan, **rest}:
        print(mike, kelly, ivan, rest)  # 1 2 3 {'petr': 4}
```

- Subpatterns may be captured using the ==`as`== keyword, sort of alternative
name:
```python
class Point:
    __match_args__ = ('x', 'y')
    def __init__(self, x, y):
        self.x = x
        self.y = y

def test_match(data):
    match data:
        # will capture the second element of the input as `p2`
        # (as long as the input is a sequence of two points)
        case (Point(x1, y1), Point(x2, y2) as p2):
            print(x1, y1, p2.x, p2.y)
        case _:
            print("Unknown")

test_match((Point(0, 1), Point(2, 3)))
test_match((Point(0, 1)))
```

- Most literals are compared by equality, however the singletons
 ==`True`, `False` and `None`== are compared by identity
```python
none_item = None
match none_item:
    case "":
        print("Empty string")
    case None:
        print("None")  # <- None
```
<!--SR:!2024-06-07,4,238-->

How to use named constants (`Enum`) in pattern matching?
&#10;
- Patterns may use named constants. These must be dotted names to prevent them
from being interpreted as capture variable:
```python
from enum import Enum
class Color(Enum):
    RED = 'red'
    GREEN = 'green'
    BLUE = 'blue'

color = Color(input("Enter your choice of 'red', 'blue' or 'green': "))

match color:
    case Color.RED:
        print("I see red!")
    case Color.GREEN:
        print("Grass is green")
    case Color.BLUE:
        print("I'm feeling the blues :(")
```
<!--SR:!2023-12-31,1,218-->

<!-- NEXT: Here more info about pattern matching -->
[PEP 636 – Structural Pattern Matching: Tutorial](https://peps.python.org/pep-0636/).

<!-- NEXT: review this fibonaci algorithm -->
We can create a function that writes the Fibonacci series to an
arbitrary boundary, can you explain how?
&#10;
```python
def fib(n):    # write Fibonacci series up to n
    """Print a Fibonacci series up to n."""
    a, b = 0, 1
    while a < n:
        print(a, end=' ')
        a, b = b, a+b
    print()

# Now call the function we just defined:
fib(2000) # 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597
```
<!--SR:!2023-12-31,1,218-->

How to define a function in Python?
&#10;
The keyword `def` introduces a function definition.
Example of function definition:
```python
def hello():
    print("Hello, World!")
```
<!--SR:!2024-06-14,9,238-->

The first statement of the function body can optionally be a string literal
(usually in triple quotes); this string literal is the function's documentation
string, or ==`docstring`==.

Why include docstring is recommended to make a habit?
&#10;
There some tools, which produce online or printed documentation, or to let
the user interactively browse through code. Also, many IDEs and editors
support showing documentation based on this docstrings.
<!--SR:!2024-01-01,2,238-->

Order of variable references looking (tables)?
&#10;
- Local symbol table
- Local symbol table of enclosing functions (parents)
- Global symbol table
- Built-in names table
These priorities also reason why `global` and `nonlocal` statements are needed.

How to change (or use) variable from global scope in some function, when are you
trying to assign value to it, python create new local variable with the same
name?
&#10;
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

> The `nonlocal` statement causes the listed identifiers to refer to
> previously bound variables in the nearest ==enclosing== scope excluding
> globals.

Closures in nested functions: we can use the `nonlocal` keyword to work with
variables in nested scope which shouldn't be declared in the inner functions.
```python
def create_avg():
    total = 0
    count = 0
    def avg(n):  # Closure
        nonlocal total, count  # closure use variables defined in outer scope
        total += n
        count += 1
        return total/count
    return avg
avg = create_avg()
avg(3)  # => 3.0
avg(5)  # (3 + 5) / 2 => 8 / 2  => 4.0
avg(7)  # (8 + 7) / 3 => 15 / 3 => 5.0
```

When a function calls another function, or calls itself recursively, a new local
==symbol table== is created for that call (related to arguments/variables).

<!-- NEXT: need to review -->
The actual parameters (arguments) to a function call are introduced in the local
symbol table of the called function when it is called; thus, arguments are
passed using ==call by value==, true for immutable objects (where the value is
always an object reference, not the value of the object). Actually, *call by
object reference* would be a better description, since if a mutable object is
passed, the caller will see any changes the callee makes to it (items inserted
into a list).

A function definition associates the function name with the function object in
the current ==symbol table==.
```python
a = 0
print(locals())
def hello():
    a = 1
    print("Hello, World!")
    print(locals())
print(locals())
f = hello
f()
```

Is there procedures in Python?
&#10;
In Python there no procedures, only functions. Functions without a `return`
statement do return a value. This value is called `None` (it's a built-in name).

What is object method in Python?
&#10;
A method is a function that 'belongs' to an object and is named
`obj.methodname`, where `obj` is some object (this may be an expression), and
`methodname` is the name of a method that is defined by the object's **type**.

You can define default values for arguments in a function, when it can be
required?
&#10;
This allows to omit some arguments when calling the function, sort of default
settings.
```python
def ask_ok(prompt, retries=4, reminder="Please try again, I don't understand you!"):
    while True:
        reply = input(prompt)
        if reply in {"y", "ye", "yes"}:
            return True
        if reply in {"n", "no", "nop", "nope"}:
            return False
        retries = retries - 1
        if retries < 0:
            raise ValueError("invalid user response")
        print(reminder)
ask_ok("Do you really want to quit?\n")
ask_ok("OK to overwrite the file?\n", 2)  # 2 retries
ask_ok("OK to overwrite the file?\n", 2, "Come on, only yes or no!")  # 2 retries, custom reminder
```
`in` keyword tests that a sequence ==contains a certain value==.

What this code will print (question about default value behavior and
evaluation)?
```python
# Example 1
i = 5

def f(arg=i):
    print(arg)

i = 6
f()

# Example 2
def f2(a, L=[]):
    L.append(a)
    return L

print(f2(1))
print(f2(2))
print(f2(3))

# Example 3
def f3(a, L=None):
    if L is None:  # You can pass not None value to L
        L = []
    L.append(a)
    return L
print(f3(1))
print(f3(2))
print(f3(3))
```
&#10;
The default values are evaluated at the point of function definition in
the *defining* scope, so that code will print `5`, so order of evaluation is
important, and default value evaluated only once if it's not mutable object
(list, dictionary, or instances of most classes). Last example if you want
default to be not shared between subsequent calls.

Functions can also be called using ==keyword== arguments, `kwarg=value`.
```python
def parrot(voltage, state='a stiff', action='voom', type='Norwegian Blue'):
    print("-- This parrot wouldn't", action, end=' ')
    print("if you put", voltage, "volts through it.")
    print("-- Lovely plumage, the", type)
    print("-- It's", state, "!")

# Valid function calls:
parrot(1000)                                          # 1 positional argument
parrot(voltage=1000)                                  # 1 keyword argument
parrot(voltage=1000000, action="VOOOOOM")             # 2 keyword arguments, order 1
parrot(action="VOOOOOM", voltage=1000000)             # 2 keyword arguments, order 2
parrot("a million", "bereft of life", "jump")         # 3 positional arguments
parrot("a thousand", state="pushing up the daisies")  # 1 positional, 1 keyword

# Invalid function calls:
parrot()                     # required argument missing
parrot(voltage=5.0, "dead")  # non-keyword argument after a keyword argument
parrot(110, voltage=220)     # duplicate value for the same argument
parrot(actor="John Cleese")  # unknown keyword argument
```

When a final formal parameter of the form `**name` is present, it
receives a dictionary (see `typesmapping`) containing all keyword
arguments except for those corresponding to a formal parameter.

This may be combined with a formal parameter of the form `*name` (described in
the next subsection) which receives a `tuple <tut-tuples>` containing
the positional arguments beyond the formal parameter list. (`*name` must
occur before `**name`.) For example, if we define a function like this:

Length of tuple with positional arguments and dictionary with keyword arguments?
Check `cheeseshop` function call.
```python
def cheeseshop(kind, *arguments, **keywords):
    """
    *arguments, formal parmater which recieves a tuple with positional arguments
    beyond the formal parameter list.
    --
    **keywords, final formal parameter, receives a dictionary.
    """
    print("Arguments length: ", len(arguments))
    print("Keywords length: ", len(keywords))
    print("-- Do you have any", kind, "?")
    print("-- I'm sorry, we're all out of", kind)
    # NOTE: keyword arguments are printed how they were provided in the function
    # call.
    for arg in arguments:
        print(arg)
    print("-" * 40)
    for kw in keywords:
        print(kw, ":", keywords[kw])

cheeseshop("Limburger", "It's very runny, sir.",
           "It's really very, VERY runny, sir.",
           shopkeeper="Michael Palin",
           client="John Cleese",
           sketch="Cheese Shop Sketch")
```
&#10;
Two positional arguments and three keyword arguments.

Positional-only, positional-or-keyword, and keyword-only parameters can be
combined in a single function definition, how to do this?
&#10;
A function definition may look like this:
```python
# If `/` and `*` are not present, arguments may be passed
# by position (`f(1, 2, 3, 4, 5)) or by keyword (`f(pos1=1, pos2=2, pos_or_kwd=3, kwd1=4, kwd2=5)`).
#
# `/` and `*` are optional. If used, these symbols indicate the kind of
# parameter by how the arguments may be passed to the function:
# positional-only, positional-or-keyword, and keyword-only.
#
# first [] block is positional-only, second [] block is keyword-only
# in the middle is positional-or-keyword
def f([pos1, pos2], /, pos_or_kwd, *, [kwd1, kwd2]):
      -----------    ----------     ----------
        |             |                  |
        |        Positional or keyword   |
        |                                - Keyword only
         -- Positional only

def standard_arg(arg):  # position or keyword
    print(arg)
standard_arg(2)
standard_arg(arg=2)

def pos_only_arg(arg, /):  # only positional parameters
    print(arg)
pos_only_arg(1)
pos_only_arg(arg=1)  # TypeError: pos_only_arg() got some positional-only arguments passed as keyword arguments: 'arg'

def kwd_only_arg(*, arg):  # only keyword arguments
    print(arg)
kwd_only_arg(arg=3)
kwd_only_arg(3)  # TypeError: kwd_only_arg() takes 0 positional arguments but 1 was given


def combined_example(pos_only, /, standard, *, kwd_only): # all three calling conventions
    print(pos_only, standard, kwd_only)
combined_example(1, 2, kwd_only=3)
combined_example(1, standard=2, kwd_only=3)
combined_example(1, 2, 3)  # TypeError: combined_example() takes 2 positional arguments but 3 were given
combined_example(pos_only=1, standard=2, kwd_only=3)  # TypeError: combined_example() got some positional-only arguments passed as keyword arguments: 'pos_only'
```

Will this code work, if not why and how to fix it?
```python
def foo(name, **kwds):
    return 'name' in kwds
foo(1, **{'name': 2})
```
&#10;
Since the `name` parameter is a positional and keyword argument, it will always
bind to the first parameter (name). So, the code will raise a `TypeError`:
foo() got multiple values for argument 'name'.
You can fix this by using `/` (positional-only arguments) to allow `name` as a
positional argument only, the names of positional-only parameters can be used in
`**kwds` without ambiguity.
```python
def foo(name, /, **kwds):
    return 'name' in kwds
foo(1, **{'name': 2})  # True
```

When positional-only arguments are useful in function definition?
&#10;
Use positional-only if you want the **name** of the parameters to not be
available to the user. This is useful when parameter names have no real meaning,
if you want to enforce the order of the arguments when the function is called or
if you need to take some positional parameters and arbitrary keywords.

When keyword-only arguments in function definition are useful?
&#10;
Use keyword-only when names have meaning and the function definition is more
understandable by being explicit with names or you want to prevent users relying
on the position of the argument being passed.

For an API, use positional-only to prevent ==breaking API changes== if the
parameter's name is modified in the future. But don't forget about too many
positional-only parameters, it can make the function hard to understand.

You can specify that a function can be called with an **arbitrary** number of
arguments. These arguments will be wrapped up in a ==tuple==.
Before the variable number of arguments, zero or more normal arguments may
occur.
```python
def write_multiple_items(file, separator, *args):
    file.write(separator.join(args))
```

Normally, these *variadic* arguments will be last in the list of formal
parameters, because they scoop up all remaining input arguments that are
passed to the function. Any formal parameters which occur after the
`*args` parameter are 'keyword-only' arguments, meaning that they can
only be used as keywords rather than positional arguments. :

def concat(*args, sep="/"):
    ...     return sep.join(args)
    ...
concat("earth", "mars", "venus")
    'earth/mars/venus'
concat("earth", "mars", "venus", sep=".")
    'earth.mars.venus'

The reverse situation occurs when the arguments are already in a list or
tuple but need to be unpacked for a function call requiring separate
positional arguments. For instance, the built-in `range` function
expects separate *start* and *stop* arguments. If they are not available
separately, write the function call with the `*`-operator to unpack the
arguments out of a list or tuple:

Sometimes you need to unpack data from list or tuple for a function call,
which require separate positional arguments, for example `range` function
expects `start` and `stop` arguments separately. You can write the function
call with the ==`*`-operator, `list(range(*args))` to unpack the arguments out
of a list or tuple.

Dictionaries can deliver keyword arguments with the ==`**`==-operator.

```python
def parrot(voltage, state='a stiff', action='voom'):
    print("-- This parrot wouldn't", action, end=' ')
    print("if you put", voltage, "volts through it.", end=' ')
    print("E's", state, "!")

# Default method to provide keyword arguments
parrot(voltage="four million", state="bleedin' demised", action="VOOM")

# Pass kwargs with all keyword argmunts
d = {"voltage": "four million", "state": "bleedin' demised", "action": "VOOM"}
parrot(**d)
```

Small anonymous functions can be created with the ==`lambda`== keyword.
They can be used wherever function objects are required. Syntactically
restricted to a single expression, semantically they are just syntactic sugar
for a normal function definition.

Lambda function format?
&#10;
`lambda arguments : expression`
```python
x = lambda a : a + 10
print(x(5))

x = lambda a, b : a * b
print(x(5, 6))

x = lambda a, b, c : a + b + c
print(x(5, 6, 2))
```

Like nested function definitions, lambda functions can reference variables
from the ==containing scope==.
```python
def make_incrementor(n):
    # Use a lambda expression to return a function.
    return lambda x: x + n

f = make_incrementor(42)
f(0) # 42
f(1) # 43
```

How to use function/lambda function with list and sort method?
&#10;
```python
# Lambda function as an argument, to sort method
pairs = [(1, 'one'), (2, 'two'), (3, 'three'), (4, 'four')]
pairs.sort(key=lambda pair: pair[1])
pairs # [(4, 'four'), (1, 'one'), (3, 'three'), (2, 'two')]

def sort_pairs_func(pair):
    return pair[1]
pairs = [(1, 'one'), (2, 'two'), (3, 'three'), (4, 'four')]
pairs.sort(key=sort_pairs_func)
pairs # [(4, 'four'), (1, 'one'), (3, 'three'), (2, 'two')]
```

Documentation Strings used to document
==functions, methods, classes, and modules==.

Docstring code style, at least basic information?
&#10;
The first line should always be a short, concise summary of the object's
purpose. For brevity, it should not explicitly state the object's name or type,
since these are available by other means (except if the name happens to be a
verb describing a function's operation). This line should begin with a capital
letter and end with a period.
\
If there are more lines in the documentation string, the second line should be
blank, visually separating the summary from the rest of the description. The
following lines should be one or more paragraphs describing the object's calling
conventions, its side effects, etc.
\
The Python parser does not strip indentation from multi-line string literals in
Python, so tools that process documentation have to strip indentation if
desired. This is done using the following convention. The first **non-blank line
after the first line** (third) of the string determines the amount of
indentation for the entire documentation string. (We can't use the first line
since it is generally adjacent to the string's opening quotes so its indentation
is not apparent in the string literal.) Whitespace "equivalent" to this
indentation is then stripped from the start of all lines of the string. Lines
that are indented less should not occur, but if they occur all their leading
whitespace should be stripped. Equivalence of whitespace should be tested after
expansion of tabs (to 8 spaces, normally).
\
Here is an example of a multi-line docstring:
\
```python
def my_function():
    """Do nothing, but document it.

    No, really, it doesn't do anything.
    """
    pass

print(my_function.__doc__)
Do nothing, but document it.

No, really, it doesn't do anything.
```

`Function annotations <function>` are completely **optional metadata**
information about the ==types== used by user-defined functions
(see [PEP 3107 - Function Annotations](https://peps.python.org/pep-3107/) and
[PEP 484 - Type hints](https://peps.python.org/pep-0484/)).
<!-- NEXT: need review PEP's -->

Function annotation are stored in the ==`__annotations__`== attribute of the
function as a dictionary and have no effect on any other part of the function.

Parameter annotations are defined by ==a colon== after the parameter name,
followed by an expression evaluating to the value of the annotation.

Return annotations are defined by a literal ==`->`==, followed by an expression.

The following example has a required argument, an optional argument, and the
return value annotated:

```python
def f(ham: str, eggs: str = 'eggs') -> str:
    print("Annotations:", f.__annotations__)
    print("Arguments:", ham, eggs)
    return ham + ' and ' + eggs

f('spam')
"""
Annotations: {'ham': <class 'str'>, 'return': <class 'str'>, 'eggs': <class 'str'>}
Arguments: spam eggs
'spam and eggs'
"""
```

### Python Coding Style

Most languages can be written (or more concise, *formatted*) in different
styles; some are more readable than others. Making it easy for others to read
your code is always a good idea, and adopting a nice coding style helps
tremendously for that.

<!-- NEXT: read PEP8 -->
[PEP 8 – Style Guide for Python Code](https://peps.python.org/pep-0008/)
core information:

Use ==4-space== indentation, and no tabs (compromise between small and large
indentation).

Wrap lines so that they don't exceed ==79 characters==. Useful for small
displays and also prevent you writing complex code.

Use ==blank lines== to separate functions and classes, and larger blocks of code
inside functions, sort of grouping.

When possible, put comments on a line ==of their own (separate line)==.

How to document code in Python?
&#10;
Use docstrings, which follow docstrings rules.

Use spaces around operators and after commas, but not directly inside
==bracketing constructs: `a = f(1, 2) + g(3, 4)`==.

Name your classes and functions ==consistently==; the convention is to use
`UpperCamelCase` for classes and `lowercase_with_underscores` for functions and
methods. Always use `self` as the name for the first method argument.

Don't use fancy encodings if your code is meant to be used in international
environments. Python's default, ==UTF-8==, or even plain ASCII (subset) work
best in any case.

Likewise, don't use ==non-ASCII== characters in identifiers if there is only the
slightest chance people speaking a different language will read or maintain the
code.

## 5. Data Structures

Add an item to the end of the list.
&#10;
`list.append(x)`. Equivalent to `a[len(a):] = [x]`.
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
fruits.append('grape')
print(fruits)  # ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana', 'grape']
```

Extend the list by appending all the items from the iterable.
&#10;
`list.extend(iterable)`. Equivalent to `a[len(a):] = iterable`.

Insert an item into list at a given position.
&#10;
`list.insert(i, x)`. The first argument is the index of the element before which
to insert. so `a.insert(0, x)` inserts at the front of the list, and
`a.insert(len(a), x)` is equivalent to `a.append(x)`.

List method to remove the first item from the list whose value is equal to
**x**. What if there is no such item?
&#10;
`list.remove(x)`. It raises a `ValueError` if there is no such item.

Remove the item at the given position in the list, and return it.
What if the list is empty or the index is outside the list range.
&#10;
list.pop([i])
If no index is specified, `a.pop()` removes and returns the last item in the
list. It raises an `IndexError` if the list is empty or the index is
outside the list range.
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
print(fruits.pop())  # 'banana'
print(fruits)  # ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple']
```

Remove all items from the list.
&#10;
`list.clear()`. Equivalent to `del a[:]`.

Return zero-based index in the list of the first item whose value is equal to
**x**. Can we limit somehow the search to a particular subsequence of the list?
&#10;
`list.index(x[, start[, end]])`
Raises a `ValueError` if there is no such item.
The optional arguments *start* and *end* are interpreted as in the slice
notation and are used to limit the search to a particular subsequence of
the list. The returned index is computed relative to the beginning of
the full sequence rather than the *start* argument.
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
print(fruits.index('banana'))     # 3
print(fruits.index('banana', 4))  # Find next banana starting at position 4
```

Return the number of times **x** appears in the list.
&#10;
`list.count(x)`
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
print(fruits.count('apple'))  # 2
print(fruits.count('tangerine'))  # 0
```

Sort the items of the list in place
&#10;
`list.sort(*, key=None, reverse=False)`
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
fruits.sort()
print(fruits)  # ['apple', 'apple', 'banana', 'banana', 'kiwi', 'orange', 'pear']
```

Reverse the elements of the list in place.
&#10;
list.reverse()
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
fruits.reverse()
print(fruits)  # ['banana', 'apple', 'kiwi', 'banana', 'pear', 'apple', 'orange']
```

Return a shallow copy of the list.
&#10;
`list.copy()`. Equivalent to `a[:]`.

You might have noticed that list methods like `insert`, `remove` or `sort` that
only modify the list have no return value printed -- they return the ==default
`None`==. This is a design principle for all mutable data structures in Python.
Other languages may return the mutated object, which allows method chaining,
such as `d->insert("a")->remove("b")->sort();`.

When data in list can't be sorted?
&#10;
Not all data can be sorted or compared. For instance, `[None, 'hello', 10]`
doesn't sort because integers can't be compared to strings and `None` can't be
compared to other types. Also, there are some types that don't have a defined
ordering relation. For example, `3+4j < 5+7j` isn't a valid comparison.
```python
list = [None, 'hello', 10]
list.sort()  # Raises a TypeError, '<' not supported between instances of 'str' and 'int'
```

Order of adding/retrieving items from the stack?
How stack can be implemented using list?
&#10;
Here used LIFO (last-in, first-out) data manipulation. For example, you have
list of cards, if you add a card to the top of the stack, it will be the first
card you can retrieve.
\
Using python we can use `list.append` to add an item to the top of the stack,
and `list.pop` without an explicit index to retrieve an item from the top of the
stack.
```python
stack = [3, 4, 5]
stack.append(6)
stack.append(7)
print(stack)  # [3, 4, 5, 6, 7]
for _ in range(3):
    print(stack.pop())
print(stack)  # [3, 4]
```

<!-- NEXT: how implement effective queue using simple data structures -->
<!-- A dequeobject is composed of a doubly-linked list of block nodes. -->
Order of adding/retrieving items from the queue?
How to better implement a queue and which data structure to use?
&#10;
Here used FIFO ("first-in, first-out") data manipulation.
Who come first, will be served first. For example, you have a list of people
waiting in line, the first person added to the list will be the first person
retrieved to be served.
\
It is also possible to use a list as a queue, where the first element added is
the first element retrieved ; however, lists are not efficient for this purpose.
While appends and pops from the end of list are fast, doing inserts or pops from
the beginning of a list is slow (because all of the other elements have to be
shifted by one, $\mathcal{O}(n)$).
\
To implement a queue, use `collections.deque` which was designed to have
fast appends and pops from both ends. For example:
```python
from collections import deque
queue = deque(["Eric", "John", "Michael"])
queue.append("Terry")  # Terry arrives
queue.append("Graham") # Graham arrives
print(queue.popleft()) # 'Eric', The first to arrive now leaves
print(queue.popleft()) # 'John', The second to arrive now leaves
print(queue)           # `deque(['Michael', 'Terry', 'Graham'])` Remaining queue in order of arrival
```

List comprehensions provide a concise way to create ==lists==. We create them
with some operation applied to each member of another sequence or iterable, or
to create a subsequence of those elements that satisfy a certain condition.

What side effect is here, how to avoid it?
```python
squares = []
for x in range(10):
    squares.append(x**2)

print(squares) # [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
```
&#10;
That this creates (or overwrites) a variable named `x` that still
exists after the loop completes. We can calculate the list of squares
without any side effects using:
```python
# Using map and lambda functions
squares = list(map(lambda x: x**2, range(10)))

# Or equivalently with list comprehension
# which is more concise and readable.
squares = [x**2 for x in range(10)]
```

How I can use multiple list comprehensions in one expression?
&#10;
A list comprehension consists of brackets containing an expression
followed by a `for` clause, then zero or more `for` or `if` clauses.
The result will be a new list resulting from evaluating the expression
in the context of the `!for` and `!if` clauses which follow it. For
example, this listcomp combines the elements of two lists if they are
not equal:
```python
# NOTE: the order of the `for` and `if` statements is the same in both
# these snippets.

# [(1, 3), (1, 4), (2, 3), (2, 1), (2, 4), (3, 1), (3, 4)]
[(x, y) for x in [1,2,3] for y in [3,1,4] if x != y]

# If the expression is a tuple (e.g. the `(x, y)` in the previous
# example), it must be parenthesized.

# [(1, 3), (1, 4), (2, 3), (2, 1), (2, 4), (3, 1), (3, 4)]
combs = []
for x in [1,2,3]:
    for y in [3,1,4]:
        if x != y:
            combs.append((x, y))
```

Examples how list comprehensions can be used?
&#10;
```python
vec = [-4, -2, 0, 2, 4]

# create a new list with the values doubled
[x*2 for x in vec]  # [-8, -4, 0, 4, 8]

# filter the list to exclude negative numbers
[x for x in vec if x >= 0]  # [0, 2, 4]

# apply a function to all the elements
[abs(x) for x in vec]  # [4, 2, 0, 2, 4]

# call a method on each element
freshfruit = ['  banana', '  loganberry ', 'passion fruit  ']
[weapon.strip() for weapon in freshfruit]  # ['banana', 'loganberry', 'passion fruit']

# create a list of 2-tuples like (number, square)
[(x, x**2) for x in range(6)] # [(0, 0), (1, 1), (2, 4), (3, 9), (4, 16), (5, 25)]
# the tuple must be parenthesized, otherwise an error is raised
[x, x**2 for x in range(6)]
  # File "<stdin>", line 1
  #   [x, x**2 for x in range(6)]
  #    ^^^^^^^
  # SyntaxError: did you forget parentheses around the comprehension target?

# flatten a list using a listcomp with two 'for'
vec = [[1,2,3], [4,5,6], [7,8,9]]
[num for elem in vec for num in elem]  # [1, 2, 3, 4, 5, 6, 7, 8, 9]
```

Can I use complex expressions and nested functions in list comprehensions?
&#10;
Yes.
The initial expression in a list comprehension can be any arbitrary expression,
including another list comprehension.
For example:
```python
from math import pi
[str(round(pi, i)) for i in range(1, 6)]  # ['3.1', '3.14', '3.142', '3.1416', '3.14159']

# the following list comprehension will transpose rows and columns:
matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
]

[[row[i] for row in matrix] for i in range(4)]  # [[1, 5, 9], [2, 6, 10], [3, 7, 11], [4, 8, 12]]

# equivalent to previous example
transposed = []
for i in range(4):
    transposed.append([row[i] for row in matrix])
print(transposed)

# another equivalent, without using list comprehension
transposed = []
for i in range(4):
    # the following 3 lines implement the nested listcomp
    transposed_row = []
    for row in matrix:
        transposed_row.append(row[i])
    transposed.append(transposed_row)

# In the real world, you should prefer built-in functions to complex flow
# statements. The `zip` function would do a great job for this use case:
list(zip(*matrix))
```

To remove items from list by index you can use ==`del`== statement, unlike
`.pop()` method it doesn't return value. It can also be used to remove slices
from a list or clear the entire list (like assignment of an empty list to the
slice)
```python
a = [-1, 1, 66.25, 333, 333, 1234.5]
del a[0] # [1, 66.25, 333, 333, 1234.5]
del a[2:4] # delete items from 2nd index to 4th index
del a[:] # delete all items

# Delete all items except the last one
a = [-1, 1, 66.25, 333, 333, 1234.5]
del a[:len(a)-1]
```

How to delete entire variables with `del`?
&#10;
`del a`
Referencing the name `a` hereafter is an error (at least until another value is
assigned to it). We'll find other uses for `del` later.

What type of this data structures?
```python
t = 12345, 54321, 'hello!'
u = t, (1, 2, 3, 4, 5)
 ```
&#10;
A tuple, which consists of a number of values separated by commas.
Tuples may be input with or without surrounding parentheses, although often
parentheses are necessary anyway (if the tuple is part of a larger expression).
```python
t  # (12345, 54321, 'hello!')
u  # ((12345, 54321, 'hello!'), (1, 2, 3, 4, 5))

Can you change arbitrary item of the tuple with index assignment?
&#10;
No, tuples are immutable
```python
t[0] = 88888
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: 'tuple' object does not support item assignment
```
But they can contain mutable objects, which can be changed
```python
v = ([1, 2, 3], [3, 2, 1])  # ([1, 2, 3], [3, 2, 1])
v[0][0] = 4  # ([4, 2, 3], [3, 2, 1])
```

To construct empty tuple need to use ==pair of parentheses, `empty = ()`==.

How to construct a tuple with one item?
&#10;
A tuple with one item is constructed by following a value with a comma (it is
not sufficient to enclose a single value in parentheses). Ugly, but effective.
```python
singleton = 'hello',     # <-- note trailing comma
singleton2 = ('hello',)  # <-- another way to create a singleton
('hello',) == singleton == singleton2  # True
```

How to use tuple packing?
&#10;
You need to construct a tuple with multiple values separated by commas.
```python
t = 12345, 54321, 'hello!'
```

How to use tuple unpacking (sequence unpacking)?
&#10;
You need to assign a tuple to a variable(s), the number of variables should be
equal to the number of values in the tuple.
Note that multiple assignment is really just a combination of tuple packing and
sequence unpacking.
```python
t = 12345, 54321, 'hello!'
x, y, z = t
```

A [[set]] is an unordered collection with no ==duplicate elements==.

How to create empty and non-empty sets?
&#10;
You need to use `set()` to create an empty set (`{}` used to create empty
dictionary), and curly braces `{1}, {1, 2}` to create a non-empty set.
```python
# Show that duplicates have been removed
basket = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}
print(baskeа)  # {'orange', 'banana', 'pear', 'apple'}

# Fast membership testing
'orange'    in basket  # True
'crabgrass' in basket  # False
```

Set operations on unique letters from two words, lets we have two words,
`abracadabra` and `alacazam`, what results you get for `-`, `|`, `&`, `^`
operations?
&#10;
```python
# You can get different results, a set is an abstract data type that can store
# certain values, without any particular order
a = set('abracadabra')  # {'a', 'r', 'b', 'c', 'd'}, unique letters
b = set('alacazam')     # {'a', 'l', 'c', 'z', 'm'}, unique letters
print(a)
print(b)

print(a - b)
# {'b', 'r', 'd'}, letters in a but not in b (only in a), logic difference

print(a | b)
# {'a', 'c', 'r', 'd', 'b', 'm', 'z', 'l'}, letters in a or b or both, logical
# union

print(a & b)
# {'a', 'c'}, letters in both a and b (only duplicates), logical intersection

print(a ^ b)
# {'r', 'd', 'b', 'm', 'z', 'l'}, letters in a or b but not both, logical
# "exclusive or" (XOR)
```
\
*Results:*
```
{'r', 'c', 'a', 'b', 'd'}
{'c', 'z', 'm', 'a', 'l'}
{'r', 'b', 'd'}
{'r', 'c', 'z', 'm', 'a', 'b', 'd', 'l'}
{'c', 'a'}
{'r', 'b', 'l', 'd', 'z', 'm'}
```

Can we use comprehensions with sets?
&#10;
Yes, set comprehensions are also supported:
```python
a = {x for x in 'abracadabra' if x not in 'abc'}  # {'r', 'd'}
print(a)
```

"Associative memories" or "associative arrays" in Python are implemented as
==dictionaries==.

Which types of keys can be used in dictionaries?
&#10;
Dictionaries are indexed by keys which can be any immutable type and unique
(within one dictionary). Tuples can be used as keys if they contain only
strings, numbers, or tuples; if a tuple contains any mutable object either
directly or indirectly, it cannot be used as a key. You can't use lists as keys,
since lists can be modified in place using index assignments, slice assignments,
or methods like `list.append` and `list.extend`.

How to create empty and non-empty dictionaries?
&#10;
A pair of braces creates an empty dictionary: `{}`.
```python
words = {}
print(type(words))
```
\
Placing a comma-separated list of key:value pairs within the braces adds initial
key:value pairs to the dictionary; this is also the way dictionaries are written
on output.
```python
words = {1: 'one', 2: 'two', 3: 'three'}
print(words)
```

What is main operations on a dictionary?
&#10;
The main operations on a dictionary are storing a value with some key
and extracting the value given the key.

How to delete a key:value pair from a dictionary, overwrite key value?
&#10;
```python
# It is possible to delete a key:value pair with `del`.
animals = {'cat': 'cute', 'dog': 'furry', 'pig': 'pink'}
del animals['pig']
print(animals)

# If you store using a key that is already in use, the old value associated with
# that key is forgotten.
animals['cat'] = 'cute and fluffy'
print(animals)

# It is an error to extract a value using a non-existent key.
print(animals['monkey'])
```

How to get a list of all keys in a dictionary in insertion order and sorted
order?
&#10;
Performing `list(d)` on a dictionary returns a list of all the keys used
in the dictionary, in insertion order (if you want it sorted, just use
`sorted(d)` instead).
```python
animals = {'dog': 'furry', 'pig': 'pink', 'cat': 'cute'}
print(list(animals))    # ['dog', 'pig', 'cat']
print(sorted(animals))  # ['cat', 'dog', 'pig']
```

To check whether a single key is in the dictionary, use the ==`in`== keyword.

How to build dictionary from sequence like this `[('sape', 4139), ('guido',
4127), ('jack', 4098)]` (key-value pairs)?
&#10;
The `dict` constructor builds dictionaries directly from sequences of key-value
pairs:
```python
print(dict([('sape', 4139), ('guido', 4127), ('jack', 4098)]))
# {'sape': 4139, 'guido': 4127, 'jack': 4098}
```

How to generate dict using dictionary comprehensions and this sequence `(2, 4,
6)`, key is `number`, value is `number**2`?
&#10;
Dict comprehensions can be used to create dictionaries from
arbitrary key and value expressions:
```python
print({x: x**2 for x in (2, 4, 6)})  # {2: 4, 4: 16, 6: 36}
```

Is it possible to use keyword arguments to create a dictionary?
&#10;
Yes, when the keys are simple strings, it is sometimes easier to specify
pairs using keyword arguments:
```python
print(dict(sape=4139, guido=4127, jack=4098))  # {'sape': 4139, 'guido': 4127, 'jack': 4098}
```

When looping through dictionaries, the key and corresponding value can
be retrieved at the same time using the ??? method:
&#10;
`dict.items`
```python
knights = {'gallahad': 'the pure', 'robin': 'the brave'}
for k, v in knights.items():
    print(k, v)

# gallahad the pure
# robin the brave
```

When looping through a sequence, the position index and corresponding
value can be retrieved at the same time using the ??? function:
&#10;
`enumerate`
```python
for i, v in enumerate(['tic', 'tac', 'toe']):
    print(i, v)

# 0 tic
# 1 tac
# 2 toe
```

To loop over two or more sequences at the same time, the entries can be
paired with the ??? function:
&#10;
`zip`
```python
questions = ['name', 'quest', 'favorite color']
answers = ['lancelot', 'the holy grail', 'blue']
for q, a in zip(questions, answers):
    print(f"What is your {q}?  It is {a}.")

# What is your name?  It is lancelot.
# What is your quest?  It is the holy grail.
# What is your favorite color?  It is blue.
```

To loop over a sequence in reverse, first specify the sequence in a
forward direction and then call the ??? function:
&#10;
`reversed`
```python
for i in reversed(range(1, 10, 2)):
     print(i)

# 9
# 7
# 5
# 3
# 1
```

To loop over a sequence in sorted order, use the ??? function:
&#10;
`sorted`. Which returns a new sorted list while leaving the source unaltered.
```python
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for i in sorted(basket):
    print(i)

# apple
# apple
# banana
# orange
# orange
# pear
```

How to loop over a sequence in sorted order while removing duplicates?
&#10;
Using `set` on a sequence eliminates duplicate elements. The use of
`sorted` in combination with `set` over a sequence is an idiomatic way
to loop over unique elements of the sequence in sorted order:
```python
# remove orange duplicate and sort
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for f in sorted(set(basket)):
         print(f)

# apple
# banana
# orange
# pear
```

How to change a list while you are looping over it?
&#10;
It is sometimes tempting to change a list while you are looping over it;
however, it is often simpler and safer to create a new list instead:
```python
import math
raw_data = [56.2, float('NaN'), 51.7, 55.3, 52.5, float('NaN'), 47.8]
filtered_data = []
for value in raw_data:
   if not math.isnan(value):
       filtered_data.append(value)

print(filtered_data)
# [56.2, 51.7, 55.3, 52.5, 47.8]
```

## More on Conditions

The conditions used in `while` and `if` statements can contain any
operators, not just comparisons.

The comparison operators `in` and `not in` are membership tests that
determine whether a value is in (or not in) a container. The operators
`is` and `is not` compare whether two objects are really the same
object. All comparison operators have the same priority, which is lower
than that of all numerical operators.

Comparisons can be chained. For example, `a < b == c` tests whether `a`
is less than `b` and moreover `b` equals `c`.

Comparisons may be combined using the Boolean operators `and` and `or`,
and the outcome of a comparison (or of any other Boolean expression) may
be negated with `not`. These have lower priorities than comparison
operators; between them, `not` has the highest priority and `or` the
lowest, so that `A and not B or C` is equivalent to
`(A and (not B)) or C`. As always, parentheses can be used to express
the desired composition.

The Boolean operators `and` and `or` are so-called *short-circuit*
operators: their arguments are evaluated from left to right, and
evaluation stops as soon as the outcome is determined. For example, if
`A` and `C` are true but `B` is false, `A and B and C` does not evaluate
the expression `C`. When used as a general value and not as a Boolean,
the return value of a short-circuit operator is the last evaluated
argument.

It is possible to assign the result of a comparison or other Boolean
expression to a variable. For example, :

string1, string2, string3 = '', 'Trondheim', 'Hammer Dance'
non_null = string1 or string2 or string3
non_null
    'Trondheim'

Note that in Python, unlike C, assignment inside expressions must be
done explicitly with the
`walrus operator <why-can-t-i-use-an-assignment-in-an-expression>` `:=`.
This avoids a common class of problems encountered in C programs: typing
`=` in an expression when `==` was intended.

## Comparing Sequences and Other Types

Sequence objects typically may be compared to other objects with the
same sequence type. The comparison uses *lexicographical* ordering:
first the first two items are compared, and if they differ this
determines the outcome of the comparison; if they are equal, the next
two items are compared, and so on, until either sequence is exhausted.
If two items to be compared are themselves sequences of the same type,
the lexicographical comparison is carried out recursively. If all items
of two sequences compare equal, the sequences are considered equal. If
one sequence is an initial sub-sequence of the other, the shorter
sequence is the smaller (lesser) one. Lexicographical ordering for
strings uses the Unicode code point number to order individual
characters. Some examples of comparisons between sequences of the same
type:

    (1, 2, 3)              < (1, 2, 4)
    [1, 2, 3]              < [1, 2, 4]
    'ABC' < 'C' < 'Pascal' < 'Python'
    (1, 2, 3, 4)           < (1, 2, 4)
    (1, 2)                 < (1, 2, -1)
    (1, 2, 3)             == (1.0, 2.0, 3.0)
    (1, 2, ('aa', 'ab'))   < (1, 2, ('abc', 'a'), 4)

Note that comparing objects of different types with `<` or `>` is legal
provided that the objects have appropriate comparison methods. For
example, mixed numeric types are compared according to their numeric
value, so 0 equals 0.0, etc. Otherwise, rather than providing an
arbitrary ordering, the interpreter will raise a `TypeError` exception.

**Footnotes**



## [6. Modules](https://docs.python.org/3/tutorial/modules.html)



## [7. Input and Output](https://docs.python.org/3/tutorial/inputoutput.html)

## [8. Errors and Exceptions](https://docs.python.org/3/tutorial/errors.html)

## [9. Classes](https://docs.python.org/3/tutorial/classes.html)

## [10. Brief Tour of the Standard Library](https://docs.python.org/3/tutorial/stdlib.html)

## [11. Brief Tour of the Standard Library — Part II](https://docs.python.org/3/tutorial/stdlib2.html)

## [12. Virtual Environments and Packages](https://docs.python.org/3/tutorial/venv.html)

## [13. What Now?](https://docs.python.org/3/tutorial/whatnow.html)

## [14. Interactive Input Editing and History Substitution](https://docs.python.org/3/tutorial/interactive.html)

## [15. Floating Point Arithmetic: Issues and Limitations](https://docs.python.org/3/tutorial/floatingpoint.html)

## [16. Appendix](https://docs.python.org/3/tutorial/appendix.html)

## References

- [[research/Python_Community-Python_Standard_Library|Standard library]]
- [[research/Python_Community-Python_FAQ|FAQ]]
- [[research/Šorn-Comprehensive_python_cheatsheet|Cheatsheet]]
- [[research/Python_Community-Python_Glossary|Glossary]]
