---
date: 2023-03-18T00:00+03:00
tags:
  - blog
  - computer_science
sr-due: 2024-07-31
sr-interval: 21
sr-ease: 187
---

# Big O notation

What's Big O notation?
<br class="f">
In [[mathematics]] and [[computer_science|computer science]] big O notation is
way of comparing **rates of growth** of different functions, which depending on
function **argument size**.
![[./img/Big_O_illustration_AdobeStock_552748421-min.jpeg|Big O illustratin]]
_Small amount of input information gtowth to big amount of output information_

Main Big O notation use case in computer science?
<br class="f">
It is often used to compare the efficiency of different algorithms, which is
done by calculating how much memory is needed (space complexity), and how much
time it takes to complete (time complexity).

Consistent and concise way to analyze the efficiency of algorithms is a
==Big O notation==. It **gives answer** to questions like this: If there are
$N$ data elements (sometimes need to determine), how many steps and resources
will the algorithm X take to do something? How to compare any two algorithms
efficiency? Is this fast or slow algorithm as fast as algorithms generally go?
<!--SR:!2024-09-13,11,217-->

Big O key concepts:
<br class="f">
1. Growth is with respect of input
2. Constants and lower order terms are ignored
3. Worst case is _usually_ the way we measure

Key question which describe Big $\mathcal{O}$?
<br class="f">
If there are N data elements, how many steps will the algorithm take? <!--SR:!2024-09-22,13,177-->

Big O is about how will an algorithm's performance (efficiency) change as the
==data increases==? <!--SR:!2025-02-13,20,220-->

<!-- NEXT: excalidraw image -->
Big O Notation categories, linear growing, quadratic growing, exponential grow,
etc.:

![[img/Big_O_notation.excalidraw|Big O Notation graphs]]
_Big O notation_

Big O Notation allows us to easily categorize the ==efficiency== of a given
[[algorithm]], which focus on the number of operations an algorithm requires to
complete. <!--SR:!2024-09-22,17,220-->

An algorithm that is $\mathcal{O}(N)$ is also known as having ==linear== time. <!--SR:!2024-09-13,17,270-->

If there are $N$ data elements, how many steps will linear search take?
<br class="f">
$N$ steps, $\mathcal{O}(N)$ <!--SR:!2024-10-01,21,220-->

$\mathcal{O}(1)$ algorithm can also be referred to as having ==constant== time.
At it always faster than $\mathcal{O}(N)$, even if $\mathcal{O}(1)$ takes a lot
of steps, googolplex steps for example, at some input data size it's become
faster. <!--SR:!2024-11-01,48,270-->

Big O Notation resolves the key question: if there are $N$ data elements,
how many ==steps== will the algorithm take? <!--SR:!2024-09-30,16,217-->

Big O is not only about how many steps an algorithm takes with specific input,
but more about how the number of steps grows as the size of the input grows. So
it's describe relationship between input data and the algorithm ==efficiency==. <!--SR:!2024-09-16,7,210-->

Let’s say we have an algorithm that always takes three steps no matter how
much data there is. That is, for N elements, the algorithm always takes three
steps. How would you express that in terms of Big O?
<br class="f">
The algorithm is $\mathcal{O}(1)$. Because the number of steps is constant. Even
if algorithms taking a lot of steps, at some point it will be faster than
$\mathcal{O}N)$. <!--SR:!2024-09-27,22,250-->

Let's say you have $N^2 + 2N - 2$ steps in your algorithm, how to express that
with Big O?
<br class="f">
At first glance you can simplify this to $O(N^2 + N)$, but Big O Notation only
takes into account the **highest order** of N when we have multiple orders added
together and we reducing it to $O(N^2)$.

Is $\mathcal{O}(N)$ more efficient than $\mathcal{O}(1)$?
<br class="f">
$\mathcal{O}(N)$ is less efficient than $\mathcal{O}(1)$, no matter how many
steps (N) the $\mathcal{O}(1)$ algorithm always takes 1 step  or constant number. Even
if $\mathcal{O}(1)$ takes a lot steps at some point it well be more efficient. <!--SR:!2025-06-05,143,270-->

Big O can describe the best and worst case scenario of an algorithm. But Big O
Notation generally refers to the ==worst case (pessimistic approach)== scenario,
unless specified otherwise. <!--SR:!2024-09-11,22,270-->

$\mathcal{O}(log_2 N)$ is the Big O way of describing an algorithm that increases
==one== step each time the data is doubled. <!--SR:!2024-10-09,25,217-->

