---
date: 2023-03-23
draft: true
sr-due: 2023-11-12
sr-ease: 290
sr-interval: 179
tags:
- inbox
---

# Signed number representations

> Used to solve the problem of representing negative integers in binary. The
> problem of trying to store the negative sign (−) of a binary [[Number|number]]
> is that there are no states left to use with which to represent the negative
> assignment. It is not possible to just use 'off' for minus and 'on' for plus
> because the computer would have no way of knowing whether it was a digit or a
> sign.
>
> --
> [Wikipedia](https://simple.wikipedia.org/wiki/Signed_number_representations)

To solve this issue computer designers invented two's method for storing
negative binary numbers.

TODO: Describe two's method