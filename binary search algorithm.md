---
date: 2023-03-19
draft: true
sr-due: 2023-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- definition
---

# Binary search algorithm (half-interval search, logarithmic search, binary chop)

> Search [[algorithm|algorithm]] that finds the position of a
> target value within a sorted [[array (computer science)|array]].
>
> Binary search compares the target value to the middle element of the array. If
> they are not equal, the half in which the target cannot lie is eliminated and
> the search continues on the remaining half, again taking the middle element to
> compare to the target value, and repeating this until the target value is
> found. If the search ends with the remaining half being empty, the target is
> not in the array.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/Binary_search_algorithm)

| Property                    | Value            |
|:----------------------------|:-----------------|
| Class                       | Search algorithm |
| Data structure              | Array            |
| Worst-case performance      | O(log n)         |
| Best-case performance       | O(1)             |
| Average performance         | O(log n)         |
| Worst-case space complexity | O(1)             |