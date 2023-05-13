---
date: 2023-03-23
draft: true
sr-due: 2023-04-01
sr-ease: 268
sr-interval: 3
tags:
- inbox
- definition
---

# Truncation

> Limiting the number of digits right of the decimal point by discarding the
> least significant ones.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/Truncation)

Usually you can see truncation when dividing two integers. For example, `5/2` is
`2` and not `2.5`.

```c
printf("%d", 5/2); // 2
```