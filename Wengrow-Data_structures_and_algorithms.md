---
author:
  - Jay Wengrow
date: 2020
external:
  - https://pragprog.com/titles/jwdsal2
tags:
  - inbox
  - base
directory: ~/Computer/science/Wengrow-Data_structures_and_algorithms/
sr-due: 2022-01-28
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

- This book help to understand how to write better software and not use a lot of
  math jargon, use common-sense language + a lot of diagrams.
- With this knowledge you will to be able to write fast, efficient and elegant
  code.
- This book blends theory with practice, exercises in every chapter.
- Knowledge of data structures and algorithms can reduce entropy in your code.
- Explain recursion and dynamic programming.

This book give answers to questions like:

- Why data structures matter?
- Why algorithms matter?
- Big O notation?
- and more...

I need to read this book in order.

Some definitions are simplified, but they can be explained in more detail at the
end. This book use mix of languages: JavaScript, Python, Ruby and pseudocode.

Contacts:
```
Jay Wengrow
jay@actualize.co
May, 2020
```

# 1. Why Data Structures Matter /22

When you start learning to program your main focus is to run code
successfully and properly (do it what I expect), without errors, and you usually
don't think about efficiency. When you gain more experience you code became more
quality, one measure of it is maintainability (readability, organization and
modularity).

But there is another aspect of high-quality code, ==efficiency==, you can write
efficient or inefficient code. Sort of productive or unproductive code... For me
unproductive means increase entropy of some system, which I hate. Because
programs must run fast... Efficient code looks even better, easily to maintain
and use in every-day life.

```python
import timeit
def unefficient_is_even_print():
    # If number is even, print it:
    number = 2
    while number <= 100:
        if number % 2 == 0:
            pass  # print(number)

        number += 1

def efficient_is_even_print():
    number = 2
    while number <= 100:
        pass  # print(number)

        number += 2  # in result we also loop 2x less times!

result_1 = timeit.timeit(unefficient_is_even_print, number=100000)
print("Numbers v1: ", result_1)

result_2 = timeit.timeit(efficient_is_even_print, number=100000)
print("Numbers v2: ", result_2, f"{int(result_1 / result_2)}x faster")
```
*Results:*
```
Numbers v1:  0.29656917398096994
Numbers v2:  0.07310273399343714 4x faster
```

First step in writing fast code is to understand which and how different data
==structures== can positively affect to speed of our code.

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

Measuring the speed of an operation/operations (and ignore constant terms) is
also known as its ==time complexity (временная сложонность)==.
<!--SR:!2024-09-17,8,155-->

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
- e. 100, 1 to delete, 99 to shift left
- f. 1 step <!--SR:!2024-09-11,4,170-->

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
choice but inspect **each element** of the entire array. <!--SR:!2024-09-07,10,204-->

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
8 in the ordered array: `[2, 4, 6, 8, 10, 12, 13]`
&#10;
Linear search on this array would take **four steps**. We start at the beginning
of the array and check each element from left to right, we stop when the desired value will exceed the current one. Because the 8 is the fourth number and we stopped searching on it we’ll find it in four steps <!--SR:!2024-09-19,5,152-->

2. How many steps would binary search take for the number 8 in the ordered array
   with 7 elements, `[2, 4, 6, 8, 10, 12, 13]`
?
&#10;
Binary search would take just **one step** (if we ignore some steps) in this case. We start the binary search at the middlemost element, and the 8 just happens to be the
middlemost element (integer division)! <!--SR:!2024-09-19,15,184-->

3. What is the maximum number of steps it would take to perform a binary
search on an array of size 100,000?
&#10;
To solve this, we need to count how many times we halve 100,000 until we get
down to 1. If we keep dividing 100,000 by 2, we see that it takes us about 16-17 steps. <!--SR:!2024-09-21,16,184-->

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
```js
function isLeapYear(year) {
    return (year % 100 === 0) ? (year % 400 === 0) : (year % 4 === 0);
}
console.log(isLeapYear(1988));
```
&#10;
$\mathcal{O}(1)$, because we do only 3 operations (pass year, compare
expression, return expression). And since 3 is finite number time complexity is
constant. <!--SR:!2024-09-21,7,169-->

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
linear function. <!--SR:!2024-09-26,12,169-->

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
$N$ steps (technically more). <!--SR:!2024-09-28,14,184-->

