---
external:
  - https://docs.python.org/3/tutorial/index.html
date: 2023
tags:
  - inbox
  - Python
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 130
---

# The Python Tutorial

Core Python language properties:
- Paradigm ...
- Typing ...
- Compilation vs. Interpretation ...
- Memory Management ...
- Readability ...
- Performance ...
&#10;
- Paradigm	Object-oriented (primarily), but also supports imperative, functional, and procedural paradigms
- Typing	Dynamically typed
- Compilation vs. Interpretation	Interpreted language
- Memory Management	Automatic garbage collection
- Readability	Known for being clear and concise with readable syntax
- Performance	Generally considered slower than compiled languages, but optimized for rapid development and readability

- [[high-level_programming_language|high level]],
- [[OOP|object-oriented]] [[programming_language|programming language]],
- Rapid development
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

Difference between [[research/C]], [[Java]], etc.:
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

If you need to set non UTF-8 encoding, use `# -*- coding: ==ENCODING_NAME== -*-`
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
Mathematical *division* that rounds ==down to **nearest**== integer. The floor
division operator is `//`.  `-11 // 4` is -3, `-11 // 3.5` is -4.0.
because that is `-2.75` and `-3.14` rounded downward.
```py
# -5 -4 -3 -2 -1 0 1 2 3 4 5
# <---- *-3*, original division result is -2.1
result = 10 // 3    # 10 / 3 = 3.3333, 10 // 3 -> 3
result = 11.9 // 3  # 11.9 / 3 = 3.9666, 11.9 // 3 -> 3.0
result = 10 // -3   # 10 / -3 = -3.3333, 10 // -3 -> -4
result = 11 // -3   # 11 / -3 = -3.6666, 11 // -3 -> -4
```
<!--SR:!2024-10-19,1,130-->

The `%` operator returns the ==remainder== of the division. <!--SR:!2024-07-20,21,240-->

[[operator|Operators]] with mixed type [[operand]]'s convert the integer operand
to ==floating point, int → float==.
```python
print(4 * 3.75 - 1) # 14.0
```
<!--SR:!2024-11-18,30,240-->

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
==`_`==, and it should be read-only (please avoid using it as real variable). <!--SR:!2025-01-14,88,240-->

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
breaking them into new lines or space, but you need to quote each string. <!--SR:!2024-10-22,4,179-->

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
**character** is a string of ==size one==. <!--SR:!2024-10-11,59,240-->

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
Characters from position 0 (included) to 2 (excluded), `'Py'` <!--SR:!2024-07-27,18,220-->

What you see if you use this slice `word[2:5]`, where word is "Python"
&#10;
Characters from position 2 (included) to 5 (excluded). `'tho'` <!--SR:!2024-07-16,8,220-->

Note: `s[:i] + s[i:] == ==s==`, start is always included, and the end always
excluded.

```python
sentence = "Hello, World!"
print(sentence[:5] + sentence[5:] == sentence)  # True
```

Attempting to use invalid index in range slice handled (with/without exception)?
&#10;
Gracefully, without raising an exception. <!--SR:!2024-08-15,2,200-->

```python
word = 'Python'
print(word[42:])
print(word[4:42])
```

To remember how slices work, you can use this table. Think indices are pointing
between characters.
```
  +---+---+---+---+---+---+
  | H | e | l | l | o | , |
  +---+---+---+---+---+---+
 .0  .1  .2  .3  .4  .5   6  # positive indices, i-j chars between i and j
 -6. -5. -4. -3. -2. -1.     # negative indices
```
For positive indices, the length of a slice is the difference of the
==indices or range==, if both are within bounds. For example, the length of
word[1:3] is 2.

Is it possible to use index outside of string bounds?
&#10;
No, it will raise `IndexError` exception. So it's good idea to check bounds
before using index. `"Test string"[11]`. <!--SR:!2024-08-26,11,220-->

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
<!--SR:!2024-08-06,28,240-->

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
<!--SR:!2024-08-23,10,180-->

Lists also support operations like concatenation.

```python
squares = [9, 8, 7, 6, 5]
print(squares + [4, 3, 2, 1])  # [9, 8, 7, 6, 5, 4, 3, 2, 1]
```

List are ==mutable==, unlike strings. <!--SR:!2025-02-21,126,240-->

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
<!-- https://docs.python.org/3/tutorial/introduction.html#first-steps-towards-programming -->

Can you write Fibonacci algorithm?
We just print values in fibonacci sequence, not store them in list.
Constraints: 0 - 21.
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
# Incorrect version, since b updated before a printed
a, b = 0, 1
while a <= 21:
    print(a)
    a = b  # we need output it before b updated
    b = a + b  # a automatically updated, but we need old value
```
\
```python
# The use of a temporary variable (`temp`) ensures that the correct value of `a`
# is printed before it's overwritten in the next calculation.
# The loop continues as long as `a` (the current sequence number) doesn't exceed
# 21.

# `a` is initialized to 0, which represents the first number in the Fibonacci sequence.
# `b` is initialized to 1, which represents the second number.
a, b = 0, 1

while a <= 21:  # continues as long as `a` (the current sequence number) is less than or equal to 21.
    print(a) # prints the current value of `a`, which is a number in the Fibonacci sequence.

    # Calculates the next number in the sequence by adding the current values of
    # `a` and `b`. However, it stores the result in a temporary variable `temp` to
    # avoid overwriting `a` before it's printed.
    temp = a + b

    a = b  # updates `a` with the previous value of `b` (the second number in the current calculation).
    b = temp  # updates `b` with the newly calculated next number in the sequence, which was previously stored in `temp`.
```

```python
print("---")

a, b = 0, 1  # multiple assignment, initialize variables
while a <= 21:
    print(a)
    a, b = b, a+b # equal to a, b = (b, a+b)
    # <eval 2nd> = <eval 1st>
    #              eval left-to-right
    # 0, 1
    # 1, 1
    # 1, 2
    # 2, 3
    # 3, 5

