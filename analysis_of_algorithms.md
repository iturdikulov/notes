---
created: 2023-03-19T00:00+03:00
tags:
  - blog
  - computer_science
  - now
sr-due: 2025-07-22
sr-interval: 6
sr-ease: 245
---

# Analysis of algorithms

The process of finding the computational complexity [^1] of an algorithm is called?
<br class="f">
Analysis of algorithms (or complexity analysis). This involves determining the time complexity (how runtime scales with input size) and space complexity (memory usage) using Big O notation.
Analysis of algorithms helps compare algorithms, predict performance, and understand trade-offs between resources (time/memory). It is crucial for optimizing [[computation|computational]] efficiency.

Efficiency of algorithms is measured by?
<br class="f">
**Time Complexity** - How execution time grows with input size (e.g., O(n), O(log n), O(n²)). **Space Complexity** - How memory usage grows with input size.
Both are typically expressed using [[big_O_notation]] to describe worst-case performance as input approaches infinity. <!--SR:!2025-08-03,5,245-->

Different inputs of the same size may cause the algorithm to have different behavior, so best, worst, and average case descriptions might all be of practical interest. When not otherwise specified, the function describing the performance of an algorithm is usually an upper bound, determined from the ==worst== case inputs to the algorithm. <!--SR:!2025-08-04,5,247-->

[^1]: [Analysis of algorithms - Wikipedia](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
