---
created: 2023-04-14T00:00+03:00
tags:
  - blog
  - HEAD
sr-due: 2025-07-25
sr-interval: 4
sr-ease: 211
---

# Set (abstract datatype)

> Abstract data type that can store unique values, without any particular order. It is a computer implementation of the mathematical concept of a finite set. Unlike most other collection types, rather than retrieving a specific element from a set, one typically tests a value for membership in a set.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Set_(abstract_data_type))</cite>

So main set feature is that it can store ==only unique values==. <!--SR:!2024-09-13,17,259-->

Basic uses of set is membership testing and eliminating ==duplicate== entries. Set objects also support (at least in [[Python]]) mathematical operations like union, intersection, difference, and symmetric difference. <!--SR:!2024-10-12,28,239-->

Set seems so similar (especially array-based set) to the [[array]] but operations performed on the set are different, mainly on ==**insert operation**==, in worst case 2N+1. It has different efficiency, because we have non-duplicating constraint. But it perfectly replaces array, when you need unique data. <!--SR:!2024-09-08,11,240-->

Sets can be suitable for any lists of unique data (phone numbers, email addresses, etc.).

Reading (access) from a set take ==one step==, like array. <!--SR:!2024-09-23,34,266-->

Searching a set takes up to ==$N$ steps, where $N$ is a number of items in the set==, like array.

Deletion from set takes ==$N$ steps, delete and move data to the left to close gap==, like array.

**Insertion** is different. You need to ensure that you don't have duplicate data and this means every insertion into a set first requires a ==search== operation. <!--SR:!2024-09-07,5,237-->

In best case insertion into set takes:
<br class="f">
Insert into end of set. $N + 1$ steps. $N$ steps → search, 1 step to insert into end. <!--SR:!2024-09-19,7,206-->

In worst case insertion into set takes (steps):
<br class="f">
Insert into beginning of set is worst case scenario. In contrast to insertion into the begging of a regular array ($N+1$), insertion can take $2N + 1$ steps. Formula: search $N$ steps + shift $N$ steps + insert 1 step. In other words we add search operation to insert value into set. <!--SR:!2024-09-14,4,179-->

TODO: check

- union
- intersection
- difference
- symmetric difference

## External links

- [ ] [Sets in Python – Real Python](https://realpython.com/python-sets/)
