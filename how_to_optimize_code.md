---
date: 2024-09-02
tags:
  - inbox
  - base
---

# How to optimize code

First step before you optimize code, is determining how fast your code is with
help of [[big_O_notation]] (make a judgment call to our code). If your code is
slow, you need to dig deeper and research for faster solutions.

## Mean average of even numbers

Efficiency of this code?

```ruby
def average_of_even_numbers(array)
  # Accepts an array of numbers and returns the mean average of all its even
  # numbers.

  # The mean average of even numbers will be defined as the sum of
  # the even numbers divided by the count of even numbers, so we
  # keep track of both the sum and the count:

  sum = 0.0
  count_of_even_numbers = 0

  # We iterate through each number in the array, and if we encounter
  # an even number, we modify the sum and the count:

  array.each do |number|
    if number.even?  # built-in method, ? steps to check even
      sum += number  # ? steps in worst case
      count_of_even_numbers += 1  # ? steps in worst case, all numbers is even
    end
  end

  # We return the mean average:

  return sum / count_of_even_numbers
end
```
How many steps this algorithm take for $N$ data elements in the worst case?
Please take into account all operations such as assignment, arithmetic, etc.
&#10;<br>
For $N$ data elements this code will take $3N$ steps.

## World builder

What is the time complexity of this algorithm?
```js
// Collects every combination of two character strings built from an array of
// single characters:
// ['a', 'b', 'c', 'd'] ->
//   [ 'ab', 'ac', 'ad', 'ba', 'bc', 'bd', 'ca', 'cb', 'cd', 'da', 'db', 'dc' ]

function wordBuilder(array) {
    // Array generate N steps, where N is the length of the array
    let collection = [];

    for(let i = 0; i < array.length; i++) {
        for(let j = 0; j < array.length; j++) {
            if (i !== j) {
                // Concat i/j index values, except i === j
                collection.push(array[i] + array[j]);
            }
        }
    }

    return collection;
}
console.log(wordBuilder(['a', 'b', 'c', 'd']));
```
&#10;<br>
Time complexity of this algorithm is $\mathcal{O}(N^2)$.

What is the time complexity of this algorithm?
```js
function wordBuilder(array) {
    let collection = [];

    for(let i = 0; i < array.length; i++) {
        for(let j = 0; j < array.length; j++) {
            for(let k = 0; k < array.length; k++) {
                if (i !== j && j !== k && i !== k) {
                    collection.push(array[i] + array[j] + array[k]);
                }
            }
        }
    }

    return collection;
}
console.log(wordBuilder(['a', 'b', 'c', 'd']));
```
&#10;<br>
Time complexity of this algorithm is $\mathcal{O}(N^3)$.

## Array sample

Can you identify the time complexity of this algorithm?
```python
def sample(sample_array):
    first = sample_array[0]                            # 0
    middle = sample_array[int(len(sample_array) / 2)]  # N/2
    last = sample_array[-1]                            # N-1

    return [first, middle, last]
```
&#10;<br>
Function ends up taking the same number of steps (~3) no matter what N is
(number of elements in the array).
So complexity is $\mathcal{O}(1)$. <!--SR:!2024-09-19,10,250-->

## Average Celsius reading

What is its Big O?
```ruby
def average_celsius(fahrenheit_readings)

  # Collect Celsius numbers here:
  celsius_numbers = []

  # Convert each reading to Celsius and add to array:
  fahrenheit_readings.each do |fahrenheit_reading|
    celsius_conversion = (fahrenheit_reading - 32) / 1.8  # farenheit2celsius
    celsius_numbers.push(celsius_conversion)
  end

  # Get sum of all Celsius numbers:
  sum = 0.0

  celsius_numbers.each do |celsius_number|
    sum += celsius_number
  end

  # Return mean average:
  return sum / celsius_numbers.length
end
```
&#10;<br>
$\mathcal{O}(N)$, we have 2 loops, first loop generate about $N$ steps (if we
ignore insertion), second $N$ steps (and few constant steps), and by using Big O
notation this will be reduced from $2N$ into $\mathcal{O}(N)$.

## Clothing labels