```

*Results:*
```
0
1
1
2
3
5
8
13
21
---
0
1
1
2
3
5
8
13
21
```

<!-- NEXT: review [A Python Guide to the Fibonacci Sequence – Real Python](https://realpython.com/fibonacci-sequence-python/). -->

Order of Evaluation in Python expression (operand position)?
&#10;
In Python, the left operand evaluated before the right operand (if they have
same priority). <!--SR:!2024-10-05,13,180-->

Non-zero, zero, zero length or [[null_pointer|None]] values in Python (and C)
considered as ==[[bolean_data_type|boolean]]== (at least in if/else
statements). <!--SR:!2024-11-10,23,220-->

`-3**2` in Python is?
&#10;
Since `**` operator has higher precedence than -, `-3**2` will be interpreted as
`-(3**2)` and thus result is -9, NOT correct 9. To avoid this and get 9, you can use
`(-3)**2`. <!--SR:!2024-09-23,1,140-->

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

`range(X)` function is sort of converting given length input to known array
(`0,1,...,X-1`). It generates mathematics ==arithmetic progression==. <!--SR:!2024-11-14,27,220-->

If fact `range()` function generate ==equal== to argument number (if passed only
one) elements, we just start from 0 and increment by 1.

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
<!--SR:!2024-08-24,5,200-->


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
0 + 1 + 2 + 3 = 6 <!--SR:!2024-08-21,6,200-->

> The `break` statement, like in C, `breaks out` of the innermost enclosing
> ==`for` or `while` loop==. <!--SR:!2024-08-08,30,238-->

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
<!--SR:!2024-10-02,50,220-->

When `else` runs in `try-except` statement?
&#10;
In `try-except` statement, `else` runs if **no exception was raised**.
If you worked on something (try, for, while) and you aren't interrupt
(break/exception), we call else method as this is likely unusual? <!--SR:!2024-07-14,4,218-->

<!-- NEXT: Review even/odd number detection algorithm -->

The ==`continue`== statement - continue loop with the next **iteration** of the
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
<!--SR:!2024-08-21,2,218-->

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

A `match` statement comparing expression with ==successive== patterns (state). This is [[pattern_matching|pattern matching]] like in Rust or Haskell.
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
<!--SR:!2024-10-31,12,238-->

> Only the first pattern that matches gets executed, and it can also
> extract components (sequence elements or object attributes) from the
> value into ==variables== in case block. <!--SR:!2024-08-19,6,238-->

TODO: need improve Can I use objects (classes for example) in pattern matching, can I bind class
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
<!--SR:!2024-07-15,5,218-->

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
it's set to `("x", "y")` tuple, the following patterns are all equivalent (and all
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
assigned to. <!--SR:!2024-11-21,100,258-->

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
<!--SR:!2024-07-13,4,238-->

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
<!--SR:!2024-07-17,8,238-->

Several other key features of this statement:

- Like unpacking assignments, tuple and list match patterns (case block) have
exactly the same meaning and actually match arbitrary sequences. An important
exception is that they don't match iterators or ==strings==. In other words
you can't unpack for example `"00"` value with `(x, y)` pattern.
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
<!--SR:!2024-10-20,1,218-->

-   Sequence pattern matching support extended unpacking: `[x, y, *rest]` and `(x,
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
<!--SR:!2024-08-24,9,238-->

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

- Most literals are compared by equality in pattern matching, however the singletons (which one)
 ==`True`, `False` and `None`== are compared by identity
```python
none_item = None
match none_item:
    case "":
        print("Empty string")
    case None:
        print("None")  # <- None
```
<!--SR:!2024-09-02,16,218-->

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
<!--SR:!2024-08-29,16,218-->

<!-- NEXT: Here more info about pattern matching -->

[PEP 636 – Structural Pattern Matching: Tutorial](https://peps.python.org/pep-0636/).

<!-- NEXT: review this fibonaci algorithm -->

We can create a function that writes the Fibonacci series to an arbitrary
boundary, can you explain how (function code)?
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
<!--SR:!2024-08-19,4,218-->

How to define a function in Python?
&#10;
The keyword `def` introduces a function definition.
Example of function definition:
```python
def hello():
    print("Hello, World!")
```
<!--SR:!2025-03-24,157,258-->

The first statement of the function body can optionally be a string literal
(usually in triple quotes); this string literal is the function's documentation
string, or ==`docstring`==.

Why include docstring is recommended to make a habit?
&#10;
There some tools, which produce online or printed documentation, or to let
the user interactively browse through code. Also, many IDEs and editors
support showing documentation based on this docstrings. <!--SR:!2024-07-15,5,238-->

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
print(x(5))  # 15

x = lambda a, b : a * b
print(x(5, 6))  # 30

x = lambda a, b, c : a + b + c
print(x(5, 6, 2))  # 13
```
<!--SR:!2024-08-16,1,139-->

Like nested function definitions, lambda functions can reference variables
from the ==containing== scope.
```python
def make_incrementor(n):
    # Use a lambda expression to return a function.
    return lambda x: x + n

f = make_incrementor(42)
f(0) # 42, f holds 42 and retruns 42 + 0
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
==functions, methods, classes, and modules==. <!--SR:!2024-08-19,4,179-->

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
indentation). <!--SR:!2024-08-17,4,179-->

Wrap lines so that they don't exceed ==79== characters. Useful for small
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

How to add an item to the end of the list with a built-in method and equivalent slice assign method?
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

Which types of keys (general type) can be used in dictionaries?
&#10;
Dictionaries are indexed by keys which can be any immutable type and unique
(within one dictionary). Tuples can be used as keys if they contain only
strings, numbers, or tuples; if a tuple contains any mutable object either
directly or indirectly, it cannot be used as a key. You can't use lists as keys,
since lists can be modified in place using index assignments, slice assignments,
or methods like `list.append` and `list.extend`. <!--SR:!2024-07-11,1,159-->

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
<!--SR:!2024-10-28,9,179-->

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

Which operators can contain the conditions used in `while` and `if` statements
&#10;
They can contain any operators, not just comparisons. For example:
- `in` and `not in`, membership (in container?) tests
- `is` and `is not`, compare objects is the same object
- multiple comparisons (chains) like `a < b == c` - a is less than b and
moreover b equals c
- combinations with boolean operators `and`, `or`, `not`

All comparison operators have the same priority, which is lower than that of all
==numerical== operators.

Who have more priority comparison operators or Boolean operators?
&#10;
Boolean operators have lower priority than comparison operators.

`A and not B or C` is equivalent to (place parentheses) ==`(A and (not B)) or C`==.

The Boolean operators `and` and `or` are so-called **short-circuit** operators:
their arguments are evaluated from (direction) ==left to right==, and evaluation
stops as soon as the outcome is determined.

When used as a general value and not as a Boolean, the return value of a
short-circuit operator is the ==last evaluated argument==.

Note that in Python, unlike C, assignment inside expressions must be done
explicitly with the ==walrus operator - `:=`==. This avoids a common class of
problems encountered in C programs: typing `=` in an expression when `==` was
intended.

```python
# Assignment inside expressions
n = 0
while (n := n + 1) < 5:
    print(n)
```

Sequence objects typically may be compared to other objects with the same
==sequence type==.

The sequence comparison uses **lexicographical** ordering: first the
==first two== items are compared, and if they differ this determines the
outcome of the comparison; if they are equal, the next items (same amount) are
compared, and so on, until either sequence is exhausted.

If two items to be compared are themselves sequences of the same type,
the lexicographical comparison is carried out ==recursively==. If all items
of two sequences compare equal, the sequences are considered equal. If
one sequence is an initial sub-sequence of the other, the shorter
sequence is the smaller (lesser) one. Lexicographical ordering for
strings uses the Unicode code point number to order individual
characters. Some examples of comparisons between sequences of the same
type:
```python
# All results is True
print((1, 2, 3)              < (1, 2, 4))
print([1, 2, 3]              < [1, 2, 4])
print('ABC' < 'C' < 'Pascal' < 'Python')
print((1, 2, 3, 4)           < (1, 2, 4))
print((1, 2)                 < (1, 2, -1))
print((1, 2, 3)             == (1.0, 2.0, 3.0))
print((1, 2, ('aa', 'ab'))   < (1, 2, ('abc', 'a'), 4))
```

Note that comparing objects of different types with `<` or `>` is legal
provided that the objects have appropriate comparison methods. For
example, mixed numeric types are compared according to their numeric
value, so 0 equals 0.0, etc. Otherwise, rather than providing an
arbitrary ordering, the interpreter will raise a ==`TypeError`== exception.

## 6. Modules

Python has a way to put definitions in a file and use them in a
script or in an interactive instance of the interpreter. Such a file is called a
*module*; definitions from a module can be *imported* into other modules or into
the *main* module (the collection of variables that you have access to in a
script executed at the top level and in calculator mode).

A ==module== is a file containing Python definitions and statements.

Within a module, the module's name (as a string) is available as the value of
the global variable `__name__`. If you import python file with functions module
functions will be available as ==`module_name.function_name`==.
```python
# Fibonacci numbers module
# save this as fibo.py, then you will be able to import this module
# with `import fibo` command
#
# it only adds the module name `fibo` there. Using the module name you can
# access the functions: fibo.function_name
# >>> fibo.fib(1000)
# >>> fibo.fib2(100)
# >>> fibo.__name__

# If you intend to use a function often you can assign it to a local name:
# >>> fib = fibo.fib
# >>> fib(500)

def fib(n):    # write Fibonacci series up to n
    a, b = 0, 1
    while a < n:
        print(a, end=' ')
        a, b = b, a+b
    print()

def fib2(n):   # return Fibonacci series up to n
    result = []
    a, b = 0, 1
    while a < n:
        result.append(a)
        a, b = b, a+b
    return result
```

When module functions definitions are executed?
&#10;
A module can contain executable statements as well as function definitions.
These statements are intended to initialize the module. They are executed only
the *first* time the module name is encountered in an import statement.
They are also run if the file is executed as a script.
In fact function definitions are also 'statements' that are 'executed'; the
execution of a module-level function definition adds the function name to the
module's global namespace.

Module namespace in Python (scope information)?
&#10;
Each module has its own private namespace, which is used as the global namespace
by all functions defined in the module.
Thus, the author of a module can
use global variables in the module without worrying about accidental clashes
with a **user's global variables**.

The imported module names, if placed at the top level of a module (outside any
functions or classes), are added to the module's ==global namespace==.

```python
# There is a variant of the `import` statement that imports names from a
# module directly into the importing module's namespace.
from fibo import fib, fib2
fib(500)

```

There is even a variant to import all names that a module defines.
In most cases Python programmers do not use this facility since it introduces
an unknown set of names into the interpreter (`from math import *`), possibly
hiding some things you have already defined, so this mostly used only in
interactive sessions.
This imports all names except those beginning with ==an underscore (`_`)==.
```python
from fibo import *
fib(500)
```

If the module name is followed by ==`as`, `import fibo as fib`==, then the name
following it is bound directly to the imported module.

For efficiency reasons, each module is only imported ==once== per interpreter
session. Therefore, if you change your modules, you must restart the
interpreter -- or, if it's just one module you want to test interactively,
use `importlib.reload`, e.g. `import importlib; importlib.reload(modulename)`.

When you run a Python module with :
```bash
python fibo.py <arguments>
```
the code in the module will be executed, just as if you imported it, but with
the `__name__` set to ==`"__main__"`==.


How to make the module file usable as a script as well as an importable module?
&#10;
You can make the file usable as a script as well as an importable module,
because the code that parses the command line only runs if the module is
executed as the "main" file:
```python
...
fib(...):
...
if __name__ == "__main__":
    import sys
    fib(int(sys.argv[1]))
```
```bash
$ python fibo.py 50
0 1 1 2 3 5 8 13 21 34

# If the module is imported, the code is not run:
# >>> import fibo
# >>>
```
This is often used either to provide a convenient user interface to a module, or
for testing purposes (running the module as a script executes a test suite).

Python module search path?
&#10;
When a module named `spam` is imported, the interpreter first searches for
a built-in module with that name. These module names are listed in
`sys.builtin_module_names`. If not found, it then searches for a file named
`spam.py` in a list of directories given by the variable `sys.path`. `sys.path`
is initialized from these locations:
- The directory containing the input script (or the current directory when no
  file is specified).
- `PYTHONPATH` (a list of directory names, with the same syntax as the
  shell variable `PATH`).
- The installation-dependent default (by convention including a
  `site-packages` directory, handled by the `site` module).
More details are at [The initialization of the sys.path module search
path](https://docs.python.org/3/library/sys_path_init.html).

> [!NOTE]
> On file systems which support symlinks, the directory containing the input
> script is calculated after the symlink is followed. In other words the
> directory containing the symlink is ==**not**== added to the module search
> path.

After initialization, Python programs can modify `sys.path`. The directory
containing the script being run is placed at the beginning of the search path,
ahead of the standard library path. This means that scripts in that directory
will be loaded instead of modules of the ==same name== in the library directory.
This is an error unless the replacement is intended.

To speed up loading modules, Python caches the compiled version of each module
in the ==`__pycache__`== directory under the name `module.{version}.pyc`, where
the version encodes the format of the compiled file; it generally contains the
Python version number. For example, in CPython release 3.3 the compiled version
of spam.py would be cached as `__pycache__/spam.cpython-33.pyc`. This naming
convention allows compiled modules from different releases and different
versions of Python to coexist.

How python determines module recompilation is required?
&#10;
Python checks the modification date of the source against the compiled version
to see if it's out of date and needs to be recompiled. This is a completely
automatic process. Also, the compiled modules are platform-independent, so the
same library can be shared among systems with different architectures.

When Python does not check the module cache?
&#10;
In two circumstances. First, it always recompiles and does not store the result
for the module that's loaded directly from the command line. Second, it does not
check the cache if there is no source module. To support a non-source (compiled
only) distribution, the compiled module must be in the source directory, and
there must not be a source module.

Some tips for experts:

-  You can use the `-O` or `-OO` switches on the Python command
   to reduce the size of a compiled module. The `-O` switch removes assert
   statements, the `-OO` switch removes both assert statements and \_\_doc\_\_
   strings. Since some programs may rely on having these available, you should
   only use this option if you know what you're doing. "Optimized" modules have
   an `opt-` tag and are usually smaller. Future releases may
   change the effects of optimization.
-  A program doesn't run any faster when it is read from a `.pyc`
   file than when it is read from a `.py` file; the only thing that's faster
   about `.pyc` files is the speed with which they are loaded.
-  The module `compileall` can create .pyc files for all modules in a
   directory.
-  There is more detail on this process, including a flow chart of the
   decisions, in [PEP 3147 - PYC Repository Directories](https://peps.python.org/pep-3147/)
   <!-- NEXT: check this pep -->

Some python modules are built into the interpreter; these provide access to
operations that are not part of the core of the language but are nevertheless
built in, either for efficiency or to provide access to operating system
primitives such as system calls.

Are all modules built into the interpreter aviable on all platforms (OS)?
No. The set of standard modules is a configuration option which also depends on
the underlying platform. For example, the `winreg` module is only provided on
Windows systems. One particular module deserves some attention: `sys`, which is
built into every Python interpreter.

The variables ==`sys.ps1` and `sys.ps2`== define the strings used as primary and
secondary prompts, only defined if the interpreter is in interactive mode.

The variable `sys.path` is a list of strings that determines the interpreter's
==search path== for modules. It is initialized to a default path taken from the
environment variable `PYTHONPATH`, or from a built-in default if
`PYTHONPATH` is not set. You can modify it using standard list
operations:
```python
import sys
sys.path.append('/ufs/guido/lib/python')
```

The built-in function ==`dir`== is used to find out which names a module
defines. It returns a sorted list of strings.

```python
import fibo, sys
dir(fibo)  # ['__name__', 'fib', 'fib2']
dir(sys)   # ['__breakpointhook__', '__displayhook__', '__doc__', ...]

Without arguments, `dir` lists the names you have defined ==currently==:
```python
a = [1, 2, 3, 4, 5]
import fibo
fib = fibo.fib
dir()  # ['__builtins__', '__name__', 'a', 'fib', 'fibo', 'sys']
```

`dir` does not list the names of built-in functions and variables. If you
want a list of those, they are defined in the standard module ==`builtins`==,
use `dir` to list them.

```python
import builtins
dir(builtins)  # ['ArithmeticError', 'AssertionError', 'AttributeError', ...]
```

Packages are a way of structuring Python's module namespace by using
=="dotted module names"==.
Just like the use of modules saves the authors of different modules from having
to worry about each other's global variable names, the use of dotted module
names saves the authors of multi-module packages like NumPy or Pillow from
having to worry about each other's module names.

Suppose you want to design a collection of modules (a "package") for the uniform
handling of sound files and sound data. There are many different sound file
formats (usually recognized by their extension, for example: `.wav`,
`.aiff`, `.au`), so you may need to create and maintain a growing
collection of modules for the conversion between the various file formats.

There are also many different operations you might want to perform on sound data
(such as mixing, adding echo, applying an equalizer function, creating an
artificial stereo effect), so in addition you will be writing a never-ending
stream of modules to perform these operations. Here's a possible structure for
your package (expressed in terms of a hierarchical filesystem):

``` text
sound/                          Top-level package
      __init__.py               Initialize the sound package
      formats/                  Subpackage for file format conversions
              __init__.py
              wavread.py
              wavwrite.py
              aiffread.py
              aiffwrite.py
              auread.py
              auwrite.py
              ...
      effects/                  Subpackage for sound effects
              __init__.py
              echo.py
              surround.py
              reverse.py
              ...
      filters/                  Subpackage for filters
              __init__.py
              equalizer.py
              vocoder.py
              karaoke.py
              ...
```

When importing the package, Python searches through the directories on
`sys.path` looking for the package subdirectory.

The ==`__init__.py`== files are required to make Python treat directories
containing the file as packages (unless using a `namespace package`, a
relatively advanced feature). This prevents directories with a common name,
such as `string`, from unintentionally hiding valid modules that occur later
on the module search path.

Is `__init__.py` package file must be empty?
&#10;
No, in the simplest case, `__init__.py` can just be an empty file, but it can
also execute initialization code for the package or set the `__all__` variable.

How to import individual modules from the package?
&#10;
Users of the package can import individual modules from the package, for
example:
```python
import sound.effects.echo
```
This loads the submodule `sound.effects.echo`. It must be referenced with
its full name.:
```python
sound.effects.echo.echofilter(input, output, delay=0.7, atten=4)
```
An alternative way (better for me) of importing the submodule is:
```python
from sound.effects import echo
```
This also loads the submodule `echo` (you can also import functions directly in
same way), and makes it available without its package prefix, so it can be used
as follows:
```python
echo.echofilter(input, output, delay=0.7, atten=4)
```

How `from package import item` is find required object and load it?
&#10;
When using `from package import item`, the item can be either a
submodule (or subpackage) of the package, or some other name defined in the
package, like a function, class or variable. The `import` statement first
tests whether the item is defined in the package; if not, it assumes it is a
module and attempts to load it. If it fails to find it, an `ImportError`
exception is raised.

Contrarily, when using syntax like `import item.subitem.subsubitem`, each item
except for the last must be ==a package==; the last item can be a module or a
package but can't be a class or function or variable defined in the previous
item.

What happens when the user writes `from sound.effects import *`, we have some
`sound` package with sub-modules and `__all__` is defined?
&#10;
Ideally, one would hope that this somehow goes out to the filesystem, finds
which submodules are present in the package, and imports them all. This could
take a long time and importing sub-modules might have unwanted side-effects that
should only happen when the sub-module is explicitly imported.
\
The only solution is for the package author to provide an explicit index of the
package. The `import` statement uses the following convention: if a package's
`__init__.py` code defines a list named `__all__`, it is taken to be the
list of module names that should be imported when `from package import *` is
encountered. It is up to the package author to keep this list up-to-date when a
new version of the package is released. Package authors may also decide not to
support it, if they don't see a use for importing \* from their package. For
example, the file `sound/effects/__init__.py` could contain the following
code:
```python
# `from sound.effects import *` would import the three named submodules
# of the `sound.effects` package.
__all__ = ["echo", "surround", "reverse"]
```

Be aware that imported submodules from package might become
==shadowed (used local object)== by locally defined names.

What if package have no `__all__` defined?
&#10;
If `__all__` is not defined, the statement `from package.name import *`
does *not* import all submodules from the package it only ensures that the package has
been imported and then imports whatever names are defined in the package.
```python
# in that case echo and surround are imported,
# since we import them before `import *` statement
import sound.effects.echo
import sound.effects.surround
from sound.effects import *
```

Is `from package import specific_submodule` notation recommended?
&#10;
There is nothing wrong with using `from package import specific_submodule` In
fact, this is the recommended notation unless the importing module needs to use
submodules with the same name from different packages.

How to import a module with relative import (useful for package code)?
&#10;
You can also write relative imports to import modules/packages, with the `from
module import name` form of import statement. These imports use leading dots to
indicate the current and parent packages involved in the relative import.
```python
from . import echo
from .. import formats
from ..filters import equalizer
```

What if I want to use in main namespace, how I need to import it (absolute or
relative)?
&#10;
Note that relative imports are based on the name of the current module. Since
the name of the main module is always `"__main__"`, modules intended for use
as the main module of a Python application must always use **absolute imports**.

What if you want to customize package modules search paths (add your own paths
with some conditions), how to do it?
&#10;
Packages support one more special attribute, `__path__`. This is
initialized to be a list containing the name of the directory holding the
package's `__init__.py` before the code in that file is executed. This
variable can be modified; doing so affects future searches for modules and
subpackages contained in the package.
While this feature is not often needed, it can be used to extend the set of
modules found in a package.
```python
# pkgutil will have change __path__ to
# ['/usr/lib/python2.6/site-packages/zope',
#  '/home/me/src/myproject/lib/python2.6/site-packages/zope']
pkgutil.extend_path(__path__, __name__)
```

## 7. Input and Output

There are several ways to present the output of a program; data can be
printed in a human-readable form, or written to a file for future use.

Which methods you can to use to output data in Python?
&#10;
- expression statements in interactive mode
- `print` function and derivative functions
- `io.TextIOBase.write` method of file objects
- the standard output file can be referenced as `sys.stdout`


Which methods you can use to format output data in Python?
&#10;
- `f-strings`, begin a string with `f` or `F` before the opening quotation mark
or triple quotation mark. Inside this string, you can write a Python expression
between `{` and `}` characters that can refer to variables or literal values.
```python
year = 2016
event = 'Referendum'
print(f'Results of the {year} {event}' 'Results of the 2016 Referendum')
# Results of the 2016 ReferendumResults of the 2016 Referendum
```
- The `str.format` method of strings requires more manual effort. You'll still
use `{` and `}` to mark where a variable will be substituted and can provide
detailed formatting directives, but you'll also need to provide the information
to be formatted. In the following code block there are two examples of how to
format variables:
```python
yes_votes = 42_572_654
total_votes = 85_705_149
percentage = yes_votes / total_votes
# 42572654 YES votes  49.67%'), yes_votes padded, percentage 2 decimal places
print("{:-9} YES votes  {:2.2%}".format(yes_votes, percentage))
```
Check also this note - [[input_output#Python input and output]].
- Finally, you can do all the string handling yourself by using string
  slicing and concatenation operations to create any layout you can
  imagine. The string type has some methods that perform useful
  operations for padding strings to a given column width.

When you don't need fancy output but just want a quick display of some
variables for debugging purposes, you can convert any value to a string
with the ==`repr` or `str`== functions.

What is difference between `str` and `repr` functions?
&#10;
`str` - human-readable; `repr` - unambiguous (as is) representation of the
object. The `str` function is meant to return representations of values which
are fairly human-readable, while `repr` is meant to generate
representations which can be read by the interpreter (or will force a
`SyntaxError` if there is no equivalent syntax).
\
For objects which don't have a particular representation for human consumption,
`str` will return the same value as `repr`. Many values, such as numbers or
structures like lists and dictionaries, have the same representation using
either function. Strings, in particular, have two distinct representations.
```python
s = 'Hello, world.'
str(s) # 'Hello, world.'
repr(s) # "'Hello, world.'"

str(1/7) # '0.14285714285714285'
x = 10 * 3.25
y = 200 * 200
s = 'The value of x is ' + repr(x) + ', and y is ' + repr(y) + '...'
print(s)  # The value of x is 32.5, and y is 40000...

# The repr() of a string adds string quotes and backslashes:
hello = 'hello, world\n'
print(hello) # hello, world

hellos = repr(hello)
print(hellos) # 'hello, world\n'

# The argument to `repr()` (and `str()`) may be any Python object
repr((x, y, ('spam', 'eggs')))  # "(32.5, 40000, ('spam', 'eggs'))"

```

The `string` module contains a [string.Template](https://docs.python.org/3/library/string.html#template-strings)
 class that offers yet another way to substitute values into strings, using
placeholders like ==`$x`== and replacing them with values from a dictionary, but
offers much less control of the formatting.

`Formatted string literals <f-strings>` (also called f-strings for short) let
you include the value of Python expressions inside a string by prefixing the
string with ==`f` or `F`== and writing expressions as `{expression}`.

Is it possible to adjust variable formatting with `f-strings`?
&#10;
Yes. An optional format specifier can follow the expression. This allows
greater control over how the value is formatted. The following example
rounds pi to three places after the decimal:
```python
import math
print(f'The value of pi is approximately {math.pi:.3f}.')
# The value of pi is approximately 3.142.
```

How to set minimum width for variable formatting with `f-strings`?
&#10;
Passing an integer after the `':'` will cause that field to be a minimum
number of characters wide. This is useful for making columns line up. :
```python
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 7678}
for name, phone in table.items():
    print(f'{name:10} ==> {phone:10d}')

#   Sjoerd     ==>       4127
#   Jack       ==>       4098
#   Dcab       ==>       7678

```

How to apply ascii, str and raw for variable in `f-strings`?
&#10;
You can use these modifiers to convert the value before it is formatted.
`'!a'` applies `ascii`, `'!s'` applies `str`, and `'!r'` applies `repr`:
```python
animals = 'eels'
print(f'My hovercraft is full of {animals}.')
# My hovercraft is full of eels.

animals = 'пушистик eels'
print(f'My hovercraft is full of {animals!a}.')
# My hovercraft is full of '\u043f\u0443\u0448\u0438\u0441\u0442\u0438\u043a eels'.

print(f'My hovercraft is full of {animals!r}.')
# My hovercraft is full of 'eels'.
```

What `=` specifier after expression in `f-strings` does?
&#10;
This is self-documenting expressions.
The `=` expand an expression to the text of the expression with equal sign and
the representation of the evaluated expression:
```python
bugs = 'roaches'
count = 13
area = 'living room'
print(f'Debugging {bugs=} {count=} {area=}')
# Debugging bugs='roaches' count=13 area='living room'
```
See also [What’s New In Python 3.8](https://docs.python.org/3/whatsnew/3.8.html#f-strings-support-for-self-documenting-expressions-and-debugging)

How to use `str.format` method?
&#10;
Basic usage of the `str.format` method looks like this:
```python
print('We are the {} who say "{}!"'.format('knights', 'Ni'))
# We are the knights who say "Ni!"

# The brackets and characters within them (called format fields) are
# replaced with the objects passed into the `str.format` method. A number
# in the brackets can be used to refer to the position of the object
# passed into the `str.format` method. :
print('{0} and {1}'.format('spam', 'eggs')) # spam and eggs
print('{1} and {0}'.format('spam', 'eggs')) # eggs and spam

# If keyword arguments are used in the `str.format` method, their values
# are referred to by using the name of the argument. :
print('This {food} is {adjective}.'.format(
  food='spam', adjective='absolutely horrible')
)
# This spam is absolutely horrible.

# Positional and keyword arguments can be arbitrarily combined:
print('The story of {0}, {1}, and {other}.'.format(
  'Bill', 'Manfred', other='Georg')
)
# The story of Bill, Manfred, and Georg.

# If you have a really long format string that you don't want to split up,
# it would be nice if you could reference the variables to be formatted by
# name instead of by position. This can be done by simply passing the dict
# and using square brackets '[]' to access the keys. :
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 8637678}
print('Jack: {0[Jack]:d}; Sjoerd: {0[Sjoerd]:d}; Dcab: {0[Dcab]:d}'.format(table))
# Jack: 4098; Sjoerd: 4127; Dcab: 8637678

# This could also be done by passing the `table` dictionary as keyword
# arguments with the `**` notation. :
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 8637678}
print('Jack: {Jack:d}; Sjoerd: {Sjoerd:d}; Dcab: {Dcab:d}'.format(**table))
# Jack: 4098; Sjoerd: 4127; Dcab: 8637678

# This is particularly useful in combination with the built-in function
# `vars`, which returns a dictionary containing all local variables:
table = {k: str(v) for k, v in vars().items()}
message = " ".join([f'{k}: ' + '{' + k +'};' for k in table.keys()])
print(message)
# __name__: {__name__}; __doc__: {__doc__}; __package__: {__package__}; ...
print(message.format(**table))
# __name__: __main__; __doc__: None; __package__: None; __loader__: ...
```

What this code will output?
```python
for x in range(1, 11):
    print('{0:2d} {1:3d} {2:4d}'.format(x, x*x, x*x*x))
```
&#10;
The following lines produce a tidily aligned set of
columns giving integers and their squares and cubes:
\
*Results:*
```
 1   1    1
 2   4    8
 3   9   27
 4  16   64
 5  25  125
 6  36  216
 7  49  343
 8  64  512
 9  81  729
