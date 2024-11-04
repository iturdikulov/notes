---
external:
  - https://docs.python.org/3/tutorial/inputoutput.html
tags:
  - inbox
  - Python
---
# 7. Input and Output

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

