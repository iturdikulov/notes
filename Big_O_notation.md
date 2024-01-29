---
date: 2023-03-18
tags:
  - inbox
  - SR_computer_science
sr-due: 2024-01-26
sr-interval: 1
sr-ease: 207
---

# Big O notation in [[Mathematics|mathematics]] and
[[Computer_science|computer science]]

> Way of comparing ==rates of growth== of different functions. It is often used
> to compare the efficiency of different algorithms, which is done by
> calculating how much memory is needed, and how much time it takes to
> complete.\
> — <cite>[SE Wikipedia](https://simple.wikipedia.org/wiki/Big_O_notation)</cite>
<!--SR:!2024-01-21,1,230-->

![Big O notation](./img/Big-O-notation.png)
_Big O notation_

Big O Notation allows us to easily categorize the efficiency of a given
[[Algorithm]], which focus on the number of operations an algorithm requires to
complete.

An algorithm that is $\mathcal{O}(N)$ is also known as having ==linear== time.
<!--SR:!2023-07-22,3,270-->

$\mathcal{O}(1)$ algorithm can also be referred to as having ==constant== time.
<!--SR:!2023-07-22,3,270-->

Big O Notation resolves the key question: if there are $N$ data elements,
how many ==steps== will the algorithm take?

Big O is not only about how many steps an algorithm takes with specific input,
but more about how the number of steps grows as the size of the input grows. So it's
describe relationship between input data and the algorithm efficiency.

Let’s say we have an algorithm that always takes three steps no matter how
much data there is. That is, for N elements, the algorithm always takes three
steps. How would you express that in terms of Big O?
?
The algorithm is $\mathcal{O}(1)$. Because the number of steps is constant.
<!--SR:!2023-12-26,2,250-->

$\mathcal{O}(N)$ is ==less== efficient than $\mathcal{O}(1)$ no matter how many
steps the $\mathcal{O}(1)$ n algorithm actually takes.
<!--SR:!2024-02-02,8,270-->

Big O can describe the best and worst case scenario of an algorithm. But Big O
Notation generally refers to the ==worst case (pessimistic approach)== scenario,
unless specified otherwise.
<!--SR:!2024-02-03,9,270-->

$\mathcal{O}(N)$ is the Big O way of describing an algorithm that increases
==one step== each time the data is doubled.

$\mathcal{O}(log N)$ means that for $N$ data elements, the algorithm would take
==$\log_{2} N$== steps.

$\mathcal{O}(log N)$ means the algorithm takes as many steps as it takes to
keep halving the data elements until we remain with ==1==.

If there are 8 elements, the $\mathcal{O}(log N)$ algorithm would take ==3== steps.


Is this algorithm $\mathcal{O}(N)$ or $\mathcal{O}(log N)$?
```python
def is_prime(number):
    for i in range(2, number):
        if number % i == 0:
            return False
    return True
```
?
It's $\mathcal{O}(N)$.


## References

- [ ] [CSE 373 -- Lecture 2, Fall 2020 - YouTube](https://www.youtube.com/watch?v=z1mkCe3kVUA&t=3039s)
- [ ] [Big-O notation in 5 minutes - YouTube](https://www.youtube.com/watch?v=__vX2sjlpXU)
- [ ] [Big Oh Notation (and Omega and Theta) - YouTube](https://www.youtube.com/watch?v=ei-A_wy5Yxw)
- [ ] [Asymptotic Notation - YouTube](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Binary Search - YouTube](https://www.youtube.com/watch?v=D5SrAga1pno)
- [ ] [Big O Notations - YouTube](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big-O Algorithm Complexity Cheat Sheet (Know Thy Complexities!) @ericdrowell](https://www.bigocheatsheet.com/)
- [ ] [Understanding the formal definition of Big-O](https://justin.abrah.ms/computer-science/understanding-big-o-formal-definition.html)
