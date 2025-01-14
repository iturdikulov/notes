---
date: 2023-06-28T00:00+03:00
tags:
  - inbox
  - SR-base
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 226
---

# Array operations

There are 4 basic operations that can be performed on an [[array]]:
==read, search, insert, delete== <!--SR:!2024-11-19,53,255-->

## Reading

Array reading operation is ==looking up (access/retrieve)== a value at a
particular index in an array. It's efficient and fastest operation, since
require only one step. Get index, jump to position, read value. <!--SR:!2024-09-16,27,250-->

Array reading require only ==one ($\mathcal{O}(1)$)== step, because we can
retrieve value by some computation (array address + index). <!--SR:!2024-09-28,29,230-->

When computer allocate an array, it makes note at which memory addresses the
array begins, and knowing that address and index of any element, computer can
calculate the memory address (simply addition) of that element in ==one== step. <!--SR:!2024-09-13,24,250-->

![[img/shopping_list_array_insert.excalidraw|shopping list array diagram, insert operation]]
_Schematic array representation in memory_

An array is stored such that the **position of each element** can be computed
from its **index tuple** by a mathematical formula. So a computer can find the
value at any index by performing simple addition.

| value          | A   | B   | C   | D   | E   | F   | G   | H   | I   | J   |
| :------------- | :-- | :-- | :-- | :-- | :-- | :-- | :-- | :-- | :-- | :-- |
| memory address | 10  | 11  | 12  | 13  | 14  | 15  | 16  | 17  | 18  | 19  |
| index          | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

Read value from an array, at index 3, array begins from memory address 10,
Which value address is?
&#10;<br>
1. Array begins from memory address 10
2. Index 3 will be exactly 3 positions after address 10
3. So, memory address for index 3 is 13
4. Read value from memory address 13 👀 <!--SR:!2024-10-27,30,235-->

## Searching

### Linear search

Searching in array is looking to see if a particular ==value== exists within the array,
and if so, at which index. <!--SR:!2024-09-23,24,250-->

Start search value in each cell of array (sequentially comparing), if we found
value return its ==index== and skip any further steps (hey sorted arrays 😉).

Sometimes you need to search for an index of a value in the array, is sort of
inverse of ==reading== (and much slower). We provide a value to the computer and
asking it to return the index of that value's location. One method to retrieve it
is linear search.
<!--SR:!2023-07-20,1,229-->

Basic search operation is "==linear==" search. We check each cell one at time
until we find the value we are looking for (or until we read all cells). <!--SR:!2024-09-11,8,235-->

What advantages linear search has with ordered array?
&#10;<br>
With [[array#Ordered array|ordered array]] we can stop search early in certain
situations, even if the value isn't contained within the array. Iterate while
element < search value, return index if found or break if element > search value. <!--SR:!2024-10-04,25,236-->

Search in array is much slower than read (less efficient). Maximum steps are
`N` ($\mathcal{O}(n)$), where `N` is a number of ==cells== in array. <!--SR:!2024-09-22,23,250-->

Linear search algorithm code for sorted array, basic ideas at lest:
&#10;<br>
```ruby
# WARNING: this example designed for sorted array.
# We iterate through every element in the array:
def linear_search(array, search_value)
    array.each_with_index do |element, index|
        # If we find the value we're looking for, we return its index:
        if element == search_value
            return index

        # If we reach an element that is greater than the value
        # we're looking for, we can exit the loop early,
        # item won't be found anyway:
        elsif element > search_value
            break
        end
    end

    # We return nil if we do not find the value within the array:
    return nil
end

i = linear_search([3, 17, 75, 80, 202, 300], 202)
puts i
```
<!--SR:!2024-09-06,2,215-->

For both kinds of arrays (sorted and unsorted), if they contain N elements,
linear search can take up to ==N or $\mathcal{O}(n)$== steps. But if you use a
binary search, which can be used with ordered arrays, effectiveness of search
will raise dramatically to $\mathcal{O}(log n)$. <!--SR:!2024-10-17,42,250-->

### Binary search for ordered array

NOTE: that binary search is only possible within an ordered array, with classic
array we need to read all cells.

Example of how binary search works:
```
# input data: ordered array with 9 elements, need find value 7

? ? ? ? ? ? ? ? ?
        9          # we begin with central cell, wich was calclulated
? ? ? ?            # we eliminated 5 items, because 7 is less than 9
? 4 ? ?            # we inspect middlemost value (left one)
    ? ?            # we eliminated 2 items, because 7 is more than 4
    6 ?            # so left only 1 cell and we need inspect it
      7            # if here no 7, we not return index, in our case we
                   # return index #3
```

## Insertion

Adding a new value to an additional slot within the array is ==inserting== operation.
Get index, jump to index position, optionally shift data, **insert value**
(usually before index position). <!--SR:!2024-09-27,18,210-->

When computer allocating an array, the computer always keeps track of the
array's ==size==. <!--SR:!2025-02-07,45,250-->

Efficiency depends on where we insert the value:

- End - one step, we know index where to place, because we have beginning
  address and size of array. But keep in mind, we need to allocate more memory
  for array while inserting, which cost some time/operations.

- Beginning or in the middle, this operation requires shifting data. In the
worst case (begging of array) it's $N+1$ steps, where $N$ is a number of
items in array.

![[img/shopping_list_array_insert.excalidraw.md|shopping list array diagram, insert operation]]
_Array insertion operation in memory_

How many steps will take array insertion in the worst case?
&#10;<br>
$N+1$ steps, where $N$ is a number of items in array required to shift and 1 is
insert operation. <!--SR:!2024-09-13,16,230-->

## Deletion

Deletion from array is operation of?
&#10;<br>
Removing a value from the array. In other words process of eliminating the
value at a particular index.
This is sort of reverse of insertion.
Get index, jump to position, **delete value**, move all values to the left. <!--SR:!2024-09-12,15,230-->

![[img/shopping_list_array_delete.excalidraw|shopping list array diagram, delete operation]]
_Array deletion operation in memory_

In worst case deletion from array operation will take (steps)?
&#10;<br>
$N$ steps, where $N$ is a number of items in array. One step to delete value,
and $N-1$ (we don't need to shift deleted value) steps to shift data. <!--SR:!2024-12-01,54,230-->