10 100 1000
```

For a complete overview of string formatting with `str.format`, see
[formatstrings](https://docs.python.org/3/library/string.html#formatstrings)


Table of squares and cubes, formatted manually:
```python
for x in range(1, 11):
    print(repr(x).rjust(2), repr(x*x).rjust(3), end=' ')
    # Note use of 'end' on previous line
    print(repr(x*x*x).rjust(4))

#  1   1    1
#  2   4    8
#  3   9   27
#  4  16   64
#  5  25  125
#  6  36  216
#  7  49  343
#  8  64  512
#  9  81  729
# 10 100 1000

# Note that the one space between each column was added by the way
# `print` works: it always adds spaces between its arguments.
```

How `rjust` (or similar string methods) is working in general, what if variable
is longer than padding?
&#10;
The `str.rjust` method of string objects right-justifies a string in a
field of a given width by padding it with spaces on the left.
\
There are also similar methods `str.ljust` and `str.center`.
\
These methods do not write anything, they just return a new string.
\
If the input string is too long, they don't truncate it, but return it
unchanged; this will mess up your column lay-out but that's usually better than
the alternative, which would be lying about a value. (If you really want
truncation you can always add a slice operation, as in `x.rjust(n)[:n]`.)

How to pad a numeric string on the left with zeros (`str` method)?
&#10;
`str.zfill`, which pads a numeric string on the
left with zeros. It understands about plus and minus signs:
```python
'12'.zfill(5)             # '00012'
'-3.14'.zfill(7)          # '-003.14'
'3.14159265359'.zfill(5)  # '3.14159265359'
```

How working old-string-formatting in Python (`%`)?
&#10;
The `%` operator (modulo) can also be used for string formatting. Given
`format % values` (where *format* is a string), `%` conversion
specifications in *format* are replaced with zero or more elements of
*values*. This operation is commonly known as string interpolation. For
example:
```python
import math
print('The value of pi is approximately %5.3f.' % math.pi)
# The value of pi is approximately 3.142.
```

`open` function returns a `file object`, and is most commonly used with two
positional arguments and one keyword argument (which one):
&#10;
`open(filename, mode, encoding=None)`
```python
# filename, mode, encoding
f = open('/tmp/workfile', 'w', encoding="utf-8")
print(f)
# <_io.TextIOWrapper name='/tmp/workfile' mode='w' encoding='utf-8'>
```

Which text mode arguments can be used with `open` function?
&#10;
*mode* argument (way in which the file be used) in built-in `open` file function
can be (text mode):
- `'r'` when the file will only be read (used by default, if mode omitted);
- `'w'` for only writing (an existing file with the same name will be erased);
- `'a'` opens the file for appending; any data written to the file is
automatically added to the end.
- `'r+'` opens the file for both reading and writing.

Normally, files are opened with `open` function in ==`text mode`==, that means,
you read and write strings from and to the file, which are encoded in a specific
*encoding*. If *encoding* is not specified, the default is platform dependent.
Because UTF-8 is the modern de-facto standard, `encoding="utf-8"` is recommended
unless you know that you need to use a different encoding.

Appending a `'b'` to the `open` function mode opens the file in ==`binary
mode`==. Data is read and written as `bytes` objects. You can not specify
*encoding* when opening file in binary mode.

In text mode, the default when reading is to convert platform-specific
line endings (`\n` on Unix, `\r\n` on Windows) to just ==`\n`==.

When writing in text mode, the default is to convert occurrences of `\n`
==back to platform-specific== line endings. This is appropriate for text files.
Be very careful to use binary mode when reading and writing any binary files.

How to automatically close file after `open` function finishes or there was some
exception during writing?
&#10;
Use the `with` keyword when dealing with file objects. `with` is also much
shorter than writing equivalent `try`-`finally` blocks.
```python
f = None  # just to show that `f` will be reassigned
with open('/tmp/workfile', encoding="utf-8") as f:
    print(f.read())

# We can check that the file has been automatically closed.
print(f.closed)  # True
```

If you're not using the `with` keyword, then you should call ==`f.close()`== on
file object to close the file and immediately free up any system resources used
by it.

> [!WARNING]
> Calling `f.write()` without using the ==`with`== keyword or calling
> `f.close()` **might** result in the arguments of `f.write()` not being
> completely written to the disk, even if the program exits
> successfully.

What if you try to use file object after it was closed?
&#10;
After a file object is closed, either by a `with` statement or by
calling `f.close()`, attempts to use the file object will
automatically fail.

```python
f = open('/tmp/workfile', 'w', encoding="utf-8")
f.close()
f.read()
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# ValueError: I/O operation on closed file.
```

To read a file's contents, call ==`f.read(size)`==, which reads some
quantity of data and returns it as a string (in text mode) or bytes
object (in binary mode). *size* is an optional numeric argument. When
*size* is omitted or negative, the entire contents of the file will be
read and returned; it's your problem if the file is twice as large as
your machine's memory. Otherwise, at most *size* characters (in text
mode) or *size* bytes (in binary mode) are read and returned. If the end
of the file has been reached, `f.read()` will return an empty string
(`''`). :
```python
with open('/tmp/workfile') as f:
    print(f.read())  # Entire file is read and printed
    print(f.read())  # Empty string
```

==`f.readline()`== reads a single line from the file; a newline character
(`\n`) is left at the end of the string, and is only omitted on the last
line of the file if the file doesn't end in a newline. This makes the
return value unambiguous; if `f.readline()` returns an empty string, the
end of the file has been reached, while a blank line is represented by
`'\n'`, a string containing only a single newline. :
```python
# The file data is:
# This is the first line of the file.
# Second line of the file.

with open('/tmp/workfile') as f:
    print(f.readline(), end="") # 'This is the first line of the file.\n'
    print(f.readline(), end="") # 'Second line of the file\n'
    print(f.readline(), end="") # ''
```

How to read lines from file in more efficient way?
&#10;
For reading lines from a file, you can loop over the file object. This
is memory efficient, fast, and leads to simple code:
```python
# The file data is:
# This is the first line of the file.
# Second line of the file.
with open('/tmp/workfile') as f:
    for line in f:
         print(line, end='')

# This is the first line of the file.
# Second line of the file

```

If you want to read all the lines of a file in a list you can use
==`list(f)` or `f.readlines()`==.

`f.write(string)` writes the contents of *string* to the file, returning
the number of ==characters written.== :
```python
with open('/tmp/workfile', 'w') as f:
    lines_written = f.write("""\
This is the first line of the file.
Second line of the file.\
""")
    print(lines_written)  # 60
```

How to write non-string data to file?
&#10;
Other types of objects need to be converted -- either to a string (in
text mode) or a bytes object (in binary mode) -- before writing them:
```python
with open('/tmp/workfile', 'w') as f:
    value = ('the answer', 42)
    # f.write(value) # TypeError
    s = str(value)  # convert the tuple to string
    print(f.write(s))  # 18
    print(f.tell())    # 18
```

`f.tell()` returns an integer giving the file object's ==current position==
in the file represented as number of bytes from the beginning of the
file when in binary mode and an opaque number when in text mode.

To change the file object's position, use ==`f.seek(offset, whence)`==. The
position is computed from adding *offset* to a reference point; the reference
point is selected by the *whence* argument. A *whence* value of 0 measures from
the beginning of the file, 1 uses the current file position, and 2 uses the end
of the file as the reference point. *whence* can be omitted and defaults to 0,
using the beginning of the file as the reference point. :
```python
f = open('/tmp/workfile', 'rb+')
f.truncate()  # truncate file to 0 bytes, delete all content
print(f.write(b'0123456789abcdef'))  # 16, number of written bytes
print(f.seek(5))      # 5, go to the 6th byte in the file
print(f.read(1))      # b'5', read the 6th byte
print(f.seek(-3, 2))  # 13, Go to the 3rd byte before the end
print(f.read(1))      # b'd', read the 14th byte
f.close()
```

Can be used `f.seek(offset)` with some random value in text files?
&#10;
In text files (those opened without a `b` in the mode string), only
seeks relative to the beginning of the file are allowed (the exception
being seeking to the very file end with `seek(0, 2)`) and the only valid
*offset* values are those returned from the `f.tell()`, or zero. Any
other *offset* value produces undefined behaviour.

File objects have some additional methods, such as `io.IOBase.isatty`
and `io.IOBase.truncate` which are less frequently used; consult the
[Library Reference](https://docs.python.org/3/library/io.html#io.IOBase.isatty)
for a complete guide to file objects.

When you want to save more complex data types like nested lists and
dictionaries, parsing and serializing by hand (using file `read` method for
example) becomes complicated.

Python allows you to use the popular data interchange format called [JSON
(JavaScript Object Notation)](https://json.org). The standard module called
`json` can take Python data hierarchies, and convert them to string
representations; this process is called ==`serializing`==.

Reconstructing the data from the string representation is called
==`deserializing`==.

Between serializing and deserializing, the string representing the object may
have been stored in a file or data, or sent over a network connection to some
distant machine.

> [!NOTE]
> The JSON format is commonly used by modern applications to allow for
> data exchange. Many programmers are already familiar with it, which
> makes it a good choice for interoperability.

If you have an object `x`, you can view its JSON string representation
with a simple line of code (==`dumps`== method of `json` module):
```python
import json
x = [1, 'simple', 'list']
print(json.dumps(x))  # '[1, "simple", "list"]'
```

Another variant of the `json.dumps` function, called `json.dump`,
simply serializes the object to a ==`text file`, like `f` in example==.
```python
json.dump(x, f)
```

To decode the object again (JSON), if `f` is a `binary file` or `text file`
object which has been opened for reading, need to use ==`json.load`== method:
```python
# JSON files must be encoded in UTF-8. Use `encoding="utf-8"` when
# opening JSON file as a `text file` for both of reading and writing.
x = json.load(f)
```

Contrary to `JSON`, ==*pickle*== is a protocol which allows the
serialization of arbitrarily complex Python objects. As such, it is
specific to Python and cannot be used to communicate with applications
written in other languages. It is also insecure by default:
deserializing its data coming from an untrusted source can execute arbitrary
code, if the data was crafted by a skilled attacker.

## 8. Errors and Exceptions

There are (at least) two distinguishable kinds of errors (general types):
==*syntax errors* and *exceptions*==.

Syntax errors, also known as ==parsing== errors.
The parser repeats the offending line and displays little 'arrow's
pointing at the token in the line where the error was detected. The
error may be caused by the absence of a token *before* the indicated
token. In the example, the error is detected at the function `print`,
since a colon (`':'`) is missing before it. File name and line number
are printed so you know where to look in case the input came from a
script.
```python
while True print('Hello world')
#  File "<stdin>", line 1
#    while True print('Hello world')
#               ^^^^^
#SyntaxError: invalid syntax
```

Even if a statement or expression is syntactically correct, it may cause
an error when an attempt is made to execute it. Errors detected during
execution are called ==*exceptions*== and are not unconditionally fatal. Most
exceptions are not handled by programs, however, and result in error messages as
shown here:
```python
# The last line of the error message in exceptions indicates what happened.
# Exceptions come in different types, and the type is printed as part of the
# message: the types in the example are `ZeroDivisionError`, `NameError` and
# `TypeError`. The string printed as the exception type is the name of the
# built-in exception that occurred. This is true for all built-in exceptions, but
# need not be true for user-defined exceptions (although it is a useful
# convention). Standard exception names are built-in identifiers (not reserved
# keywords).

# The preceding part of the error message shows the context where the
# exception occurred, in the form of a stack traceback. In general it
# contains a stack traceback listing source lines; however, it will not
# display lines read from standard input.

# The rest of the line provides detail based on the type of exception and
# what caused it.

10 * (1/0)
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# ZeroDivisionError: division by zero
4 + spam*3
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# NameError: name 'spam' is not defined
'2' + 2
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# TypeError: can only concatenate str (not "int") to str
```

<!-- NEXT: need reivew -->

[Built-in Exceptions](https://docs.python.org/3/library/exceptions.html) lists
the built-in exceptions and their meanings.

Following example asks the user for input until a valid
integer has been entered, but allows the user to interrupt the program
(using `Control-C` or whatever the operating system supports); note that
a user-generated interruption is signalled by raising the
==`KeyboardInterrupt`== exception. :
```python
while True:
   try:
       x = int(input("Please enter a number: "))
       break
   except ValueError:
       print("Oops!  That was no valid number.  Try again...")
```

The `try` statement works as follows (with/without exceptions occuring).
&#10;
- First, the *try clause* (the statement(s) between the `try` and
  `except` keywords) is executed.
- If no exception occurs, the *except clause* is skipped and execution
  of the `try` statement is finished.
- If an exception occurs during execution of the `try` clause, the rest
  of the clause is skipped. Then, if its type matches the exception
  named after the `except` keyword, the *except clause* is executed, and
  then execution continues after the try/except block.
- If an exception occurs which does not match the exception named in the
  *except clause*, it is passed on to outer `try` statements; if no
  handler is found, it is an *unhandled exception* and execution stops
  with an error message.
```python
try:
    try:
        # print(a)
        print(1 / 0)
    except NameError:
        print("This is a NameError from inner exception")
except ValueError:
  print("This is a ZeroDivisionError from outer exception")
```

A `try` statement may have more than one *except clause*, to specify
handlers for different exceptions. At most one handler will be executed.
Handlers only handle exceptions that occur in the
==corresponding *try clause*==, not in other handlers of the same `try`
statement.

An *except clause* may name multiple exceptions as a parenthesized
==tuple==, for example:
```python
   except (RuntimeError, TypeError, NameError):
       pass
```

A class in an `except` clause matches exceptions which are instances of
the ==class itself or one of its derived classes== (but not the other way
around --- an *except clause* listing a derived class does not match
instances of its base classes). For example, the following code will
print B, C, D in that order:
```python
# Note that if the *except clauses* were reversed (with `except B` first),
# it would have printed B, B, B --- the first matching *except clause* is
# triggered.

class B(Exception):
    pass

class C(B):
    pass

class D(C):
    pass

for cls in [B, C, D]:
    try:
        raise cls()
    except D:
        print("D")
    except C:
        print("C")
    except B:
        print("B")

print("---")

# A class in an `except` clause matches exceptions which are instances of
# the class itself or one of its derived classes
try:
    raise C()
except B:
    print("C, but except is B")

print("---")

# An *except clause* listing a derived class does not match
# instances of its base classes
# This will raise an exception
try:
    raise B()
except D:
    print("D")
except C:
    print("C")

print("---")

```

When an exception occurs, it may have associated values, also known as
the exception's *arguments*. The presence and types of the arguments
depend on the exception type.
\
The *except clause* may specify a variable after the exception name. The
variable is bound to the ==exception instance== which typically has an
`args` attribute that stores the arguments. For convenience, builtin
exception types define `object.__str__` to print all the arguments
without explicitly accessing `.args`. :
```python
try:
    raise Exception('spam', 'eggs')  # Exception with two arguments
except Exception as inst:  # usually used as `e` or `err`
    print(type(inst))    # <class 'Exception'>, the exception type
    print(inst.args)     # ('spam', 'eggs'),    arguments stored in .args
    print(inst)          # ('spam', 'eggs'),    __str__ allows args to be printed directly,
                         #                      but may be overridden in exception subclasses
    x, y = inst.args     #                      unpack args
    print('x =', x)      # x = spam
    print('y =', y)      # y = eggs
```

What is the base class for all exceptions and difference between `Exception`
subclass?
&#10;
`BaseException` is the common base class of all exceptions. One of its
subclasses, `Exception` (user-defined exceptions), is the base class of all the
non-fatal exceptions. Exceptions which are not subclasses of `Exception` are not
typically handled, because they are used to indicate that the program should
terminate. They include `SystemExit` which is raised by `sys.exit` and
`KeyboardInterrupt` which is raised when a user wishes to interrupt the program.

Is possible to catch all exceptions with `Exception`?
&#10;
`Exception` can be used as a wildcard that catches (almost) everything. However,
it is good practice to be as specific as possible with the types of exceptions
that we intend to handle, and to allow any unexpected exceptions to propagate
on.
```python
try:
  1/0
except Exception as e:
  print(f"Caught any exception type: {e}")
```

How to use of `Exception` to print or log the exception?
&#10;
The most common pattern for handling `Exception` is to print or log the
exception and then re-raise it (allowing a caller to handle the
exception as well):
```python
import sys

try:
    f = open('/tmp/myfile.txt')
    s = f.readline()
    i = int(s.strip())
    uknown_func()
except OSError as err:
    print("OS error, we just notify you:", err)
except ValueError:
    print("Could not convert data to an integer, we just notify you.")
except Exception as err:
    print(f"Unexpected {err=}, {type(err)=}, program will exit.")
    raise
```

The `try` ... `except` statement has an optional *else clause*, which,
when present, must follow all *except clauses*. It is useful for code
that must be executed if the *try clause* does ==not raise an exception==.
For example:
```python
# NOTE: A much cleaner way of doing this is using the with statement
import sys

argv = ["/tmp/myfile.txt"]
for arg in argv:
    try:
        f = open(arg, 'r')
    except OSError:
        # We catch here only file open errors, not read or close errors
        print('cannot open', arg)
    else:
        # This code must be NOT catched by `except OSError`
        #
        # This won't catch an IOError from the read/write or close calls.
        # Which is good, because then reason woudn't have been “Unable to create
        # file on disk.” – it would have been a different error, one that your
        # code wasn't prepared for. It's a good idea not to try to handle
        # such errors.
        print(arg, 'has', len(f.readlines()), 'lines')
        f.close()
```

When `else` block of `try` ... `except` statement is better to use?
&#10;
The use of the `else` clause is better than adding additional code to the `try`
clause because it avoids **accidentally** catching an exception that must be
trigger by the `try` ... `except` block.

Can we catch exceptions in deeply nested code?
&#10;
Yes. Exception handlers do not handle only exceptions that occur immediately
in the *try clause*, but also those that occur inside functions that are
called (even indirectly) in the *try clause*. For example:
```python
def this_fails():
    x = 1/0