We need to generate 5 size variations of each item in the input array.
What is the time complexity of this algorithm?
```python
def mark_inventor(clothing_items):
    clothing_options = []

    for item in clothing_items:
        # For sizes 1 through 5 (Python ranges go UP TO second
        # number, but do not include it):
        for size in range(1, 6):
            clothing_options.append(item + " Size: " + str(size))

    return clothing_options
print(mark_inventor(["Purple Shirt", "Green Shirt"]))
```
*Results:*
```python
[
    "Purple Shirt Size: 1",
    "Purple Shirt Size: 2",
    "Purple Shirt Size: 3",
    "Purple Shirt Size: 4",
    "Purple Shirt Size: 5",
    "Green Shirt Size: 1",
    "Green Shirt Size: 2",
    "Green Shirt Size: 3",
    "Green Shirt Size: 4",
    "Green Shirt Size: 5",
]
```
&#10;<br>
This code runs around $5N$ times, the inner loop will always run five times no
matter what N is. This is reduced to $O(N)$, since Big O notation ignores
constants.

## Count the ones

What's Big O of this algorithm (input - $N$, is matter)?
```python
def count_ones(outer_array):
    count = 0

    for inner_array in outer_array:
        for number in inner_array:
            if number == 1:
                count += 1

    return count


count_ones([[0, 1, 1, 1, 0], [0, 1, 0, 1, 0, 1], [1, 0]])
```
&#10;<br>
The outer loop is iterating over the inner arrays, and the inner loop is
iterating over the actual numbers. At the end of the day, our inner loop only
runs for as many numbers as there are in **total**. Because of this, we can say
that N represents how many numbers there are. And since our algorithm simply
processes each number, the function’s time complexity is $\mathcal{O}(N)$.

## Palindrome checker

A palindrome is a word or phrase that reads the same both forward and backward.
Some examples include “racecar,” “kayak,” and “deified.”

Determine the Big O of this algorithm, how many steps does it take?
```js
function isPalindrome(string) {
  // N is the length of the string

  // Start the leftIndex at index 0:
  let leftIndex = 0;
  // Start rightIndex at last index of array:
  let rightIndex = string.length - 1;

  // Iterate until leftIndex reaches the middle of the array:
  while (leftIndex < string.length / 2) {

    // If the character on the left doesn't equal the character
    // on the right, the string is not a palindrome:
    if (string[leftIndex] !== string[rightIndex]) {
      return false;
    }

    // Move leftIndex one to the right:
    leftIndex++;
    // Move rightIndex one to the left:
    rightIndex--;
  }

  // If we got through the entire loop without finding any
  // mismatches, the string must be a palindrome:
  return true;
}

console.log(isPalindrome("дед"));
console.log(isPalindrome("наворован"));
console.log(isPalindrome("люк"));
```
&#10;<br>
The guts of the algorithm takes place within the while loop. Now, this loop is
somewhat interesting because it only runs until it reaches the midpoint of the
string. That would mean that the loop runs $N/2$ steps (if we ignore some
steps). However, Big O ignores constants. Because of this, we drop the division
by 2, and our algorithm is $\mathcal{O}(N)$. <!--SR:!2024-09-16,7,250-->

## Get all the products

How many steps does this algorithm take, and what is its Big O?
```js
// If we passed in the array, [1, 2, 3, 4, 5], the function returns:
// [2, 3, 4, 5, 6, 8, 10, 12, 15, 20]
// each number only needs to be multiplied by the remaining numbers to the right
// of it.
function twoNumberProducts(array) {
    let products = [];

    // Outer array:
    for(let i = 0; i < array.length - 1; i++) {  // run N-1 times

        // Inner array, in which j always begins one index
        // to the right of i, number of steps decrease each time it's launched
        // by te outer loop j = [1, 2, 3, 4]; j = [2, 3, 4] ...
        // N + (N - 1) + (N - 2) + (N - 3) … + 1 times.
        for(let j = i + 1; j < array.length; j++) {
            products.push(array[i] * array[j]);
        }
    }

    return products;
}
```
&#10;<br>
About $(\frac{N^2}{2})$.
```text
N is 8, so there are 8^2, or 64, squares, steps number is N^2/2

You can also see at a glance that half of the squares are shaded. This
demonstrates that the pattern of N + (N - 1) + (N - 2) + (N - 3)… + 1 is
equivalent to N^2 / 2.
: x : x : x : x : x : x : x : x :
: x : x : x : x : x : x : x :   :
: x : x : x : x : x : x :   :   :
: x : x : x : x : x :   :   :   :
: x : x : x : x :   :   :   :   :
: x : x : x :   :   :   :   :   :
: x : x :   :   :   :   :   :   :
: x :   :   :   :   :   :   :   :
```
Because Big O ignores constants, we express this as $\mathcal{O}(N^2)$.

