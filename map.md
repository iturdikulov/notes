---
date: 2023-04-29T00:00+03:00
tags:
  - blog
  - computer_programming
sr-due: 2024-01-31
sr-interval: 4
sr-ease: 223
---

# Map (higher-order function, aka apply-to-all)

> map is the name of a higher-order [[function]] that applies a given
> **function** to **each** element of a collection, e.g. a [[list]] or [[set]],
> returning the results in a ==[[collection]]== of the same type. It is often
> called apply-to-all when considered in functional form.
>
> The concept of a map is not limited to lists: it works for sequential
> containers, [[tree]]-like containers, or even abstract containers such as
> futures and promises.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Map_\(higher-order_function\))</cite>

Python example map `len` function to list of words

```python
words = ['apple', 'banana', 'cherry']
lengths = map(len, words)
for length in lengths:  # map is iterable, we can also just output list
    print(length)
lengths = map(lambda n: len(n) * 2, words)  # lambda function
for length in lengths:  # map is iterable, we can also just output list
    print(length)
```

## Visual example

Below, you can see a view of each step of the mapping process for a list of
integers `X = [0, 5, 8, 3, 2, 1]` that we want to map into a new list `X'`
according to the function $f(x) = x + 1$

![Map function visual example](img/map_function_visual_example.gif)
