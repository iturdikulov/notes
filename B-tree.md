---
created: 2023-03-18T00:00+03:00
tags:
  - blog
sr-due: 2025-09-15
sr-interval: 67
sr-ease: 181
---

# B-tree

> In [[computer_science]], b-tree is a self-balancing [[tree]] data structure
> that maintains sorted data and allows searches, sequential access, insertions,
> and deletions in [[logarithm|logarithmic]] time. The B-tree generalizes the
> binary search tree, allowing for nodes with more than two children. Unlike
> other self-balancing binary search trees, the B-tree is well suited for
> storage systems that read and write relatively large blocks of data, such as
> databases and file systems.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/B-tree)</cite>

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
