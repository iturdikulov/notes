---
date: 2023-03-19
tags:
  - inbox
  - base
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 225
---
# Linear search (sequential search)

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
> Linear search is rarely practical because other [[search_algorithm]] and
> schemes, such as the [[binary_search]] and [[hash_table]], allow
> significantly faster searching for all but short lists.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Linear_search)</cite>

Linear search usually inefficient. For example, if we have a list of 1000
elements, and we want to find the element with value 1000, we will have to check
all 1000 elements. But if we have some feedback when we get some element,
finding element can be much more efficient.

In best case linear search take ==1 step or $\mathcal{O}(1)$==.
<!--SR:!2024-01-21,1,230-->

In the worst case linear search take as many steps as ==there are elements
$\mathcal{O}(N)$== in the array.

If there are $N$ data elements, how many steps will linear search algorithm
take in the worst case?
&#10;
Algorithm will take $\mathcal{O}(N)$ steps in the worst case.
<!--SR:!2024-01-28,8,260-->
