---
external:
  - https://docs.python.org/3/tutorial/index.html
date: 2023
sr-due: 2023-10-04
sr-interval: 1
sr-ease: 240
tags:
  - research
  - inbox
  - SR_programming
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 130
---

# [The Python Tutorial](https://docs.python.org/3/tutorial/index.html)

Python powerful, [[High-level_programming_language|high level]]
[[Object-oriented_programming|object-oriented]]
[[Programming_language|programming language]].

Python tutorial cover basic concepts of Python, to learn more recommended to
check also these materials:

- [[research/Python_Community-Python_Standard_Library|Standard library]]
- [[research/Python_Community-Python_FAQ|FAQ]]
- [[research/Šorn-Comprehensive_python_cheatsheet|Cheatsheet]]
- [[research/Python_Community-Python_Glossary|Glossary]]

My notes taken from the Python Tutorial. This tutorial is cover basic concepts
of Python, most noteworthy features and language elements.

# [1. Whetting Your Appetite](https://docs.python.org/3/tutorial/appetite.html)

In this section described when Python usable. For example scripting, simple GUI,
etc.

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

# [2. Using the Python Interpreter](https://docs.python.org/3/tutorial/interpreter.html)

- Start interactive interpreter mode: `python3` or better `ipython`
- Exit: <kbd>C-d</kbd>, <kbd>C-z</kbd> or `quit()`
- Interpreter support [[GNU_Readline|readline]] library (which is cool)
- `python -c` - execute Python code, useful for one-liners scripts, if command
contains spaces, use quotes
- `python -m [arg]` - execute Python module, `pythom -m venv .venv`
- `python -i [script]` - start interactive interpreter mode (after executing
script for example), can be combined with `-c` and `-m`.

Python support argument parsing. You can use `import sys; sys.argv` to get
current script name and arguments (list of strings).
Minimal length of `sys.argv` is 1, can be empty, script name (`python -`, `-` is
standard input) or module name (`python -m -i lzma`).

In `sys.argv` also stored `-c` and `-m` (`sys.argv[0]`) and their arguments.
Options found after `-c` command or `-m` module are not consumed by the Python
interpreter’s option processing but left in `sys.argv` for the command or module
to handle.

In interactive prompt usually for next command used `>>>` sign, for continuation
lines used secondary prompt `...`.

By default, Python 3 source files are treated as encoded in [[Unicode|UTF-8]],
but standard library only use [[ASCII]] characters for identifiers, this
convention that any portable code should follow.

If you need to set non UTF-8 encoding, use `# -*- coding: encoding -*-` comment
as first line or after [[Shebang]]:

```python
#!/usr/bin/env python3
# -*- coding: cp1251 -*-
print("Здесь можно использовать кодировку cp1251")
```

# [3. An Informal Introduction to Python](https://docs.python.org/3/tutorial/introduction.html)

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
              # but better use explicit float format - printf(8.0 / 5.0)

