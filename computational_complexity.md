---
date: 2023-04-17
tags:
  - inbox
  - base
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 185
---

# Computational complexity

> In [[computer_science|computer science]], the computational complexity or
> simply complexity of an algorithm is the amount of resources required to run
> it. Particular focus is given to
> [[computational_complexity#Time complexity|computation time]]
> (generally measured by the number of needed elementary operations) and memory
> storage requirements. The complexity of a problem is the complexity of the
> best algorithms that allow solving the problem.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Computational_complexity)</cite>

Complexity is generally expressed by using [[big_O_notation|Big O notation]].

## Time complexity

> Time complexity is the way in which the number of ==steps== required by an
> [[algorithm]] varies with the size of the problem it is solving. Time
> complexity is normally expressed as an order of magnitude, e.g. $O(n^2)$ means
> that if the size of the problem ($n$) doubles then the algorithm will take
> four times as many steps to complete.\
> — <cite>[FOLDOC](https://foldoc.org/time%20complexity)</cite>

Measuring the speed of an operation (how many steps' operation will take) is
also known as measuring its ==time complexity==.
<!--SR:!2023-07-20,7,210-->

When we measure how “fast” an operation takes, we do not refer to how fast the
operation takes in terms of pure time, but instead in how many ==steps== it
takes. Measuring operations by steps, allow us to compare operations speed
independently of the hardware they are run on.
<!--SR:!2023-07-22,3,258-->

## Space complexity

The way in which the amount of ==storage== space required by an algorithm varies
with the size of the problem it is solving.

## References

- [ ] [CSE 373 -- Lecture 2, Fall 2020 - YouTube](https://www.youtube.com/watch?v=z1mkCe3kVUA&t=2054s)
- [ ] [Topcoder](https://www.topcoder.com/thrive/articles/Computational%20Complexity%20part%20one)
- [ ] [Computational Complexity part two](https://www.topcoder.com/thrive/articles/Computational%20Complexity%20part%20two)
- [ ] [Lecture 23: Computational Complexity - YouTube](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=25)
- [ ] [Amortized Analysis - Potential functions - YouTube](https://www.youtube.com/watch?v=B3SpQZaAZP4)
