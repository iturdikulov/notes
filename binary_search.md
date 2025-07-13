---
created: 2023-03-19T00:00+03:00
tags:
  - blog
  - computer_science
sr-due: 2025-09-15
sr-interval: 67
sr-ease: 182
---

# Binary search algorithm

Also known as half-interval search, logarithmic search, binary chop.

> In [[computer_science]], binary search [[algorithm]] that finds the position
> of a target value within a ==sorted== [[array]].
>
> Binary search compares the target value to the middle element of the array. If
> they are not equal, the half in which the target cannot lie is eliminated and
> the search continues on the remaining half, again taking the middle element to
> compare to the target value, and repeating this until the target value is
> found. If the search ends with the remaining half being empty, the target is
> not in the array.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Binary_search_algorithm)</cite>
> <!--SR:!2024-09-28,15,202-->

Half-interval search perfectly explains what binary search is about. Binary
search usable on ==ordered= array, and we can eliminate half not required
results during each iteration until we not find value or processed all data.
Very good visualization aviable here: [Binary and Linear Search
Visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html)

| Property                    | Value            |
| :-------------------------- | :--------------- |
| Class                       | Search algorithm |
| Data structure              | Array            |
| Worst-case performance      | O(log n)         |
| Best-case performance       | O(1)             |
| Average performance         | O(log n)         |
| Worst-case space complexity | O(1)             |

Simple example of binary search algorithm:
```
1 2 3 4 5 6 7 8 9 10 # I guess < 5
          6 7 8 9 10 # answer is higher, I guess < 8
          6 7        # answer is lower, I guess < 7
            7        # answer is higher, I guess 7 and it's correct!
```

<!-- NEXT: in python? -->

Code implementation, binary search in Ruby, can you guess some basic concepts?
<br class="f">
```ruby
def binary_search(array, search_value)

  # First, we establish the lower and upper bounds of where the value
  # we're searching for can be. To start, the lower bound is the first
  # value in the array, while the upper bound is the last value:
  # range = all array
  lower_bound = 0  # first element
  upper_bound = array.length - 1  # last element

  # We begin a loop in which we keep inspecting the middlemost value
  # between the upper and lower bounds, core logic:
  while lower_bound <= upper_bound do
        # while we might have value in range

    # We find the midpoint between the upper and lower bounds:
    # We don't have to worry about the result being a non-integer
    # since in Ruby, the result of division of integers will always
    # be **rounded down** to the nearest integer.
    midpoint = (upper_bound + lower_bound) / 2
    puts "lower_bound: #{lower_bound}, upper_bound: #{upper_bound},
          midpoint index: #{midpoint}, search value: #{search_value}"

    # We inspect the value at the midpoint:
    value_at_midpoint = array[midpoint]

    # If the value at the midpoint is the one we're looking for, we're done.
    # If not, we change the lower or upper bound based on whether we need
    # to guess higher or lower:
    if search_value == value_at_midpoint
      return midpoint
    elsif search_value < value_at_midpoint
      upper_bound = midpoint - 1 # ????[m]xxxx
    elsif search_value > value_at_midpoint
      lower_bound = midpoint + 1 # xxxx[m]????
    end
  end

  # If we've narrowed the bounds until they've reached each other, that
  # means that the value we're searching for is not contained within
  # this array:
  return nil
end

puts "Visualize the algorithm, best case scenario:"
puts "3 17    22    75 80 202 # I guess 22"
# 3 17 midpoint 75 80 202 # midpoint = guess, return midpoint
p binary_search([3, 17, 22, 75, 80, 202], 22)

p "----------------------"

puts "Visualize the algorithm, other case scenario:"
puts "3 17    22    75 80 202 # I guess 202"
# 3 17 midpoint 75 80 202 # midpoint != guess, guess is higher
# x x      x    m+1 ?  ?  # lower_bound = midpoint + 1
# x x      x    75  m 202 # midpoint != guess, guess is higher
# x x      x    x   x  m  # lower_bound = midpoint + 1
# x x      x    x   x  x  # midpoint = 202, return 202 index (5)
p binary_search([3, 17, 22, 75, 80, 202], 202)
```
*Results:*
```
Visualize the algorithm, best case scenario:
3 17    22    75 80 202 # I guess 22
lower_bound: 0, upper_bound: 5,
          midpoint index: 2, search value: 22
2
"----------------------"
Visualize the algorithm, other case scenario:
3 17    22    75 80 202 # I guess 202
lower_bound: 0, upper_bound: 5,
          midpoint index: 2, search value: 202
lower_bound: 3, upper_bound: 5,
          midpoint index: 4, search value: 202
lower_bound: 5, upper_bound: 5,
          midpoint index: 5, search value: 202
5
```

## Compare with linear search (worst case)

1. array items 3
   linear search: 3 steps
   binary search: 2 steps
2. array items 7
   linear search: 7 steps
   binary search: 3 steps
3. array items 15
   linear search: 15 steps
   binary search: 4 steps
   ...
4. array items 100
   linear search: 100 steps
   binary search: 7 steps
5. array items 10000
   linear search: 10000 steps
   binary search: ≈13 steps
6. array items 1000000
   linear search: 1000000 steps
   binary search: 20 steps

Each lookup step in **binary search** eliminates ==half== of the elements from the
search. <!--SR:!2025-02-06,13,239-->

Each time when we double input data for binary-search algorithm, it just takes
==one== more step. For linear search we must double search steps each time. <!--SR:!2024-09-17,8,221-->

Difference between $\mathcal{O}(N)$ and $\mathcal{O}(log N)$:

| N elem. | O(N)   | O(log N) |
|---------|--------|----------|
| 8       | 8      | 3        |
| 16      | 16     | 4        |
| 32      | 32     | 5        |
| 64      | 64     | 6        |
| 128     | 128    | 7        |
| 256     | 256    | 8        |
| 512     | 512    | 9        |
| 1024    | 1024   | 10       |


Binary search efficiency somewhere in between of $\mathcal{O}(1)$ and
$\mathcal{O}(N)$ (but neither one of them). And its efficiency is ==$\mathcal{O}(\log{n})$==. <!--SR:!2024-09-16,7,204-->

$\mathcal{O}(\log{n})$ algorithm efficiency is - increases ==one== step each
time the data is doubled. <!--SR:!2024-09-06,4,221-->

## External links

- [ ] [Binary Search - YouTube](https://www.youtube.com/watch?v=D5SrAga1pno)
- [ ] [Двоичный поиск — Википедия](https://ru.wikipedia.org/wiki/%D0%94%D0%B2%D0%BE%D0%B8%D1%87%D0%BD%D1%8B%D0%B9_%D0%BF%D0%BE%D0%B8%D1%81%D0%BA)
