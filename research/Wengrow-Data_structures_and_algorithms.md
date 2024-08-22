---
author:
  - Jay Wengrow
date: 2020
external:
  - https://pragprog.com/titles/jwdsal2
tags:
  - inbox
  - research
  - SR_computer_science
  - SR_base
directory: ~/Computer/science/Wengrow-Data_structures_and_algorithms/
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 130
---

# A Common-sense Guide to Data Structures and Algorithms: Level Up Your Core Programming Skills

If you thought that data structures and algorithms were all just theory, you're
missing out on what they can do for your code.

Learn to use Big O Notation to make your code run faster by orders of magnitude.
Choose from data structures such as hash tables, trees, and graphs to increase
your code's efficiency exponentially.

With simple language and clear diagrams, this book makes this complex topic
accessible, no matter your background.

This new edition features practice exercises in every chapter, and new chapters
on topics such as dynamic programming and heaps and tries.

Get the hands-on info you need to master data structures and algorithms for your
day-to-day work.

Algorithms and data structures are much more than abstract concepts. Mastering
them enables you to write code that runs faster and more efficiently, which is
particularly important for today's web and mobile apps.

Find out how your choice of arrays, linked lists, and hash tables can
dramatically affect the code you write.

Use recursion to solve tricky problems and create algorithms that run
exponentially faster than the alternatives.

Dig into advanced data structures such as binary trees and graphs
to help scale specialized applications such as social networks and mapping
software.

You'll even encounter a single keyword that can give your code a turbo boost.

Practice your new skills with exercises in every chapter, along with detailed
solutions. Use these techniques today to make your code faster and more
scalable.

# Cover /1

Not superior, but looks good enough. Header font - here is little inaccuracy,
but it's ok.

# Table of Contents /7

In this book it's actually Contents.

Data structures (which make me more happy, haha), intro to algorithms, big O
(with logarithms!), speed-up and optimize, big O in everyday code, blazing fast
lookup, elegant stack/queues, recursion, dynamic programming, recursive
algorithms, node-based data structures, binary search trees, heaps, tries?,
graphs, space constraints, code optimizations.

This looks great. Unfortunately, I have no idea what about third of these,
but I WILL UNDERSTAND it ☕.

# Preface /14

Quite interesting overview of book. Contains main chapters, short information
about them and what you will learn.

This book is for me, self-taught programmer, who want to make his work better
and well-optimized for speed, efficiency and scalability.

- This book help to understand how to write better software and not use a lot of.
  math jargon, use common-sense language + a lot of diagrams.
- With this knowledge you will to be able to write fast, efficient and elegant.
  code.
- This book blends theory with practice, exercises in every chapter.
- Knowledge of data structures and algorithms can reduce entropy in your code.
- Explain recursion and dynamic programming.

This book give answers to questions like:

- why data structures matter?
- why algorithms matter?
- Big O notation? ...

I need to read this book in order.

Some definitions are simplified, but they can be explained in more detail at the
end.

This book use mix of languages: JavaScript, Python, Ruby and pseudocode.

Contacts:
```
Jay Wengrow
jay@actualize.co
May, 2020
```

# 1. Why Data Structures Matter /22

When you start learning to programming your main focus is to run code
sucessfully and properly (do it what I expect), without errors and you usually
don't think about efficiency. When you gain more expirience you code became more
quality, one measure of it is maintainability (readability, organization and
modulartiy).

But there is anoter aspect of high-quality code, **efficiency**, you can write
efficient or inefficient code. Sort of productive or unproductive code... For me
unproductive means increase entropy of some system, which I hate. Because
programs must run fast... Efficient code looks even better, easily to maintain
and use in every-day life.

```python
import timeit
def print_numbers_v1():
    number = 2
    while number <= 100:
        # If number is even, print it:
        if number % 2 == 0:
            pass  # print(number)

        number += 1

def print_numbers_v2():
    number = 2
    while number <= 100:
        pass  # print(number)

        number += 2  # in result we also loop 2x less times!

result_1 = timeit.timeit(print_numbers_v1, number=100000)
print("Numbers v1: ", result_1)

result_2 = timeit.timeit(print_numbers_v2, number=100000)
print("Numbers v2: ", result_2)
```