## Dealing with multiple datasets

How to express this in Big O?
```js
function twoNumberProducts(array1, array2) {
    let products = [];

    for(let i = 0; i < array1.length; i++) {
        for(let j = 0; j < array2.length; j++) {
            products.push(array1[i] * array2[j]);
        }
    }

    return products;
}
console.log(twoNumberProducts([1, 2, 3], [10, 100, 1000]));
```
&#10;<br>
$\mathcal{O}(N*M)$, can be construed as a range between $O(N)$ and $O(N^2)$.
Here’s a tale of two scenarios:\
In Scenario 1, there are two arrays of size 5, total steps is $25$.\
In Scenario 2, there’s one array of size 9, and another of size 1, total steps is $9$.\
Higher we see order of magnitude.\
Whenever we have two distinct datasets that have to interact with each other
through multiplication, we have to identify both sources separately ($N$ and
$M$) when we describe the efficiency in terms of Big O.

## Password cracker

Here we use brute force to find the password.
How many steps does this algorithm take?
```ruby
def every_password(n)
  (("a" * n)..("z" * n)).each do |str|
    puts str  # try to log-in with password
  end
end
print every_password(2)  # be careful with values ~3
```
&#10;<br>
`a-z` ~ 26 steps, number of character in alphabet.
We can express this algorithm steps as $26^n$.\
if $n = 2$, $26 * 26 = 676$ steps,
if $n = 3$, $26 * 26 * 26 = 17576$ steps.
TODO: write own solution in Python.

In a certain sense, $O(2^N)$ is the opposite of $O(log N)$. With an algorithm of
$O(log N)$ (like binary search), each time the data is doubled, the algorithm
takes one additional step. With an algorithm of $O(2^N)$, each time we add one
element of data, the algorithm ==doubles in steps==!

Use Big O Notation to describe the time complexity of the following function.
The function returns true if the array is a “100-Sum Array,” and false if it is
not.\
A “100-Sum Array” meets the following criteria:
- Its first and last numbers add up to 100.
- Its second and second-to-last numbers add up to 100.
- Its third and third-to-last numbers add up to 100, and so on.
```ruby
def one_hundred_sum?(array)
  left_index = 0 # start
  right_index = array.length - 1 # end

  while left_index < array.length / 2  # iterate from 0 to the middle
    if array[left_index] + array[right_index] != 100
      # If we found combination when strt + end != 100
      # we can assume this is NOT a 100-Sum Array
      return false
    end

    left_index += 1
    right_index -= 1
  end

  return true
end

print(one_hundred_sum?([50, 50, 50, 50, 50, 50, 50, 50, 50, 50]))
```
&#10;<br>
Here, $N$ is the size of the array.
$\mathcal{O}(N)$, here we do about $4N/2$ steps. In worst keys all array numbers
are 50.

Use Big O Notation to describe the time complexity of the following function. It
merges two sorted arrays together to create a new sorted array containing all
the values from both arrays:
```ruby
def merge(array_1, array_2)
  new_array = [] # new genreated array
  array_1_pointer = 0
  array_2_pointer = 0

  # Run the loop until we've reached end of both arrays:
  while array_1_pointer < array_1.length ||
      array_2_pointer < array_2.length

    # If we already reached the end of the first array,
    # add item from second array:
    if !array_1[array_1_pointer]
      new_array << array_2[array_2_pointer] # add
      array_2_pointer += 1
    # If we already reached the end of the second array,
    # add item from first array:
    elsif !array_2[array_2_pointer]
      new_array << array_1[array_1_pointer] # add
      array_1_pointer += 1
    # If the current number in first array is less than current
    # number in second array, add from first array:
    elsif array_1[array_1_pointer] < array_2[array_2_pointer]
      new_array << array_1[array_1_pointer] # add
      array_1_pointer += 1
    # If the current number in second array is less than or equal
    # to current number in first array, add from second array:
    else
      new_array << array_2[array_2_pointer] # add
      array_2_pointer += 1
    end
  end

  return new_array
end
```
&#10;<br>
First you need to determine the size of the array, which is $N$, suppress the
desire to guess the complexity, you need to analyze.\
It’s slightly tricky to define N in this case, since we are dealing with two
distinct arrays. However, the algorithm only processes each value once, so we
could decide to call $N$ the total number of values between both arrays, and the
time complexity would be $\mathcal{O}(N)$.\
If we want to be more literal, and call one array $N$ and the other $M$, we
could alternatively express the efficiency as $O(N + M)$. However, because we’re
simply adding $N$ and $M$ together, it’s simpler to just use N to refer to the
total number of data elements across both arrays and call it $\mathcal{O}(N)$.