The following function calculates the median from an ordered array.
Describe its time complexity in terms of Big O Notation:
```js
function median(array) {
    const middle = Math.floor(array.length / 2); // get center step

    // If array has even amount of numbers:
    if (array.length % 2 === 0) {
        const range = array[middle - 1] + array[middle];
        return range / 2;
    }

    return array[middle];
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
number of steps. <!--SR:!2024-09-10,8,175-->


# 4. Speeding Up Your Code with Big O /67

## Bubble Sort /68

Some notes are placed in [[bubble_sort_algorithm|bubble sort algorithm]]

## A Quadratic Problem /76

We have function to eliminate duplicates:
```js
function hasDuplicates(array) {
    let steps = 0;

    // Iterate over each array value
    for (let i = 0; i < array.length; i++) {
        // j < array.length prevent's go out of array
        for (let j = 0; j < array.length; j++) {
            // i != j, we don't need to check value itself
            // if current value == next value, we have duplicate
            steps ++;
            if (i !== j && array[i] === array[j]) {
                return true;
            }
        }
    }

    console.log(`Elements: ${array.length}`);
    console.log(`Steps: ${steps}`);
    return false;
}
console.log(hasDuplicates([1, 4, 5, 2, 9, 8, 7, 6, 11, 55, 21, 33, 44]));
```
How many steps would our algorithm take in a worst-case scenario? When worst-case scenario comes?
&#10;
In worst-case scenario, when array doesn't contain duplicates we iterate over
each loop with comparisons, and number of steps is $\mathcal{O}(N^2)$.
\
Very often (but not always), when an algorithm nests one loop inside another,
the algorithm time complexity is $\mathcal{O}(N^2)$. <!--SR:!2024-09-06,1,149-->

```js
function hasDuplicateValue(array) {
    let existingNumbers = [];
    let steps = 0;
    for (let i = 0; i < array.length; i++) { // iterate each number
        steps++;

        // Hey we already checked this number since we used it's value as index
        // means array contains duplicates, so checks to see whether that index
        // already has a 1 as its value
        if (existingNumbers[array[i]] === 1) return true;

        // Otherwise save flag 1 at index == array[i]
        // example for [3, 5, 8]:
        //   index 3, [undefined, undefined, undefined, 1]
        //   index 5, [undefined, undefined, undefined, 1, undefined, 1]
        //   index 8, [undefined, undefined, undefined, 1, undefined, 1, undefined, undefined, 1]
        else existingNumbers[array[i]] = 1;
    }

    console.log(`Elements: ${array.length}`);
    console.log(`Steps: ${steps}`);
    return false; // we iterated all numbers, and didn't find any duplicates
}
console.log(hasDuplicateValue([1, 4, 5, 2, 9, 8, 7, 6, 11, 55, 21, 33, 44]));
```
How many steps would our algorithm take in a worst-case scenario (ignore
insertion steps complexity)?
&#10;
In worst-case scenario, when array doesn't contain duplicates we iterate $N$
times (we can consider insertion steps as trivial) loop with comparisons, and
number of steps is $\mathcal{O}(N)$. But this type of algorithms can consume a
lot of memory. <!--SR:!2024-09-13,4,166-->

|N elements|$O(N)$|$O(log_N)$|$O(N^2)$|
|----------|------|----------|--------|
|100       |  ?   |    ?     |   ?    |
|2000      |  ?   |    ?     |   ?    |
\
Replace the question marks in the following table to describe how many steps
occur for a given number of data elements across various types of Big O:
&#10;
```
|100     | 100  |  about 7 | 10000  |
|2000    | 2000 |  about 11| 4000000|
```
<!--SR:!2024-09-06,3,169-->

If we have a $\mathcal{O}(N^2)$, algorithm that processes an array and find
that it takes 256 steps, what is the size of the array?
&#10;
$\sqrt{256} = 16$ <!--SR:!2024-09-24,10,166-->

Use Big O Notation to describe the time complexity of the following function. It
finds the greatest product of any pair of two numbers within a given array:
```python
def greatestProduct(array):
    greatestProductSoFar = array[0] * array[1]

    for i, iVal in enumerate(array):
        for j, jVal in enumerate(array):
            if i != j and iVal * jVal > greatestProductSoFar:
                greatestProductSoFar = iVal * jVal

    return greatestProductSoFar

print(greatestProduct([10, 2, 3, 4, 5, 6, 7, 8, 9, 10]))
```
&#10;
The algorithm has a time complexity of $\mathcal{O}(N^2)$, in this case, $N$ is the
size of the array. We have an outer loop that iterates over the array $N$ times,
and for each of those times, an inner loop iterates over the same array $N$
times. This results in $N^2$ steps. <!--SR:!2024-09-18,8,172-->

The following function finds the greatest single number within an array, but has
an efficiency of $O(N^2)$. Rewrite the function so that it becomes a speedy
$O(N)$:
```python
def greatestNumber(array):
  # Assume for now that array[0] is the greatest and array is not empty
  greatest_value = array[0]

  for i in array:
    if i > greatest_value:
      greatest_value = i

  return greatest_value