try:
   this_fails()
except ZeroDivisionError as err:
   print('Handling run-time error:', err)  # Handling run-time error: division by zero
```

How to manually raise an exception?
&#10;
The `raise` statement allows the programmer to force a specified
exception to occur. For example:
```python
raise NameError('HiThere')  # raise argument is an exception instance/class
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# NameError: HiThere
```

If an exception class is passed to `raise` how it will be processed?
&#10;
It will be implicitly instantiated by calling its constructor with no arguments:
```python
raise ValueError  # shorthand for 'raise ValueError()'
```

What if you need to catch exception do something and then re-raise it?
&#10;
If you need to determine whether an exception was raised but don't
intend to handle it, a simpler form of the `raise` statement allows you
to re-raise the exception:
```python
try:
     raise NameError('HiThere')
 except NameError:
     print('An exception flew by!')
     raise

# An exception flew by!
# Traceback (most recent call last):
#   File "<stdin>", line 2, in <module>
# NameError: HiThere
```

Exception Chaining, what if an unhandled exception occurs inside an `except`
section?
&#10;
If an unhandled exception occurs inside an `except` section, it will have the
exception being handled attached to it and included in the error message:
```python
try:
    open("database.sqlite")
except OSError:
    raise RuntimeError("unable to handle error")

# Traceback (most recent call last):
#   File "<stdin>", line 2, in <module>
# FileNotFoundError: [Errno 2] No such file or directory: 'database.sqlite'
#
# During handling of the above exception, another exception occurred:
#
# Traceback (most recent call last):
#   File "<stdin>", line 4, in <module>
# RuntimeError: unable to handle error
```

How to indicate that an exception is a direct consequence of another,
&#10;
The `raise` statement allows an optional `from` clause:
```python
# exc must be exception instance or None.
raise RuntimeError from exc
```
\
This can be useful when you are transforming exceptions. For example:
```python
def func():
   raise ConnectionError

try:
   func()
except ConnectionError as exc:
   raise RuntimeError('Failed to open database') from exc

# Traceback (most recent call last):
#   File "<stdin>", line 2, in <module>
#   File "<stdin>", line 2, in func
# ConnectionError
#
# The above exception was the direct cause of the following exception:
#
# Traceback (most recent call last):
#   File "<stdin>", line 4, in <module>
# RuntimeError: Failed to open database

```
It also allows disabling automatic exception chaining using the `from None`
idiom:
```python
try:
    open('database.sqlite')
except OSError:
    raise RuntimeError from None

# Traceback (most recent call last):
#   File "<stdin>", line 4, in <module>
# RuntimeError
```

<!-- NEXT: need review -->

For more information about chaining mechanics, see [Built-in Exceptions](https://docs.python.org/3/library/exceptions.html)

Programs may name their own exceptions by creating a new exception class
Exceptions should typically be derived from the ==`Exception`== class, either
directly or indirectly.

Most exceptions are defined with names that end in =="Error"==, similar to
the naming of the standard exceptions.
\
Many standard modules define their own exceptions to report errors that
may occur in functions they define.

```python
try:
    raise KeyboardInterrupt
finally:
    raise Exception
    print('Goodbye, world!')

# Goodbye, world!
# Traceback (most recent call last):
#   File "<stdin>", line 2, in <module>
# KeyboardInterrupt
```
If a `finally` clause is present, the `finally` clause will execute as
the last task before the `try` statement completes. The `finally`
clause runs ==whether or not== the `try` statement produces an exception.

If an exception occurs during execution of the `try` clause, the
exception may be handled by an `except` clause. If the exception is
not handled by an `except` clause, the exception is ==re-raised== after
the `finally` clause has been executed.

An exception could occur during execution of an `except` or `else` clause. The
exception is ==re-raised== after the `!finally` clause has been executed.

If the `finally` clause executes a `break`, `continue` or `return` statement,
exceptions are ==not re-raised==.

If the `try` statement reaches a `break`, `continue` or `return` statement, the
`finally` clause will execute just ==prior to the== `break`, `continue` or
`return` statement's execution.

If a `finally` clause includes a `return` statement, the returned value will be
the one from the ==`finally` clause's== `return` statement, not the value from
the `try` clause's `return` statement. For example:
```python
def bool_return():
    try:
        return True
    finally:
        return False

