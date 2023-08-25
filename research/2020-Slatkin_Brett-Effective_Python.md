---
title: "Effective Python: 90 specific ways to write better python"
tags:
  - "research"
  - "inbox"
author: "Brett Slatkin"
citekey: "BrettSlatkinEffectivePython902020"
cloudLibrary: "http://zotero.org/users/9108355/items/5DEQB65V"
date: 2020
dateAdded: 1671292800
draft: true
localLibrary: "zotero://select/items/1_5DEQB65V"
sr-due: 1681833600
sr-ease: 250
sr-interval: 29
---


### Item 1: Know which version of python you're using {#item-1-know-which-version-of-python-you-re-using}


#### Idioms of programming language are defined by its users {#idioms-of-programming-language-are-defined-by-its-users}

This means popular practices, formating rules, conventions, etc are defined by their users!


#### Python version {#python-version}

You can easily detect which python version you use right now.


### Item 2: Follow the PEP8 Style Guide {#item-2-follow-the-pep8-style-guide}


#### PEP is {#pep-is}

Python Enhancement Proposal or PEP 8
It's Python formatting style guide.


#### Why PEP? {#why-pep}

Using consistent style, make your code much more approachable and readable.


#### Whitespace {#whitespace}

Since whitespaces are significant in Python, it's recommend to follow this rules:

-   Use 4 spaces insted tabs for indentation.
-   Indent a long lines by additional spaces if they splitted.
-   Functions and classes separated by 2 blank lines.
-   Class methods separated by 1 blank line.
-   ...


#### Naming {#naming}

-   Functions, variables, and attributes in `lowercas_underscore` format.
-   Protected instance attributes should be in `_leading_underscore` format.
-   Classes (including exceptions) should be in `CapitalizedWord` format.
-   Module-level constants should be in `ALL_CAPS` format.
-   Instance methods in classes should use `self` (ref to object), as the name of the first parameter.
-   Class methods should use `cls`, which refers to the class, as the name of the first parameter.


#### Expressions and statements {#expressions-and-statements}

