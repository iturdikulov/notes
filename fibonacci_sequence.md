---
date: 2023-03-16
tags:
  - inbox
  - mathematics
sr-due: 2024-02-01
sr-interval: 5
sr-ease: 228
---

# Fibonacci sequence

> In mathematics, the Fibonacci sequence is a sequence in which each number is
> the sum of the ==two preceding ones==. Numbers that are part of the Fibonacci
> sequence are known as Fibonacci numbers, commonly denoted $F_n$. Many writers
> begin the sequence with 0 and 1, although some authors start it from 1 and
> 1 and some (as did Fibonacci) from 1 and 2. Starting from 0 and 1, the
> sequence begins `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....`.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Fibonacci_sequence)</cite>

![[img/Fibonacci_spiral.excalidraw|Fibonacci spiral diagram]]
_Fiboancci Spiral_

A Fibonacci spiral approximates the golden spiral using quarter-circle arcs
inscribed in squares derived from the Fibonacci sequence.

Applications of Fibonacci numbers include computer [[algorithm]]:

- [Fibonacci search technique - Wikipedia](https://en.wikipedia.org/wiki/Fibonacci_search_technique)
- [Fibonacci heap - Wikipedia](https://en.wikipedia.org/wiki/Fibonacci_heap)

## Fibonacci sequence generation in Python

Main idea: each number is the sum of the two preceding ones, input is length of
Fibonacci sequence, output Fibonacci sequence. We need to store result of latest
calculation (sum of `A` and `B`), so we need to use temporary variable.

```python
i = 7
a, b = 0, 1
while i > 0:
  print(a)
  c = a + b
  a = b  # it's important to update a before b
  b = c  # b is changed
  i -= 1
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
```

Simplified version

```python
a, b = 0, 1  # multiple assignment, initialize variables
while a <= 21:
    print(a)
    a, b = b, a+b  # tuple stored somewhere in memory, unpacked to a, b
```
