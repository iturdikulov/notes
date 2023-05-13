---
title: Linear search (sequential search)
date: 2023-03-19
tags:
  - inbox
  - definition
draft: true
sr-due: 2023-03-16
sr-interval: 3
sr-ease: 250
---

> Method for finding an element within a list. It sequentially checks each
> element of the list until a match is found, or the whole list has been
> searched.
>
> A linear search runs in at worst linear time and makes at most $N$
> comparisons, where $N$ is the length of the list. If each element is equally
> likely to be searched, then linear search has an average case of
> $\frac{n+1}{2}$ comparisons, but the average case can be affected if the
> search probabilities for each element vary.
>
> Linear search is rarely practical because other
> [[search algorithm|search algorithms]] and schemes, such as the
> [[binary search algorithm]] and [[hash table]],
> allow significantly faster searching for all but short lists.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/Linear_search)

Linear search usually inefficient. For example, if we have a list of 1000
elements, and we want to find the element with value 1000, we will have to check
all 1000 elements. But if we have some feedback when we get some element,
finding element can be much more efficient.

