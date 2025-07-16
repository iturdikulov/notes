---
external:
  - https://docs.python.org/3/tutorial/controlflow.html
tags:
  - blog
  - annotation_article
created: 2025-01-14T11:41+03:00
sr-due: 2025-07-21
sr-interval: 7
sr-ease: 232
---

# 4. More Control Flow Tools

[[control_flow|Control flow]] - some information about control flow.

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
(`0,1,...,X-1`). It generates mathematics ==arithmetic progression==. <!--SR:!2025-02-07,84,240-->

If fact `range()` function generate ==equal== to argument number (if passed only
one) elements, we just start from 0 and increment by 1.

Last index of `range(10)`?:<wbr class="f"> `9`, from 0 to 9
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
<br class="f">
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
<br class="f">
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
<br class="f">
0 + 1 + 2 + 3 = 6 <!--SR:!2024-11-28,12,200-->

> The `break` statement, like in C, `breaks out` of the innermost enclosing
> ==`for` or `while` loop==. <!--SR:!2025-01-26,71,238-->

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
<!--SR:!2025-02-25,110,220-->

When `else` runs in `try-except` statement?
<br class="f">
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

A `match` statement comparig expression with ==successive== patterns (state).
This is [[pattern_matching]] like in Rust or Haskell.
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
<br class="f">
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
<br class="f">
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
<br class="f">
Only standalone names (like `var`) are assigned to by a match statement.
Dotted names (like `foo.bar`), attribute names (the `x=` and `y=`) or class
names (recognized by the "(...)" next to them like `Point` above) are never
assigned to. <!--SR:!2024-11-21,100,258-->

Can patterns in match case be nested?
<br class="f">
<!-- TODO: add real nested example -->
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
<br class="f">
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
<!--SR:!2024-11-21,5,178-->

How to use named constants (`Enum`) in pattern matching?
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
There some tools, which produce online or printed documentation, or to let
the user interactively browse through code. Also, many IDEs and editors
support showing documentation based on this docstrings. <!--SR:!2024-11-25,11,238-->

Order of variable references looking (tables)?
<br class="f">
- Local symbol table
- Local symbol table of enclosing functions (parents)
- Global symbol table
- Built-in names table
These priorities also reason why `global` and `nonlocal` statements are needed.

How to change (or use) variable from global scope in some function, when are you
trying to assign value to it, python create new local variable with the same
name?
<br class="f">
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
<br class="f">
In Python there no procedures, only functions. Functions without a `return`
statement do return a value. This value is called `None` (it's a built-in name).

What is object method in Python?
<br class="f">
A method is a function that 'belongs' to an object and is named
`obj.methodname`, where `obj` is some object (this may be an expression), and
`methodname` is the name of a method that is defined by the object's **type**.

You can define default values for arguments in a function, when it can be
required?
<br class="f">
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
<br class="f">
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
<br class="f">
Two positional arguments and three keyword arguments.

Positional-only, positional-or-keyword, and keyword-only parameters can be
combined in a single function definition, how to do this?
<br class="f">
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
<br class="f">
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
<br class="f">
Use positional-only if you want the **name** of the parameters to not be
available to the user. This is useful when parameter names have no real meaning,
if you want to enforce the order of the arguments when the function is called or
if you need to take some positional parameters and arbitrary keywords.

When keyword-only arguments in function definition are useful?
<br class="f">
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
<br class="f">
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
<br class="f">
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
==functions, methods, classes, and modules==. <!--SR:!2024-11-26,10,179-->

Docstring code style, at least basic information?
<br class="f">
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

Python code style usually use 4-==space== indentation, and no tabs (compromise between small and large
indentation). <!--SR:!2024-12-03,18,199-->

Wrap lines so that they don't exceed ==79== characters. Useful for small
displays and also prevent you writing complex code.

Use ==blank lines== to separate functions and classes, and larger blocks of code
inside functions, sort of grouping.

When possible, put comments on a line ==of their own (separate line)==.

How to document code in Python?
<br class="f">
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