Use Big O Notation to describe the time complexity of the following function.
This function solves a famous problem known as “finding a needle in the
haystack.” (иголка в стоге сена).\
Both the needle and haystack are strings. For example, if the needle is "def"
and the haystack is `"abcdefghi"`, the needle is contained somewhere in the
haystack, as `"def"` is a substring of `"abcdefghi"`. However, if the needle is
"dd", it cannot be found in the haystack of `"abcdefghi"`.\
This function returns `true` or `false`, depending on whether the needle can be
found in the haystack:

&#10;<br>
```ruby
def find_needle(needle, haystack)
  needle_index = 0
  haystack_index = 0
  while haystack_index < haystack.length
    if needle[needle_index] == haystack[haystack_index]
      found_needle = true  # assuming needle in haystack (parially true)
      while needle_index < needle.length
        if needle[needle_index] != haystack[haystack_index + needle_index]
          found_needle = false
          break
        end
        needle_index += 1
      end
      return true if found_needle
      needle_index = 0
    end
    haystack_index += 1
  end
  return false
end
print(find_needle("abc", "abcabcabcabc"), "\n")
print find_needle("doom", "loremipsumdolomitdoslum")
```
&#10;<br>
In a worst-case scenario, this algorithm runs for the number of characters in
the “needle” multiplied by the number of characters in the “haystack.” Since the
needle and haystack may have different numbers of characters, this is
$\mathcal{O}(n*m)$

Use Big O Notation to describe the time complexity of the following function.
How many times the innermost loop run?
This function finds the greatest product of three numbers from a given array:
```ruby
def largest_product(array)
  largest_product_so_far = array[0] * array[1] * array[2]
  i = 0
  while i < array.length
    j = i + 1
    while j < array.length
      k = j + 1
      while k < array.length
        # innermost loop run
        if array[i] * array[j] * array[k] > largest_product_so_far
          largest_product_so_far = array[i] * array[j] * array[k]
        end
        k += 1
      end
      j += 1
    end
    i += 1
  end
  return largest_product_so_far
end

print largest_product([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
```
&#10;<br>
N is the size of the array, and the time complexity is O(N3), as it’s processed
through triply-nested loops. Really, the middle loop runs $N/2$ times, and the
innermost loop runs $N/4$ times, so this is $N*(N/2)*(N/4)$, which is $N^3/8$
steps. But we drop the constant, leaving us with $\mathcal{O}(n^3)$

Describe the efficiency of this function in terms of Big O:
```ruby
def pick_resume(resumes)
  eliminate = "top"  # we assume top is already elliminated (prev sate)
  while resumes.length > 1
    if eliminate == "top"
      resumes = resumes[resumes.length / 2, resumes.length - 1]
      eliminate = "bottom"
    elsif eliminate == "bottom"
      resumes = resumes[0, resumes.length / 2]
      eliminate = "top"
    end
  end
  return resumes[0]
end
print(pick_resume(["a", "b", "c", "d"]))
print(pick_resume(["a", "b", "c", "d", "e"]))
```
&#10;<br>
$N$ is the size of the resumes array. Since in each round of the loop we
eliminate half of the resumes, we have an algorithm of $\mathcal{O}(\log n)$.


## External links

- [ ] [How to Optimize Code — principles-of-performance documentation](https://llllllllll.github.io/principles-of-performance/how-to-optimize-code.html)
- [[Wengrow_-_Data_structures_and_algorithms#7. Big O in Everyday Code /113]]

