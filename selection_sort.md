---
date: 2024-08-26T00:00+03:00
tags:
  - blog
  - computer_science
---

# Selection sort

> In [[computer_science]], selection sort is an in-place comparison sorting
> algorithm. It has an ==$O(N^2)$== time complexity, which makes it inefficient
> on large lists, and generally performs worse than the similar insertion sort.
> Selection sort is noted for its simplicity and has performance advantages over
> more complicated algorithms in certain situations, particularly where
> auxiliary memory is limited.\
> — <cite>[Selection sort - Wikipedia](https://en.wikipedia.org/wiki/Selection_sort)</cite> <!--SR:!2024-09-10,8,250-->

## Selection sort in action

We compare each value with the lowest number we’ve encountered in each
pass-through, and we swap the ==lowest number== into its correct position.
```text
4.2.7.1.3
...        -> find lowest value 1 at first pass-through
1|2.7.4.3  -> swap 4 and 1, 1 now sorted area
...        -> find lowest value 2 at second pass-through
1.2|7.4.3  -> 2 already in correct positon, no need to swap, sorted area increased
...        -> find lowest value 3 at third pass-through
1.2.3|4.7  -> swap 3 and 7, sorted area increased
...        -> find lowest value 4 at four pass-through
1.2.3.4|7  -> 4 already in correct position, no need to swap, sorted area increased
1.2.4.4.7  -> since 7 is last cell we can ignore it (already sorted)
```
<!--SR:!2024-09-10,8,250-->

For N elements, we make ==$(N - 1) + (N - 2) + (N - 3) … + 1$== comparisons with
selection sort. <!--SR:!2024-09-06,2,210-->

Selection Sort takes about ==half== the number of steps
[[bubble_sort_algorithm|Bubble Sort]] does, indicating that selection sort is
much faster than bubble sort. <!--SR:!2024-09-11,9,250-->

## Code implementation: Selection sort

Can you write selection sort, at least basic implementation?
<br class="f">
```js
function selectionSort(array) {
    // Usage: selectionSort([2, 3, 5, 1, 2, 6, 7, 8, 9, 10]);

    // Pass-through's generation until **second-to-last** value (i current value)
    // we assume array will be sorted after all N-1 pass-through operations
    // (last item will be automatically sorted)
    for(let i = 0; i < array.length - 1; i++) {
        // Track index of lowest value in unsorted area
        // on initialization we assume first array item is already sorted
        // we need to track index and value of lowest array item, this is why used index here
        let lowestNumberIndex = i;

        // We start checking from 1 to 9 index (j = i + 1), comparasions steps
        //  then from 2 to 9
        //   then from 3 to 9, etc.
        for(let j = i + 1; j < array.length; j++) {
            if(array[j] < array[lowestNumberIndex]) {
                // Store minimal value for current array range
                lowestNumberIndex = j;
            }
        } // possible situation when lowestNumberIndex doesn't change at all

        // If current index NOT already minimal value, we need to swap
        // currentVal ⇄  minValue, swap step
        if(lowestNumberIndex != i) {
            let currentValTemp = array[i];
            array[i] = array[lowestNumberIndex];
            array[lowestNumberIndex] = currentValTemp;
        }
    }
    return array;
}

console.log(selectionSort([2, 3, 5, 1, 2, 6, 7, 8, 9, 10]));
```
*Results:*
```
[
  1, 2, 2, 3,  5,
  6, 7, 8, 9, 10
]
```

## The efficiency of selection sort
