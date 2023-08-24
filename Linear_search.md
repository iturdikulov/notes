---
date: 2023-03-19
draft: true
sr-due: 2023-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- definition
- CS-tip
sr-due: 2024-01-02
sr-interval: 230
sr-ease: 270
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
> Linear search is rarely practical because other
> [[Search_algorithm|search_algorithms]] and schemes, such as the
> [[Binary_search_algorithm]] and [[Hash_table]], allow significantly faster
> searching for all but short lists.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/Linear_search)

Linear search usually inefficient. For example, if we have a list of 1000
elements, and we want to find the element with value 1000, we will have to check
all 1000 elements. But if we have some feedback when we get some element,
finding element can be much more efficient.

In best case linear search take ==1 step or $\mathcal{O}(1)$==.
<!--SR:!2023-07-20,1,250-->

In the worst case linear search take as many steps as ==there are elements
$\mathcal{O}(N)$== in the array.

If there are $N$ data elements, how many steps will linear search algorithm
take in the worst case?
?
Algorithm will take $\mathcal{O}(N)$ steps in the worst case.
<!--SR:!2023-07-22,3,260-->
