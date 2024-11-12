---
date: 2022-12-29
tags:
  - inbox
  - Python
sr-due: 2022-01-28
sr-interval: 6
sr-ease: 182
---

# Python

> Python is a [[high-level_programming_language|high-level]], general-purpose
> [[programming_language]]. Its design philosophy emphasizes code readability
> with the use of significant indentation via the off-side rule.
>
> Python is dynamically typed and garbage-collected. It supports multiple
> programming paradigms, including structured (particularly procedural),
> object-oriented and functional programming. It is often described as a
> "batteries included" language due to its comprehensive standard library.
>
> Guido_van_Rossum began working on Python in the late 1980s as a successor to
> the ABC programming language and first released it in 1991 as Python 0.9.0.
> Python 2.0 was released in 2000. Python 3.0, released in 2008, was a major
> revision not completely backward-compatible with earlier versions.
>
> Python consistently ranks as one of the [most popular programming
> languages](https://www.tiobe.com/tiobe-index/).
>
> Python is a multi-paradigm programming language. [[OOP|object-oriented]]
> programming and [[structured_programming]] are fully supported, and many of
> their features support [[functional_programming]] and aspect-oriented
> programming (including metaprogramming and metaobjects). Many other paradigms
> are supported via extensions, including design by contract and logic
> programming.
>
> Python uses dynamic typing and a combination of reference counting and a
> cycle-detecting garbage collector for memory management. It uses dynamic name
> resolution (late binding), which binds method and variable names during
> program execution.
>
> Its design offers some support for functional programming in the Lisp
> tradition. It has `filter`, `map` and `reduce` functions; list comprehensions,
> dictionaries, sets, and generator expressions. The standard library has two
> modules (itertools and functools) that implement functional tools borrowed
> from Haskell and Standard ML.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Python_\(programming_language\))</cite>

[[zen_of_python|Zen of python]] describes the philosophy of Python.