$\mathcal{O}(log N)$ means that for $N$ data elements, the algorithm would take
==$\log_{2} N$ (omitting 2)== steps. <!--SR:!2025-03-16,51,211-->

$\mathcal{O}(log N)$ means the algorithm takes as many steps as it takes to
keep halving the data elements until we remain with ==1==. <!--SR:!2024-09-10,8,217-->

If there are 8 elements, the $\mathcal{O}(log N)$ algorithm would take ==3==
steps. <!--SR:!2024-09-17,7,189-->

[[bubble_sort_algorithm|Bubble sort]] taking about $N^2$ steps,
[[selection_sort]] about $N^2/2$ steps, what is complexity of these algorithms?
<br class="f">
$\mathcal{O}(N^2)$, yes it's correct, there major rule of Big O: _Big O
notation ignores constants_. Big O Notation never includes regular numbers that
aren't an exponent (except for $\mathcal{O}(1)$). <!--SR:!2024-09-06,4,210-->

Which Big O notation need to use in these cases?
- $N^2 / 2$
- $N / 2$
- $N^2 + 10$
- $2N$
- $100N$
<br class="f">
- $\mathcal{O}(N^2)$
- $\mathcal{O}(N)$
- $\mathcal{O}(N^2)$
- $\mathcal{O}(N)$
- $\mathcal{O}(N)$ <!--SR:!2024-09-18,8,210-->


Is this algorithm $\mathcal{O}(N)$ or $\mathcal{O}(log N)$?
```python
def is_prime(number):
    """Check number is prime (only 2 factors: 1 and themselves)"""
    for i in range(2, number):
        if number % i == 0:
            # we found a factor when we able to divide number with it
            print(f"NOT prime: Found factor {i} for number {number}")
            return False

    print(f"prime: Number {number} is prime")
    return True

is_prime(59)
is_prime(60)
is_prime(61)
is_prime(66)
is_prime(67)
```
*Results:*
```
prime: Number 59 is prime
NOT prime: Found factor 2 for number 60
prime: Number 61 is prime
NOT prime: Found factor 2 for number 66
prime: Number 67 is prime
```
<br class="f">
It's $\mathcal{O}(N)$. When passing the number N, how many steps will the
algorithm take, for 7 is 5, for 101 about 101, etc. So it's taking linear time,
we generate $N$ steps depending on number. <!--SR:!2024-09-26,13,177-->

Example of where two algorithms can be expressed the same way using Big O
Notation, but further analysis is needed to figure out which algorithm is
faster.
```python
def print_even_numbers_v1(upper_bound):
    number = 2

    while number <= upper_bound:
        if number % 2 == 0:
            print(number)
        number += 1

def print_even_numbers_v2(upper_bound):
    number = 2

    while number <= upper_bound:
        print(number) # 2, ...
        number += 2   # skip next number 3 and we print 4
```
What's complexity of two algorithms, how many significant steps has first
version? Is second version faster?
<br class="f">
Complexity of both algorithms is $\mathcal{O}(N)$.
Significant steps for first version: $N$ comparisons, $N/2$ printing and $N$
incrementing, in total $2.5N$ steps (practically can be more).
Yes second version is much faster, about $N/2$ steps, we skip half of
comparisons and half of iterations and half of incrementing. TODO: need verify. <!--SR:!2024-09-16,2,169-->

What's complexity of this algorithm?
```javascript
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    }
}
```
<br class="f">
If it **doesn't get optimized** out by the compiler, the complexity will still
be $\mathcal{O}(n^2)$ - even though the loops bodies are empty, the condition
checks and implementation of both counters are still valid operations which have
to be performed.

## Big O learning path

- [ ] [Big-O notation in 5 minutes - YouTube](https://www.youtube.com/watch?v=__vX2sjlpXU)
- [ ] [CSE 373 -- Lecture 2, Fall 2020 - YouTube](https://www.youtube.com/watch?v=z1mkCe3kVUA&t=3039s)
- [ ] [Big Oh Notation (and Omega and Theta) - YouTube](https://www.youtube.com/watch?v=ei-A_wy5Yxw)
- [ ] [Asymptotic Notation - YouTube](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Binary Search - YouTube](https://www.youtube.com/watch?v=D5SrAga1pno)
- [ ] [Big O Notations - YouTube](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big-O Algorithm Complexity Cheat Sheet (Know Thy Complexities!) @ericdrowell](https://www.bigocheatsheet.com/)
- [ ] [Understanding the formal definition of Big-O](https://justin.abrah.ms/computer-science/understanding-big-o-formal-definition.html)
