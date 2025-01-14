---
date: 2024-03-14T00:00+03:00
tags:
  - blog
sr-due: 2024-07-02
sr-interval: 1
sr-ease: 223
---

# Combinatorics

What is combinatorics (in simple terms)?
&#10;<br>
Combinatorics is the science of how to combine different objects.


<!-- NEXT: move into research -->
# Binomial theorem

![Борис Трушин - Бином Ньютона. Игра в слова. Числа сочетаний](https://www.youtube.com/watch?v=OSb146CwYqA)

# Raidgorodsky Combinatorics lecture

[Raigorodsky Combinatorics lecture](file:///home/inom/Computer/science/Raigorodsky-Combinatorics/Raigorodsky-Combinatorics-Introduction_to_combinatorics_part_1_aohFil0ioJg.mp4)

Recommended books:

- Vilenkin combinatorics
- Raigorodsky, Savvateev, Shkredov green book

Set in combinatorics - `A = {a1, a2, a3, ..., n}`

Number of elements in set (power) [0:07:42](<file:///home/inom/Computer/science/Raigorodsky-Combinatorics/Raigorodsky-Combinatorics-Introduction_to_combinatorics_part_1_aohFil0ioJg.mp4>)?
&#10;<br>
Number of elements in set - A = |A| = n

## Addition principle [0:08:11](<file:///home/inom/Computer/science/Raigorodsky-Combinatorics/Raigorodsky-Combinatorics-Introduction_to_combinatorics_part_1_aohFil0ioJg.mp4>)

```
A = {a1, a2, a3, ..., n}
B = {b1, b2, b3, ..., m}, no duplicates, number of items can be other
```
Number of ways to select 1 object from A or 1 object from B ?
&#10;<br>
|A| + |B| = n + m

## Multiplication principle [0:11:03](<file:///home/inom/Computer/science/Raigorodsky-Combinatorics/Raigorodsky-Combinatorics-Introduction_to_combinatorics_part_1_aohFil0ioJg.mp4>)

```
A = {a1, a2, a3, ..., n}
B = {b1, b2, b3, ..., m}, can contain duplicates
```
Number of ways to select 1 object from A and then 1 object from B (2 selection)?
&#10;<br>
|A| * |B| = n * m
```
a1b1, a1b2, a1b3, a1bm
a2b1, a2b2, a2b3, a2bm
anb1, anb2, anb3, anbm
We can also multiply many sets together, (|A| * |B|) * |C|
```
## Pigeonhole principle [0:22:10](<file:///home/inom/Computer/science/Raigorodsky-Combinatorics/Raigorodsky-Combinatorics-Introduction_to_combinatorics_part_1_aohFil0ioJg.mp4>)

If n items are put into m containers, with ==n > m==, then at least one
container must contain more than one item.

## Combinations, arrangements, permutations [0:32:34](<file:///home/inom/Computer/science/Raigorodsky-Combinatorics/Raigorodsky-Combinatorics-Introduction_to_combinatorics_part_1_aohFil0ioJg.mp4>)

```
A = {a1, a2, a3, ..., n}
k (natural numbers + 0) <= n
```
How to select k items from A (possible ways)?
&#10;<br>
So here the list:
We can select k items sequentially, with or without removing items from set:
1. k-placements without repetition (cut, where k is number of items)
2. k-placements with repetition (can be without repetition)
We can select k items simultaneously, with or without removing items from set:
3. k-combinations without repetition
4. k-combinations with repetition (can be without repetition)
