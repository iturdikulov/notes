---
date: 2024-08-26
tags:
  - inbox
  - SR-base
---

# Insertion sort

## Insertion sort in action

Can you describe the steps of insertion sort (graphically)?
&#10;<br>
```
# First pass-through
4._2_.7.1.3
4.   .7.1.3    -> we begin at index 1 and remove it into temp_value
2.*4*.7.1.3    -> 4 > 2, 4 shifted to the right, place temp_value into the gap
# Second pass-through
2.4._7_.1.3
2.4.   .1.3    -> we begin at index 2 and remove it into temp_value
2.4.*7*.1.3    -> 4 is less than 7, shift not required, 7 go back into the gap
# Third pass-through
2.4.7._1_.3
2.4.7.   .3    -> we begin at index 3 and remove it into temp_value
2.4.   .7.3    -> 7 > 1, so we shift 7 to the right
2.    4.7.3    -> 4 > 1, so we shift 4 to the right
    2.4.7.3    -> 2 > 1, so we shift 2 to the right
*1*.2.4.7.3    -> since gap at array starting point, we can insert temp_value back into the gap
# Fourth pass-through
1.2.4.7._3_
1.2.4.7.       -> we begin at index 4 and remove it into temp_value
1.2.4.   .7    -> 7 > 3, so we shift 7 to the right
1.2.   .4.7    -> 4 > 3, so we shift 4 to the right
1.2.*3*.4.7    -> 3 is less than 4, shift not required, 3 go back into the gap
# Our array is fully sorted
1.2.3.4.7
```

## Code implementation: insertion sort

Can you write the code for insertion sort, at least partially?
&#10;<br>
```python
def insertion_sort(array):
    # Generate pass-through rounds, from 2nd to last
    for index in range(1, len(array)):
        temp_value = array[index]  # "Hidden" place to store extracted value
        position = index - 1  # Start comparing values position, <<< pos

        while position >= 0: # Bounds to compare
            if array[position] > temp_value:
                # Shift that left value to the right
                array[position + 1] = array[position]
                # Shift position to compare the next left value
                position = position - 1
            else:
                # End pass-through shifting, since value at position that is
                # greater or equal to the temp_value
                break

        # Pass-through final step, moving temp_value into the gap (new home)
        array[position + 1] = temp_value

    return array
```

## The efficiency of insertion sort

Four types of steps occur in Insertion Sort, which ones with typical order of
them?
&#10;<br>
removals ("cut"), comparisons, shifts, and insertions, in total $N^2 + 2N - 2$ steps in worst case <!--SR:!2024-09-20,6,210-->

If there are N elements, we make ==$1+2+3...(N - 1), \frac{N^2}{2}$==
comparisons and shifts with insertion sort. <!--SR:!2024-09-06,1,228-->

If there are N elements, we make ==$N-1$== pass-throughs and same amount of
removals and insertions. <!--SR:!2024-09-10,1,208-->

If Insertion Sort takes $N^2$ steps for the worst-case scenario, we’d say that
it takes about ==$\frac{N^2}{2}$== steps for the average scenario, and in the
best-case scenario it's about $N$ steps, both $\mathcal{O}(N^2)$.

Selection sort takes fewer steps in best-case scenario because it has mechanism
for ==ending a pass-through== early and any point.

If you have reason to assume you’ll be dealing with data that is mostly sorted
which sorting algorithm would you use, selection sort or insertion sort?
&#10;<br>
Insertion sort, because it’s faster in best-case scenario when data is mostly
sorted.


