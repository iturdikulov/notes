---
date: 2024-08-22
tags:
  - inbox
  - base
sr-due: 2024-08-26
sr-interval: 1
sr-ease: 221
---
# Bubble sort

> Bubble sort, sometimes referred to as sinking sort, is a simple sorting
> algorithm that repeatedly steps through the input list element by element,
> comparing the current element with the one after it, swapping their values if
> needed (current > next). These passes through the list are repeated until no
> swaps have to be performed during a pass, meaning that the list has become
> fully sorted. The algorithm, which is a comparison sort, is named for the way
> the larger elements "bubble" up to the top of the list.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)</cite>

Buble-sort is classical sorting algorithms, usually used to learn how to sort
data and not to be used in production itself, but can be used as part of other
algorithms.

Bubble sort, it's because the ==highest unsorted== value "bubbles" up to its correct
position, starting from right boundary of the array. <!--SR:!2024-09-08,4,216-->

How to sort `2135` using bubble sort (graphical answer allowed)? How many pass-through's are used here?
&#10;
```
2.1.3.5
2 > 1, start with first 2 values and compare them, swap, result: 1.2.3.5
2 < 3, skip after comparing
3 < 5, skip, we also don't compare 5 anymore in future, because we reached end of array and 5
       doesn't swapped
---
swap detected, need to repeat to verify sorting, we also change starting boundary
1|2.3.5
---
2 < 3, skip -> we started from index 1
3 < 5, skip
no swap detected
array is sorted: 1.2.3.5
```
<!--SR:!2024-09-21,8,215-->

Code implementation of bubble sort (at least basic concepts), input data
unsorted list, output sorted list:
&#10;
```python
def bubble_sort(array_items):
    # rightmost index of the array that has not yet been sorted
    # -1, since we compare i and i+1, so need to generate N-1 range of indexes
    unsorted_until_index = len(array_items) - 1

    sorted = False  # Assuming that list is unsorted

    # Start unknown rounds of pass-trhough sorting
    while not sorted:
        # Assuming list sorted, we verify that need to run the next pass-trhough
        sorted = True

        # Pass-trhough sorting
        for i in range(unsorted_until_index):
            if array_items[i] > array_items[i + 1]:
                array_items[i], array_items[i + 1] = (
                    array_items[i + 1],
                    array_items[i],
                )  # swap values

                # Detected "unsorting", so we run next while iteraion
                sorted = False

        # Reduce bounds, we don't need to compare last item anymore
        # it's bubbled up to correct position
        unsorted_until_index -= 1

    # We made all sorting pass-trhough iterations and ready to return results
    return array_items

print(bubble_sort([65, 55, 45, 35, 25, 15, 10]))
```
*Results:* `[10, 15, 25, 35, 45, 55, 65]`

What is the efficiency of bubble sort?
&#10;
The efficiency of Bubble Sort (in terms of Big O) is approximately (will close
to it with big numbers) $\mathcal{O}(N^2)$, quadratic time, grows exponentially.
In worst case array of 5 items we need to compare 10 times and make 10 swaps,
array of 10 items we need to compare about 45 times and make about 45 swaps. You
can check [[Wengrow-Data_structures_and_algorithms|Wengrow]] book, page
73. <!--SR:!2024-09-27,22,250-->

