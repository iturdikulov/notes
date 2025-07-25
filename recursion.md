---
created: 2023-03-18T00:00+03:00
tags:
  - blog
  - computer_science
  - now
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 225
---

# Recursion (computer science)

> Method of solving a [[computation#Computational problem|computation problem]] where the solution depends on solutions to smaller instances of the same problem. Recursion solves such recursive problems by using functions that call themselves from within their own code. The approach can be applied to many types of problems, and recursion is one of the central ideas of [[computer_science]].\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Recursion_(computer_science))</cite>

![Recursive Tree](img/recursive_tree.jpg)\
_Tree created using the Logo programming language and relying heavily on recursion. Each branch can be seen as a smaller version of a tree._

What is this code return?

```python
def test_func(x):
    if x == 0:
        return 0
    return x + test_func(x - 1)

print(test_func(10))
```
<br class="f">
55 = 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1

## External links

- [ ] [Lecture 8 | Programming Abstractions (Stanford) - YouTube](https://www.youtube.com/watch?v=gl3emqCuueQ)