*Results:*
```
Numbers v1:  0.29495483700884506
Numbers v2:  0.07244922601967119
```

First step in writing fast code is to understand what data structures are and
how different data structures can affect to speed of our code.

## Data Structures /23

Notes leaved here [[data_structure|data structure]].

## The Array: The Foundational Data Structure /24

Notes leaved here [[array]].

Array operations explained in [[array_operations|array operations]].

## Measuring Speed /25

When we measure how “fast” an operation takes, we do not refer to how fast the
operation takes in terms of pure time, but instead in ==how many steps it
takes==.

So if operation A take less steps than operation B, we can assume that operation
A will always be faster than operation B on all pieces of hardware.

Measuring the number of steps is key to analyzing the speed of an operation.

Measuring the speed of an operation (and ignore constant terms) is also known as
its ==time complexity (временная сложонность)==.

### Reading /26
### Searching /29
### Insertion /32
### Deletion /34

I placed notes here: [[array_operations]].

## Sets: How a Single Rule Can Affect Efficiency /36

I placed notes here: [[set]].

## Wrapping Up /39

Analyze data structure before use them. Choose most suitable.

## Exercises /40

1. For an array containing 100 elements, provide the number of steps the
   following operations would take:
- a. Reading
- b. Searching for a value not contained within the array
- c. Insertion at the beginning of the array
- d. Insertion at the end of the array
- e. Deletion at the beginning of the array
- f. Deletion at the end of the array
&#10;
- a. 1 step
- b. 100 steps
- c. 100 to shift right and 1 to insert = 101
- d. 1 step, but memory allocation?
- e. 1 to delete, 99 to shift left
- f. 1 step <!--SR:!2024-08-21,1,130-->

2. For an array-based set containing 100 elements, provide the number of steps
   the following operations would take:
- a. Reading
- b. Searching for a value not contained within the array
- c. Insertion of a new value at the beginning of the set
- d. Insertion of a new value at the end of the set
- e. Deletion at the beginning of the set
- f. Deletion at the end of the set
&#10;
- a. 1 step
- b. 100 steps
- c. 100 to search, 100 to shift right and 1 to insert = 201
- d. 100 to search, 1 step to insert
- e. 1 to delete, 99 to shift left
- f. 1 step

3. Normally the search operation in an array looks for the first instance of a
given value. But sometimes we may want to look for every instance of a given
value. For example, say we want to count how many times the value “apple” is
found inside an array. How many steps would it take to find all the “apples”?
Give your answer in terms of N. Don't overthink here.
&#10;
In classic search, we can do 1 step in best case it can take 1 step. But if you
need search all occurrence, you need to do N steps. If the array contains N
elements, searching for all instances of the string “apple” in an array will
**take N steps**. When searching for just one instance, we can **cut our search
short** as soon as we find it. But if we need to find all instances, we have no
choice but inspect **each element** of the entire array.

# 2. Why Algorithms Matter /41

Placed some notes here: [[algorithm]].

## Ordered Arrays /42
## Searching an Ordered Array /44

