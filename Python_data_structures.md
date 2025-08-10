---
external:
  - https://docs.python.org/3/tutorial/datastructures.html
tags:
  - blog
  - WEAPON
  - literature
created: 2025-01-14T11:41+03:00
sr-due: 2025-07-25
sr-interval: 4
sr-ease: 220
---

# 5. Data Structures

TODO: review and rewrite!

How to add an item to the end of the list with a built-in method and equivalent slice assign method?
<br class="f">
`list.append(x)`. Equivalent to `a[len(a):] = [x]`.
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
fruits.append('grape')
print(fruits)  # ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana', 'grape']
```

Extend the list by appending all the items from the iterable.
<br class="f">
`list.extend(iterable)`. Equivalent to `a[len(a):] = iterable`.

Insert an item into list at a given position.
<br class="f">
`list.insert(i, x)`. The first argument is the index of the element before which
to insert. so `a.insert(0, x)` inserts at the front of the list, and
`a.insert(len(a), x)` is equivalent to `a.append(x)`.

List method to remove the first item from the list whose value is equal to
**x**. What if there is no such item?
<br class="f">
`list.remove(x)`. It raises a `ValueError` if there is no such item.

Remove the item at the given position in the list, and return it.
What if the list is empty or the index is outside the list range.
<br class="f">
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
<br class="f">
`list.clear()`. Equivalent to `del a[:]`.

Return zero-based index in the list of the first item whose value is equal to
**x**. Can we limit somehow the search to a particular subsequence of the list?
<br class="f">
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
<br class="f">
`list.count(x)`
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
print(fruits.count('apple'))  # 2
print(fruits.count('tangerine'))  # 0
```

Sort the items of the list in place
<br class="f">
`list.sort(*, key=None, reverse=False)`
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
fruits.sort()
print(fruits)  # ['apple', 'apple', 'banana', 'banana', 'kiwi', 'orange', 'pear']
```

Reverse the elements of the list in place.
<br class="f">
list.reverse()
```python
fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
fruits.reverse()
print(fruits)  # ['banana', 'apple', 'kiwi', 'banana', 'pear', 'apple', 'orange']
```

Return a shallow copy of the list.
<br class="f">
`list.copy()`. Equivalent to `a[:]`.

You might have noticed that list methods like `insert`, `remove` or `sort` that
only modify the list have no return value printed -- they return the ==default
`None`==. This is a design principle for all mutable data structures in Python.
Other languages may return the mutated object, which allows method chaining,
such as `d->insert("a")->remove("b")->sort();`.

When data in list can't be sorted?
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f"> That this creates (or overwrites) a variable named `x` that still
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
`del a`
Referencing the name `a` hereafter is an error (at least until another value is
assigned to it). We'll find other uses for `del` later.

What type of this data structures?
```python
t = 12345, 54321, 'hello!'
u = t, (1, 2, 3, 4, 5)
 ```
<br class="f">
A tuple, which consists of a number of values separated by commas.
Tuples may be input with or without surrounding parentheses, although often
parentheses are necessary anyway (if the tuple is part of a larger expression).
```python
t  # (12345, 54321, 'hello!')
u  # ((12345, 54321, 'hello!'), (1, 2, 3, 4, 5))

Can you change arbitrary item of the tuple with index assignment?
<br class="f">
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
<br class="f">
A tuple with one item is constructed by following a value with a comma (it is
not sufficient to enclose a single value in parentheses). Ugly, but effective.
```python
singleton = 'hello',     # <-- note trailing comma
singleton2 = ('hello',)  # <-- another way to create a singleton
('hello',) == singleton == singleton2  # True
```

How to use tuple packing?
<br class="f">
You need to construct a tuple with multiple values separated by commas.
```python
t = 12345, 54321, 'hello!'
```

How to use tuple unpacking (sequence unpacking)?
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
Yes, set comprehensions are also supported:
```python
a = {x for x in 'abracadabra' if x not in 'abc'}  # {'r', 'd'}
print(a)
```

"Associative memories" or "associative arrays" in Python are implemented as
==dictionaries==.

Which types of keys (general type) can be used in dictionaries?
<br class="f">
Dictionaries are indexed by keys which can be any immutable type and unique
(within one dictionary). Tuples can be used as keys if they contain only
strings, numbers, or tuples; if a tuple contains any mutable object either
directly or indirectly, it cannot be used as a key. You can't use lists as keys,
since lists can be modified in place using index assignments, slice assignments,
or methods like `list.append` and `list.extend`. <!--SR:!2024-07-11,1,159-->

How to create empty and non-empty dictionaries?
<br class="f">
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
<br class="f">
The main operations on a dictionary are storing a value with some key
and extracting the value given the key.

How to delete a key:value pair from a dictionary, overwrite key value?
<br class="f">
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
<br class="f">
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
<br class="f">
The `dict` constructor builds dictionaries directly from sequences of key-value
pairs:
```python
print(dict([('sape', 4139), ('guido', 4127), ('jack', 4098)]))
# {'sape': 4139, 'guido': 4127, 'jack': 4098}
```

How to generate dict using dictionary comprehensions and this sequence `(2, 4,
6)`, key is `number`, value is `number**2`?
<br class="f">
Dict comprehensions can be used to create dictionaries from
arbitrary key and value expressions:
```python
print({x: x**2 for x in (2, 4, 6)})  # {2: 4, 4: 16, 6: 36}
```

Is it possible to use keyword arguments to create a dictionary?
<br class="f">
Yes, when the keys are simple strings, it is sometimes easier to specify
pairs using keyword arguments:
```python
print(dict(sape=4139, guido=4127, jack=4098))  # {'sape': 4139, 'guido': 4127, 'jack': 4098}
```

When looping through dictionaries, the key and corresponding value can
be retrieved at the same time using the ??? method:
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
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
<br class="f">
They can contain any operators, not just comparisons. For example:
- `in` and `not in`, membership (in container?) tests
- `is` and `is not`, compare objects is the same object
- multiple comparisons (chains) like `a < b == c` - a is less than b and
moreover b equals c
- combinations with boolean operators `and`, `or`, `not`

All comparison operators have the same priority, which is lower than that of all
==numerical== operators.

Who have more priority comparison operators or Boolean operators?
<br class="f">
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