# in C - truncation toward zero if both operands are integers
# in Python you can use // operator for same result
print(17 // 4)  # floor division discards the fractional part
print(17 % 4)  # the % operator returns the remainder of the division (5 * 3) + 2
print(17 / 3)  # result 5.666666666666667
print(5 ** 2)  # 5 squared
print(2 ** 7)  # 2 to the power of 7
```

What is floor division (or div), what are value of `(-11) // 4` ?
&#10;
Mathematical division that rounds down to **nearest** integer. The floor
division operator is `//`.  `(-11) // 4` is -3 (yes it's correct)
because that is `-2.75` rounded downward.
<!--SR:!2023-12-30,1,200-->

The `%` operator returns the ==remainder== of the division.
<!--SR:!2023-12-31,4,240-->

[[Operator|Operators]] with mixed type [[Operand|operand]]'s convert the integer
operand to ==floating point, int → float==.
<!--SR:!2024-01-02,6,240-->

```python
print(4 * 3.75 - 1) # 14.0
```

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
==`_`==, and it should be read-only (avoid assign values to it).
<!--SR:!2024-01-02,6,240-->

```python
tax = 12.5 / 100  # tax
price = 100.50    # price
price * tax       # 12.5625
price + _         # 113.0625
round(_, 2)       # 113.06
```

Python support various [[Data_type|types]] of numbers such as: Int, Float,
Decimal, Fraction, [[Complex_number|Complex]] number's (complex using `j` or `J`
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

In interactive mode [[Escape_sequence|escape sequences]] not recognized, so use
`print()` function if you want to interpreter them.

You can disable escaping by using raw strings:

```python
print("C:\some\name")   # here \n means newline!
print(r"C:\some\name")  # here \n is part of path, note the r before the quote
```

NOTE: A raw string may not end in an odd number of \ characters, because it will escape quote.

> Unlike other languages, special characters such as `\n` have the same meaning
> with both single ('...') and double ("...") quotes. The only difference
> between the two is that within single quotes you don’t need to escape `"` (but
> you have to escape `'`) and vice versa.

[[String_literal|Strings]] can be multiple lines, wrapped by `"""` triple double
or single `'''` quotes. You can use `\` character to prevent automatically
inserting new line in output (useful for formatting).

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

You can also concatenate string with `+` operator or by breaking them into new
lines or space. `*` used for repeating string (multiplication).

```python
print(3 * "un" + "ium")   # "unununium"
print("Py"                # "Python"
      "thon")
print("I" "n" r"O" f"m")  # "InOm"

# This useful for long strings.
text = ("Put several strings within parentheses "
        "to have them joined together.")
print(text)  # Put several strings within parentheses to have them joined together.
print(text + "?")  # concatenation using +
print(f"{text}?")  # concatenation using f-string
print(text.__add__("?"))  # concatenation using __add__ method, bad practice
```

Strings can be indexed (subscripted). In python no separate character type, a
**character** is a string of ==size one==.
<!--SR:!2024-01-01,5,240-->

```python
word = 'Python'
print(word[0])  # character in position 0 <- P
print(word[-0]) # character in position 0 <- P
print(word[5])  # character in position 5 <- n

print(word[-1])  # last character <- n
print(word[-2])  # second last character
print(word[-6]) # first character,

print(word[6])  # IndexError: string index out of range
print(word[-7]) # IndexError: string index out of range
```

Strings can be sliced, to obtain substring

```python
sentence = "Hello, World!"

# Indexing
print(sentence[0:5])  # Hello
print(sentence[:5])   # Hello, offset 5 from start

# Slicing
print(sentence[5:6])  # ,
print(sentence[7:13]) # World!

print(sentence[-6:])  # World!, offest 6 from end
```

What you see if you use this slice `word[0:2]`, where word is "Python"
&#10;
```python
print("Python"[0:2])
```
Characters from position 0 (included) to 2 (excluded), `'Py'`
<!--SR:!2024-01-02,4,220-->

What you see if you use this slice `word[2:5]`, where word is "Python"
&#10;
Characters from position 2 (included) to 5 (excluded). `'tho'`
<!--SR:!2023-12-31,4,240-->

Note: `s[:i] + s[i:] == s`, start is always included, and the end always
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
No, it will raise `IndexError` exception.
<!--SR:!2024-01-01,5,240-->

Python strings are ==[[Immutable_object|immutable]]==. You can't assign new
value to character in string.
```python
word = 'Python'
word[0] = 'J'    # TypeError: 'str' object does not support item assignment
word[2:] = 'py'  # TypeError: 'str' object does not support item assignment
```
<!--SR:!2023-12-31,4,240-->

But you generate new string:

```python
word = 'Python'
print('J' + word[1:])  # Jython
print(word[:2] + 'py') # Pypy
```

String has various built-in methods -
[String Methods](https://docs.python.org/3/library/stdtypes.html#string-methods).

Built-in function `len()` returns length of string.

```python
s = "WhosYourDaddy ISeedeadpeople"
print(len(s))  # 28
s = "😀😀😀😀😀😀😀😀😀😀" "😀😀😀😀😀😀😀😀😀😀" "😀😀😀😀😀😀😀😀"
print(len(s))  # 28
```

Most versatile [[Data_type|data type]] is [[List|list]]. In Python list can
contain elements of different types, and usually used ==one type== of elements.
<!--SR:!2023-12-31,4,240-->

```python
squares = [1, 4, 9, 16, 25]
print(squares)  # [1, 4, 9, 16, 25]
```

Lists like [[String_literal|string]] and [[Iterator|iterators]] can be indexed
and sliced.

```python
squares = [1, 4, 9, 16, 25]
print(squares[0])  # indexing returns the item
print(squares[-1])
print(squares[-3:])  # slicing returns a new list
```

All slice operations return a ==new list (shallow copy)== containing the
requested elements.
```python
squares = [1, 4, 9, 16, 25]
print(squares[:])  # [1, 4, 9, 16, 25]
```
<!--SR:!2023-12-31,2,220-->

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

# Adding new element to the end of the list
cubes.append(216)  # add the cube of 6
cubes.append(7 ** 3)  # and the cube of 7
print(cubes)
```

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

List also support built-in functions `len()` and `+`.

```python
print(len(["Hello", "World"]))  # 2
```

You can also use nested lists (list containing other lists).

```python
a = ['a', 'b', 'c']
n = [1, 2, 3]
x = [a, n]
print(x) # [['a', 'b', 'c'], [1, 2, 3]]
```

[[Fibonacci_sequence|Fibonacci sequence example]]:

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

TODO: review [A Python Guide to the Fibonacci Sequence – Real Python](https://realpython.com/fibonacci-sequence-python/).

Order of Evaluation in Python expression (operand)?
&#10;
In Python, the left operand is always evaluated before the right operand
(if they has same priority).
<!--SR:!2023-12-30,1,180-->

Non-zero, zero or [[Null_pointer|None]] values in Python (and C) considered as
==[[Boolean_data_type|boolean]]==.
<!--SR:!2024-01-01,5,240-->

Non-zero and zero length values considered as (xxx and xxx)?
&#10;
True and False. Length also True and False.
<!--SR:!2023-12-31,2,220-->

`-3**2` in Python is?
&#10;
Since `**` has higher precedence than -, `-3**2` will be interpreted as
`-(3**2)` and thus result is -9. To avoid this and get 9, you can use `(-3)**2`.
<!--SR:!2023-12-30,1,200-->

## [4. More Control Flow Tools](https://docs.python.org/3/tutorial/controlflow.html)

[[Control_flow|Control flow]].

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
[print(x, end="😮") for x in list("Inomoz")]  # H😮n😮r😮
```

> Code that modifies a collection while iterating over that same collection can
> be tricky to get right. Instead, it is usually more straight-forward to loop
> over a ==copy== of the collection or to create a new collection:
<!--SR:!2024-01-01,5,240-->

```python
# Create a sample collection
users = {'Hans': 'active', 'Éléonore': 'inactive', '景太郎': 'active'}

# Strategy:  Iterate over a copy
# this looks interesting, it's avoid dict size changing during iteration
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
generates (math) ==arithmetic progression==.
<!--SR:!2024-01-02,6,240-->

Last index of `range(10)`?::`9`
<!--SR:!2024-01-01,5,240-->

```python
print(list(range(10))) # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9],
                       # ten isn't included in the generated sequence.

# Multiplication table
for i in range(2, 12):
  for j in range(12):
    print(f"{i} * {j} = {i*j}")
```

You can select range start number (not index). Some like to generate numbers
from X to Y-1.

```python
print(list(range(5, 10)))  # [5, 6, 7, 8, 9]
print(list(range(5, 10))[4]) # 9
```

What you will see in interactive python session if you enter this:
`list(range(0, 10))`
&#10;
```python
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```
<!--SR:!2024-01-01,5,240-->

And you can also specify [[Increment_and_decrement_operators|increment]] for
step size. Which can be positive or negative.

```python
print(list(range(0, 10, 1)))  # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9], default
print(list(range(0, 10, 2)))  # [0, 2, 4, 6, 8], 0 + 2, 2 + 2, 4 + 2, ...
print(list(range(0, 10, 3)))  # [0, 3, 6, 9]

# Negative step size will generate sequence in reverse order.
# can be used as alternative to `reversed()`
print(list(range(10, 0, -1)))  # [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
print(list(range(-10, -100, -30))) # [-10, -40, -70], -10 - 30
print(list(range(-10, 10, 30))) # [-10], first item only
print(list(range(-10, 40, 30))) # [-10, -20], -10 + 30
```

To iterate over the indices of a sequence, you can combine `range()` and `len()`
as follows:

```python
a = ['Mary', 'had', 'a', 'little', 'lamb']
for i in range(len(a)):
    print(i, a[i])
```

But better just use `enumerate()` function.

```python
a = ['Mary', 'had', 'a', 'little', 'lamb']
for i, item in enumerate(a):
    print(i, item)
```

If we don't iterate over range and just print it, we will get object reference.
Because range return [[Iterator|iterable]] object.

```python
print(range(10))  # range(0, 10)
```

What you will see with this code: `sum(range(4))`?
&#10;
# 0 + 1 + 2 + 3 = 6
<!--SR:!2023-12-31,4,240-->

> The `break` statement, like in C, `breaks out` of the innermost enclosing
> ==`for` or `while` loop==.
<!--SR:!2024-01-01,2,238-->

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
<!--SR:!2024-01-02,4,220-->

When `else` runs in `try-except` statement?
&#10;
In `try-except` statement, `else` runs if no exception was raised.
<!--SR:!2024-01-01,2,238-->

The `continue` statement - continue loop with the ==next== iteration of the
loop (current skipped):
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

`pass` is a ==[[Null_function|null operation]]== (name, this is statement, while
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
    pass  # this is bad pracitce DO NOT DO THIS
```

A `match` statement comparing expression with ==successive== patterns (case
block) until one of them matches (first pattern that matches get elected).
This is [[Pattern_matching|pattern matching]] like in Rust or Haskell.
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
> value into variables.
<!--SR:!2023-12-31,2,238-->

Patterns can look like ==unpacking assignments== (like tuple), and can be used to bind
variables into case block:
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

Can I use classes in pattern matching, can I bind class attributes to
variables?
&#10;
Yes, you can use classes (in case blocks), place them with arguments (like
a constructor), capturing class attributes also supported.
```python
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def where_is(point):
    match point:
        case Point(x=0, y=0):
            print("Origin")
        case Point(x=0, y=y):
            print(f"Y={y}")
        case Point(x=x, y=0):
            print(f"X={x}")
        case Point():
            print("Somewhere else")
        case _:
            print("Not a point")
```
<!--SR:!2023-12-31,2,238-->

Can I use arguments with different order (not same as in class) for class in pattern matching?
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
assigned to.
<!--SR:!2023-12-31,2,238-->

Can patterns be nested?
&#10;
Yes, patterns can be arbitrarily nested. For example, if we have a short list
of Points, with `__match_args__` added, we could match it like this:
```python
class Point:
    __match_args__ = ('x', 'y')
    def __init__(self, x, y):
        self.x = x
        self.y = y

match points:
    case []:
        print("No points")
    case [Point(0, 0)]:
        print("The origin")
    case [Point(x, y)]:
        print(f"Single point {x}, {y}")
    case [Point(0, y1), Point(0, y2)]:
        print(f"Two on the Y axis at {y1}, {y2}")
    case _:
        print("Something else")
```
<!--SR:!2024-01-01,2,238-->

Can I use `if` statements in patterns?
&#10;
Yes, `if` clause in pattern known as a "guard". If the guard
is false, `match` goes on to try the next case block. Note that value
capture happens **before** the guard is evaluated:
```python
match point:
    case Point(x, y) if x == y:
        print(f"Y=X at {x}")
    case Point(x, y):
        print(f"Not on the diagonal")
```
<!--SR:!2023-12-31,2,238-->

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

-   Mapping patterns: `{"bandwidth": b, "latency": l}` captures the
    `"bandwidth"` and `"latency"` values from a dictionary. Unlike sequence
    patterns, extra keys are ignored. An unpacking like `**rest` is also
    supported. But `**_` would be redundant, so it is not allowed.
```python
ages = {"mike": 1, "kelly": 2, "ivan": 3, "petr": 4}
match ages:
    case {"mike": mike, "kelly": kelly, "ivan": ivan, **rest}:
        print(mike, kelly, ivan, rest)  # 1 2 3 {'petr': 4}
```

-   Subpatterns may be captured using the ==`as`== keyword:
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

-   Most literals are compared by equality, however the singletons
    `True`, `False` and `None` are compared by ==identity==.
```python
none_item = None
match none_item:
    case "":
        print("Empty string")
    case None:
        print("None")  # <- None
```
<!--SR:!2023-12-31,2,238-->

How to use named constants (Enum) in pattern matching and why?
&#10;
-   Patterns may use named constants. These must be dotted names to
    prevent them from being interpreted as capture variable:
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

TODO: Here more info about pattern matching
[PEP 636 – Structural Pattern Matching: Tutorial](https://peps.python.org/pep-0636/).

## Defining Functions

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
fib(2000)
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597
```
<!--SR:!2023-12-31,1,218-->

The keyword `def` introduces a function ==definition==.
<!--SR:!2023-12-31,2,238-->

The first statement of the function body can optionally be a string
literal; this string literal is the function's documentation string, or
==`docstring`==.
<!--SR:!2024-01-01,2,238-->

Why include docstring is recommended to make a habit?
&#10;
There some tools, which produce online or printed documentation, or to let
the user interactively browse through code. Also, many IDEs and editors
support showing documentation based on this docstrings.
<!--SR:!2024-01-01,2,238-->

The *execution* of a function introduces a new ==symbol table== used for
the local variables of the function.
<!--SR:!2023-12-30,1,218-->

Order of variable references looking (tables)?
&#10;
- Local symbol table
- Local symbol table of enclosing functions (parents)
- Global symbol table
- Built-in names table

When you can change variables from global scope or enclosing functions in
"current" function?
&#10;
Use `global` statement to assign some value for global function or
`nonlocal` statement to assign some value for variable from enclosing
functions.
<!--SR:!2023-12-31,2,238-->

> The nonlocal statement causes the listed identifiers to refer to
> previously bound variables in the nearest ==enclosing== scope excluding
> globals.

The actual parameters (arguments) to a function call are introduced in
the local symbol table of the called function when it is called; thus,
arguments are passed using *call by value* (where the *value* is always
an object *reference*, not the value of the object).[^1] When a function
calls another function, or calls itself recursively, a new local symbol
table is created for that call.

A function definition associates the function name with the function
object in the current symbol table. The interpreter recognizes the
object pointed to by that name as a user-defined function. Other names
can also point to that same function object and can also be used to
access the function:

    >>> fib
    <function fib at 10042ed0>
    >>> f = fib
    >>> f(100)
    0 1 1 2 3 5 8 13 21 34 55 89

Coming from other languages, you might object that `fib` is not a
function but a procedure since it doesn't return a value. In fact, even
functions without a `return` statement do return a value, albeit a
rather boring one. This value is called `None` (it's a built-in name).
Writing the value `None` is normally suppressed by the interpreter if it
would be the only value written. You can see it if you really want to
using `print`:

    >>> fib(0)
    >>> print(fib(0))
    None

It is simple to write a function that returns a list of the numbers of
the Fibonacci series, instead of printing it:

    >>> def fib2(n):  # return Fibonacci series up to n
    ...     """Return a list containing the Fibonacci series up to n."""
    ...     result = []
    ...     a, b = 0, 1
    ...     while a < n:
    ...         result.append(a)    # see below
    ...         a, b = b, a+b
    ...     return result
    ...
    >>> f100 = fib2(100)    # call it
    >>> f100                # write the result
    [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]

This example, as usual, demonstrates some new Python features:

-   The `return` statement returns with a value from a function.
    `!return` without an expression argument returns `None`. Falling off
    the end of a function also returns `None`.
-   The statement `result.append(a)` calls a *method* of the list object
    `result`. A method is a function that 'belongs' to an object and is
    named `obj.methodname`, where `obj` is some object (this may be an
    expression), and `methodname` is the name of a method that is
    defined by the object's type. Different types define different
    methods. Methods of different types may have the same name without
    causing ambiguity. (It is possible to define your own object types
    and methods, using *classes*, see `tut-classes`) The method
    `!append` shown in the example is defined for list objects; it adds
    a new element at the end of the list. In this example it is
    equivalent to `result = result + [a]`, but more efficient.

## More on Defining Functions

It is also possible to define functions with a variable number of
arguments. There are three forms, which can be combined.

### Default Argument Values

The most useful form is to specify a default value for one or more
arguments. This creates a function that can be called with fewer
arguments than it is defined to allow. For example:

    def ask_ok(prompt, retries=4, reminder='Please try again!'):
        while True:
            reply = input(prompt)
            if reply in {'y', 'ye', 'yes'}:
                return True
            if reply in {'n', 'no', 'nop', 'nope'}:
                return False
            retries = retries - 1
            if retries < 0:
                raise ValueError('invalid user response')
            print(reminder)

This function can be called in several ways:

-   giving only the mandatory argument:
    `ask_ok('Do you really want to quit?')`
-   giving one of the optional arguments:
    `ask_ok('OK to overwrite the file?', 2)`
-   or even giving all arguments:
    `ask_ok('OK to overwrite the file?', 2, 'Come on, only yes or no!')`

This example also introduces the `in` keyword. This tests whether or not
a sequence contains a certain value.

The default values are evaluated at the point of function definition in
the *defining* scope, so that :

    i = 5

    def f(arg=i):
        print(arg)

    i = 6
    f()

will print `5`.

**Important warning:** The default value is evaluated only once. This
makes a difference when the default is a mutable object such as a list,
dictionary, or instances of most classes. For example, the following
function accumulates the arguments passed to it on subsequent calls:

    def f(a, L=[]):
        L.append(a)
        return L

    print(f(1))
    print(f(2))
    print(f(3))

This will print :

    [1]
    [1, 2]
    [1, 2, 3]

If you don't want the default to be shared between subsequent calls, you
can write the function like this instead:

    def f(a, L=None):
        if L is None:
            L = []
        L.append(a)
        return L

### Keyword Arguments

Functions can also be called using
`keyword arguments <keyword argument>` of the form `kwarg=value`. For
instance, the following function:

    def parrot(voltage, state='a stiff', action='voom', type='Norwegian Blue'):
        print("-- This parrot wouldn't", action, end=' ')
        print("if you put", voltage, "volts through it.")
        print("-- Lovely plumage, the", type)
        print("-- It's", state, "!")

accepts one required argument (`voltage`) and three optional arguments
(`state`, `action`, and `type`). This function can be called in any of
the following ways:

    parrot(1000)                                          # 1 positional argument
    parrot(voltage=1000)                                  # 1 keyword argument
    parrot(voltage=1000000, action='VOOOOOM')             # 2 keyword arguments
    parrot(action='VOOOOOM', voltage=1000000)             # 2 keyword arguments
    parrot('a million', 'bereft of life', 'jump')         # 3 positional arguments
    parrot('a thousand', state='pushing up the daisies')  # 1 positional, 1 keyword

but all the following calls would be invalid:

    parrot()                     # required argument missing
    parrot(voltage=5.0, 'dead')  # non-keyword argument after a keyword argument
    parrot(110, voltage=220)     # duplicate value for the same argument
    parrot(actor='John Cleese')  # unknown keyword argument

In a function call, keyword arguments must follow positional arguments.
All the keyword arguments passed must match one of the arguments
accepted by the function (e.g. `actor` is not a valid argument for the
`parrot` function), and their order is not important. This also includes
non-optional arguments (e.g. `parrot(voltage=1000)` is valid too). No
argument may receive a value more than once. Here's an example that
fails due to this restriction:

    >>> def function(a):
    ...     pass
    ...
    >>> function(0, a=0)
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    TypeError: function() got multiple values for argument 'a'

When a final formal parameter of the form `**name` is present, it
receives a dictionary (see `typesmapping`) containing all keyword
arguments except for those corresponding to a formal parameter. This may
be combined with a formal parameter of the form `*name` (described in
the next subsection) which receives a `tuple <tut-tuples>` containing
the positional arguments beyond the formal parameter list. (`*name` must
occur before `**name`.) For example, if we define a function like this:

    def cheeseshop(kind, *arguments, **keywords):
        print("-- Do you have any", kind, "?")
        print("-- I'm sorry, we're all out of", kind)
        for arg in arguments:
            print(arg)
        print("-" * 40)
        for kw in keywords:
            print(kw, ":", keywords[kw])

It could be called like this:

    cheeseshop("Limburger", "It's very runny, sir.",
               "It's really very, VERY runny, sir.",
               shopkeeper="Michael Palin",
               client="John Cleese",
               sketch="Cheese Shop Sketch")

and of course it would print:

``` none
-- Do you have any Limburger ?
-- I'm sorry, we're all out of Limburger
It's very runny, sir.
It's really very, VERY runny, sir.
----------------------------------------
shopkeeper : Michael Palin
client : John Cleese
sketch : Cheese Shop Sketch
```

Note that the order in which the keyword arguments are printed is
guaranteed to match the order in which they were provided in the
function call.

### Special parameters

By default, arguments may be passed to a Python function either by
position or explicitly by keyword. For readability and performance, it
makes sense to restrict the way arguments can be passed so that a
developer need only look at the function definition to determine if
items are passed by position, by position or keyword, or by keyword.

A function definition may look like:

``` none
def f(pos1, pos2, /, pos_or_kwd, *, kwd1, kwd2):
      -----------    ----------     ----------
        |             |                  |
        |        Positional or keyword   |
        |                                - Keyword only
         -- Positional only
```

where `/` and `*` are optional. If used, these symbols indicate the kind
of parameter by how the arguments may be passed to the function:
positional-only, positional-or-keyword, and keyword-only. Keyword
parameters are also referred to as named parameters.

#### Positional-or-Keyword Arguments

If `/` and `*` are not present in the function definition, arguments may
be passed to a function by position or by keyword.

#### Positional-Only Parameters

Looking at this in a bit more detail, it is possible to mark certain
parameters as *positional-only*. If *positional-only*, the parameters'
order matters, and the parameters cannot be passed by keyword.
Positional-only parameters are placed before a `/` (forward-slash). The
`/` is used to logically separate the positional-only parameters from
the rest of the parameters. If there is no `/` in the function
definition, there are no positional-only parameters.

Parameters following the `/` may be *positional-or-keyword* or
*keyword-only*.

#### Keyword-Only Arguments

To mark parameters as *keyword-only*, indicating the parameters must be
passed by keyword argument, place an `*` in the arguments list just
before the first *keyword-only* parameter.

#### Function Examples

Consider the following example function definitions paying close
attention to the markers `/` and `*`:

    >>> def standard_arg(arg):
    ...     print(arg)
    ...
    >>> def pos_only_arg(arg, /):
    ...     print(arg)
    ...
    >>> def kwd_only_arg(*, arg):
    ...     print(arg)
    ...
    >>> def combined_example(pos_only, /, standard, *, kwd_only):
    ...     print(pos_only, standard, kwd_only)

The first function definition, `standard_arg`, the most familiar form,
places no restrictions on the calling convention and arguments may be
passed by position or keyword:

    >>> standard_arg(2)
    2

    >>> standard_arg(arg=2)
    2

The second function `pos_only_arg` is restricted to only use positional
parameters as there is a `/` in the function definition:

    >>> pos_only_arg(1)
    1

    >>> pos_only_arg(arg=1)
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    TypeError: pos_only_arg() got some positional-only arguments passed as keyword arguments: 'arg'

The third function `kwd_only_args` only allows keyword arguments as
indicated by a `*` in the function definition:

    >>> kwd_only_arg(3)
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    TypeError: kwd_only_arg() takes 0 positional arguments but 1 was given

    >>> kwd_only_arg(arg=3)
    3

And the last uses all three calling conventions in the same function
definition:

    >>> combined_example(1, 2, 3)
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    TypeError: combined_example() takes 2 positional arguments but 3 were given

    >>> combined_example(1, 2, kwd_only=3)
    1 2 3

    >>> combined_example(1, standard=2, kwd_only=3)
    1 2 3

    >>> combined_example(pos_only=1, standard=2, kwd_only=3)
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    TypeError: combined_example() got some positional-only arguments passed as keyword arguments: 'pos_only'

Finally, consider this function definition which has a potential
collision between the positional argument `name` and `**kwds` which has
`name` as a key:

    def foo(name, **kwds):
        return 'name' in kwds

There is no possible call that will make it return `True` as the keyword
`'name'` will always bind to the first parameter. For example:

    >>> foo(1, **{'name': 2})
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    TypeError: foo() got multiple values for argument 'name'
    >>>

But using `/` (positional only arguments), it is possible since it
allows `name` as a positional argument and `'name'` as a key in the
keyword arguments:

    >>> def foo(name, /, **kwds):
    ...     return 'name' in kwds
    ...
    >>> foo(1, **{'name': 2})
    True

In other words, the names of positional-only parameters can be used in
`**kwds` without ambiguity.

#### Recap

The use case will determine which parameters to use in the function
definition:

    def f(pos1, pos2, /, pos_or_kwd, *, kwd1, kwd2):

As guidance:

-   Use positional-only if you want the name of the parameters to not be
    available to the user. This is useful when parameter names have no
    real meaning, if you want to enforce the order of the arguments when
    the function is called or if you need to take some positional
    parameters and arbitrary keywords.
-   Use keyword-only when names have meaning and the function definition
    is more understandable by being explicit with names or you want to
    prevent users relying on the position of the argument being passed.
-   For an API, use positional-only to prevent breaking API changes if
    the parameter's name is modified in the future.

### Arbitrary Argument Lists

single: \* (asterisk); in function calls

Finally, the least frequently used option is to specify that a function
can be called with an arbitrary number of arguments. These arguments
will be wrapped up in a tuple (see `tut-tuples`). Before the variable
number of arguments, zero or more normal arguments may occur. :

    def write_multiple_items(file, separator, *args):
        file.write(separator.join(args))

Normally, these *variadic* arguments will be last in the list of formal
parameters, because they scoop up all remaining input arguments that are
passed to the function. Any formal parameters which occur after the
`*args` parameter are 'keyword-only' arguments, meaning that they can
only be used as keywords rather than positional arguments. :

    >>> def concat(*args, sep="/"):
    ...     return sep.join(args)
    ...
    >>> concat("earth", "mars", "venus")
    'earth/mars/venus'
    >>> concat("earth", "mars", "venus", sep=".")
    'earth.mars.venus'

### Unpacking Argument Lists

The reverse situation occurs when the arguments are already in a list or
tuple but need to be unpacked for a function call requiring separate
positional arguments. For instance, the built-in `range` function
expects separate *start* and *stop* arguments. If they are not available
separately, write the function call with the `*`-operator to unpack the
arguments out of a list or tuple:

    >>> list(range(3, 6))            # normal call with separate arguments
    [3, 4, 5]
    >>> args = [3, 6]
    >>> list(range(*args))            # call with arguments unpacked from a list
    [3, 4, 5]

single: \*\*; in function calls

In the same fashion, dictionaries can deliver keyword arguments with the
`**`-operator:

    >>> def parrot(voltage, state='a stiff', action='voom'):
    ...     print("-- This parrot wouldn't", action, end=' ')
    ...     print("if you put", voltage, "volts through it.", end=' ')
    ...     print("E's", state, "!")
    ...
    >>> d = {"voltage": "four million", "state": "bleedin' demised", "action": "VOOM"}
    >>> parrot(**d)
    -- This parrot wouldn't VOOM if you put four million volts through it. E's bleedin' demised !

### Lambda Expressions

Small anonymous functions can be created with the `lambda` keyword. This
function returns the sum of its two arguments: `lambda a, b: a+b`.
Lambda functions can be used wherever function objects are required.
They are syntactically restricted to a single expression. Semantically,
they are just syntactic sugar for a normal function definition. Like
nested function definitions, lambda functions can reference variables
from the containing scope:

    >>> def make_incrementor(n):
    ...     return lambda x: x + n
    ...
    >>> f = make_incrementor(42)
    >>> f(0)
    42
    >>> f(1)
    43

The above example uses a lambda expression to return a function. Another
use is to pass a small function as an argument:

    >>> pairs = [(1, 'one'), (2, 'two'), (3, 'three'), (4, 'four')]
    >>> pairs.sort(key=lambda pair: pair[1])
    >>> pairs
    [(4, 'four'), (1, 'one'), (3, 'three'), (2, 'two')]

### Documentation Strings

single: docstrings single: documentation strings single: strings,
documentation

Here are some conventions about the content and formatting of
documentation strings.

The first line should always be a short, concise summary of the object's
purpose. For brevity, it should not explicitly state the object's name
or type, since these are available by other means (except if the name
happens to be a verb describing a function's operation). This line
should begin with a capital letter and end with a period.

If there are more lines in the documentation string, the second line
should be blank, visually separating the summary from the rest of the
description. The following lines should be one or more paragraphs
describing the object's calling conventions, its side effects, etc.

The Python parser does not strip indentation from multi-line string
literals in Python, so tools that process documentation have to strip
indentation if desired. This is done using the following convention. The
first non-blank line *after* the first line of the string determines the
amount of indentation for the entire documentation string. (We can't use
the first line since it is generally adjacent to the string's opening
quotes so its indentation is not apparent in the string literal.)
Whitespace "equivalent" to this indentation is then stripped from the
start of all lines of the string. Lines that are indented less should
not occur, but if they occur all their leading whitespace should be
stripped. Equivalence of whitespace should be tested after expansion of
tabs (to 8 spaces, normally).

Here is an example of a multi-line docstring:

    >>> def my_function():
    ...     """Do nothing, but document it.
    ...
    ...     No, really, it doesn't do anything.
    ...     """
    ...     pass
    ...
    >>> print(my_function.__doc__)
    Do nothing, but document it.

        No, really, it doesn't do anything.

### Function Annotations

Zachary Ware \<<zachary.ware@gmail.com>\>

pair: function; annotations single: -\>; function annotations single: :
(colon); function annotations

`Function annotations <function>` are completely optional metadata
information about the types used by user-defined functions (see `3107`
and `484` for more information).

`Annotations <function annotation>` are stored in the `!__annotations__`
attribute of the function as a dictionary and have no effect on any
other part of the function. Parameter annotations are defined by a colon
after the parameter name, followed by an expression evaluating to the
value of the annotation. Return annotations are defined by a literal
`->`, followed by an expression, between the parameter list and the
colon denoting the end of the `def` statement. The following example has
a required argument, an optional argument, and the return value
annotated:

    >>> def f(ham: str, eggs: str = 'eggs') -> str:
    ...     print("Annotations:", f.__annotations__)
    ...     print("Arguments:", ham, eggs)
    ...     return ham + ' and ' + eggs
    ...
    >>> f('spam')
    Annotations: {'ham': <class 'str'>, 'return': <class 'str'>, 'eggs': <class 'str'>}
    Arguments: spam eggs
    'spam and eggs'

## Intermezzo: Coding Style

Georg Brandl \<<georg@python.org>\>

pair: coding; style

Now that you are about to write longer, more complex pieces of Python,
it is a good time to talk about *coding style*. Most languages can be
written (or more concise, *formatted*) in different styles; some are
more readable than others. Making it easy for others to read your code
is always a good idea, and adopting a nice coding style helps
tremendously for that.

For Python, `8` has emerged as the style guide that most projects adhere
to; it promotes a very readable and eye-pleasing coding style. Every
Python developer should read it at some point; here are the most
important points extracted for you:

-   Use 4-space indentation, and no tabs.

    4 spaces are a good compromise between small indentation (allows
    greater nesting depth) and large indentation (easier to read). Tabs
    introduce confusion, and are best left out.

-   Wrap lines so that they don't exceed 79 characters.

    This helps users with small displays and makes it possible to have
    several code files side-by-side on larger displays.

-   Use blank lines to separate functions and classes, and larger blocks
    of code inside functions.

-   When possible, put comments on a line of their own.

-   Use docstrings.

-   Use spaces around operators and after commas, but not directly
    inside bracketing constructs: `a = f(1, 2) + g(3, 4)`.

-   Name your classes and functions consistently; the convention is to
    use `UpperCamelCase` for classes and `lowercase_with_underscores`
    for functions and methods. Always use `self` as the name for the
    first method argument (see `tut-firstclasses` for more on classes
    and methods).

-   Don't use fancy encodings if your code is meant to be used in
    international environments. Python's default, UTF-8, or even plain
    ASCII work best in any case.

-   Likewise, don't use non-ASCII characters in identifiers if there is
    only the slightest chance people speaking a different language will
    read or maintain the code.

**Footnotes**

[^1]: Actually, *call by object reference* would be a better
    description, since if a mutable object is passed, the caller will
    see any changes the callee makes to it (items inserted into a list).

## [5. Data Structures](https://docs.python.org/3/tutorial/datastructures.html)

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