Placed some notes here: [[array#Ordered array]],
[[array_operations#Linear search]].

## Binary Search /46
## Binary Search vs. Linear Search /51

Placed some notes in [[binary_search_algorithm|binary search algorithm]]

## Wrapping Up /54

## Exercises /54

1. How many steps would it take to perform a **linear search** for the number
8 in the ordered array with 7 elements, `[2, 4, 6, 8, 10, 12, 13]`
&#10;
Linear search on this array would take **four steps**. We start at the beginning
of the array and check each element from left to right. Because the 8 is the
fourth number, we’ll find it in four steps

2. How many steps would binary search take for the number 8 in the ordered array
   with 7 elements, `[2, 4, 6, 8, 10, 12, 13]`
?
&#10;
Binary search would take just one step in this case. We start the binary
search at the middlemost element, and the 8 just happens to be the
middlemost element (integer division)!

3. What is the maximum number of steps it would take to perform a binary
search on an array of size 100,000?
&#10;
To solve this, we need to count how many times we halve 100,000 until we get
down to 1. If we keep dividing 100,000 by 2, we see that it takes us 16 times
until we get down to about 1.53. This means a worst-case scenario would take
**about 16 times**.

# 3. O Yes! Big O Notation /55

## Big O: How Many Steps Relative to N Elements? /56
## The Soul of Big O /57

Some notes are placed in [[big_O_notation|big O notation]].

## An Algorithm of the Third Kind /60
## Logarithms /61
## O(log N) Explained /62

Some notes are placed in [[logarithm]].

## Practical Examples /63
## Wrapping Up /65
Some notes are placed in [[big_O_notation]].

## Exercises /65

1. Use Big O Notation to describe the time complexity of the following function
   that determines whether a given year is a leap year:
&#10;
```js
function isLeapYear(year) {
    return (year % 100 === 0) ? (year % 400 === 0) : (year % 4 === 0);
}
console.log(isLeapYear(1988));
```
$\mathcal{O}(1)$, because we do only 3 operations (pass year, compare
expression, return expression). And since 3 is finite number time complexity is
constant.

2. Use Big O Notation to describe the time complexity of the following function
that sums up all the numbers from a given array:
```js
function arraySum(array) {
   let sum = 0;
   for(let i = 0; i < array.length; i++) {
       sum += array[i];
   }
   return sum;
}
```
&#10;
$\mathcal{O}(N)$, for $N$ elements in the array, the loop will run $N$ times,
linear function.

3. The following function is based on the age-old analogy used to describe
   the power of compounding interest (1 + 100% + 100% ...):
\
Imagine you have a chessboard and put a single grain of rice on one
square. On the second square, you put 2 grains of rice, since that is
double the amount of rice on the previous square. On the third square,
you put 4 grains. On the fourth square, you put 8 grains, and on the fifth
square, you put 16 grains, and so on.
\
The following function calculates **which square** you’ll need to place a
certain number of rice grains. For example, for 16 grains, the function
will return 5, since you will place the 16 grains on the fifth square.
\
Use Big O Notation to describe the time complexity of this function, which
is below:
```js
function chessboardSpace(numberOfGrains) {
    let chessboardSpaces = 1;
    let placedGrains = 1;

    while (placedGrains < numberOfGrains) {
        placedGrains *= 2; // multiply by 2 each iteration, in fact we start
                           // placing grains on squares virtually, until we
                           // reach numberOfGrains-1 number
        chessboardSpaces += 1;
    }
    return chessboardSpaces;
}
console.log(chessboardSpace(1000000));
```
This is $\mathcal{O}(\log N)$, for example number of grains is 100,
and we do ~ 7 iterations, etc. Sort of inverse of
[[binary_search_algorithm|binary search]] logic, loop run only **one more** time
each time N is doubled.

4. The following function accepts an array of strings and returns a new array
that only contains the strings that start with the character "a". Use Big O
Notation to describe the time complexity of the function:
```js
function selectAStrings(array) {
    const newArray = [];

    for(let i = 0; i < array.length; i++) {
        if (array[i].startsWith("a")) {
            newArray.push(array[i]);
        }
    }
    return newArray;
}
console.log(
    selectAStrings(["america", "apple", "banana", "cherry", "ampher"])
);
```
&#10;
This is $\mathcal{O}(N)$, for $N$ elements in the array, the loop will takes
$N$ steps (technically more).

The following function calculates the median from an ordered array.
Describe its time complexity in terms of Big O Notation:
```js
function median(array) {
    const middle = Math.floor(array.length / 2); // get center step

    // If array has even amount of numbers:
    if (array.length % 2 === 0) {
        const range = array[middle - 1] + array[middle];
        return range / 2;
    } else { // If array has odd amount of numbers:
        return array[middle];
    }
}

console.log(median([1, 2, 3, 4, 5, 6, 7, 8, 9]));
console.log(median([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]));
```
*Results:*
```
5
5.5
```
&#10;
This is $\mathcal{O}(1)$, no matter how many elements in array, we do fixed
number of steps.


NEXT: `js` and "leader vv" fix issue

