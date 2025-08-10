---
external:
  - https://docs.python.org/3/tutorial/stdlib.html
  - https://docs.python.org/3/tutorial/stdlib2.html
tags:
  - blog
  - literature
created: 2025-01-14T11:41+03:00
sr-due: 2025-07-23
sr-interval: 10
sr-ease: 244
---

# 10. Brief Tour of the Standard Library

Which module from standard library is used to work with operating system?
<br class="f">
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
<br class="f">
```python
import os
dir(os) # <returns a list of all module functions>
help(os) # <returns an manual page created from the module's docstrings>
```

For daily file and directory management tasks, the `shutil` module provides
a higher level interface that is easier to use, how to copy or move files with
`shutil`?
<br class="f">
```python
import shutil
shutil.copyfile('data.db', 'archive.db')  # 'archive.db'
shutil.move('/build/executables', 'installdir')  # 'installdir'
```

The `glob` module provides a function for making file lists from directory
wildcard searches, how to list all files in the current directory with `py`
extension?
<br class="f">
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
<br class="f">
`['demo.py', 'one', 'two', 'three']`

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
<br class="f">
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
<br class="f">
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
<br class="f">
The `math` module.
```python
import math
print(math.cos(math.pi / 4))  # 0.70710678118654757
print(math.log(1024, 2))      # 10.0
```

Which standard library module is used to work with random numbers?
<br class="f">
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
<br class="f">
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
<br class="f">
There are a number of modules for accessing the internet and processing internet
protocols. Two of the simplest are `urllib.request` for retrieving data
from URLs and `smtplib` for sending mail.
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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


The `reprlib` module provides a version of `repr` customized for abbreviated
displays of ==large or deeply nested containers==:
```python
import reprlib
reprlib.repr(set('supercalifragilisticexpialidocious'))
```

The `pprint` module offers more sophisticated control over printing both
built-in and user defined objects in a way that is readable by the interpreter.
When the result is longer than one line, the "pretty printer" adds
==line breaks and indentation== to more clearly reveal data structure:
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
==`[[garbage_collection]]`== to eliminate cycles).  The memory is freed shortly
after the last reference to it has been eliminated.

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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
