---
date: 2023-03-18
draft: true
sr-due: 2023-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- definition
sr-due: 2023-12-27
sr-interval: 224
sr-ease: 270
---

# B-tree

> In [[Computer_science]], b-tree is a self-balancing tree data structure that
> maintains sorted data and allows searches, sequential access, insertions, and
> deletions in [[Logarithm|logarithmic]] time. The B-tree generalizes the
> binary search tree, allowing for nodes with more than two children. Unlike
> other self-balancing binary search trees, the B-tree is well suited for
> storage systems that read and write relatively large blocks of data, such as
> databases and file systems.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/B-tree)

```
            hello
      ┌───────┴───────┐
      1               1
  ┌───┴───┐       ┌───┴───┐
  2       3       2       3
┌─┴─┐   ┌─┴─┐   ┌─┴─┐   ┌─┴─┐
4   5       6   4   5       6
```

| Algorithm | Average  | Worst case |
| --------- | -------- | ---------- |
| Space     | O(n)     | O(n)       |
| Search    | O(log n) | O(log n)   |
| Insert    | O(log n) | O(log n)   |
| Delete    | O(log n) | O(log n)   |
