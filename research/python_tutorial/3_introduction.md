---
external:
  - https://docs.python.org/3/tutorial/introduction.html
date: 2023
tags:
  - inbox
  - Python
---
# 3. An Informal Introduction to Python

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
Mathematical *division* that rounds down to **nearest** integer. The floor
division operator is `//`.
- `-11 // 4` is -3;
- `-11 // 3.5` is -4.0, because that is `-2.75` and `-3.14` rounded downward.
```py
result = 10 // 3    # 10 / 3 = 3.3333, 10 // 3 -> 3
result = 11.9 // 3  # 11.9 / 3 = 3.9666, 11.9 // 3 -> 3.0
result = 10 // -3   # 10 / -3 = -3.3333, 10 // -3 -> -4
result = 11 // -3   # 11 / -3 = -3.6666, 11 // -3 -> -4
```
<!--SR:!2024-10-19,1,130-->

The `%` operator returns the ==remainder== of the division. <!--SR:!2024-12-13,49,240-->

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
breaking them into new lines or space with quoting each string. <!--SR:!2024-11-01,7,179-->

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
**character** is a string of ==size one==. <!--SR:!2025-03-15,141,240-->

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
Characters from position 0 (included) to 2 (excluded), `'Py'` <!--SR:!2024-12-03,39,220-->

What you see if you use this slice `word[2:5]`, where word is "Python"
&#10;
Characters from index 2 (included) to index 5 (excluded). `'tho'` <!--SR:!2024-10-29,4,200-->

Note: `s[:i] + s[i:] == ==s==`, start is always included, and the end always
excluded.

```python
sentence = "Hello, World!"
print(sentence[:5] + sentence[5:] == sentence)  # True
```

Attempting to use invalid index in range slice handled with or without exception?
&#10;
Gracefully, without raising an exception.
```python
a = "test"
a[99:]  # => ''
```
<!--SR:!2024-10-29,4,200-->

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
before using index. `"Test string"[11]`. <!--SR:!2024-11-17,23,220-->

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
<!--SR:!2024-12-30,66,240-->

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
<!--SR:!2024-11-11,17,180-->

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

Order of Evaluation in Python expression for operands with same priority?
&#10;
In Python, the left operand evaluated before the right operand if they have
same priority. <!--SR:!2024-11-15,21,180-->

Non-zero, zero, zero length or [[null_pointer|None]] values in Python (and C)
considered as ==[[bolean_data_type|boolean]]== (at least in if/else
statements). <!--SR:!2024-11-10,23,220-->

`-3**2` in Python is?
&#10;
Since `**` operator has higher precedence than -, `-3**2` will be interpreted as
`-(3**2)` and thus result is -9 (expected 9). For correct calculation, you can use parenthesis `(-3)**2`. <!--SR:!2024-10-26,1,140-->