print(bool_return())  # False
```
A more complicated example:
```python
def divide(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        print("division by zero!")
    else:
        print("result is", result)
    finally:
        print("executing finally clause")

# No any exciptions
divide(2, 1)
    # result is 2.0
    # executing finally clause

# ZeroDivisionError
divide(2, 0)
    # division by zero!
    # executing finally clause

# As you can see, the `finally` clause is executed in any event. The
# `TypeError` raised by dividing two strings is not handled by the
# `except` clause and therefore re-raised after the `finally` clause has
# been executed.
divide("2", "1")
    # executing finally clause
    # Traceback (most recent call last):
    #   File "<stdin>", line 1, in <module>
    #   File "<stdin>", line 3, in divide
    # TypeError: unsupported operand type(s) for /: 'str' and 'str'
```

When the `finnaly` clause (`try`) is useful in real world applications?
&#10;
In real world applications, the `finally` clause is useful for releasing
external resources (such as files or network connections), regardless of
whether the use of the resource was successful.

Look at the following example, which tries to open a file and print its contents
to the screen:
```python
for line in open("myfile.txt"):
    print(line, end="")
```
What the problem with this code?
&#10;
Is that it leaves the file open for an indeterminate amount of time after this
part of the code has finished executing.

The `with` statement allows objects like files to be used in a way that ensures
they are ==always cleaned up== promptly and correctly:
```python
with open("myfile.txt") as f:
    for line in f:
        print(line, end="")
```
\
After the statement is executed, the file *f* is always closed, even if
a problem was encountered while processing the lines. Objects which,
like files, provide predefined clean-up actions will indicate this in
their documentation.

There are situations where it is necessary to report several exceptions
that have occurred. This is often the case in concurrency frameworks,
when several tasks may have failed in parallel, but there are also other
use cases where it is desirable to continue execution and collect
multiple errors rather than raise the first exception.
\
The builtin ==`ExceptionGroup`== wraps a list of exception instances so that
they can be raised together. It is an exception itself, so it can be
caught like any other exception:
```python
def f():
    excs = [OSError('error 1'), SystemError('error 2')]
    raise ExceptionGroup('there were problems', excs)

f()
# + Exception Group Traceback (most recent call last):
# |   File "<stdin>", line 1, in <module>
# |   File "<stdin>", line 3, in f
# | ExceptionGroup: there were problems
# +-+---------------- 1 ----------------
#   | OSError: error 1
#   +---------------- 2 ----------------
#   | SystemError: error 2
#   +------------------------------------

try:
    f()
except Exception as e:
    print(f'caught {type(e)}: e')
# caught <class 'ExceptionGroup'>: e
# >>>
```

By using ==`except*`== instead of `except`, we can selectively handle only
the exceptions in the group that match a certain type. In the following
example, which shows a nested exception group, each these clause
extracts from the group exceptions of a certain type while letting all
other exceptions propagate to other clauses and eventually to be
reraised:

```python
def f():
    raise ExceptionGroup(
        "group1",
        [
            OSError(1),
            SystemError(2),
            ExceptionGroup(
                "group2",
                [
                    OSError(3),
                    RecursionError(4)
                ]
            )
        ]
    )

try:
    f()
except* OSError as e:
    print("There were OSErrors")
except* SystemError as e:
    print("There were SystemErrors")

# There were OSErrors
# There were SystemErrors
#   + Exception Group Traceback (most recent call last):
#   |   File "<stdin>", line 2, in <module>
#   |   File "<stdin>", line 2, in f
#   | ExceptionGroup: group1
#   +-+---------------- 1 ----------------
#     | ExceptionGroup: group2
#     +-+---------------- 1 ----------------
#       | RecursionError: 4
#       +------------------------------------
# >>>
```

Note that the exceptions nested in an exception group must be
==instances, not types==. This is because in practice the exceptions would
typically be ones that have already been raised and caught by the program, along
the following pattern:
```python
excs = []
for test in tests:
    try:
        test.run()
    except Exception as e:
        excs.append(e)

if excs:
    raise ExceptionGroup("Test Failures", excs)
```

When an exception is created in order to be raised, it is usually
initialized with information that describes the error that has occurred.
There are cases where it is useful to add information after the
exception was caught. For this purpose, exceptions have a method
==`add_note(note)`== that accepts a string and adds it to the exception's
notes list. The standard traceback rendering includes all notes, in the
order they were added, after the exception:
```python
try:
    raise TypeError('bad type')
except Exception as e:
    e.add_note('Add some information')
    e.add_note('Add some more information')
    raise
# Traceback (most recent call last):
#   File "<stdin>", line 2, in <module>
# TypeError: bad type
# Add some information
# Add some more information
# >>>

# When collecting exceptions into an exception group, we may want to add context
# information for the individual errors. In the following each exception in the
# group has a note indicating when this error has occurred:
def f():
    raise OSError('operation failed')

excs = []
for i in range(3):
    try:
        f()
    except Exception as e:
        e.add_note(f'Happened in Iteration {i+1}')
        excs.append(e)

raise ExceptionGroup('We have some problems', excs)
#       + Exception Group Traceback (most recent call last):
#       |   File "<stdin>", line 1, in <module>
#       | ExceptionGroup: We have some problems (3 sub-exceptions)
#       +-+---------------- 1 ----------------
#         | Traceback (most recent call last):
#         |   File "<stdin>", line 3, in <module>
#         |   File "<stdin>", line 2, in f
#         | OSError: operation failed
#         | Happened in Iteration 1
#         +---------------- 2 ----------------
#         | Traceback (most recent call last):
#         |   File "<stdin>", line 3, in <module>
#         |   File "<stdin>", line 2, in f
#         | OSError: operation failed
#         | Happened in Iteration 2
#         +---------------- 3 ----------------
#         | Traceback (most recent call last):
#         |   File "<stdin>", line 3, in <module>
#         |   File "<stdin>", line 2, in f
#         | OSError: operation failed
#         | Happened in Iteration 3
#         +------------------------------------
#     >>>
```

## 9. Classes

<!-- NEXT: nedd re-read -->

[class_computer_programming|Classes]] provide a means of bundling data and
functionality together. Creating a new class creates a new *type* of object,
allowing new *instances* of that type to be made. Each class instance can have
attributes attached to it for maintaining its state. Class instances can also
have ==methods== (defined by its class) for modifying its state.

Python classes provide all the standard features of [[OOP]]: the class
inheritance mechanism allows multiple base classes, a derived class can override
any methods of its base class or classes, and a method can call the method of a
base class with the same name. Objects can contain arbitrary amounts and kinds
of data. As is true for modules, classes partake of the dynamic nature of
Python: they are created at ==[[runtime]]==, and can be modified further after
creation.

In C++ terminology, normally class members (including the data members) are
==*public*== (except see below [Private
Variables](https://docs.python.org/3/tutorial/classes.html#tut-private)), and
all member functions are *virtual*. As in Modula-3, there are no shorthands for
referencing the object’s members from its methods: the method function is
declared with an explicit first argument representing the object, which is
provided implicitly by the call. As in Smalltalk, classes themselves are
objects. This provides semantics for importing and renaming. Unlike C++ and
Modula-3, built-in types can be used as base classes for extension by the user.
Also, like in C++, most built-in operators with special syntax (arithmetic
operators, subscripting etc.) can be redefined for class instances.

(Lacking universally accepted terminology to talk about classes, I will make
occasional use of Smalltalk and C++ terms. I would use Modula-3 terms, since its
object-oriented semantics are closer to those of Python than C++, but I expect
that few readers have heard of it.)

Objects have individuality, and multiple names (in multiple scopes) can be bound
to the same object. This is known as aliasing in other languages. This is
usually not appreciated on a first glance at Python, and can be safely ignored
when dealing with immutable basic types (numbers, strings, tuples). However,
aliasing has a possibly surprising effect on the semantics of Python code
involving mutable objects such as lists, dictionaries, and most other types.
This is usually used to the benefit of the program, since aliases behave like
pointers in some respects. For example, passing an object is cheap since only a
==pointer== is passed by the implementation; and if a function modifies an
object passed as an argument, the caller will see the change — this eliminates
the need for two different argument passing mechanisms as in Pascal.

A *namespace* is a mapping from names to objects. Most namespaces are currently
implemented as ==Python dictionaries==, but that’s normally not noticeable in any
way (except for performance), and it may change in the future. Examples of
namespaces are: the set of built-in names (containing functions such as
"`abs`", and built-in exception names); the global names in a module; and the
local names in a function invocation. In a sense the set of attributes of an
object also form a namespace.

The important thing to know about namespaces is that there is absolutely
==no relation between names== in different namespaces; for instance, two
different modules may both define a function `maximize` without confusion —
users of the modules must prefix it with the module name.

In the expression `z.real`, `real` is an ==attribute== of the object `z`.

In the expression `modname.funcname`, `modname` is a module object and
`funcname` is an attribute of it. In this case there happens to be a
straightforward mapping between the module’s attributes and the global names
defined in the module: they share the same ==namespace==!
Except for one thing. Module objects have a secret read-only attribute called
`__dict__`, which returns the dictionary used to implement the module’s
namespace; the name `__dict__` is an attribute but not a global name. Obviously,
using this violates the abstraction of namespace implementation, and should be
restricted to things like post-mortem debuggers.

Can we read/write attributes of an object?
&#10;
Attributes may be read-only or writable. In the latter case, assignment to
attributes is possible. Module attributes are writable: you can write
`modname.the_answer = 42`.

How to delete an attribute of an object?
&#10;
Writable attributes may also be deleted with the `del` statement. For example,
`del modname.the_answer` will remove the attribute `the_answer` from the object
named by `modname`.

When namespace with built-in names is created/deleted?
&#10;
The namespace containing the built-in names is created when the Python
interpreter starts up, and is never deleted.

The global namespace for a module is created when the module definition is
==read in==; normally, module namespaces also last until the interpreter quits.
The statements executed by the top-level invocation of the interpreter, either
read from a script file or interactively, are
considered part of a module called `__main__`: The environment where top-level
code is run. Covers command-line interfaces, import-time behavior, and `__name__
== '__main__'`., so they have their own global namespace.

The built-in names actually also live in a module; this is called
==`__builtins__`, `dir(__builtins__)`==: The module that provides the built-in
namespace.

<!-- TODO: Need to research -->

How local namespace for a function is created/deleted?
&#10;
The local namespace for a function is created when the function is called, and
deleted when the function returns or raises an exception that is not handled
within the function. (Actually, forgetting would be a better way to describe
what actually happens.) Of course, recursive invocations each have their own
local namespace.

A *scope* is a ==textual region of a Python program== where a namespace is
directly accessible. “Directly accessible” here means that an unqualified
reference to a name attempts to find the name in the namespace.

Although scopes are determined statically, they are used dynamically. At any
time during execution, there are 3 or 4 nested scopes whose namespaces are
directly accessible:

1. the innermost scope, which is searched first, contains the ==local names==
2. the scopes of any enclosing functions, which are searched starting with the
nearest enclosing scope, contain non-local, but also ==non-global== names
3. the next-to-last scope contains the current module’s ==global names==
4. the outermost scope (searched last) is the namespace containing ==built-in
   names==

What's the scope of a variable initialized in an if statement in Python?
&#10;
Python variables are scoped to the innermost function, class, or module in
which they're assigned. Control blocks like `if` and `while` blocks don't count,
so a variable assigned inside an if is still scoped to a function, class, or
module.

If a name is declared global, then all references and assignments go directly to
the ==next-to-last== scope containing the module’s global names. To rebind
variables found outside of the innermost scope, the `nonlocal` statement can be
used; if not declared nonlocal, those variables are read-only (an attempt to
write to such a variable will simply create a *new* local variable in the
innermost scope, leaving the identically named outer variable unchanged).

Usually, the local scope references the local names of the (textually)
==current function==. Outside functions, the local scope references the same
namespace as the global scope: the module’s namespace. Class definitions place
yet another namespace in the local scope.

What this code will print?
```python
a = "global"
class C:
    a = "class"
    def f():
        print(a)
    f()
```
&#10;
The code will print `global`. The `a` in the `print` statement is not qualified
by a namespace, so it refers to the global `a` rather than the class `a`.
If you remove `a` from the global scope, the code will raise a `NameError`.

It is important to realize that scopes are determined textually: the global
scope of a function defined in a module is that ==module’s namespace==, no
matter from where or by what alias the function is called.

On the other hand, the actual search for names is done
==dynamically, at run time== — however, the language definition is evolving
towards static name resolution, at “compile” time, so don’t rely on it! (In
fact, local variables are already determined statically.)

If no `global` or `nonlocal` statement is in effect – assignments to names
always go into the ==innermost== scope.

Assignments do not copy data — they just ==bind names to objects==. The same is
true for deletions: the statement `del x` removes the binding of `x` from the
namespace referenced by the local scope. In fact, all operations that introduce
new names use the local scope: in particular, `import` statements and function
definitions bind the module or function name in the local scope.

The `global` statement can be used to indicate that particular variables live in
the global scope and should be rebound there; the `nonlocal` statement indicates
that particular variables live in an ==enclosing scope== and should be rebound
there.

This is an example demonstrating how to reference the different scopes and
namespaces, and how `global` and `nonlocal` affect variable binding.
```python
def scope_test():
    def do_local():
        spam = "local spam"

    def do_nonlocal():
        nonlocal spam
        spam = "nonlocal spam"

    def do_global():
        global spam  # module-level binding
        spam = "global spam"

    spam = "test spam" # scope_test binding

    # Step 1.
    do_local()
    print("After local assignment:", spam)

    # Step 2.
    do_nonlocal()
    print("After nonlocal assignment:", spam)

    # Step 3.
    do_global()
    print("After global assignment:", spam)

# Step 4.
# `spam` not exists in module-level binding
scope_test()
# now `spam` exists in module-level binding
print("In global scope:", spam)
```
The output of the example code is:
&#10;
```
After local assignment: test spam
After nonlocal assignment: nonlocal spam
After global assignment: nonlocal spam
In global scope: global spam
```
\
Note how the *local* assignment (which is default) didn’t change *scope_test*'s
binding of *spam*. The `nonlocal` assignment changed *scope_test*'s binding of
*spam*, and the `global` assignment changed the module-level binding.
\
You can also see that there was no previous binding for *spam* before the
`global` assignment.

The simplest form of class definition looks like this:
&#10;
```python
class ClassName:
    <statement-1>
    <statement-N>
```

Class definitions, like function definitions (`def` statements) must be
==executed== before they have any effect. You could conceivably place a class
definition in a branch of an `if` statement, or inside a function.

In practice, the statements inside a class definition will usually be function
definitions, but other statements are allowed, and sometimes useful. The
function definitions inside a class normally have a peculiar form of argument
list, dictated by the calling conventions for ==methods== (how we name functions
in class).

When a class definition is entered, a new namespace is created, and used as the
==local== scope — thus, all assignments to local variables go into this new
namespace. In particular, function definitions bind the name of the new function
here.

When a class definition is left normally (via the end), a ==*class object*== is
created. This is basically a wrapper around the contents of the namespace
created by the class definition; The original local scope (the one in effect
just before the class definition was entered) is reinstated, and the class
object is bound here to the class name given in the class definition header
(`ClassName` in the example).

Class objects support two kinds of operations: ==attribute references and
instantiation==.

*Attribute references* use the standard syntax used for all attribute references
in Python: ==`obj.name`==. Valid attribute names are all the names that were in
the class’s namespace when the class object was created. So, if the class
definition looked like this:
```python
class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'
```
then `MyClass.i` and `MyClass.f` are valid attribute references, returning an
integer and a function object, respectively. Class attributes can also be
assigned to, so you can change the value of `MyClass.i` by assignment. `__doc__`
is also a valid attribute, returning the docstring belonging to the class: `"A
simple example class"`.

How to create new instance of class?
&#10;
Class *instantiation* uses function notation. Just pretend that the class object
is a parameterless function that returns a new instance of the class. For
example (assuming the above class):
```python
x = MyClass()
```
creates a new *instance* of the class and assigns this object to the local
variable `x`.

The instantiation operation (“calling” a class object) creates an empty object.
Many classes like to create objects with instances customized to a specific
initial state. Therefore a class may define a special method named
==`__init__`, `__init__(self, ...)`== (automatically invokes on class
instantiation).

Now what can we do with instance objects? The only operations understood by
instance objects are ==attribute== references.

There are two kinds of valid attribute names: ==data attributes and methods==.

Do we need to declare data attributes in Python?
&#10;
*data attributes* correspond to “instance variables” in Smalltalk, and to “data
members” in C++. Data attributes need **not be** declared; like local variables,
they spring into existence when they are first assigned to. For example, if `x`
is the instance of `MyClass` created above, the following piece of code will
print the value `16`, without leaving a trace:
```python
x.counter = 1
while x.counter < 10:
    x.counter = x.counter * 2
print(x.counter)
del x.counter
```

A method (kind of instance attribute reference) is a function that
==“belongs to”== an object.
\
Valid method names of an instance object depend on its class. By definition, all
attributes of a class that are function objects define corresponding methods of
its instances. So in our example, `x.f` is a valid method reference, since
`MyClass.f` is a function, but `x.i` is not, since `MyClass.i` is not. But `x.f`
is not the same thing as `MyClass.f` — it is a *method object*, not a function
object.
```python
class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'

# Usually, a method is called right after it is bound:
x = MyClass()
print(x.f())  # returns 'hello world', x here is an instance of MyClass, and
              # we pass here x as the first argument to the method `f`

# However, it is not necessary to call a method right away: `x.f` is a method
# object, and can be stored away and called at a later time.
#
# This will continue to print `hello world` until the end of time.
xf = x.f
while True:
    print(xf())
    break  # avoid infinite loop, remove this line to see the effect
```

In general, calling a method with a list of *n* arguments is equivalent to
calling the corresponding function with an argument list that is created by
inserting the method’s ==instance object== before the first argument.

How Python class methods are working if we are reference non-data attribute of
a class instance with some arguments?
&#10;
When a non-data attribute of an instance is referenced, the instance’s class is
searched.
\
If the name denotes a valid class attribute that is a function object,
references to both the instance object and the function object are packed into a
method object.
\
When the method object is called with an argument list, a new argument list is
constructed from the instance object and the argument list, and the function
object is called with this new argument list.


Generally speaking, instance variables are for data unique to each instance and
class variables are for attributes and methods shared by all
==instances of the class==:

```python
class Dog:
    kind = 'canine'         # class variable shared by all instances

    def __init__(self, name):
        self.name = name    # instance variable unique to each instance

d = Dog('Fido')
e = Dog('Buddy')
d.kind                  # 'canine', shared by all dogs
e.kind                  # 'canine', shared by all dogs
d.name                  # 'Fido', unique to d
e.name                  # 'Buddy', unique to e
```

Possible surprising effect of this code? Can it be improved?
```python
class Dog:
    tricks = []             # mistaken use of a class variable

    def __init__(self, name):
        self.name = name

    def add_trick(self, trick):
        self.tricks.append(trick)

d = Dog('Fido')
e = Dog('Buddy')
d.add_trick('roll over')
e.add_trick('play dead')
```
&#10;
Shared data can have possibly surprising effects with involving mutable objects
such as lists and dictionaries. For example, the *tricks* list in the following
code should not be used as a class variable because just a single list would be
shared by all *Dog* instances:
```python
class Dog:
    tricks = []             # mistaken use of a class variable

    def __init__(self, name):
        self.name = name

    def add_trick(self, trick):
        self.tricks.append(trick)

d = Dog('Fido')
e = Dog('Buddy')
d.add_trick('roll over')
e.add_trick('play dead')
d.tricks  # unexpectedly shared by all dogs ['roll over', 'play dead']
```
Correct design of the class should use an instance variable instead:
```python
class Dog:
    def __init__(self, name):
        self.name = name
        self.tricks = []    # creates a new empty list for each dog

    def add_trick(self, trick):
        self.tricks.append(trick)

d = Dog('Fido')
e = Dog('Buddy')
d.add_trick('roll over')
e.add_trick('play dead')
d.tricks  # ['roll over']
e.tricks  # ['play dead']
```

If the same attribute name occurs in both an instance and in a class, then
attribute lookup prioritizes the ==instance==:
```python
class Warehouse:
   purpose = 'storage'
   region = 'west'

w1 = Warehouse()
print(w1.purpose, w1.region) # storage west

w2 = Warehouse()
w2.region = 'east'  # override the class attribute for current instance
print(w2.purpose, w2.region) # storage east

print(Warehouse.purpose, Warehouse.region) # storage west
```

Data attributes may be referenced by methods as well as by ordinary users
(“clients”) of an object. In other words, classes are not usable to implement
pure abstract data types. ==In fact, nothing== in Python makes it possible to
enforce data hiding — it is all based upon convention. (On the other hand, the
Python implementation, written in C, can completely hide implementation details
and control access to an object if necessary; this can be used by extensions to
Python written in C.)

Clients should use data attributes with care — clients may mess up invariants
maintained by the methods by stamping on their data attributes. Note that
clients may add data attributes of their own to an instance object without
affecting the validity of the methods, as long as name conflicts are avoided —
again, a ==naming== convention can save a lot of headaches here.

There is no shorthand for referencing data attributes (or other methods!) from
within methods (need to use ==`self` or `cls`==). I find that this actually
increases the readability of methods: there is no chance of confusing local
variables and instance variables when glancing through a method.

Often, the first argument of a method is called `self`. This is nothing more
than a convention: the name `self` has ==absolutely no== special meaning to
Python. Note, however, that by not following the convention your code may be
less readable to other Python programmers, and it is also conceivable that a
*class browser* program might be written that relies upon such a convention.

Any function object that is a class attribute defines a ==method== for instances
of that class. It is not necessary that the function definition is textually
enclosed in the class definition: assigning a function object to a local
variable in the class is also ok. For example:
```python
# Function defined outside the class
def f1(self, x, y):
    return min(x, x+y)

class C:
    f = f1

    def g(self):
        return 'hello world'

    h = g

# Now `f`, `g` and `h` are all attributes of class `C` that refer to function
# objects, and consequently they are all methods of instances of `C` — `h` being
# exactly equivalent to `g`. Note that this practice usually only serves to
# confuse the reader of a program.
```

Methods may call other methods by using method attributes of the ==`self`==
argument:
```python
class Bag:
    def __init__(self):
        self.data = []

    def add(self, x):
        self.data.append(x)

    def addtwice(self, x):
        self.add(x)
        self.add(x)
```

<!-- https://stackoverflow.com/questions/68117207/how-do-modules-and-scope-interact-when-the-same-module-is-imported-into-the-same -->
<!-- NEXT: need review this and next notes-->

Methods may reference global names in the same way as ordinary functions. The
global scope associated with a method is the ==module== containing its
definition.

A class is never used as a ==global== scope. While one rarely encounters a good
reason for using global data in a method, there are many legitimate uses of the
global scope: for one thing, functions and modules imported into the global
scope can be used by methods, as well as functions and classes defined in it.
Usually, the class containing the method is itself defined in this global scope.

Each value is an object, and therefore has a *class* (also called its *type*).
It is stored as `object.==__class__==`.

To get parent class you can use this dunder variable:
==`object.__class__.__bases__`==.

Of course, a language feature would not be worthy of the name “class” without
supporting inheritance. The syntax for a derived class definition looks like
this:
&#10;
```python
class DerivedClassName(BaseClassName):
    <statement-1>
    <statement-N>
```
The name `BaseClassName` must be defined in a namespace accessible from the
scope containing the derived class definition. In place of a base class name,
other arbitrary expressions are also allowed. This can be useful, for example,
when the base class is defined in another module:
```python
class DerivedClassName(modname.BaseClassName):
```

Execution of a derived class definition proceeds the same as for a base class.
When the class object is constructed, the base class is remembered. This is used
for resolving attribute references: if a requested attribute is not found in the
class, the search proceeds to look in the ==base class==. This rule is applied
recursively if the base class itself is derived from some other class.

There’s nothing special about instantiation of derived classes:
`DerivedClassName()` creates a new instance of the class. Method references are
resolved as follows: the corresponding class attribute is searched, descending
down the chain of ==base== classes if necessary, and the method reference is
valid if this yields a function object.

Derived classes may override methods of their base classes. Because methods have
no special privileges when calling other methods of the same object, a method of
a base class that calls another method defined in the same base class may end up
calling a method of a derived class that ==overrides it.== (For C++ programmers:
all methods in Python are effectively `virtual`.)

An overriding method in a derived class may in fact want to extend rather than
simply replace the base class method of the same name. There is a simple way to
call the base class method directly: just call
==`BaseClassName.methodname(self, arguments)`==. This is occasionally useful to
clients as well. Note: that this only works if the base class is accessible as
`BaseClassName` in the global scope.

Python has two built-in functions that work with inheritance (check type of an
object):
&#10;
- Use `isinstance()` to check an instance’s type: `isinstance(obj, int)` will be
`True` only if `obj.__class__` is `int` or some class derived from `int`
- Use `issubclass()` to check class inheritance: `issubclass(bool, int)` is
`True` since `bool` is a subclass of `int`. However, `issubclass(float, int)` is
`False` since `float` is not a subclass of `int`.


Python supports a form of multiple inheritance as well. A class definition with
multiple base classes looks like this:
```python
class DerivedClassName(Base1, Base2, Base3):
    <statement-1>
    <statement-N>
```
\
For most purposes, in the simplest cases, you can think of the search for
attributes inherited from a parent class as depth-==first, left-to-right==, not
searching twice in the same class where there is an overlap in the hierarchy.
Thus, if an attribute is not found in `DerivedClassName`, it is searched for in
`Base1`, then (recursively) in the base classes of `Base1`, and if it was not
found there, it was searched for in `Base2`, and so on (in fact more complex
logic is used here).

In fact, search for attributes from derived classes more complex than
depth-first, left-to-right; the method resolution order changes dynamically to
support cooperative calls to ==`super()`==. This approach is known in some other
multiple-inheritance languages as call-next-method and is more powerful than the
super call found in single-inheritance languages.

Dynamic ordering is necessary because all cases of multiple inheritance exhibit
one or more diamond relationships (where at least one of the parent classes can
be accessed through multiple paths from the bottommost class). For example, all
classes inherit from `object`, so any case of multiple inheritance provides more
than one path to reach `object`. To keep the base classes from being accessed
more than once, the dynamic algorithm linearizes the search order in a way that
preserves the ==left-to-right== ordering specified in each class, that calls
each parent only once, and that is monotonic (meaning that a class can be
subclassed without affecting the precedence order of its parents). Taken
together, these properties make it possible to design reliable and extensible
classes with multiple inheritance. For more detail, see [The Python 2.3 Method
Resolution Order](https://docs.python.org/3/howto/mro.html#python-2-3-mro).

Do “private” instance variables exist in Python?
&#10;
“Private” instance variables that cannot be accessed except from inside an
object don’t exist in Python. However, there is a convention that is followed by
most Python code: a name prefixed with an underscore (e.g. `_spam`) should be
treated as a non-public part of the API (whether it is a function, a method or a
data member). It should be considered an implementation detail and subject to
change without notice.

Since there is a valid use-case for class-private members (namely to avoid
**name clashes** of names with names defined by subclasses), there is limited
support for such a mechanism, called ==*name mangling*==. Any identifier of the
form `__spam` (at least two leading underscores, at most one trailing
underscore) is textually replaced with `_classname__spam`, where `classname` is
the current class name with leading underscore(s) stripped. This mangling is
done without regard to the syntactic position of the identifier, as long as it
occurs within the definition of a class.

Name mangling is helpful for letting subclasses override methods without
breaking intraclass method calls. For example:
```python
class Mapping:
    def __init__(self, iterable):
        self.items_list = []
        self.__update(iterable)

    def update(self, iterable):
        for item in iterable:
            self.items_list.append(item)

    __update = update   # private copy of original update() method

class MappingSubclass(Mapping):

    def update(self, keys, values):
        # provides new signature for update()
        # but does not break __init__()
        for item in zip(keys, values):
            self.items_list.append(item)
```
Will this example work if `MappingSubclass` introduces a `__update` identifier?
&#10;
Yes. The above example would work even if `MappingSubclass` were to introduce a
`__update` identifier since it is replaced with `_Mapping__update` in the
`Mapping` class and `_MappingSubclass__update` in the `MappingSubclass` class
respectively. Example:
```python
class Mapping:
    __update = "__update"

class MappingSubclass(Mapping):
    __update = "__update"

print(dir(Mapping))          # ['_Mapping__update', '__doc__', '__module__']
print(dir(MappingSubclass))  # ['_MappingSubclass__update', '__doc__', '__module__']
```

Note that the mangling rules are designed mostly to avoid accidents; it
==still is possible== to access or modify a variable that is considered private.
This can even be useful in special circumstances, such as in the debugger.

<!-- NEXT: need to understand why -->

Notice that code passed to `exec()` or `eval()` does not consider the classname
of the invoking class to be the current class; this is similar to the effect of
the `global` statement, the effect of which is likewise restricted to code that
is byte-compiled together. The same restriction applies to `getattr()`,
`setattr()` and `delattr()`, as well as when referencing `__dict__` directly.
\
In other words "magic" of double-underscores will not work with exec or eval, so
consider the following example:
```python
class Foo:
    def __init__(self):
        self.__bar = 42
    def method0(self):
        return self.__bar * 2
    def method1(self):
        return eval('self.__bar * 2')

f = Foo()
f.method0()  # 84

f.method1()
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
#   File "<stdin>", line 7, in method1
#   File "<string>", line 1, in <module>
# AttributeError: 'Foo' object has no attribute '__bar'
# Similarly, for getattr etc:

getattr(f, '__bar')
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# AttributeError: 'Foo' object has no attribute '__bar'
```

Sometimes it is useful to have a data type similar to the Pascal “record” or C
“struct”, bundling together a few named data items. The idiomatic approach is to
use [`dataclasses`](https://docs.python.org/3/library/dataclasses.html#module-dataclasses).
(generate special methods on user-defined classes) for this purpose, can you
provide simple example?
&#10;
```python
from dataclasses import dataclass

@dataclass
class Employee:
    name: str
    dept: str
    salary: int

john = Employee('john', 'computer lab', 1000)
print(john.dept)    # 'computer lab'
print(john.salary)  # 1000
```

A piece of Python code that expects a particular abstract data type can often be
passed a ==class== that emulates the methods of that data type instead. For
instance, if you have a function that formats some data from a file object, you
can define a class with methods `read()`  and `readline()` that get the data
from a string buffer instead, and pass it as an argument.

[Instance method
objects](https://docs.python.org/3/reference/datamodel.html#instance-methods)
have attributes, too: `m.__self__` is the instance object with the method `m()`,
and ==`m.__func__`==  is the function object corresponding to the method.

By now you have probably noticed that most container objects can be looped over
using a `for`
statement:
\
```python
for element in [1, 2, 3]:
    print(element)
for element in (1, 2, 3):
    print(element)
for key in {'one':1, 'two':2}:
    print(key)
for char in "123":
    print(char)
for line in open("myfile.txt"):
    print(line, end='')
```
\
This style of access is clear, concise, and convenient. The use of iterators
pervades and unifies Python. Behind the scenes, the `for` statement calls
==`iter()`== on the container object. The function returns an iterator object
that defines the method `__next__()` which accesses elements in the container
one at a time. When there are no more elements, `__next__()` raises a
`StopIteration` exception which tells the `for` loop to terminate. You can call
the `__next__()` method using the `next()` built-in function; this example shows
how it all works:
\
```python
s = 'abc'
it = iter(s)
print(it)  # <str_iterator object at 0x10c90e650>
print(next(it))  # 'a'
print(next(it))  # 'b'
print(next(it))  # 'c'
print(next(it))
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
#     next(it)
# StopIteration
```

Can you provide an example of how to create an iterator class?
&#10;
Having seen the mechanics behind the iterator protocol, it is easy to add
iterator behavior to your classes. Define an `__iter__()` method which returns
an object with a `__next__()` method. If the class defines `__next__()`, then
`__iter__()` can just return `self`:
\
```python
class Reverse:
    """Iterator for looping over a sequence backwards."""
    def __init__(self, data):
        self.data = data
        self.index = len(data)

    def __iter__(self):
        return self  # Object with __next__ method

    def __next__(self):
        if self.index == 0:
            raise StopIteration  # Signal the end of iteration
        self.index = self.index - 1  # Offset by -1
        return self.data[self.index]

rev = Reverse('spam')
iter(rev)  # <__main__.Reverse object at 0x00A1DB50>
for char in rev:
    print(char)

# m
# a
# p
# s
```

What is a generator in Python?
&#10;
[Generators](https://docs.python.org/3/glossary.html#term-generator) are a
simple and powerful tool for creating iterators. They are written like regular
functions but use the
[`yield`](https://docs.python.org/3/reference/simple_stmts.html#yield) statement
whenever they want to return data. Each time
[`next()`](https://docs.python.org/3/library/functions.html#next "next") is
called on it, the generator resumes where it left off (it remembers all the data
values and which statement was last executed). An example shows that generators
can be trivially easy to create:
&#10;
```python
def reverse(data):  # Generator function
    for index in range(len(data)-1, -1, -1):
        yield data[index]  # Pause iterations here and return the value to func.
        # Point of execution is saved here, we resume when external code calls
        # the next() method

generator_object = reverse('golf')
print(generator_object)  # <generator object reverse at 0x00A1DB50>
for char in generator_object:
    print(char)

# f
# l
# o
# g
```

Anything that can be done with generators can also be done with class-based
==iterators==. What makes generators so compact is that the `__iter__()` and
`__next__()` methods are created automatically.
\
Another key feature is that the local variables and execution state are
automatically saved between calls. This made the function easier to write and
much more clear than an approach using instance variables like `self.index` and
`self.data`.
\
In addition to automatic method creation and saving program state, when
generators terminate, they automatically raise `StopIteration`. In combination,
these features make it easy to create iterators with no more effort than writing
a regular function.

How to create Generator Expressions? Can you provide some examples?
&#10;
Some simple generators can be coded succinctly as expressions using a syntax
similar to list comprehensions but with parentheses instead of square brackets.
These expressions are designed for situations where the generator is used right
away by an enclosing function. Generator expressions are more compact but less
versatile than full generator definitions and tend to be more memory friendly
than equivalent list comprehensions:
```python
sum(i*i for i in range(10))                 # 285, sum of squares

xvec = [10, 20, 30]
yvec = [7, 5, 3]
sum(x*y for x,y in zip(xvec, yvec))         # 260,  dot product

page = "lorem ipsum dolor"
unique_words = set(word for line in page  for word in line.split())

valedictorian = max((student.gpa, student.name) for student in graduates)

data = 'golf'
list(data[i] for i in range(len(data)-1, -1, -1))
# ['f', 'l', 'o', 'g']
```

## 10. Brief Tour of the Standard Library

Which module from standard library is used to work with operating system?
&#10;
The `os` module provides dozens of functions for interacting with the
operating system:
```python
import os
os.getcwd()      # 'C:\\Python314', Return the current working directory
os.chdir('/var/log')   # Change current working directory
os.system('mkdir nginx')   # 0, Run the command mkdir in the system shell
```
\
Be sure to use the `import os` style instead of `from os import *`.  This will
keep `os.open` from shadowing the built-in `open` function which operates much
differently.

The built-in `dir` and `help` functions are useful as interactive
aids for working with large modules like `os`. What `dir(os)` and `help(os)`
will return?
&#10;
```python
import os
dir(os) # <returns a list of all module functions>
help(os) # <returns an manual page created from the module's docstrings>
```

For daily file and directory management tasks, the `shutil` module provides
a higher level interface that is easier to use, how to copy or move files with
`shutil`?
&#10;
```python
import shutil
shutil.copyfile('data.db', 'archive.db')  # 'archive.db'
shutil.move('/build/executables', 'installdir')  # 'installdir'
```

The `glob` module provides a function for making file lists from directory
wildcard searches, how to list all files in the current directory with `py`
extension?
&#10;
```python
import glob
glob.glob('*.py')  # ['primes.py', 'random.py', 'quote.py']
```

Common utility scripts often need to process command line arguments. These
arguments are stored in the `sys` module's *argv* attribute as a list.  For
instance, let's take the following `demo.py` file:
```python
# File demo.py
import sys
print(sys.argv)
```
What this script will print if we run it with this command `python demo.py one two three`?
&#10;
# ['demo.py', 'one', 'two', 'three']

The `argparse` module provides a more sophisticated mechanism to process
command line arguments. The following script extracts one or more filenames
and an optional number of lines to be displayed:
```python
import argparse

parser = argparse.ArgumentParser(
    prog='top',
    description='Show top lines from each file')
parser.add_argument('filenames', nargs='+')
parser.add_argument('-l', '--lines', type=int, default=10)
args = parser.parse_args()

print(args)
```
When run at the command line with `python top.py --lines=5 alpha.txt beta.txt`,
the script sets `args.lines` and `args.filenames` to?
&#10;
`args.lines` to `5` and `args.filenames` to `['alpha.txt', 'beta.txt']`.

The `sys` module also has attributes for *stdin*, *stdout*, and *stderr*.
The latter is useful for emitting warnings and error messages to make them
visible even when *stdout* has been redirected:
```python
sys.stderr.write('Warning, log file not found starting a new one\n')
# Warning, log file not found starting a new one
```

The most direct way to terminate a script (using `sys` module) is to use
==`sys.exit()`==.

Which python standard library module is used to work with regular expressions?
&#10;
The `re` module provides regular expression tools for advanced string
processing. For complex matching and manipulation, regular expressions offer
succinct, optimized solutions:
```python
import re

print(re.findall(r'\bf[a-z]*', 'which foot or hand fell fastest'))
# ['foot', 'fell', 'fastest']
print(re.sub(r'(\b[a-z]+) \1', r'\1', 'cat in the the hat'))
# 'cat in the hat'
```

When only simple capabilities are needed, ==string== methods are preferred over
`re` because they are easier to read and debug:
```python
print('tea for too'.replace('too', 'two'))
# 'tea for two'
```

Which standard library module gives access to the underlying C library functions
for floating point math:
&#10;
The `math` module.
```python
import math
print(math.cos(math.pi / 4))  # 0.70710678118654757
print(math.log(1024, 2))      # 10.0
```

Which standard library module is used to work with random numbers?
&#10;
The `random` module provides tools for making random selections:
```python
import random
print(random.choice(['apple', 'pear', 'banana']))  # something from list
print(random.sample(range(100), 10))               # sampling without replacement
print(random.random())                             # random float from the interval [0.0, 1.0)
print(random.uniform(1, 10))                       # random float from the interval [1, 10)
print(random.randrange(6))                         # random integer chosen from range(6)
```

Which standard library module is used to work with statistics?
&#10;
The `statistics` module calculates basic statistical properties
(the mean, median, variance, etc.) of numeric data:
```python
import statistics
data = [2.75, 1.75, 1.25, 0.25, 0.5, 1.25, 3.5]
print(statistics.mean(data))     # 1.6071428571428572, mean is the average of the data
print(statistics.median(data))   # 1.25, median is the middle value of the data
print(statistics.variance(data)) # 1.3720238095238095, variance is the average of the squared differences from the mean
# The SciPy project <https://scipy.org> has many other modules for numerical computations.
# NEXT: what is actually variance?
```

Which standard library module is used to work with retrieving data from URL's
and sending mail?
&#10;
There are a number of modules for accessing the internet and processing internet
protocols. Two of the simplest are `urllib.request` for retrieving data
from URLs and `smtplib` for sending mail.
&#10;
```python
from urllib.request import urlopen
with urlopen('http://worldtimeapi.org/api/timezone/etc/UTC.txt') as response:
    for line in response:
        line = line.decode()             # Convert bytes to a str
        if line.startswith('datetime'):
            print(line.rstrip())         # Remove trailing newline

# datetime: datetime: 2024-07-01T08:37:06.769787+00:00
```

```python
# needs a mailserver running on localhost.
import smtplib
server = smtplib.SMTP('localhost')
server.sendmail('soothsayer@example.org', 'jcaesar@example.org',
   ... """To: jcaesar@example.org
   ... From: soothsayer@example.org
   ...
   ... Beware the Ides of March.
   ... """)
server.quit()
```

Which standard library module is used to work with dates and times?
&#10;
The `datetime` module supplies classes for manipulating dates and times in
both simple and complex ways. While date and time arithmetic is supported, the
focus of the implementation is on efficient member extraction for output
formatting and manipulation.  The module also supports objects that are timezone
aware.
```python
# dates are easily constructed and formatted
from datetime import date
now = date.today()
print(now)
# 2024-07-01
print(now.strftime("%m-%d-%y. %d %b %Y is a %A on the %d day of %B."))
# 07-01-24. 01 Jul 2024 is a Monday on the 01 day of July.
```
```python
# dates support calendar arithmetic
from datetime import date
birthday = date(1964, 7, 31)
now = date.today()
age = now - birthday
print(age.days) # 14368
```

Which Data Compression modules aviable in python standard library? How to use
for example zlib?
&#10;
Common data archiving and compression formats are directly supported by modules
including: `zlib`, `gzip`, `bz2`, `lzma`, `zipfile` and `tarfile`.
```python
import zlib
s = b'witch which has which witches wrist watch'
print(len(s)) # 41
print(zlib.crc32(s)) # 226805979

t = zlib.compress(s)
print(len(t)) # 37, less than 41
print(zlib.crc32(zlib.decompress(t))) # 226805979, same as above
```

Which performance measurement module is available in python standard library?
&#10;
Some Python users develop a deep interest in knowing the relative performance of
different approaches to the same problem. Python provides a measurement tool
that answers those questions immediately.
\
For example, it may be tempting to use the tuple packing and unpacking feature
instead of the traditional approach to swapping arguments. The `timeit`
module quickly demonstrates a modest performance advantage:
```python
from timeit import Timer
print(Timer('t=a; a=b; b=t', 'a=1; b=2').timeit())  # 0.57535828626024577
print(Timer('a,b = b,a', 'a=1; b=2').timeit())      # 0.54962537085770791
```
\
In contrast to `timeit`'s fine level of granularity, the `profile` and `pstats`
modules provide tools for identifying time critical sections in larger blocks of
code.

Which quality control module is available in python standard library to provide
automated docstring examples testing?
&#10;
The `doctest` module provides a tool for scanning a module and validating
tests embedded in a program's docstrings.  Test construction is as simple as
cutting-and-pasting a typical call along with its results into the docstring.
This improves the documentation by providing the user with an example and it
allows the doctest module to make sure the code remains true to the
documentation:
```python
import doctest

def average(values):
    """Computes the arithmetic mean of a list of numbers.

    >>> print(average([20, 30, 70]))
    40.0
    """
    return sum(values) / len(values)

print(doctest.testmod()) # automatically validate the embedded tests
# TestResults(failed=0, attempted=1)
```

Standard library module `unittest` is used for what purpose?
&#10;
The `unittest` module is not as effortless as the `doctest` module, but it
allows a more comprehensive set of tests to be maintained in a separate file:
```python
# TODO: writhe actual tests functions
import unittest

class TestStatisticalFunctions(unittest.TestCase):

   def test_average(self):
       self.assertEqual(average([20, 30, 70]), 40.0)
       self.assertEqual(round(average([1, 5, 7]), 1), 4.3)
       with self.assertRaises(ZeroDivisionError):
           average([])
       with self.assertRaises(TypeError):
           average(20, 30, 70)

unittest.main()  # Calling from the command line invokes all tests
```


Python has a "batteries included" philosophy.  This is best seen through the
sophisticated and robust capabilities of its larger packages. For example:

- The `xmlrpc.client` and `xmlrpc.server` modules make implementing
  ==remote procedure calls== into an almost trivial task.  Despite the modules'
  names, no direct knowledge or handling of XML is needed.

- The `email` package is a library for managing email messages, including
  MIME and other `2822`-based message documents. Unlike `smtplib` and
  `poplib` which actually send and receive messages, the email package has
  a complete toolset for building or decoding complex ==message== structures
  (including attachments) and for implementing internet encoding and header
  protocols.

- The `json` package provides robust support for parsing ==this (JSON)==
  popular data interchange format.  The `csv` module supports
  direct reading and writing of files in Comma-Separated Value format,
  commonly supported by databases and spreadsheets.  XML processing is
  supported by the `xml.etree.ElementTree`, `xml.dom` and
  `xml.sax` packages. Together, these modules and packages
  greatly simplify data interchange between Python applications and
  other tools.

- The `sqlite3` module is a wrapper for the ==SQLite== database
  library, providing a persistent database that can be updated and
  accessed using slightly nonstandard SQL syntax.

- Internationalization is supported by a number of modules including
  ==`gettext`, `locale`, and the `codecs`== package.

## 11. Brief Tour of the Standard Library — Part II

The `reprlib` module provides a version of `repr` customized for abbreviated
displays of ==large or deeply nested containers==:
```python
import reprlib
reprlib.repr(set('supercalifragilisticexpialidocious'))
```

The `pprint` module offers more sophisticated control over printing both
built-in and user defined objects in a way that is readable by the interpreter.
When the result is longer than one line, the "pretty printer" adds
==line breaks and indentation== to more clearly reveal data structure::
```python
import pprint
t = [[[['black', 'cyan'], 'white', ['green', 'red']], [['magenta',
    'yellow'], 'blue']]]

pprint.pprint(t, width=30)
# [[[['black', 'cyan'],
#    'white',
#    ['green', 'red']],
#   [['magenta', 'yellow'],
#    'blue']]]
```

The `textwrap` module formats ==paragraphs of text== to fit a given screen
width:
```python
import textwrap
doc = """The wrap() method is just like fill() except that it returns
a list of strings instead of one big string with newlines to separate
the wrapped lines."""

print(textwrap.fill(doc, width=80))
# The wrap() method is just like fill()
# except that it returns a list of strings
# instead of one big string with newlines
# to separate the wrapped lines.
```

The `locale` module accesses a database of ==culture specific== data formats.
The grouping attribute of locale's format function provides a direct way of
formatting numbers with group separators:
&#10;
```python
import locale
locale.setlocale(locale.LC_ALL, 'English_United States.1252')
# 'English_United States.1252'
conv = locale.localeconv()          # get a mapping of conventions
x = 1234567.8
x = locale.format_string("%d", x, grouping=True)
   # '1,234,567'
locale.format_string("%s%.*f", (conv['currency_symbol'],
                                conv['frac_digits'], x), grouping=True)
#   '$1,234,567.80'
```

The `string` module includes a versatile `string.Template` class with a
simplified syntax suitable for editing by end-users.  This allows users to
customize their applications without having to alter the application.
\
The format uses placeholder names formed by `$` with valid Python identifiers
(alphanumeric characters and underscores).  Surrounding the placeholder with
braces allows it to be followed by more alphanumeric letters with no intervening
spaces.  Writing `$$` creates a single escaped ==`$`==:
```python
from string import Template
t = Template('${village}folk send $$10 to $cause.')
print(t.substitute(village='Nottingham', cause='the ditch fund'))
# 'Nottinghamfolk send $10 to the ditch fund.'
```

The `string.Template.substitute` method raises a ==`KeyError`== when a
placeholder is not supplied in a dictionary or a keyword argument.  For
mail-merge style applications, user supplied data may be incomplete and the
`string.Template.safe_substitute` method may be more appropriate --- it will
leave placeholders unchanged if data is missing:
```python
from string import Template
t = Template('Return the $item to $owner.')
d = dict(item='unladen swallow')
t.substitute(d)
# Traceback (most recent call last):
#   ...
# KeyError: 'owner'
t.safe_substitute(d)
# 'Return the unladen swallow to $owner.'
```

Can I use custom delimiters for `string.Template`?
&#10;
Template subclasses can specify a custom delimiter.  For example, a batch
renaming utility for a photo browser may elect to use percent signs for
placeholders such as the current date, image sequence number, or file format:
```python
import time, os.path
from string import Template

photofiles = ['img_1074.jpg', 'img_1076.jpg', 'img_1077.jpg']
class BatchRename(Template):
    delimiter = '%'

fmt = input('Enter rename style (%d-date %n-seqnum %f-format):  ')
# Enter rename style (%d-date %n-seqnum %f-format): Ashley_%n%f

t = BatchRename(fmt)
date = time.strftime('%d%b%y')
for i, filename in enumerate(photofiles):
    base, ext = os.path.splitext(filename)
    newname = t.substitute(d=date, n=i, f=ext)
    print('{0} --> {1}'.format(filename, newname))

# img_1074.jpg --> Ashley_0.jpg
# img_1076.jpg --> Ashley_1.jpg
# img_1077.jpg --> Ashley_2.jpg
```
\
Another application for templating is separating program logic from the details
of multiple output formats.  This makes it possible to substitute custom
templates for XML files, plain text reports, and HTML web reports.


Which standard library module is used to work with binary data?
&#10;
The `struct` module provides `struct.pack` and `struct.unpack` functions for
working with variable length binary record formats.  The following example shows
how to loop through header information in a ZIP file without using the `zipfile`
module.  Pack codes `"H"` and `"I"` represent two and four byte unsigned numbers
respectively.  The `"<"` indicates that they are standard size and in
little-endian byte order:
```python
import struct

with open('/tmp/myfile.zip', 'rb') as f:
    data = f.read()

start = 0
for i in range(3):                      # show the first 3 file headers
    start += 14                         # standard offset
    fields = struct.unpack('<IIIHH', data[start:start+16])  # read first 16 bytes
    crc32, comp_size, uncomp_size, filenamesize, extra_size = fields

    start += 16
    filename = data[start:start+filenamesize]
    start += filenamesize
    extra = data[start:start+extra_size]
    print(filename, hex(crc32), comp_size, uncomp_size)

    start += extra_size + comp_size     # skip to the next header
```

When Threading is used in Python?
&#10;
Threading is a technique for decoupling tasks which are not sequentially
dependent.  Threads can be used to improve the responsiveness of applications
that accept user input while other tasks run in the background.  A related use
case is running I/O in parallel with computations in another thread.
\
The following code shows how the high level :mod:`threading` module can run
tasks in background while the main program continues to run:
```python
import threading, zipfile

class AsyncZip(threading.Thread):
   def __init__(self, infile, outfile):
       threading.Thread.__init__(self)
       self.infile = infile
       self.outfile = outfile

   def run(self):
       f = zipfile.ZipFile(self.outfile, 'w', zipfile.ZIP_DEFLATED)
       f.write(self.infile)
       f.close()
       print('Finished background zip of:', self.infile)

background = AsyncZip('mydata.txt', 'myarchive.zip')
background.start()
print('The main program continues to run in foreground.')

background.join()    # Wait for the background task to finish
print('Main program waited until background was done.')
```

The principal challenge of multi-threaded applications is coordinating threads
that share data or other resources.  To that end, the threading module provides
a number of synchronization primitives including
==locks, events, condition variables, and semaphores==.
\
While those tools are powerful, minor design errors can result in problems that
are difficult to reproduce.  So, the preferred approach to task coordination is
to concentrate all access to a resource in a single thread and then use the
`queue` module to feed that thread with requests from other threads.
Applications using `queue.Queue` objects for inter-thread communication and
coordination are easier to design, more readable, and more reliable.

<!-- NEXT: queue-threaded app research -->

The `logging` module offers a full featured and flexible logging system.
At its simplest, log messages are sent to a file or to ==`sys.stderr`==:
```python
import logging
logging.debug('Debugging information')
logging.info('Informational message')
logging.warning('Warning:config file %s not found', 'server.conf')
logging.error('Error occurred')
logging.critical('Critical error -- shutting down')
# WARNING:root:Warning:config file server.conf not found
# ERROR:root:Error occurred
# CRITICAL:root:Critical error -- shutting down
```

By default, informational and debugging messages are suppressed and the output
is sent to standard error. Other output options include routing messages through
email, datagrams, sockets, or to an HTTP Server.  New filters can select
different routing based on message priority: `logging.DEBUG`, `logging.INFO`,
`logging.WARNING`, `logging.ERROR`, and ==`logging.CRITICAL`==.

The logging system can be configured directly from Python or can be loaded from
a user ==editable configuration file== for customized logging without altering
the application.

Python does automatic memory management (reference counting for most objects and
==`[[garbage_collection|garbage collection]]`== to eliminate cycles).  The
memory is freed shortly after the last reference to it has been eliminated.

Automatic memory management works fine for most applications but occasionally
there is a need to track objects only as long as they are being used by
something else. Unfortunately, just tracking them creates a reference that makes
them permanent. The `weakref` module provides tools for tracking objects without
creating a reference.  When the object is no longer needed, it is automatically
==removed from a weakref table== and a callback is triggered for weakref
objects. Typical applications include caching objects that are expensive to
create:
```python
import weakref
import gc

class A:
    def __init__(self, value):
        self.value = value

    def __repr__(self):
        return str(self.value)

a = A(10)  # create a reference
d = weakref.WeakValueDictionary()
d["primary"] = a  # does not create a reference
d["primary"]      # 10, fetch the object if it is still alive
del a             # remove the one reference
gc.collect()      # 0, run garbage collection right away
d["primary"]      # entry was automatically removed

# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
#     d['primary']                # entry was automatically removed
#   File "C:/python314/lib/weakref.py", line 46, in __getitem__
#     o = self.data[key]()
# KeyError: 'primary'
```

Many data structure needs can be met with the built-in list type. However,
sometimes there is a need for alternative implementations with different
performance ==trade-offs==.

The `array` module provides an `array.array` object that is like a list that
stores only homogeneous data and stores it more ==compactly==. The following
example shows an array of numbers stored as two byte unsigned binary numbers
(typecode `"H"`) rather than the usual 16 bytes per entry for regular lists of
Python int objects:
```python
from array import array
a = array('H', [4000, 10, 700, 22222])
print(sum(a))  # 26932
print(a[1:3])  # array('H', [10, 700])
```

The `collections` module provides a `collections.deque` object that is like a
list with faster appends and pops from the left side but slower lookups in the
middle. These objects are well suited for implementing ==queues== and breadth
first tree searches:
```python
from collections import deque

d = deque(["task1", "task2", "task3"])
d.append("task4")
print("Handling", d.popleft())
# Handling task1
```
```python
unsearched = deque([starting_node])
def breadth_first_search(unsearched):
    node = unsearched.popleft()
    for m in gen_moves(node):
        if is_goal(m):
            return m
        unsearched.append(m)
```

In addition to alternative list implementations, the library also offers other
tools such as the `bisect` module with functions for manipulating ==sorted==
lists:
```python
import bisect
scores = [(100, "perl"), (200, "tcl"), (400, "lua"), (500, "python")]
bisect.insort(scores, (300, "ruby"))
print(scores)
# [(100, 'perl'), (200, 'tcl'), (300, 'ruby'), (400, 'lua'), (500, 'python')]
```

The `heapq` module provides functions for implementing ==heaps== based on regular
lists.  The lowest valued entry is always kept at position zero.  This is useful
for applications which repeatedly access the smallest element but do not want to
run a full list sort:
```python
from heapq import heapify, heappop, heappush
data = [1, 3, 5, 7, 9, 2, 4, 6, 8, 0]
heapify(data)                              # rearrange the list into heap order
heappush(data, -5)                         # add a new entry
print([heappop(data) for i in range(3)] )  # fetch the three smallest entries
# [-5, 0, 1]
```

The `decimal` module offers a `decimal.Decimal` datatype for
decimal floating point arithmetic. Compared to the built-in `float`
implementation of binary floating point, the class is especially helpful for
&#10;
- financial applications and other uses which require exact decimal
representation,
- control over precision,
- control over rounding to meet legal or regulatory requirements,
- tracking of significant decimal places, or
- applications where the user expects the results to match calculations done by
hand.

For example (decimal module), calculating a 5% tax on a 70 cent phone charge
gives different results in decimal floating point and binary floating point. The
difference becomes significant if the results are rounded to the nearest cent:
```python
from decimal import *
print(round(Decimal('0.70') * Decimal('1.05'), 2) )
print(round(.70 * 1.05, 2))
```
*Results:*
&#10;
```
0.74
0.73
```
\
<!-- NEXT: why four place significance? -->
The `decimal.Decimal` result keeps a trailing zero, automatically inferring four
place significance from multiplicands with two place significance. Decimal
reproduces mathematics as done by hand and avoids issues that can arise when
binary floating point cannot exactly represent decimal quantities.

Can you provide some examples of `Decimal` numbers expressions differences with
`float` numbers?
&#10;
Exact representation enables the `decimal.Decimal` class to perform modulo
calculations and equality tests that are unsuitable for binary floating point:
```python
from decimal import Decimal

# The modulo operator (`%`) calculates the remainder after division.
print(Decimal('1.00') % Decimal('.10'))  # Output: 0.00, 0.10 * 10 = 1.00
# However, due to limitations in floating-point representation, the actual result
# might have slight rounding errors. The `decimal` module helps mitigate this.
print(1.00 % 0.10)                       # 0.09999999999999995
print('---')

# We create a list containing 10 `Decimal('0.1')` elements.
# The `sum` function calculates the sum of the elements.
# The comparison checks if the sum is exactly equal to `Decimal('1.0')`.
print(sum([Decimal('0.1')]*10) == Decimal('1.0'))  # Output: True
# Due to floating-point limitations, repeated addition of these values can lead
# to slight inaccuracies that prevent an exact equality with 1.0.
sum_result = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1
print(sum_result, sum_result == 1.0)  # Output: False
print('---')
print(0.2 + 0.1)                        # 0.30000000000000004
print(Decimal('0.2') + Decimal('0.1'))  # 0.3
```

How to change precision of `Decimal` numbers?
&#10;
The `decimal` module provides arithmetic with as much precision as needed, you
can change the precision (number of significant digits) using the
`getcontext.prec` function parameter:
```python
from decimal import Decimal, getcontext
print(f"Default precision: {getcontext().prec}")
print(Decimal(1) / Decimal(7))
# Decimal('0.1428571428571428571428571429')
print('---')
getcontext().prec = 36
print(f"New precision: {getcontext().prec}")
print(Decimal(1) / Decimal(7))
# Decimal('0.142857142857142857142857142857142857')
```

## 12. Virtual Environments and Packages

When is suitable to use a virtual environment?
&#10;
Python applications will often use packages and modules that don't come as part
of the standard library.  Applications will sometimes need a **specific
version** of a library, because the application may require that a particular
bug has been fixed or the application may be written using an obsolete version
of the library's interface.
\
This means it may **not** be possible for one Python installation to meet
the requirements of every application.  If application A needs version
1.0 of a particular module but application B needs version 2.0, then
the requirements are in conflict and installing either version 1.0 or 2.0
will leave one application unable to run.
\
The solution for this problem is to create a `virtual environment`, a
self-contained directory tree that contains a **Python installation** for a
particular version of Python, plus a number of additional packages.
\
Different applications can then use different virtual environments.
To resolve the earlier example of conflicting requirements,
application A can have its own virtual environment with version 1.0
installed while application B has another virtual environment with version 2.0.
If application B requires a library be upgraded to version 3.0, this will
not affect application A's environment.


Which standard python module used to create virtual environments? Which Python
version will be installed in the virtual environment with this module?
&#10;
The module used to create and manage virtual environments is called
`venv`.  `venv` will install the Python version from which
the command was run (as reported by the `--version` option).
For instance, executing the command with ``python3.12`` will install
version 3.12.

To create a virtual environment, decide upon a directory where you want to
place it, and run the `venv` module as a script with the directory path:
&#10;
```python
python -m venv .venv
```
\
This will create the `.venv` directory if it doesn't exist, and also create
directories inside it containing a copy of the Python interpreter and various
supporting files. A common directory location for a virtual environment is
`.venv`. This name keeps the directory typically hidden in your shell and thus
out of the way while giving it a name that explains why the directory exists. It
also prevents clashing with `.env` environment variable definition files that
some tooling supports.

Once you've created a virtual environment, you may activate it.
&#10;
On Unix or MacOS, run:
```python
source .venv/bin/activate
```
On Windows, run:
```python
.venv\Scripts\activate
```
\
This script is written for the bash shell.  If you use the `csh` or `fish`
shells, there are alternate `activate.csh` and `activate.fish` scripts you
should use instead.

Activating the virtual environment will change your shell's prompt to show what
virtual environment you're using, and modify the environment so that running
`python` will get you that particular version and installation of Python.
For example:
&#10;
```sh
source .venv/bin/activate
python
# Python 3.11.8 (main, Feb  6 2024, 21:21:21) [GCC 13.2.0] on linux
  >>> import sys
  >>> sys.path
# ['', '/nix/store/.../python311.zip', '/nix/store/.../python3.11',
# '/nix/store/...python3.11/lib-dynload',
# '/tmp/.venv/lib/python3.11/site-packages']
```

To deactivate a virtual environment, type:
&#10;
`deactivate` into the terminal.

How to install, upgrade, and remove packages using standard Python program?
&#10;
You can install, upgrade, and remove packages using a program called `pip`. By
default `pip` will install packages from the `Python Package Index
<https://pypi.org>`.  You can browse the Python Package Index by going to it in
your [[web_browser|web browser]].

`pip` has a number of subcommands: =="install", "uninstall", "freeze", etc==.
Consult the [Installing Python
Modules](https://docs.python.org/3/installing/index.html#installing-index) guide
for complete documentation for `pip`.

You can install the latest version of a package by specifying a package's name:
&#10;
```sh
$ python -m pip install novas
# Collecting novas
#   Downloading novas-3.1.1.3.tar.gz (136kB)
# Installing collected packages: novas
#   Running setup.py install for novas
# Successfully installed novas-3.1.1.3
```

How to install specific version of a package, how to upgrade it?
&#10;
You can also install a specific version of a package by giving the
package name  followed by `==` and the version number:
```sh
$ python -m pip install requests==2.6.0
# Collecting requests==2.6.0
#   Using cached requests-2.6.0-py2.py3-none-any.whl
# Installing collected packages: requests
# Successfully installed requests-2.6.0
```
\
If you re-run this command, `pip` will notice that the requested
version is already installed and do nothing.  You can supply a
different version number to get that version, or you can run `python
-m pip install --upgrade` to upgrade the package to the latest version:
```sh
$ python -m pip install --upgrade requests
# Collecting requests
# Installing collected packages: requests
#   Found existing installation: requests 2.6.0
#     Uninstalling requests-2.6.0:
#       Successfully uninstalled requests-2.6.0
# Successfully installed requests-2.7.0
```

How to uninstall specific package?
&#10;
`python -m pip uninstall` followed by one or more package names will
remove the packages from the virtual environment.

How to display information about particular package?
&#10;
`python -m pip show` will display information about a particular package:
```sh
$ python -m pip show requests
# ---
# Metadata-Version: 2.0
# Name: requests
# Version: 2.7.0
# Summary: Python HTTP for Humans.
# Home-page: http://python-requests.org
# Author: Kenneth Reitz
# Author-email: me@kennethreitz.com
# License: Apache 2.0
# Location: /Users/akuchling/envs/tutorial-env/lib/python3.4/site-packages
# Requires:
```

How to list all of the packages installed in the virtual environment?
&#10;
`python -m pip list` will display them.
```sh
$ python -m pip list
  # novas (3.1.1.3)
  # numpy (1.9.2)
  # pip (7.0.3)
  # requests (2.7.0)
  # setuptools (16.0)
```

Command `python -m pip freeze` will produce a similar list of the installed
packages, but the output uses the format that ==`python -m pip install`==
(command) expects. A common convention is to put this list in a
`requirements.txt` file:
```sh
$ python -m pip freeze > requirements.txt
$ cat requirements.txt
# novas==3.1.1.3
# numpy==1.9.2
# requests==2.7.0
```
\
The `requirements.txt` can then be committed to version control and
shipped as part of an application.  Users can then install all the
necessary packages with `install -r`:
```sh
$ python -m pip install -r requirements.txt
# Collecting novas==3.1.1.3 (from -r requirements.txt (line 1))
#   ...
# Collecting numpy==1.9.2 (from -r requirements.txt (line 2))
#   ...
# Collecting requests==2.7.0 (from -r requirements.txt (line 3))
#   ...
# Installing collected packages: novas, numpy, requests
#   Running setup.py install for novas
# Successfully installed novas-3.1.1.3 numpy-1.9.2 requests-2.7.0
```

When you've written a package and want to make it available on the Python,
consult the [Python packaging user
guide](https://packaging.python.org/en/latest/tutorials/packaging-projects/).

## 13. What Now?

This tutorial is part of Python’s documentation set. Some other documents in the set are:

- [The Python Standard Library](https://docs.python.org/3/library/index.html):
You should browse through this manual, which gives complete (though terse)
reference material about types, functions, and the modules in the standard
library. The standard Python distribution includes a *lot* of additional code.
There are modules to read Unix mailboxes, retrieve documents via HTTP, generate
random numbers, parse command-line options, compress data, and many other tasks.
Skimming through the Library Reference will give you an idea of what’s
available.

- [Installing Python Modules](https://docs.python.org/3/installing/index.html)
explains how to install additional modules written by other Python users.

- [The Python Language
Reference](https://docs.python.org/3/reference/index.html): A detailed
explanation of Python’s syntax and semantics. It’s heavy reading, but is useful
as a complete guide to the language itself.


More Python resources:

- [https://www.python.org](https://www.python.org): The major Python web site.
It contains code, documentation, and pointers to Python-related pages around the
web.
- [https://docs.python.org](https://docs.python.org): Fast access to Python’s
documentation.
- [https://pypi.org](https://pypi.org): The Python Package Index, previously
also nicknamed the Cheese Shop, is an index of user-created Python modules that
are available for download. Once you begin releasing code, you can register it
here so that others can find it. “Cheese Shop” is a Monty Python’s sketch: a
customer enters a cheese shop, but whatever cheese he asks for, the clerk says
it’s missing.
- [https://code.activestate.com/recipes/langs/python/](https://code.activestate.com/recipes/langs/python/):
The Python Cookbook is a sizable collection of code examples, larger modules,
and useful scripts. Particularly notable contributions are collected in a book
also titled Python Cookbook (O’Reilly & Associates, ISBN 0-596-00797-3.)
- [https://pyvideo.org](https://pyvideo.org) collects links to Python-related
videos from conferences and user-group meetings.
- [https://scipy.org](https://scipy.org): The Scientific Python project includes
modules for fast array computations and manipulations plus a host of packages
for such things as linear algebra, Fourier transforms, non-linear solvers,
random number distributions, statistical analysis and the like.

For Python-related questions and problem reports, you can post to the newsgroup
*comp.lang.python*, or send them to the mailing list at
[python-list@python.org](mailto:python-list%40python.org). The newsgroup and
mailing list are gatewayed, so messages posted to one will automatically be
forwarded to the other. There are hundreds of postings a day, asking (and
answering) questions, suggesting new features, and announcing new modules.
Mailing list archives are available at
[https://mail.python.org/pipermail/](https://mail.python.org/pipermail/).

Before posting, be sure to check the list of [Frequently Asked
Questions](https://docs.python.org/3/faq/index.html#faq-index) (also called the
FAQ). The FAQ answers many of the questions that come up again and again, and
may already contain the solution for your problem.

## 14. Interactive Input Editing and History Substitution

Some versions of the Python interpreter support editing of the current input
line and history substitution, similar to facilities found in the Korn shell and
the GNU Bash shell. This is implemented using the [[GNU_Readline|GNU Readline]]
library, which supports various styles of editing. This library has its own
documentation which we won’t duplicate here.

## 14.1. Tab Completion and History Editing

Completion of variable and module names is [automatically
enabled](https://docs.python.org/3/library/site.html#rlcompleter-config)
at interpreter startup so that the Tab key invokes the completion function; it
looks at Python statement names, the current local variables, and the available
module names. For dotted expressions such as `string.a`, it will evaluate the
expression up to the final `'.'` and then suggest completions from the
attributes of the resulting object. Note that this may execute
application-defined code if an object with a
[`__getattr__()`](https://docs.python.org/3/reference/datamodel.html#object.__getattr__
"object.__getattr__") method is part of the expression. The default
configuration also saves your history into a file named ==`.python_history`== in
your user directory. The history will be available again during the next
interactive interpreter session.

## 14.2. Alternatives to the Interactive Interpreter

Which alternative interactive interpreter you know? When they suitable to use?
&#10;
This facility is an enormous step forward compared to earlier versions of the
interpreter; however, some wishes are left: It would be nice if the proper
indentation were suggested on continuation lines (the parser knows if an indent
token is required next). The completion mechanism might use the interpreter’s
symbol table. A command to check (or even suggest) matching parentheses, quotes,
etc., would also be useful.
\
One alternative enhanced interactive interpreter that has been around for quite
some time is [IPython](https://ipython.org/), which features tab completion,
object exploration and advanced history management. It can also be thoroughly
customized and embedded into other applications. Another similar enhanced
interactive environment is [bpython](https://bpython-interpreter.org/).

## 15. Floating Point Arithmetic: Issues and Limitations

[[floating-point_arithmetic|Floating-point numbers ]] are represented in
computer hardware as base 2 (binary) fractions. For example, the **decimal**
fraction `0.625` has value 6/10 + 2/100 + 5/1000, and in the same way the
**binary** fraction `0.101` has value 1/2 + 0/4 + 1/8. These two fractions
have identical values, the only real difference being that the first is written
in base ==10 fractional notation, and the second in base 2==.

Most decimal fractions ==cannot== be represented exactly as binary fractions. A
consequence is that, in general, the decimal floating-point numbers you enter
are only approximated by the binary floating-point numbers actually stored in
the machine.
\
The problem is easier to understand at first in base 10.  Consider the fraction
$1/3$.  You can approximate that as a base 10 fraction: $0.3$, or better,
$0.33$, or better, $0.333$ and so on. No matter how many digits you're willing
to write down, the result will never be exactly 1/3, but will be an increasingly
better approximation of 1/3.

No matter how many base 2 digits you're willing to use, the decimal value 0.1
cannot be represented exactly as a base 2 fraction.  In base 2, 1/10 is the
infinitely repeating fraction
==$0.0001100110011001100110011001100110011001100110011...$==
\
Stop at any finite number of bits, and you get an approximation.  On most
machines today, floats are approximated using a binary fraction with
the numerator using the first 53 bits starting with the most significant bit and
with the denominator as a power of two.  In the case of 1/10, the binary fraction
is `3602879701896397 / 2 ** 55` which is close to but not exactly equal to the
true value of 1/10.

Many users are not aware of the approximation because of the way values are
displayed.  Python only prints a decimal approximation to the true decimal
value of the binary approximation stored by the machine. On most machines, if
Python were to print the true decimal value of the binary approximation stored
for 0.1, it would have to display: ==$0.1$== instead
$0.1000000000000000055511151231257827021181583404541015625$.
\
That is more digits than most people find useful, so Python keeps the number
of digits manageable by displaying a rounded value instead.
\
Just remember, even though the printed result looks like the exact value
of 1/10, the actual stored value is the nearest representable binary fraction.

Interestingly, there are many different decimal numbers that share the same
nearest approximate binary fraction.  For example, the numbers `0.1` and
`0.10000000000000001` and
`0.1000000000000000055511151231257827021181583404541015625` are all
approximated by `3602879701896397 / 2 ** 55`.  Since all of these decimal
values share the same approximation, any one of them could be displayed
while still preserving the invariant `eval(repr(x)) == x`.
\
Historically, the Python prompt and built-in `repr` function would choose
the one with ==17== significant digits, `0.10000000000000001`.  Starting with
Python 3.1, Python (on most systems) is now able to choose the shortest of
these and simply display `0.1`.
\
Note that this is in the very nature of binary floating-point: this is not a bug
in Python, and it is not a bug in your code either. You'll see the same kind of
thing in all languages that support your hardware's floating-point arithmetic
(although some languages may not *display* the difference by default, or in all
output modes).

For more pleasant output, you may wish to use string formatting to produce a
limited number of significant digits:

```python
import math
format(math.pi, '.12g')  # give 12 ==significant digits==
# '3.14159265359'
```

```python
import math
format(math.pi, '.2f')   # give ==2 digits after the== point
# '3.14'
```

```python
import math
repr(math.pi)  # gives more digits, ==17== significant digits
# '3.141592653589793'
```

What this code return?
```python
print(0.1 + 0.1 == 0.3)
print(0.1 + 0.1 + 0.1 == 0.3)
```
&#10;
*Results:*
```
False
False
```
Since 0.1 is not exactly 1/10,
summing two/three values of 0.1 may not yield exactly 0.3, either:
\
Also, since the 0.1 cannot get any closer to the exact value of 1/10 and
0.3 cannot get any closer to the exact value of 3/10, then pre-rounding with
`round` function cannot help:
```python
import math
print(round(0.1, 1) + round(0.1, 1) + round(0.1, 1) == round(0.3, 1))
# False
```

When `math.isclose` function can be useful?
&#10;
Though the numbers cannot be made closer to their intended exact values,
the `math.isclose` function can be useful for comparing inexact values:
```python
import math
print(math.isclose(0.1 + 0.1 + 0.1, 0.3))
# True
```
\
Alternatively, the `round` function can be used to compare rough
approximations:
```python
import math
print(round(math.pi, ndigits=2) == round(22 / 7, ndigits=2))
# True
```

<!-- NEXT: need review this -->

Binary floating-point arithmetic holds many surprises like this.  The problem
with "0.1" is explained in precise detail below, in the "Representation Error"
section.  See `Examples of Floating Point Problems
<https://jvns.ca/blog/2023/01/13/examples-of-floating-point-problems/>`_ for
a pleasant summary of how binary floating-point works and the kinds of
problems commonly encountered in practice.  Also see
`The Perils of Floating Point <http://www.indowsway.com/floatingpoint.htm>`_
for a more complete account of other common surprises.

Every float operation in python can suffer a new ==rounding== error.

While pathological cases do exist, for most casual use of floating-point
arithmetic you'll see the result you expect in the end if you simply round the
display of your final results to the number of decimal digits you expect.
`str` usually suffices, and for finer control see the `str.format`
method's format specifiers in `formatstrings`.
\
For use cases which require exact decimal representation, try using the
==`decimal`== module which implements decimal arithmetic suitable for
accounting applications and high-precision applications.

Another form of exact arithmetic is supported by the `fractions` module
which implements arithmetic based on ==rational== numbers (so the numbers like
1/3 can be represented exactly).

If you are a heavy user of floating-point operations you should take a look
at the NumPy package and many other packages for mathematical and
statistical operations supplied by the SciPy project. See <https://scipy.org>.


How to display number value as ratio in python?
&#10;
Python provides tools that may help on those rare occasions when you really *do*
want to know the exact value of a float. The `float.as_integer_ratio` method
expresses the value of a float as a fraction:

```python
x = 3.14159
print(x.as_integer_ratio())
# (3537115888337719, 1125899906842624)

# Since the ratio is exact, it can be used to losslessly recreate the original
# value:
print(x == 3537115888337719 / 1125899906842624)
True
```

The `float.hex` method expresses a float in ==hexadecimal (base 16)==, again
giving the exact value stored by your computer:
```python
print(x.hex())
# 0x1.921f9f01b866ep+1

# This precise hexadecimal representation can be used to reconstruct
# the float value exactly:
print(x == float.fromhex('0x1.921f9f01b866ep+1'))
# True
```
\
Since the representation is exact, it is useful for reliably porting values
across different versions of Python (platform independence) and exchanging
data with other languages that support the same format (such as Java and C99).

`sum` function helps mitigate loss-of-precision during summation. It uses
==extended precision== for intermediate rounding steps as values are added onto a
running total. That can make a difference in overall accuracy so that the errors
do not accumulate to the point where they affect the final total:
```python
print(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 == 1.0)
# False
print(sum([0.1] * 10) == 1.0)
# True??? no actually false..., maybe some changes
```

The `math.fsum()` goes further and ==tracks all of the "lost digits"== as values
are added onto a running total so that the result has only a single rounding.
This is slower than `sum` but will be more accurate in uncommon cases where
large magnitude inputs mostly cancel each other out leaving a final sum near
zero:
```python
import math
from fractions import Fraction

arr = [-0.10430216751806065, -266310978.67179024, 143401161448607.16,
       -143401161400469.7, 266262841.31058735, -0.003244936839808227]

print(float(sum(map(Fraction, arr))))   # Exact summation with single rounding
# 8.042173697819788e-13

print(math.fsum(arr) )                  # Single rounding
# 8.042173697819788e-13

print('---')

print(sum(arr))                         # Multiple roundings in extended precision
# -0.0051575902860057365,               # may change in the future

total = 0.0
for x in arr:
    total += x                   # Multiple roundings in standard precision
print(total)                     # Straight addition has no correct digits!
# -0.0051575902860057365
```

==Representation== error refers to the fact that some (most, actually)
decimal fractions cannot be represented exactly as binary (base 2) fractions.
This is the chief reason why Python (or Perl, C, C++, Java, Fortran, and many
others) often won't display the exact decimal number you expect.

<!-- NEXT: need review -->

1/10 is not exactly representable as a binary fraction. Since at least 2000,
almost all machines use IEEE 754 binary
[[floating-point_arithmetic|floating-point arithmetic]], and almost all
platforms map Python floats to IEEE 754 binary64 "double precision" values. IEEE
754 binary64 values contain 53 bits of precision, so on input the computer
strives to convert 0.1 to the closest fraction it can of the form ==`J / 2**N`==
where *J* is an integer containing exactly 53 bits. Rewriting
`1 / 10 ~= J / (2**N)` as `J ~= 2**N / 10` and recalling that *J* has exactly 53 bits (is `>= 2**52` but `< 2**53`),
the best value for *N* is 56:
```python
2**52 <= 2**56 // 10 < 2**53
# True
```
\
That is, 56 is the only value for *N* that leaves *J* with exactly 53 bits.  The
best possible value for *J* is then that quotient rounded:
```python
q, r = divmod(2**56, 10)
r #  6
```
Since the remainder is more than half of 10, the best approximation is obtained
by rounding up:
```python
q+1
#  7205759403792794
```
Therefore the best possible approximation to 1/10 in IEEE 754 double precision
is:
```python
7205759403792794 / 2 ** 56
```
Dividing both the numerator and denominator by two reduces the fraction to::
```python
3602879701896397 / 2 ** 55
```

Note that since we rounded up, this is actually a little bit larger than 1/10;
if we had not rounded up, the quotient would have been a little bit smaller than
1/10.  But in no case can it be *exactly* 1/10!

So the computer never "sees" 1/10:  what it sees is the exact fraction given
above, the best IEEE 754 double approximation it can get:

.. doctest::

0.1 * 2 ** 55
   3602879701896397.0

If we multiply that fraction by 10\*\*55, we can see the value out to
55 decimal digits:

.. doctest::

3602879701896397 * 10 ** 55 // 2 ** 55
   1000000000000000055511151231257827021181583404541015625

meaning that the exact number stored in the computer is equal to
the decimal value 0.1000000000000000055511151231257827021181583404541015625.
Instead of displaying the full decimal value, many languages (including
older versions of Python), round the result to 17 significant digits:

.. doctest::

format(0.1, '.17f')
   '0.10000000000000001'

The :mod:`fractions` and :mod:`decimal` modules make these calculations
easy:

.. doctest::

from decimal import Decimal
from fractions import Fraction

Fraction.from_float(0.1)
   Fraction(3602879701896397, 36028797018963968)

(0.1).as_integer_ratio()
   (3602879701896397, 36028797018963968)

Decimal.from_float(0.1)
   Decimal('0.1000000000000000055511151231257827021181583404541015625')

format(Decimal.from_float(0.1), '.17')
   '0.10000000000000001'

## 16. Appendix

When an error occurs, the interpreter prints an error message and a stack trace.
In interactive mode, it then returns to the ==primary prompt==; when input came
from a file, it exits with a nonzero exit status after printing the stack trace.
Exceptions handled by an
[`except`](https://docs.python.org/3/reference/compound_stmts.html#except)
clause in a [`try`](https://docs.python.org/3/reference/compound_stmts.html#try)
statement are not errors in this context. Some errors are unconditionally fatal
and cause an exit with a nonzero exit status; this applies to internal
inconsistencies and some cases of running out of memory. All error messages are
written to the standard error stream; normal output from executed commands is
written to standard output.

Typing the interrupt character (usually `C-c` or `Delete`) to the primary or
secondary prompt cancels the input and returns to the primary prompt.
Typing an interrupt while a command is executing raises the
==[`KeyboardInterrupt`](https://docs.python.org/3/library/exceptions.html#KeyboardInterrupt)==
exception, which may be handled by a
[`try`](https://docs.python.org/3/reference/compound_stmts.html#try) statement.

On BSD’ish Unix systems, Python scripts can be made directly executable, like
shell scripts, by putting the line
&#10;
```sh
#!/usr/bin/env python3
```
Assuming that the interpreter is on the user’s `PATH` at the beginning of the
script and giving the file an executable mode. The `#!` must be the first two
characters of the file. On some platforms, this first line must end with a
Unix-style line ending (`'\n'`), not a Windows (`'\r\n'`) line ending. Note that
the hash, or pound, character, `'#'`, is used to start a comment in Python.

The script can be given an executable mode, or permission, using the **chmod**
command.
&#10;
```sh
$ chmod +x myscript.py
```

On Windows systems, there is no notion of an “executable mode”. The Python
installer automatically ==associates `.py` files with `python.exe`== so that a
double-click on a Python file will run it as a script. The extension can also be
`.pyw`, in that case, the console window that normally appears is suppressed.

When you use Python ==interactively==, it is frequently handy to have some
standard commands executed every time the interpreter is started. You can do
this by setting an environment variable named
[`PYTHONSTARTUP`](https://docs.python.org/3/using/cmdline.html#envvar-PYTHONSTARTUP)
to the name of a file containing your start-up commands. This is similar to the
`.profile` feature of the Unix shells.
\
This file is only read in interactive sessions, not when Python reads commands
from a script, and not when `/dev/tty` is given as the explicit source of
commands (which otherwise behaves like an interactive session). It is executed
in the same namespace where interactive commands are executed, so that objects
that it defines or imports can be used without qualification in the interactive
session. You can also change the prompts `sys.ps1` and `sys.ps2` in this file.

If you want to read an additional start-up file from the current directory, you
can program this in the global start-up file using code like `if
os.path.isfile('.pythonrc.py'): exec(open('.pythonrc.py').read())`. If you want
to use the startup file (`PYTHONSTARTUP`) in a script, you must do this
explicitly in the script:
&#10;
```
import os
filename = os.environ.get('PYTHONSTARTUP')
if filename and os.path.isfile(filename):
    with open(filename) as fobj:
        startup_file = fobj.read()
    exec(startup_file)
```

Python provides two hooks to let you customize it: sitecustomize and
usercustomize. To see how it works, you need first to find the location of your
user site-packages directory. Start Python and run this code:
```python
>>> import site
>>> site.getusersitepackages()
'/home/user/.local/lib/python3.x/site-packages'
```

Now you can create a file named `usercustomize.py` in that directory and put
anything you want in it. It will affect every invocation of Python, unless it is
started with the
[`-s`](https://docs.python.org/3/tutorial/appendix.html../using/cmdline.html#cmdoption-s)
option to disable the automatic import.

sitecustomize works in the same way, but is typically created by an administrator of the computer in the global site-packages directory, and is imported before usercustomize. See the documentation of the [`site`](https://docs.python.org/3/tutorial/appendix.html../library/site.html#module-site "site: Module responsible for site-specific configuration.") module for more details.

Footnotes

\[[1](https://docs.python.org/3/tutorial/appendix.html#id1)\]

A problem with the GNU Readline package may prevent this.

## References

- [[research/Python_Community-Python_Standard_Library|Standard library]]
- [[research/Python_Community-Python_FAQ|FAQ]]
- [[research/Šorn-Comprehensive_python_cheatsheet|Cheatsheet]]
- [[research/Python_Community-Python_Glossary|Glossary]]