This is most prioritized language for me. I learn it according to my
[[programming_learning_path#Python|roadmap]].

**Python** is a [[high-level_programming_language|high-level]],
[[general-purpose_programming_language|general-purpose]] programming language.

One of key features of Python is attention to [[readability]], by using
indentation to delimit code blocks, rather than curly brackets or keywords.

Python is [dynamically typed] and [garbage-collected].

It supports any popular [[programming_paradigm]]:

- [[structured_programming|structured]]
- [[procedural_programming|procedural]]
- [[OOP|object-oriented]]
- [[functional_programming|functional]]

Rich [[Python_Community-Python_Standard_Library|standard library]] make
it's "batteries included" language.

In next sections I cover basics of Python language with Q/A flashcards based on
learnxinyminutes [^1] cheatsheet.

## 1. Primitive Datatypes and Operators

How to write comments, their types and usage?
&#10;<br>
```python
# Single line comments start with a number symbol.

"""
Multiline strings can be written
using three "s, and are often used
as documentation.
"""

####################################################
## Some fancy styled comment
####################################################

Pi = 3.141592653589793  # need to place two spaces for same line comments
```
<!--SR:!2024-10-27,4,182-->

What is the result of this division `10.0 / 3`?
&#10;<br>
The result of division is always float, `10.0 / 3  => 3.3333333333333335` <!--SR:!2024-10-27,4,182-->

What is the modulo operation?
&#10;<br>
Mathematical operation that finds the remainder of an integer division.
```python
print(7 % 3)  # => 1
print(13 % 2) # => 1
print(8 % 3) # => 2
# i % j have the same sign as j, unlike C
print(-7 % 3)  # => 2
```
<!--SR:!2024-10-27,2,162-->

What is exponentiation and how to use it in Python?
&#10;<br>
Raise a number to a power. In python exist special operator `**`, `2**3 => 8`,
x**y, x to the y'th power. <!--SR:!2024-10-27,4,182-->

How to enforce custom precedence in Python?
&#10;<br>
Need to use parentheses:
```python
1 + 3 * 2    #  => 7
(1 + 3) * 2  #  => 8
2 + 2 * 2    #  => 6
(2 + 2) * 2  #  => 8
```
<!--SR:!2024-11-14,7,182-->

```
5 // 3       # => 1
-5 // 3      # => -2
5.0 // 3.0   # => 1.0  # works on floats too
-5.0 // 3.0  # => -2.0
```

Most basic and efficient data type in Python (and other languages) is?
&#10;<br>
Boolean values, they are primitives (Note: the capitalization)
```python
True   # => True
False  # => False
```
` <!--SR:!2024-11-02,7,182-->

How do you negate a Boolean value?
&#10;<br>
With not.
```python
not True   # => False
not False  # => True
```
<!--SR:!2024-10-27,4,182-->

Boolean Operators in python?
&#10;<br>
"and" and "or", case-sensitive
```python
True and False  # => False
False or True   # => True
```
<!--SR:!2024-10-27,4,182-->

How do True and False relate to numerical values?
&#10;<br>
True and False are actually 1 and 0 but with different keywords.
```python
True + True  # => 2
True * 8     # => 8
False - 5    # => -5
```
<!--SR:!2024-10-26,4,182-->

How do comparison operators actually work?
&#10;<br>
Look at the numerical value of True and False or boolean representations of
values.
```python
0 == False   # => True
2 > True     # => True
2 == True    # => False
-5 != False  # => True
```
<!--SR:!2024-10-28,3,162-->

How do you evaluate `None`, `0`, and empty
`strings`/`lists`/`dicts`/`tuples`/`sets`?
&#10;<br>
None, 0, and empty strings/lists/dicts/tuples/sets all evaluate to False. All
other values are True.
```python
bool(0)      # => False
bool("")     # => False
bool([])     # => False
bool({})     # => False
bool(())     # => False
bool(set())  # => False
bool(4)      # => True
bool(-6)     # => True
```
<!--SR:!2024-10-26,4,182-->

How do boolean logical operators (and, or) on ints work (casting), bool(X)?
&#10;<br>
Using boolean logical operators (and/or) on ints casts them to booleans for evaluation,
but their non-cast value is returned. Don't mix up with bool(ints) and bitwise
and/or (&,|).
&#10;<br>
```python
bool(0)   # => False, boolean value!
bool(2)   # => True
0 and 2   # => 0, non boolean value!
bool(-5)  # => True
bool(2)   # => True
-5 or 0   # => -5
```
<!--SR:!2024-10-25,2,162-->

How to use equality in Python?
&#10;<br>
Equality is the `==` operator.
```python
1 == 1  # => True
2 == 1  # => False
```

How to use inequality in Python?
&#10;<br>
Inequality is the `!=` operator.
```python
1 != 1  # => False
2 != 1  # => True
```
<!--SR:!2024-11-05,7,182-->

How to use more or less than operators in Python?
&#10;<br>
```python
1 < 10  # => True,  1 is less than 10
1 > 10  # => False, 1 is greater than 10
2 <= 2  # => True, 2 is less or equal to 2
2 >= 2  # => True, 2 is greater or equal to 2
```
<!--SR:!2024-10-27,4,182-->

How do you see whether a value is in a numeric range (1..100)?
&#10;<br>
You can use following comparations:
```python
# Seeing whether a value is in a range
1 < 2 and 2 < 3  # => True
2 < 3 and 3 < 2  # => False
# Chaining makes this look nicer
1 < 2 < 3  # => True
2 < 3 < 2  # => False
```
<!--SR:!2024-10-25,2,162-->

What is the difference between `is` and `==`?
&#10;<br>
```python
# `Is` checks if two variables refer to the **same object**, but `==` checks
# if the objects pointed to have the **same values**.

a = [1, 2, 3, 4]  # Point a at a new list, [1, 2, 3, 4]
b = a             # Point b at what a is pointing to
b is a            # => True, a and b refer to the same object
b == a            # => True, a's and b's objects are equal
b = [1, 2, 3, 4]  # Point b at a new list, [1, 2, 3, 4]
b is a            # => False, a and b do not refer to the same object
b == a            # => True, a's and b's objects are equal
```

How do you create strings?
&#10;<br>
Strings are created with " or '.
```python
"This is a string."
'This is also a string.'
name = "Inom"
f"This is a formatted string with placeholders: Name - {name}."
```
<!--SR:!2024-10-27,4,182-->

How do you add (concatenate) strings?
&#10;<br>
```python
# Strings can be added with "+"
"Hello " + "world!"  # => "Hello world!"
# String literals (but not variables) can be concatenated without using '+'
"Hello " "world!"    # => "Hello world!"
print(
    "Hello "
    "world"             # => "Hello world"
)
```
<!--SR:!2024-11-11,4,162-->

Can be string treated like a list of characters?
&#10;<br>
```python
# Yes, in python also no "char" type, type("s")
"Hello world!"[0]  # => 'H'
```
<!--SR:!2024-10-27,4,182-->

How do you find the length of a string or array?
```python
len("This is a string")  # => 16
len([1, 2, 3])           # => 3
```

What are f-strings?
&#10;<br>
 Since Python 3.6, you can use f-strings or formatted string literals, to place
variables inside a string (sort of template).
```python
name = "Reiko"
f"She said her name is {name}."  # => "She said her name is Reiko"
# Any valid Python expression inside these braces is returned to the string.
f"{name} is {len(name)} characters long."  # => "Reiko is 5 characters long."
```
<!--SR:!2024-10-26,4,182-->

Is `None` an object?
&#10;<br>
Yes, like any other data.
```python
isinstance(None, object)  # => True

print(type("Hello"), isinstance("Hello", str))
print(type(100), isinstance(100, int))
print(type(100.23), isinstance(100.23, float))
print(type(100 + 2j), isinstance(100 + 2j, complex))
print(type(True), isinstance(True, bool))
print(type(None), isinstance(None, type(None)))
print(type([]), isinstance([], list))
print(type(()), isinstance((), tuple))
print(type({}), isinstance({}, dict))
print(type({""}), isinstance({""}, set))

class Person: ...
def test(): ...
from types import FunctionType

print(type(Person), isinstance(Person, type))
print(type(test), isinstance(test, FunctionType))
```
<!--SR:!2024-11-12,5,162-->

How do you compare objects to None and why?
&#10;<br>
`is` checks to see if the object is the same object, while `==` just checks if
they are equivalent, some classes have custom comparison methods that treat `==
None` differently from `is None`.
Don't use the equality "==" symbol to compare objects to None Use "is" instead.
This checks for equality of object identity.
```python
"etc" is None  # => False
None is None   # => True

import numpy as np
a = np.zeros(3) # now a is array([0., 0., 0.])

# compares elementwise, outputs array([False, False, False]), i.e. not
# boolean!!!
a == None   # array([False, False, False])

# compares object to object, outputs False
a is None   # => False
```
<!--SR:!2024-10-27,4,182-->

## 2. Variables and Collections

What is the `print` function?
&#10;<br>
Prints text to the console
```python
print("I'm Python. Nice to meet you!")  # => I'm Python. Nice to meet you!
print("Hello, World", end="!")  # => Hello, World!
```
<!--SR:!2024-10-26,4,182-->

How do you get input from the console?
&#10;<br>
```python
input_string_var = input("Enter some data: ")  # Returns the data as a string
```
<!--SR:!2024-10-26,4,182-->

Is there a declaration in Python (`cpython`)?
&#10;<br>
There are no declarations (type hints are not declarations), only assignments. <!--SR:!2024-10-27,4,182-->

Convention in naming variables is?
&#10;<br>
snake_case style and not starting with number
```python
some_var = 5
some_var  # => 5
```
<!--SR:!2024-10-27,4,182-->

What happens if you access an unassigned variable?
&#10;<br>
Accessing a previously unassigned variable is an exception.
See [[#3. Control Flow and Iterables]] to learn more about exception handling.
```python
some_unknown_var  # Raises a NameError
```

How can you use if as an expression (like ternary operator)?
&#10;<br>
Equivalent of C's `?:` ternary operator.
```python
"yay!" if 0 > 1 else "nay!"  # => "nay!"
"yay!" if 0 < 1 else "nay!"  # => "yay!"
```
<!--SR:!2024-10-26,4,182-->

What are lists, how to create them?
&#10;<br>
Data structure which store sequences.
```python
li = []
# You can start with a prefilled list
other_li = [4, 5, 6]
```
<!--SR:!2024-11-05,7,182-->

How do you add elements to a list and remove them?
&#10;<br>
```python
li = []
# Add stuff to the end of a list with append
li.append(1)    # li is now [1]
li.append(2)    # li is now [1, 2]
li.append(4)    # li is now [1, 2, 4]
li.append(3)    # li is now [1, 2, 4, 3]
# Remove from the end with pop
li.pop()        # => 3 and li is now [1, 2, 4]
# Let's put it back
li.append(3)    # li is now [1, 2, 4, 3] again.
```
<!--SR:!2024-10-26,4,182-->

How do you access elements in a list?
&#10;<br>
```python
# Access a list like you would any array
li[0]   # => 1
# Look at the last element
li[-1]  # => 3
```
<!--SR:!2024-10-26,4,182-->

Looking out of list bounds (accessing) is an?
&#10;<br>
index error:
```python
li = [1, 2, 3]
li[4]  # Raises an IndexError
```
<!--SR:!2024-10-25,2,187-->

How do you look at ranges in a list?
Fill this list:
```python
li = [1, 2, 4, 3]
li[1:3]   # Return list ...
li[2:]    # Return list ...
li[:3]    # Return list ...
li[::2]   # Return list ...
li[::-1]  # Return list ...
```
&#10;<br>
You can look at ranges with slice syntax. The start index is included, the end
index is not (it's a closed/open range for you mathy types).
```python
li = [1, 2, 4, 3]
li[1:3]   # [2, 4], return list from index 1 to 3
li[2:]    # [4, 3], return list starting from index 2 to end of list
li[:3]    # [1, 2, 4], return list from beginning until index 3
li[::2]   # [1, 4], return list selecting elements with a step size of 2
li[::-1]  # [3, 4, 2, 1], return list in reverse order
li[::-2]  # [3, 2], return list in reverse order with step size 2
# Use any combination of these to make advanced slices
# li[start:end:step]
```
<!--SR:!2024-10-24,1,167-->

Can we use slicing to create copy of list?
&#10;<br>
Yes. But be careful, we are creating shallow copy.
```python
a = []
b = []
li = [a, b, 4, 3]
li2 = li[:]  # => li2 = [1, 2, 4, 3] but (li2 is li) will result in false.
```

How do you remove arbitrary elements from a list?
&#10;<br>
Remove arbitrary elements from a list with "del"
```python
li = [1, 2, 4, 3]
del li[2]  # li is now [1, 2, 3]
```

How do you remove the first occurrence of a value in a list, what if we are
trying to remove a value that is not in the list or remove it two times?
&#10;<br>
Remove first occurrence of a value
```python
li = [1, 2, 3]
li.remove(4)  # Raises a ValueError as 4 is not in the list
li.remove(2)  # li is now [1, 3]
li.remove(2)  # Raises a ValueError as 2 is not in the list
```

How do you insert an element at a specific index in a list?
&#10;<br>
Need to use `insert` method.
```python
li = [1, 3]
li.insert(1, 2)  # li is now [1, 2, 3]
```

How do you get the index of the first item found matching (index by value) the
argument in a list, what if index is not found?
```python
li = [1, 2, 3]
li.index(2)  # => 1
li.index(4)  # Raises a ValueError as 4 is not in the list
```

How do you add lists (concatenate lists)?
&#10;<br>
You can concatenate lists with `+` operator or with `extend(l)` method.
```python
# Note: values for li and for other_li are not modified.
li = [1, 2, 3]
other_li = [4, 5, 6]
li = li + other_li  # => [1, 2, 3, 4, 5, 6]

# Concatenate lists with "extend()"
li_2 = [1, 2, 3]
other_li_2 = [4, 5, 6]
li_2.extend(other_li)  # Now li is [1, 2, 3, 4, 5, 6]

li == li_2  # => True
```
How do you check for existence in a list?
&#10;<br>
With `in` operator.
```python
li = [1, 2, 3]
1 in li  # => True
```

How do you examine the length of a list? |
&#10;<br>
Examine the length with universal "len()" method (working for any iterable).
&#10;<br>
```python
li = [3, 1, 4]
len(li)  # => 3
```

Tuples are like lists, but they are (main property)?
&#10;<br>
But they are immutable.
```python
tup = (1, 2, 3)
tup[0]      # => 1
tup[0] = 3  # Raises a TypeError
```

How do you create a tuple of length one, zero?
&#10;<br>
Note that a tuple of length one has to have a comma after the last element but
tuples of other lengths, even zero, do not.
```python
type((1))   # => <class 'int'>, not a tuple!

a = (1,)
b = ()
type(a)  # => <class 'tuple'>
len(a)   # => 1

type(b)  # => <class 'tuple'>
len(b)   # => 0
```

Can do you perform list operations (get length, concatenate, slice, existence
check) on tuples?
&#10;<br>
Yes, you can do most of the list operations on tuples too
```python
len(tup)         # => 3
tup + (4, 5, 6)  # => (1, 2, 3, 4, 5, 6)
tup[:2]          # => (1, 2)
2 in tup         # => True
```

How do you unpack tuples (`(1, 2, 3)`), is it possible to unpack
arbitrary-lenght tuple into few variables, nested unpacking?
&#10;<br>
You can unpack tuples (or lists) into variables
```python
a, b, c = (1, 2, 3)  # a is now 1, b is now 2 and c is now 3
```
Yes we can unpack tuples into few variables, extended unpacking.
```python
a, *b, c = (1, 2, 3, 4)  # a is now 1, b is now [2, 3] and c is now 4
```
Nested unpacking is possible too.
```python
data = [1, [2,3,4], 5, [6,7]]
first, (second, *third), fourth, (fifth, sixth) = data
# (1, 2, [3, 4], 5, 6, 7)
```
Additional information.
```python
# Tuples are created by default if you leave out the parentheses
d, e, f = 4, 5, 6  # tuple 4, 5, 6 is unpacked into variables d, e and f
# respectively such that d = 4, e = 5 and f = 6
# Now look how easy it is to swap two values
e, d = d, e  # d is now 5 and e is now 4
```

What are dictionaries?
&#10;<br>
Dictionaries ([[hash_table]]) store mappings from keys to values.
```python
empty_dict = {}
# Here is a prefilled dictionary
filled_dict = {"one": 1, "two": 2, "three": 3}
```

What are the requirements for keys in dictionaries?
&#10;<br>
Keys for dictionaries have to be immutable types. This is to ensure that
the key can be converted to a constant hash value for quick look-ups.
Immutable types include ints, floats, strings, tuples.
```python
invalid_dict = {[1,2,3]: "123"}  # => Yield a TypeError: unhashable type: 'list'
valid_dict = {(1,2,3):[1,2,3]}   # Values can be of any type, however.
```

How do you look up values in a dictionary?
&#10;<br>
Look up values with `[]`
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
filled_dict["one"]  # => 1
```

How do you get all keys and values from a dictionary?
&#10;<br>
Get all keys as an iterable with "keys()". We need to wrap the call in list() to
turn it into a list. Note - for Python versions <3.7, dictionary key ordering is
not guaranteed. Your results might not match the example below exactly. However,
as of Python 3.7, dictionary items maintain the order at which they are inserted
into the dictionary.
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
list(filled_dict.keys())  # => ["three", "two", "one"] in Python <3.7
list(filled_dict.keys())  # => ["one", "two", "three"] in Python 3.7+
```
Get all values as an iterable with "values()". Once again we need to wrap it
in list() to get it out of the iterable. Note - Same as above regarding key
ordering.
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
list(filled_dict.values())  # => [3, 2, 1]  in Python <3.7
list(filled_dict.values())  # => [1, 2, 3] in Python 3.7+
```

How do you check for existence of keys in a dictionary?
&#10;<br>
Check for existence of keys in a dictionary with "in"
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
"one" in filled_dict  # => True
1 in filled_dict      # => False
```

Looking up a non-existing key is a `KeyError`: `filled_dict["four"]  # KeyError`,
how to avoid getting a `KeyError` and return a default value?
&#10;<br>
Use "get()" method to avoid the KeyError
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
filled_dict.get("one")      # => 1
filled_dict.get("four")     # => None

# The get method supports a default argument when the value is missing
filled_dict.get("one", 4)   # => 1
filled_dict.get("four", 4)  # => 4
```

How do you insert into a dictionary only if the given key **isn't** present?
&#10;<br>
Need to use `"setdefault()"` method:
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
filled_dict.setdefault("five", 5)  # filled_dict["five"] is set to 5
filled_dict.setdefault("five", 6)  # filled_dict["five"] is still 5
```

How do you add a new value to a dictionary?
By using `"update()"` method or using key assignment:
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
filled_dict.update({"four":4})  # => {"one": 1, "two": 2, "three": 3, "four": 4}
filled_dict["four"] = 4         # another way to add to dict
```

How do you remove keys from a dictionary?
&#10;<br>
With `del`:
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
del filled_dict["one"]  # Removes the key "one" from filled dict
```

How do you use additional unpacking options in dictionaries?
&#10;<br>
From Python 3.5 you can also use the additional unpacking options:
```python
{"a": 1, **{"b": 2}}  # => {'a': 1, 'b': 2}
{"a": 1, **{"a": 2}}  # => {'a': 2}
```

What sets store?
&#10;<br>
Sets store unique values of sequences.
```python
empty_set = set()
# Initialize a set with a bunch of values.
some_set = {1, 1, 2, 2, 3, 4}  # some_set is now {1, 2, 3, 4}
```

Similar to keys of a dictionary, elements of a set have to be (requirements)?
&#10;<br>
Immutable:
```python
invalid_set = {[1], 1}  # => Raises a TypeError: unhashable type: 'list'
valid_set = {(1,), 1}
```

How do you add elements to a set?
&#10;<br>
By using `add` method.
```python
some_set = {1, 1, 2, 2, 3, 4}  # some_set is now {1, 2, 3, 4}
filled_set = some_set

# Add one more item to the set
filled_set.add(5)  # filled_set is now {1, 2, 3, 4, 5}

# Sets do not have duplicate elements
filled_set.add(5)  # it remains as before {1, 2, 3, 4, 5}
```

How do you perform set operations like intersection, union, difference and
symmetric difference?
&#10;<br>
```python
filled_set = {1, 2, 3, 4, 5}
other_set = {3, 4, 5, 6}

# Do set intersection with &
filled_set & other_set  # => {3, 4, 5}

# Do set union with |
filled_set | other_set  # => {1, 2, 3, 4, 5, 6}

# Do set difference with -
{1, 2, 3, 4} - {2, 3, 5}  # => {1, 4}

# Do set symmetric difference with ^
{1, 2, 3, 4} ^ {2, 3, 5}  # => {1, 4, 5}
```

How to check if a set is a superset of another set:
&#10;<br>
```python
# Check if set on the left is a superset of set on the right
{1, 2} >= {1, 2, 3}  # => False

# Check if set on the left is a subset of set on the right
{1, 2} <= {1, 2, 3}  # => True
```

How do you check for existence in a set?
&#10;<br>
By using `is` operator:
```python
2 in filled_set   # => True
10 in filled_set  # => False
```

How do you make a copy (one layer deep copy) of a set?
&#10;<br>
```python
filled_set = some_set.copy()  # filled_set is {1, 2, 3, 4, 5}
filled_set is some_set        # => False
```

## 3. Control Flow and Iterables

How to use control flow in Python?
&#10;<br>
```python
# Let's just make a variable
some_var = 5

# Here is an if statement. Indentation is significant in Python!
# Convention is to use four spaces, not tabs.
# This prints "some_var is smaller than 10"
if some_var > 10:
    print("some_var is totally bigger than 10.")
elif some_var < 10:    # This elif clause is optional.
    print("some_var is smaller than 10.")
else:                  # This is optional too.
    print("some_var is indeed 10.")
```

What are the for loops do?
&#10;<br>
For loops iterate over lists/sequences/iterables:
```python
"""
prints:
    dog is a mammal
    cat is a mammal
    mouse is a mammal
"""
for animal in ["dog", "cat", "mouse"]:
    # You can use format() to interpolate formatted strings
    print("{} is a mammal".format(animal))
```

What is the range function?
&#10;<br>
`range(number)` returns an `iterable` of numbers from zero up to (but excluding)
the given number, how to use it?
```python
"""
prints:
    0
    1
    2
    3
"""
for i in range(4):
    print(i)

"""
"range(lower, upper)" returns an iterable of numbers
from the lower number to the upper number
prints:
    4
    5
    6
    7
"""
for i in range(4, 8):
    print(i)

"""
"range(lower, upper, step)" returns an iterable of numbers
from the lower number to the upper number, while incrementing
by step. If step is not indicated, the default value is 1.
prints:
    4
    6
"""
for i in range(4, 8, 2):
    print(i)
```

How do you loop over a list to retrieve both the index and the value of each
list item?
&#10;<br>
```python
"""
Loop over a list to retrieve both the index and the value of each list item:
    0 dog
    1 cat
    2 mouse
"""
animals = ["dog", "cat", "mouse"]
for i, value in enumerate(animals):
    print(i, value)
```

How a `while` loops are working?
&#10;<br>
While loops go until a condition is no longer met `True`, even "infinitely" if
the condition is never met.
```python
"""
prints:
    0
    1
    2
    3
"""
x = 0
while x < 4:
    print(x)
    x += 1  # Shorthand for x = x + 1
```

How do you handle exceptions with a try/except block, how else and finnaly in
try/except block is working?
&#10;<br>
Handle exceptions with a try/except block
```python
try:
    # Use "raise" to raise an error
    raise IndexError("This is an index error")
except IndexError as e:
    pass                 # Refrain from this, provide a recovery (next example).
except (TypeError, NameError):
    pass                 # Multiple exceptions can be processed jointly.
else:                    # Optional clause to the try/except block. Must follow
                         # all except blocks.
    print("All good!")   # Runs only if the code in try don't raise an exceptions
finally:                 # Execute under all circumstances
    print("We can clean up resources here")
```

How do you clean up resources without try/finally (with closing)?
&#10;<br>
Instead of try/finally to clean up resources you can use a with statement:
```python
with open("myfile.txt") as f:
    for line in f:
        print(line)
```

How do you write to a file (string or JSON)?
&#10;<br>
Writing to a file:
```python
contents = {"aa": 12, "bb": 21}
with open("myfile1.txt", "w") as file:
    file.write(str(contents))        # writes a string to a file

import json
with open("myfile2.txt", "w") as file:
    file.write(json.dumps(contents))  # writes an object to a file
```

How do you read from a file as string, parsed JSON into dictionary?
&#10;<br>
```python
with open("myfile1.txt") as file:
    contents = file.read()           # reads a string from a file
print(contents)  # => '{"aa": 12, "bb": 21}'

with open("myfile2.txt", "r") as file:
    contents = json.load(file)       # reads a json object from a file
print(contents)  # => {"aa": 12, "bb": 21}
```
<!--SR:!2024-10-26,1,167-->

What is an iterable?
&#10;<br>
Python offers a fundamental abstraction called the Iterable. An iterable, is an
object that can be treated as a sequence. The object returned by the range
function, is an iterable.
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
our_iterable = filled_dict.keys()
print(our_iterable)  # => dict_keys(['one', 'two', 'three']). This is an object
                     # that implements our Iterable interface.

# An iterable is an object that knows how to create an iterator.
our_iterator = iter(our_iterable)
```

How do you loop over an iterable?
&#10;<br>
We can loop over it with `for` loop:
```python
filled_dict = {"one": 1, "two": 2, "three": 3}
our_iterable = filled_dict.keys()
for i in our_iterable:
    print(i)  # Prints one, two, three

# However we cannot address elements by index.
our_iterable[1]  # Raises a TypeError
```

How do you get the next object from an iterator, what if we grabbed all data
from iterable?
&#10;<br>
Our iterator is an object that can remember the state as we traverse through
it. We get the next object with `next()`.
```python
our_iterator = iter({"one": 1, "two": 2, "three": 3}.keys())
next(our_iterator)  # => "one"
# It maintains state as we iterate.
next(our_iterator)  # => "two"
next(our_iterator)  # => "three"

# After the iterator has returned all of its data, it raises a
# StopIteration exception
next(our_iterator)  # Raises StopIteration
```

How to loop over an iterable without using `next`?
&#10;<br>
We can loop over it with `for`, in fact, "for" automatically call `next` for us:
```python
our_iterator = iter({"one": 1, "two": 2, "three": 3}.keys())
for i in our_iterator:
    print(i)  # Prints one, two, three
```

How to grab all the elements of an iterable or iterator?
&#10;<br>
By call `list()` function:
```python
list(our_iterable)  # => Returns ["one", "two", "three"]
list(our_iterator)  # => Returns [] because state is saved
```


## 4. Functions

How to create Python function?
&#10;<br>
Use `def` to create new functions:
```python
def add(x, y):
    print("x is {} and y is {}".format(x, y))
    return x + y  # Return values with a return statement
```

How do you call functions with parameters, keyword arguments?
&#10;<br>
Need to pass arguments/parameters in parentheses:
```python
def add(x, y):
    print("x is {} and y is {}".format(x, y))
    return x + y  # Return values with a return statement

add(5, 6)  # => prints out "x is 5 and y is 6" and returns 11

# Another way to call functions is with keyword arguments
add(y=6, x=5)  # Keyword arguments can arrive in any order.
```

How do you define functions that take a variable number of positional arguments,
keyword argmunts?
&#10;<br>
Need to use `*args` or `**kwargs`, conventional, but not strict variable names
with prefixes:
```python
def varargs(*args):
    return args

def keyword_args(**kwargs):
    return kwargs

varargs(1, 2, 3)  # => (1, 2, 3)
keyword_args(big="foot", loch="ness")  # => {"big": "foot", "loch": "ness"}

# You can do both at once, if you like
def all_the_args(*args, **kwargs):
    print(args)
    print(kwargs)

all_the_args(1, 2, a=3, b=4)
"""
 prints:
    (1, 2)
    {"a": 3, "b": 4}
"""
```

How to call function with `args` and `kwargs` from some variables (expand
tuple/dict)?
&#10;<br>
Use * to expand `args` (tuples) and use `**` to expand `kwargs` (dictionaries).
```python
def all_the_args(*args, **kwargs):
    print(args)
    print(kwargs)

args = (1, 2, 3, 4)
kwargs = {"a": 3, "b": 4}
all_the_args(*args)            # equivalent: all_the_args(1, 2, 3, 4)
all_the_args(**kwargs)         # equivalent: all_the_args(a=3, b=4)
all_the_args(*args, **kwargs)  # equivalent: all_the_args(1, 2, 3, 4, a=3, b=4)
```

How do you return multiple values from a function?
&#10;<br>
Returning multiple values is can be made with tuple assignments:
```python
def swap(x, y):
    return y, x  # Return multiple values as a tuple without the parenthesis.
                 # (Note: parenthesis have been excluded but can be included)

x = 1
y = 2
x, y = swap(x, y)     # => x = 2, y = 1
# (x, y) = swap(x,y)  # Again the use of parenthesis is optional.
```

What is the difference between local and global scope, how to override variable
from global scope?
&#10;<br>
Global Scope: Variables declared outside of functions are accessible everywhere
in your program. They're like things you've placed in the room, anyone can see
them.
Local Scope: Variables declared inside functions are only accessible within that
function (not really true for Python). They're like things you've put in the
box, only people with the box (inside the function) can see them.
But you can "move" variable from global scope with `global` keyword (makes the
variable visible to everything in the module).
```python
# global scope
x = 5

def set_x(num):
    # local scope begins here
    # local var x not the same as global var x
    x = num    # => 43
    print(x)   # => 43

def set_global_x(num):
    # global indicates that particular var lives in the global scope
    global x
    print(x)   # => 5
    x = num    # global var x is now set to 6
    print(x)   # => 6

set_x(43)
set_global_x(6)
"""
prints:
    43
    5
    6
"""
```

Does python support first-class functions?
&#10;<br>
Yes, python has first class functions
```python
def create_adder(x):
    def adder(y):
        return x + y
    return adder

add_10 = create_adder(10)
add_10(3)   # => 13
```

Closures captures the variables it needs from its ==surrounding environment==,
allowing you to maintain state information in a way that's both elegant and
efficient.
```python
def foo():
   x = 3
   def bar(n):
      print(x + n) # x retains hook to the local var `x`
   x = 5       # even though 'x' has gone out of scope and should be defunct
   return bar

bar = foo()
bar(0)   # print 5
bar(1)  # print 6
```

How we can modify variables out of closure function in python?
&#10;<br>
We can use the `nonlocal` keyword to work with variables in nested scope which
shouldn't be declared in the inner functions.
```python
def create_avg():
    total = 0
    count = 0
    def avg(n):
        nonlocal total, count
        total += n
        count += 1
        return total/count
    return avg
avg = create_avg()
avg(3)  # => 3.0
avg(5)  # (3+5)/2 => 4.0
avg(7)  # (8+7)/3 => 5.0
```

How to use anonymous functions?
&#10;<br>
<!-- TODO: more info about anonymous functions -->
We can define anonymous functions with `lambda` keyword.
```python
(lambda x: x > 2)(3)                  # => True
(lambda x, y: x ** 2 + y ** 2)(2, 1)  # => 5
```

Is Python has built-in higher order functions?
<!-- TODO: more info about higher order functions -->
&#10;<br>
There are built-in higher order functions
```python
list(map(add_10, [1, 2, 3]))          # => [11, 12, 13]
list(map(max, [1, 2, 3], [4, 2, 1]))  # => [4, 2, 3]

list(filter(lambda x: x > 5, [3, 4, 5, 6, 7]))  # => [6, 7]
```

Is there alternative to maps and filters?
&#10;<br>
Yes, we can use list comprehensions for nice maps and filters
List comprehension stores the output as a list (which itself may be nested).
This structures are very "Pythonic" and can be used to make code more readable.
```python
def create_adder(x):
    def adder(y):
        return x + y
    return adder

add_10 = create_adder(10)
[add_10(i) for i in [1, 2, 3]]         # => [11, 12, 13]
[x for x in [3, 4, 5, 6, 7] if x > 5]  # => [6, 7]

# You can construct set and dict comprehensions as well.
{x for x in "abcddeef" if x not in "abc"}  # => {'d', 'e', 'f'}
{x: x**2 for x in range(5)}  # => {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}
```

## 5. Modules

How to import module, specific function from module, all from module (not
recommended)?
&#10;<br>
```python
# You can import modules
import math
print(math.sqrt(16))  # => 4.0

# You can get specific functions from a module
from math import ceil, floor
print(ceil(3.7))   # => 4
print(floor(3.7))  # => 3

# You can import all functions from a module.
# Warning: this is not recommended
from math import *
```

How do you shorten module names while importing them?
&#10;<br>
You can shorten module names with `as` keyword:
```python
import math as m
math.sqrt(16) == m.sqrt(16)  # => True
```

What are really Python modules?
&#10;<br>
Python modules are just ordinary Python files. You can write your own, and
import them. The name of the module is the same as the name of the file.

How do you find out which functions and attributes are defined in a module?
&#10;<br>
Need to use `dir()` function:
```python
import math
dir(math)
```

What happens if you have a Python script named `math.py` in the same directory
as your current script?
&#10;<br>
The file `math.py` will be loaded instead of the built-in Python module when you
import `math` module. This happens because the local directory has priority over
Python's built-in libraries.


## 6. Classes

What is a class, how to create it, class basic structure?
&#10;<br>
We use the "class" statement to create a class, this is some standard class
example:
```python
class Human:
    # A class attribute. It is shared by all instances of this class
    species = "H. sapiens"

    # Basic initializer, this is called when this class is instantiated.
    # Note that the double leading and trailing underscores denote objects
    # or attributes that are used by Python but that live in user-controlled
    # namespaces. Methods(or objects or attributes) like: __init__, __str__,
    # __repr__ etc. are called special methods (or sometimes called dunder
    # methods). You should not invent such names on your own.
    def __init__(self, name):
        # Assign the argument to the instance's name attribute
        self.name = name

        # Initialize property
        self._age = 0   # the leading underscore indicates the "age" property is
                        # intended to be used internally
                        # do not rely on this to be enforced: it's a hint to other devs

        # This attribute will be transformed to instance_name._Human__life_span
        # so you can't access it directly like _age (hidden by convention)
        self.__life_span = 122

    # An instance method. All methods take "self" as the first argument
    def say(self, msg):
        print("{name}: {message}".format(name=self.name, message=msg))

    # Another instance method
    def sing(self):
        return "yo... yo... microphone check... one two... one two..."

    # A class method is shared among all instances
    # They are called with the calling class as the first argument
    @classmethod
    def get_species(cls):
        return cls.species

    # A static method is called without a class or instance reference
    @staticmethod
    def grunt():
        return "*grunt*"

    # A property is just like a getter.
    # It turns the method age() into a read-only attribute of the same name.
    # There's no need to write trivial getters and setters in Python, though.
    @property
    def age(self):
        return self._age

    # This allows the property to be set
    @age.setter
    def age(self, age):
        self._age = age

    # This allows the property to be deleted
    @age.deleter
    def age(self):
        del self._age
```

When a Python interpreter reads a source file (import module) it executes all
its code. How to avoid execute some code when we import module and execute it if
we run module as a script?
&#10;<br>
Need to use `__name__` variable checking, this check makes sure this code block
is only executed when this module is the main program:
```python
if __name__ == "__main__":
    print("I am main program")
```

How do you instantiate a class and use class methods?
&#10;<br>
```python
i = Human(name="Ian")
i.say("hi")                     # "Ian: hi"
j = Human("Joel")
j.say("hello")                  # "Joel: hello"
# i and j are instances of type Human; i.e., they are Human objects.

# Call our class method inside another class method
i.say(i.get_species())          # "Ian: H. sapiens"
```

How to change the class shared attribute?
&#10;<br>
With dot notation:
```python
Human.species = "H. neanderthalensis"
i.say(i.get_species())          # => "Ian: H. neanderthalensis"
j.say(j.get_species())          # => "Joel: H. neanderthalensis"
```

How do you call class static methods with or without instantiating a class?
&#10;<br>
```python
# Call the static method without instantiating a class
print(Human.grunt())            # => "*grunt*"

# Call by instances
print(i.grunt())                # => "*grunt*"
```

How do you get/update/delete properties of the class instance?
&#10;<br>
Need to use dot notation:
```python
i.age = 42
# Get the property
i.say(i.age)                    # => "Ian: 42"
j.say(j.age)                    # => "Joel: 0"
# Delete the property
del i.age
# i.age                         # => this would raise an AttributeError
```


## 6.1 Inheritance

What is inheritance for classes?
&#10;<br>
Inheritance allows new child classes to be defined that inherit methods and
variables from their parent class. Syntax is:
```python
class ChildClass(ParentClass):
    pass
```

What is the `super` function inside `__init__` method?
&#10;<br>
The `super` function lets you access the parent class's methods
that are overridden by the child, in this case, the __init__ method.
This calls the parent class constructor: `super().__init__(name)`.
Sort of combining the parent class's `__init__` method with the child's.
```python
class Vehicle:
    def __init__(self, *args):
        print("Driving...")
        print("-" * 32)

class Car(Vehicle):
    def __init__(self, *args):
        super().__init__(*args)  # pass the arguments to the parent class
        print("Turning on headlights")
        print("-" * 32)

a = Vehicle() # => "Driving..."
              # => "------------------------------"

b = Car()     # => "Driving..."
              # => "------------------------------"
              #    "Turning on headlights"
              # => "------------------------------"
```

How to get the class instance "Method Resolution Order" attribute used by both
`getattr()` and `super()` and why it's needed?
&#10;<br>
This needed to get/check the order in which classes are searched for an
attribute or method. This attribute is dynamic and can be updated:
```python
print(Superhero.__mro__)    # => (<class '__main__.Superhero'>,
                            # => <class 'human.Human'>, <class 'object'>)
```

How do you define a child `Superhero` class inherited from `Human` class?
How to import this classes?
&#10;<br>
Using the Human class as the base or parent class, we can
define a child class, Superhero, which inherits variables like "species",
"name", and "age", as well as methods, like "sing" and "grunt"
from the Human class, but can also have its own unique properties.
\
To take advantage of modularization by file you could place the classes above
in their own files, say, human.py.
\
To import functions from other files use the following format
from "filename-without-extension" import "function-or-class".
\
`from human import Human`.
```python
# Specify the parent class(es) as parameters to the class definition
class Superhero(Human):

    # If the child class should inherit all of the parent's definitions without
    # any modifications, you can just use the "pass" keyword (and nothing else)
    # but in this case it is commented out to allow for a unique child class:
    # pass

    # Child classes can override their parents' attributes
    species = "Superhuman"

    # Children automatically inherit their parent class's constructor including
    # its arguments, but can also define additional arguments or definitions
    # and override its methods such as the class constructor.
    # This constructor inherits the "name" argument from the "Human" class and
    # adds the "superpower" and "movie" arguments:
    def __init__(self, name, movie=False,
                 superpowers=["super strength", "bulletproofing"]):

        # add additional class attributes:
        self.fictional = True
        self.movie = movie
        # be aware of mutable default values, since defaults are shared
        self.superpowers = superpowers

        # The "super" function lets you access the parent class's methods
        # that are overridden by the child, in this case, the __init__ method.
        # This calls the parent class constructor:
        super().__init__(name)

    # override the sing method
    def sing(self):
        return "Dun, dun, DUN!"

    # add an additional instance method
    def boast(self):
        for power in self.superpowers:
            print("I wield the power of {pow}!".format(pow=power))


if __name__ == "__main__":
    sup = Superhero(name="Tick")

    # Instance type checks
    if isinstance(sup, Human):
        print("I am human")
    if type(sup) is Superhero:
        print("I am a superhero")

    # Get the "Method Resolution Order" used by both getattr() and super()
    # (the order in which classes are searched for an attribute or method)
    # This attribute is dynamic and can be updated
    print(Superhero.__mro__)    # => (<class '__main__.Superhero'>,
                                # => <class 'human.Human'>, <class 'object'>)

    # Calls parent method but uses its own class attribute
    print(sup.get_species())    # => Superhuman

    # Calls overridden method
    print(sup.sing())           # => Dun, dun, DUN!

    # Calls method from Human
    sup.say("Spoon")            # => Tick: Spoon

    # Call method that exists only in Superhero
    sup.boast()                 # => I wield the power of super strength!
                                # => I wield the power of bulletproofing!

    # Inherited class attribute
    sup.age = 31
    print(sup.age)              # => 31

    # Attribute that only exists within Superhero
    print("Am I Oscar eligible? " + str(sup.movie))
```

## 6.2 Multiple Inheritance

```python
# Another class definition
# bat.py
class Bat:

    species = "Baty"

    def __init__(self, can_fly=True):
        self.fly = can_fly

    # This class also has a say method
    def say(self, msg):
        msg = "... ... ..."
        return msg

    # And its own method as well
    def sonar(self):
        return "))) ... ((("


if __name__ == "__main__":
    b = Bat()
    print(b.say("hello"))
    print(b.fly)


# superhero.py
class Superhero(Human):
    species = "Superhuman"


# And yet another class definition that inherits from Superhero and Bat
# superhero.py
from superhero import Superhero
from bat import Bat

# Define Batman as a child that inherits from both Superhero and Bat
class Batman(Superhero, Bat):

    def __init__(self, *args, **kwargs):
        # Typically to inherit attributes you have to call super:
        # super(Batman, self).__init__(*args, **kwargs)
        # However we are dealing with multiple inheritance here, and super()
        # only works with the next base class in the MRO list.
        # So instead we explicitly call __init__ for all ancestors.
        # The use of *args and **kwargs allows for a clean way to pass
        # arguments, with each parent "peeling a layer of the onion".
        Superhero.__init__(self, "anonymous", movie=True,
                           superpowers=["Wealthy"], *args, **kwargs)
        Bat.__init__(self, *args, can_fly=False, **kwargs)
        # override the value for the name attribute
        self.name = "Sad Affleck"

    def sing(self):
        return "nan nan nan nan nan batman!"
...
sup = Batman()
...
```
What `print(Batman.__mro__)`, `print(sup.get_species()`, `print(sup.fly)` will
print?
&#10;<br>
```python
if __name__ == "__main__":
    sup = Batman()

    # The Method Resolution Order
    print(Batman.__mro__)     # => (<class '__main__.Batman'>,
                              # => <class 'superhero.Superhero'>,
                              # => <class 'human.Human'>,
                              # => <class 'bat.Bat'>, <class 'object'>)

    # Calls parent method but uses its own class attribute
    print(sup.get_species())  # => Superhuman

    # Calls overridden method
    print(sup.sing())         # => nan nan nan nan nan batman!

    # Calls method from Human, because inheritance order matters
    sup.say("I agree")        # => Sad Affleck: I agree

    # Call method that exists only in 2nd ancestor
    print(sup.sonar())        # => ))) ... (((

    # Inherited class attribute
    sup.age = 100
    print(sup.age)            # => 100

    # Inherited attribute from 2nd ancestor whose default value was overridden.
    print("Can I fly? " + str(sup.fly))  # => Can I fly? False
```

## 7. Advanced

Sometimes you need to get values in chunks/by one, and you also don't want to
get all of them for example (stop iteration early). This known as `lazy code`,
is python supported way to do it?
&#10;<br>
Yes, Python generators help you make lazy code.
Generators are memory-efficient because they only load the data needed to
process the next value in the iterable. This allows them to perform
operations on otherwise prohibitively large value ranges.
```python
def double_numbers(iterable):
    for i in iterable:
        yield i + i

# NOTE: `range` replaces `xrange` in Python 3.
for i in double_numbers(range(1, 900000000)):  # `range` is a generator.
    print(i)
    if i >= 30:
        break
```

How to create a generator comprehension?
&#10;<br>
Just as you can create a list comprehension, you can create generator
comprehensions as well.
```python
values = (-x for x in [1,2,3,4,5])
type(values)  # => <class 'generator'>
for x in values:
    print(x)  # prints -1 -2 -3 -4 -5 to console/terminal
```

How to cast a generator comprehension directly to a list?
&#10;<br>
Need to use `list()` function:
```python
values = (-x for x in [1,2,3,4,5])
gen_to_list = list(values)
print(gen_to_list)  # => [-1, -2, -3, -4, -5]
```

What is a decorator, how wrapper works?
&#10;<br>
Decorators are a form of syntactic sugar. They make code easier to read while
accomplishing clunky syntax. Wrappers are one type of decorator. They're really
useful for adding logging to existing functions without needing to modify them.
```python
def log_function(func):  # we pass function into wrapper
    def wrapper(*args, **kwargs):
        print("Entering function", func.__name__)
        result = func(*args, **kwargs) # here we execute function
        print("Exiting function", func.__name__)
        return result
    return wrapper # return wrapper

# So we have this code
def my_function(x,y):
  return x+y
my_function = log_function(my_function)

# Wrapper decorator equivalent is below
@log_function
def my_function(x,y):
    return x+y

# The decorator @log_function tells us as we begin reading the function definition
# for my_function - this function will be wrapped with log_function (we send
# my_function into wrapper and execute it)

my_function(1,2)  # => "Entering function my_function"
                  # => "3"
                  # => "Exiting function my_function"
```

Which problems with code inspection (`.__name__`, `.__code__.co_argcount`) for
decorated functions you know and how to solve them?
&#10;<br>
```python
def log_function(func):  # we pass function into wrapper
    def wrapper(*args, **kwargs):  # "wrapper" name is requirement
        print("Entering function", func.__name__)
        result = func(*args, **kwargs) # here we execute function
        print("Exiting function", func.__name__)
        return result
    return wrapper # return wrapper

@log_function
def my_function(x,y):
    return x+y

# There's a problem. What happens if we try to get some information about
# my_function?

print(my_function.__name__)  # => 'wrapper'
print(my_function.__code__.co_argcount)  # => 0. The argcount is 0 because both arguments in wrapper()'s signature are optional.

# Because our decorator is equivalent to my_function = log_function(my_function)
# we've replaced information about my_function with information from wrapper

# Fix this using functools

from functools import wraps

def log_function(func):
    @wraps(func)  # this ensures docstring, function name, arguments list, etc. are all copied
                  # to the wrapped function - instead of being replaced with wrapper's info
    def wrapper(*args, **kwargs):
        print("Entering function", func.__name__)
        result = func(*args, **kwargs)
        print("Exiting function", func.__name__)
        return result
    return wrapper

@log_function
def my_function(x,y):
    return x+y

my_function(1,2)  # => "Entering function my_function"
                  # => "3"
                  # => "Exiting function my_function"

print(my_function.__name__)  # => 'my_function'
print(my_function.__code__.co_argcount)  # => 2
```

## High-level overview

Here is high-level overview of Python language, built-in data structures, data
management, etc.

![[./img/python_high_level_overview.excalidraw|100%|Python high-level overview]]

## References

[^1]: [Learn Python in Y Minutes](https://learnxinyminutes.com/docs/python/)
