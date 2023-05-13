---
date: 2023-04-29
draft: true
tags:
- inbox
- definition
---

# Map (higher-order function, aka apply-to-all)

> map is the name of a higher-order [[function (computer programming)|function]]
> that applies a given **function** to **each** element of a collection, e.g. a
> list or set, returning the results in a **collection** of the same type. It is
> often called apply-to-all when considered in functional form.
>
> The concept of a map is not limited to lists: it works for sequential
> containers, tree-like containers, or even abstract containers such as futures
> and promises.
>
> -- [Wikipedia](<https://en.wikipedia.org/wiki/Map_(higher-order_function)>)

Python example:

```python
words = ['apple', 'banana', 'cherry']
lengths = map(len, words)
for length in lengths:  # map is iterable, we can also just output list
    print(length)
```