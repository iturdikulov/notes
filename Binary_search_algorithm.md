---
date: 2023-03-19
draft: true
sr-due: 2023-12-22
sr-ease: 270
sr-interval: 219
tags:
- inbox
---

# Binary search algorithm (half-interval search, logarithmic search, binary chop)

> In [[Computer_science]], binary search [[Algorithm]] that finds the position
> of a target value within a sorted [[Array|array]].
>
> Binary search compares the target value to the middle element of the array. If
> they are not equal, the half in which the target cannot lie is eliminated and
> the search continues on the remaining half, again taking the middle element to
> compare to the target value, and repeating this until the target value is
> found. If the search ends with the remaining half being empty, the target is
> not in the array.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Binary_search_algorithm)</cite>

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
1 2 3 4 5 6 7 8 9 10 # I guess 5
          6 7 8 9 10 # answer is higher, I guess 8
          6 7        # answer is lower, I guess 6
            7        # answer is higher, I guess 7 and it's correct!
```


Code implementation: binary search in Ruby:

```ruby
def binary_search(array, search_value)

  # First, we establish the lower and upper bounds of where the value
  # we're searching for can be. To start, the lower bound is the first
  # value in the array, while the upper bound is the last value:

  lower_bound = 0  # first element
  upper_bound = array.length - 1  # last element

  # We begin a loop in which we keep inspecting the middlemost value
  # between the upper and lower bounds, core logic:

  while lower_bound <= upper_bound do
    # We find the midpoint between the upper and lower bounds:
    # (We don't have to worry about the result being a non-integer
    # since in Ruby, the result of division of integers will always
    # be rounded down to the nearest integer.)

    midpoint = (upper_bound + lower_bound) / 2
    puts "lower_bound: #{lower_bound}, upper_bound: #{upper_bound},
          midpoint index: #{midpoint}"

    # We inspect the value at the midpoint:

    value_at_midpoint = array[midpoint]

    # If the value at the midpoint is the one we're looking for, we're done.
    # If not, we change the lower or upper bound based on whether we need
    # to guess higher or lower:

    if search_value == value_at_midpoint
      return midpoint
    elsif search_value < value_at_midpoint
      upper_bound = midpoint - 1
    elsif search_value > value_at_midpoint
      lower_bound = midpoint + 1
    end
  end

  # If we've narrowed the bounds until they've reached each other, that
  # means that the value we're searching for is not contained within
  # this array:

  return nil
end

# Visualize the algorithm, best case scenario:
# 3 17    22    75 80 202 # I guess 22
# 3 17 midpoint 75 80 202 # midpoint = guess, return midpoint
p binary_search([3, 17, 22, 75, 80, 202], 22)

p "----------------------"

# Visualize the algorithm, other case scenario:
# 3 17    22    75 80 202 # I guess 202
# 3 17 midpoint 75 80 202 # midpoint != guess, guess is higher
# x x      x    m+1 ?  ?  # lower_bound = midpoint + 1
# x x      x    75  m 202 # midpoint != guess, guess is higher
# x x      x    x   x  m  # lower_bound = midpoint + 1
# x x      x    x   x  x  # midpoint = 202, return 202 index (5)
p binary_search([3, 17, 22, 75, 80, 202], 202)
```

## Compare with linear search

1. array items 3
   linear search: 3 steps
   binary search: 2 steps
2. array items 7
   linear search: 7 steps
   binary search: 3 steps (+ 1 step)
3. array items 15
   linear search: 15 steps
   binary search: 4 steps (+ 1 step)
4. array items 100
   linear search: 100 steps
   binary search: 7 steps
5. array items 10000
   linear search: 10000 steps
   binary search: ≈13 steps
6. array items 1000000
   linear search: 1000000 steps
   binary search: 20 steps

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