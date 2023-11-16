---
external: https://docs.python.org/3/tutorial/index.html
date: 2023
tags:
- research
- inbox
- programming
sr-due: 2023-10-04
sr-interval: 1
sr-ease: 240
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

What is floor division, what are value of `(-11) // 4` ?
?
Mathematical division that rounds down to **nearest** integer. The floor
division operator is `//`.  `(-11) // 4` is -3
because that is `-2.75` rounded downward.
<!--SR:!2023-11-17,1,220-->

The `%` operator returns the ==remainder== of the division.
<!--SR:!2023-11-18,2,240-->

[[Operator|Operators]] with mixed type [[Operand|operand]]'s convert the integer
operand to ==floating point, int → float==.
<!--SR:!2023-11-18,2,240-->

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
<!--SR:!2023-11-18,2,240-->

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
<!--SR:!2023-11-18,2,240-->

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
?
```python
print("Python"[0:2])
```
Characters from position 0 (included) to 2 (excluded), `'Py'`
<!--SR:!2023-11-17,1,220-->

What you see if you use this slice `word[2:5]`, where word is "Python"
?
Characters from position 2 (included) to 5 (excluded). `'tho'`
<!--SR:!2023-11-18,2,240-->

Note: `s[:i] + s[i:] == s`, start is always included, and the end always
excluded.

```python
sentence = "Hello, World!"
print(sentence[:5] + sentence[5:] == sentence)  # True
```

Attempting to use invalid index in range slice handled?
?
Gracefully, without raising an exception.
<!--SR:!2023-11-18,2,240-->

```python
word = 'Python'
print(word[42:])
print(word[4:42])
```

To remember how slices work, you can use this table. Think indices are pointing
between characters. How do you think this table is constructed, header is word,
row 1 and row 2 are?
?
```
  +---+---+---+---+---+---+
  | H | e | l | l | o | , |
  +---+---+---+---+---+---+
 .0  .1  .2  .3  .4  .5   6  # positive indices, i-j chars between i and j
 -6. -5. -4. -3. -2. -1.     # negative indices
```
For non-negative indices, the length of a slice is the difference of the
indices, if both are within bounds. For example, the length of word[1:3] is 2.
<!--SR:!2023-11-17,1,220-->

Is it possible to use index outside of string bounds?
?
No, it will raise `IndexError` exception.
<!--SR:!2023-11-18,2,240-->

Python strings are ==[[Immutable_object|immutable]]==. You can't assign new
value to character in string.
```python
word = 'Python'
word[0] = 'J'    # TypeError: 'str' object does not support item assignment
word[2:] = 'py'  # TypeError: 'str' object does not support item assignment
```
<!--SR:!2023-11-18,2,240-->

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
<!--SR:!2023-11-18,2,240-->

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
<!--SR:!2023-11-18,2,240-->

Lists also support operations like concatenation.

```python
squares = [9, 8, 7, 6, 5]
print(squares + [4, 3, 2, 1])  # [9, 8, 7, 6, 5, 4, 3, 2, 1]
```

List are ==mutable==, unlike strings.
<!--SR:!2023-11-18,2,240-->

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

```python
a, b = 0, 1  # multiple assignment, initialize variables
while a < 10:
    print(a)
    a, b = b, a+b
    # <eval 2nd> = <eval 1st>
    #              eval left-to-right
    # 0, 1
    # 1, 1
    # 1, 2
    # 2, 3
    # 3, 5
```

Order of Evaluation in Python expression?
?
In Python, the left operand is always evaluated before the right operand.
<!--SR:!2023-11-17,1,220-->

Non-zero, zero or [[Null_pointer|None]] values in Python (and C) considered as
==[[Boolean_data_type|boolean]]==.
<!--SR:!2023-11-18,2,240-->

Non-zero and zero length values considered as?
?
True and False. Length also True and False.
<!--SR:!2023-11-18,2,240-->

`-3**2` in Python is?
?
Since `**` has higher precedence than -, `-3**2` will be interpreted as
`-(3**2)` and thus result in -9. To avoid this and get 9, you can use `(-3)**2`.
<!--SR:!2023-11-18,2,240-->

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
<!--SR:!2023-11-18,2,240-->

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
<!--SR:!2023-11-18,2,240-->

Last index of `range(10)`?::`9`
<!--SR:!2023-11-18,2,240-->

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
?
```python
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```
<!--SR:!2023-11-18,2,240-->

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
?
# 0 + 1 + 2 + 3 = 6
<!--SR:!2023-11-18,2,240-->

> The `break` statement, like in C, `breaks out` of the innermost enclosing
> `for` or `while` loop.

In python `for` and `while` statements may have a `else` clause.
It is executed if loop ==wasn't `break`ed== (we iterated over all items in `for` or
`while` condition become `False`).
<!--SR:!2023-11-17,1,220-->

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

In `try-except` statement, `else` runs if no exception was raised.

The `continue` statement, continues with the next iteration of the loop:

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

`pass` is a [[Null_function|null_operation]] (statement, while `None` is an
object). When it is executed, nothing happens. It is useful as a placeholder
when a statement is required syntactically, but no code needs to be executed

```python
while True:
    pass  # Busy-wait for keyboard interrupt (Ctrl+C)

def f(arg): pass    # a function that does nothing (yet)

class C: pass       # a class with no methods (yet)

try:
    import platform
except ImportError:
    pass  # this is bad pracitce DO NOT DO THIS
```

A match statement compare expression with successive patterns until one or more
matches. So this is [[Pattern_matching]].

> Only the first pattern that matches gets executed and it can also extract
> components (sequence elements or object attributes) from the value into
> variables.

```python
def http_error(status):
    match status:
        case 400:
            return "Bad request"
        case 404:
            return "Not found"
        case 418:
            return "I'm a teapot"
        case 500 | 503 | 504: # multiple values in one pattern, `|` is "or"
            return "Not allowed"
        case _:  # _ is a wildcard pattern and never fails to match
            return "Something's wrong with the internet"
```

Patterns can look like unpacking assignments, and can be used to bind variables:

```python
point = (0, 100)

match point:
    case (0, 0):
        print("Origin")
    case (0, y):
        print(f"Y={y}")
    case (x, 0):
        print(f"X={x}")
    case (x, y):  # sort of unpacking assignment
        print(f"X={x}, Y={y}")
    case _:
        raise ValueError("Not a point")
```

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