-   Use inline negation `if a is not b` instead negation of positive expression `if not a is b`, some like `if not CONDTION`. It's really hard to understand.
-   Don't check for empty/non-empty by comparing length to zero ([], ''), just use `if/if not` something and you need assume that empty value will be evaluated to False, non-empty to True.
-   Avoid single-line if, for and while loops, except compound statements, spread them over multiple lines for clarity/readability (it's actual for complex items).
-   Split long lines with parentheses if they are too long.
-   Prefer splitting with parentheses over using \\ line conttinuation character.


#### Imports {#imports}

-   Place imports at top.
-   Use absolute names when you import modules.
-   When you need do relative import, use explicit method `from . import foo`
-   Follow ordering of module import: stdlib, thrid-party, own.
-   Use linters linke pylint, black, etc...


#### Things to remember {#things-to-remember}

-   Follow the PEP style guide.
-   Following common style facilitates collaboration with others.
-   Consistent code style make it easier to modify later (include automation?).


### Item 3: Know the Differences Between bytes and str {#item-3-know-the-differences-between-bytes-and-str}


#### Sequence data {#sequence-data}

In python there are 2 types that represent sequences of characters
bytes and str

-   byte - RAW unsigned 8 bit value `b'h\x65llo'`

<!--listend-->

```python
a = b'h\x65llo\x55'
print(list(a))
print(a)
```

-   str instances -  [[unicode]] code points, that represent textual characters from human language
    str instances don't have binary encoding

<!--listend-->

```python
a = 'a\u0300 propos'
print(list(a))
print(a)
print(a.encode('windows-1251', 'ignore'))
print(a.encode().decode())
```

The core of your program should use str type containg Unicode data, but can accept different encoding - latin1, big5 from interafaces.

Use helper function to ensure th e inputs you operate are the type of character sequence that you expect.

Bytes and str instances can be used together with operatos &gt;, =, -, +, %

If you want read or write bin data, open it in 'rb' 'rw' modes.

If you want to read or write unicode data be careful about system encoding. Explictiy pass the encoding paramter to open if you want to avoid surprices.

prefer f-strings

format of f strinig: f'{key!r:&lt;10} = {value:.2f}
    {key!r} - raw
    {key:&lt;10} - left order (min width) - 10 characters
    {value:.2f} - precision formatting
    f'my number is {number:.{places}}?

F-strings are sucinot yet powerful, because they allow for arbitray Pytho expression to be directly embedded within format specifiers.

Write helperes functions instead of complex expressions

Python's syntax makes it easy to write single line epxressions that are overly complicated and difficult to read.

Move complex expressions into helpere functions expeciialy if you need to use the same logic repeately


# Cover /1

# Half Title /4

# Title Page /6

# Copyright Page /7

# Dedication /8

# Contents /12

# Preface /18

# Acknowledgments /22

# About the Author /24

# Chapter 1 Pythonic Thinking /26

## Item 1: Know Which Version of Python You’re Using /26

## Item 2: Follow the PEP 8 Style Guide /27

## Item 3: Know the Differences Between bytes and str /30

## Item 4: Prefer Interpolated F-Strings Over C-style Format Strings and str.format /36

## Item 5: Write Helper Functions Instead of Complex Expressions /46

## Item 6: Prefer Multiple Assignment Unpacking Over Indexing /49

## Item 7: Prefer enumerate Over range /53

## Item 8: Use zip to Process Iterators in Parallel /55

## Item 9: Avoid else Blocks After for and while Loops /57

## Item 10: Prevent Repetition with Assignment Expressions /60

# Chapter 2 Lists and Dictionaries /68

## Item 11: Know How to Slice Sequences /68

## Item 12: Avoid Striding and Slicing in a Single Expression /71

## Item 13: Prefer Catch-All Unpacking Over Slicing /73

## Item 14: Sort by Complex Criteria Using the key Parameter /77

## Item 15: Be Cautious When Relying on dict Insertion Ordering /83

## Item 16: Prefer get Over in and KeyError to Handle Missing Dictionary Keys /90

## Item 17: Prefer defaultdict Over setdefault to Handle Missing Items in Internal State /95

## Item 18: Know How to Construct Key-Dependent Default Values with __missing__ /98

# Chapter 3 Functions /102

## Item 19: Never Unpack More Than Three Variables When Functions Return Multiple Values /102

## Item 20: Prefer Raising Exceptions to Returning None /105

## Item 21: Know How Closures Interact with Variable Scope /108

## Item 22: Reduce Visual Noise with Variable Positional Arguments /112

## Item 23: Provide Optional Behavior with Keyword Arguments /115

## Item 24: Use None and Docstrings to Specify Dynamic Default Arguments /119

## Item 25: Enforce Clarity with Keyword-Only and Positional-Only Arguments /122

## Item 26: Define Function Decorators with functools.wraps /127

# Chapter 4 Comprehensions and Generators /132

## Item 27: Use Comprehensions Instead of map and filter /132

## Item 28: Avoid More Than Two Control Subexpressions in Comprehensions /134

## Item 29: Avoid Repeated Work in Comprehensions by Using Assignment Expressions /136

## Item 30: Consider Generators Instead of Returning Lists /139

## Item 31: Be Defensive When Iterating Over Arguments /142

## Item 32: Consider Generator Expressions for Large List Comprehensions /147

## Item 33: Compose Multiple Generators with yield from /149

## Item 34: Avoid Injecting Data into Generators with send /152

## Item 35: Avoid Causing State Transitions in Generators with throw /158

## Item 36: Consider itertools for Working with Iterators and Generators /163

# Chapter 5 Classes and Interfaces /170

## Item 37: Compose Classes Instead of Nesting Many Levels of Built-in Types /170

## Item 38: Accept Functions Instead of Classes for Simple Interfaces /177

## Item 39: Use @classmethod Polymorphism to Construct Objects Generically /180

## Item 40: Initialize Parent Classes with super /185

## Item 41: Consider Composing Functionality with Mix-in Classes /190

## Item 42: Prefer Public Attributes Over Private Ones /195

## Item 43: Inherit from collections.abc for Custom Container Types /200

# Chapter 6 Metaclasses and Attributes /206

## Item 44: Use Plain Attributes Instead of Setter and Getter Methods /206

## Item 45: Consider @property Instead of Refactoring Attributes /211

## Item 46: Use Descriptors for Reusable @property Methods /215

## Item 47: Use__getattr__, __getattribute__, and __setattr__ for Lazy Attributes /220

## Item 48: Validate Subclasses with __init_subclass__ /226

## Item 49: Register Class Existence with __init_subclass__ /233

## Item 50: Annotate Class Attributes with __set_name__ /239

## Item 51: Prefer Class Decorators Over Metaclasses for Composable Class Extensions /243

# Chapter 7 Concurrency and Parallelism /250

## Item 52: Use subprocess to Manage Child Processes /251

## Item 53: Use Threads for Blocking I/O, Avoid for Parallelism /255

## Item 54: Use Lock to Prevent Data Races in Threads /260

## Item 55: Use Queue to Coordinate Work Between Threads /263

## Item 56: Know How to Recognize When Concurrency Is Necessary /273

## Item 57: Avoid Creating New Thread Instances for On-demand Fan-out /277

## Item 58: Understand How Using Queue for Concurrency Requires Refactoring /282

## Item 59: Consider ThreadPoolExecutor When Threads Are Necessary for Concurrency /289

## Item 60: Achieve Highly Concurrent I/O with Coroutines /291

## Item 61: Know How to Port Threaded I/O to asyncio /296

## Item 62: Mix Threads and Coroutines to Ease the Transition to asyncio /307

## Item 63: Avoid Blocking the asyncio Event Loop to Maximize Responsiveness /314

## Item 64: Consider concurrent.futures for True Parallelism /317

# Chapter 8 Robustness and Performance /324

## Item 65: Take Advantage of Each Block in try/except /else/finally /324

## Item 66: Consider contextlib and with Statements for Reusable try/finally Behavior /329

## Item 67: Use datetime Instead of time for Local Clocks /333

## Item 68: Make pickle Reliable with copyreg /337

## Item 69: Use decimal When Precision Is Paramount /344

## Item 70: Profile Before Optimizing /347

## Item 71: Prefer deque for Producer–Consumer Queues /351

## Item 72: Consider Searching Sorted Sequences with bisect /359

## Item 73: Know How to Use heapq for Priority Queues /361

## Item 74: Consider memoryview and bytearray for Zero-Copy Interactions with bytes /371

# Chapter 9 Testing and Debugging /378

## Item 75: Use repr Strings for Debugging Output /379

## Item 76: Verify Related Behaviors in TestCase Subclasses /382

## Item 77: Isolate Tests from Each Other with setUp, tearDown, setUpModule, and tearDownModule /390

## Item 78: Use Mocks to Test Code with Complex Dependencies /392

## Item 79: Encapsulate Dependencies to Facilitate Mocking and Testing /400

## Item 80: Consider Interactive Debugging with pdb /404

## Item 81: Use tracemalloc to Understand Memory Usage and Leaks /409

# Chapter 10 Collaboration /414

## Item 82: Know Where to Find Community-Built Modules /414

## Item 83: Use Virtual Environments for Isolated and Reproducible Dependencies /415

## Item 84: Write Docstrings for Every Function, Class, and Module /421

## Item 85: Use Packages to Organize Modules and Provide Stable APIs /426

## Item 86: Consider Module-Scoped Code to Configure Deployment Environments /431

## Item 87: Define a Root Exception to Insulate Callers from APIs /433

## Item 88: Know How to Break Circular Dependencies /438

## Item 89: Consider warnings to Refactor and Migrate Usage /443

## Item 90: Consider Static Analysis via typing to Obviate Bugs /450

# Index /460

## A /460

## B /461

## C /461

## D /462

## E /463

## F /463

## G /464

## H /464

## I /464

## J /465

## K /465

## L /465

## M /465

## N /466

## O /466

## P /466

## Q /467

## R /467

## S /467

## T /468

## U /469

## V /469

## W /469

## Y /469

## Z /469