print(greatestNumber([11, 2, 4, 5, 8, 11, 3, 111]))
```

# 5. Optimizing code with and without Big O

## Selection sort /82
TODO: place more chapters

Notes placed in [[selection_sort]].

TODO: place more chapters
## Big O Categories

Some notes placed in [[big_O_notation]].

Use Big O Notation to describe the time complexity of an algorithm that takes
$4N + 16$ steps.
&#10;
$\mathcal{O}(N)$, since Big O ignores constants, but algorithm slower than $1N$
for example. <!--SR:!2024-09-13,6,166-->

Use Big O Notation to describe the time complexity of an algorithm that takes
$\mathcal{O}(2N^2)$.
&#10;
After dropping the constant, we can reduce the expression to $\mathcal{O}(N^2)$. <!--SR:!2024-09-11,6,166-->

Use Big O Notation to describe the time complexity of the following function,
which returns the sum of all numbers of an array after the numbers have been
doubled:
```ruby
def double_then_sum(array)
  doubled_array = []
  array.each do |number|
    doubled_array << number *= 2
  end

  sum = 0

  doubled_array.each do |number|
    sum += number
  end

  return sum
end

print(double_then_sum([1,2,3]))
```
&#10;
$\mathcal{O}(N)$, in fact we do there about $2N$ steps $N$ - size of the
array, but using Big O notation we omit $2$ constant.

Use Big O Notation to describe the time complexity of the following function,
which accepts an array of strings and prints each string in multiple cases:
```ruby
def multiple_cases(array)
  array.each do |string|
    puts string.upcase
    puts string.downcase
    puts string.capitalize
  end
end

print(multiple_cases(["l", "o", "r", "e", "m"]))
```
&#10;
$\mathcal{O}(N)$, in fact we do there about $3N$ steps, $N$ - size of the
array, but using Big O notation we omit $3$ constant. <!--SR:!2024-09-20,6,166-->

The next function iterates over an array of numbers, and for each number whose
index is even, it prints the sum of that number plus every number in the array.
What is this function’s efficiency in terms of Big O Notation?
```ruby
def every_other(array)
  array.each_with_index do |number, index|
    if index.even?
      array.each do |other_number|
        puts number + other_number
      end
    end
  end
end
```
$\mathcal{O}(N^2)$, in fact we do there about $\frac{N^2}{2}$ steps (inner loop
run only half-time), with N being the size of the array. But using Big O
notation we omit $2$ constant.


# 6. Optimizing for optimistic scenarios /96

Notes placed in [[insertion_sort]].
...

Can you write algorithm (at least basic concepts) to find intersection of two
array, which optimization you can use (and how it affects to best/worst cases)?
&#10;
```js
// In the best-case scenario, where the two arrays are identical, we only have to
// perform N comparisons, in average case from N to N^2
function intersection(firstArray, secondArray){
    let result = [];

    for (let i = 0; i < firstArray.length; i++) {
        for (let j = 0; j < secondArray.length; j++) {
            if (firstArray[i] == secondArray[j]) {
                result.push(firstArray[i]);

                // optimization, we already found intersection value
                // and can break inner loop
                break;
            }
        }
    }
    return result;
}
```
<!--SR:!2024-09-06,1,142-->

Use Big O Notation to describe the efficiency of an algorithm that takes $3N^2 +
2N + 1$ steps.
&#10;
$N^2$, Big O takes into account the **highest order** of N.

Use Big O Notation to describe the efficiency of an algorithm that takes $N +
log(N)$ steps.
&#10;
$N$, since $N$ > $log(N)$

The following function checks whether an array of numbers contains a pair of two
numbers that add up to 10.
```js
function twoSum(array) {
    for (let i = 0; i < array.length; i++) {
        for (let j = 0; j < array.length; j++) {
            if (i !== j && array[i] + array[j] === 10) {
                // exit from loop early, as we find a pair that sums to 10
                return true;
            }
        }
    }
    return false;
}
```
What are the best-, average-, and worst-case scenarios? Then, express the
worst-case scenario in terms of Big O Notation.
&#10;
Best-case scenario is when first two numbers add up to 10
Average-case scenario $\frac{N^2}{2}$, two numbers somewhere in the middle
Worst-case scenarios are when there aren't any two numbers that add up to 10, we
iterate both loops $N^2$ times, so it's $\mathcal{O}(N^2)$.

The following function returns whether a capital “X” is present within a
string.
```js
function containsX(string) {
    foundX = false;

    for(let i = 0; i < string.length; i++) {
        if (string[i] === "X") {
            foundX = true;
        }
    }

    return foundX;
}
```
What is this function’s time complexity in terms of Big O Notation? Then, modify
the code to improve the algorithm’s efficiency for best- and average-case
scenarios.
&#10;
In all cases this function take N steps, algorithm complexity is
$\mathcal{O}(N)$. As the size of the array is N, and the loop iterates through
all N elements. This algorithm continues the loop even if it finds an "X" before
the end of the array. We can make the code more efficient if we return true as
soon as we find an "X":
```js
function containsX(string) {
    for(let i = 0; i < string.length; i++) {
        if (string[i] === "X") {
          return true;
        }
    }

    return false;
}
console.log(containsX("I like x"));
console.log(containsX("I like X"));
```
*Results:*
```
false
true
```

# 7. Big O in Everyday Code /113

Notes placed in [[how_to_optimize_code]].

# 8. Blazing Fast Lookup with Hash Tables

Notes placed in [[hash_table]].


