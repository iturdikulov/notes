---
date: 2022-12-29
tags:
  - inbox
  - base
sr-due: 2024-01-26
sr-interval: 4
sr-ease: 221
---

# Data structures

> In [[computer_science]], a data structure is a data organization, management,
> and storage format that is usually chosen for ==efficient== access to data.\
> More precisely, a data structure is a collection of data values, the
> relationships among them, and the functions or operations that can be applied
> to the data, i.e., it is an algebraic structure about data.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Data_structure)</cite>
> <!--SR:!2024-09-29,2,221-->

Solid knowledge in data structures allows you to write scalable, fast and
efficient software, increase your software expertise and make you happy 🙂.

What is data structures in computer science?
&#10;<br>
Data structures providing organization (relationships), management (functions or
operations) and format for some data. Each data structure has own efficiency and
optimizations. <!--SR:!2024-10-09,1,201-->

## Notes from [[Wengrow-Data_structures_and_algorithms|Wengrow]] book

Analyzing the number of ==steps== an operation takes is the heart of
understanding the performance of data structures and your program which use
them. You **must** always analyze your application to see which data structure
is a better fit. <!--SR:!2024-09-29,2,221-->

Data itself is just basically numbers and strings (in computers all data finally
stored as ==[[bit]]== sequences). <!--SR:!2024-09-29,2,221-->

An ==[[array]]== is the simplest and most widely used data structure. <!--SR:!2024-09-29,2,221-->

Data structures refer to how data is **organized**. Does this data organization
is matter for something?
&#10;<br>
Data organization can be highly impact on **performance**. Your program can run
fast and efficient or even not run at all (out of memory as example). <!--SR:!2024-09-29,2,221-->

Depending on data organization program can run faster or slower by orders of
==magnitude==. <!--SR:!2024-09-29,2,221-->

## Data structures implementation

Array and record data structures are based on computing the ==addresses== of
data items with arithmetic operations.
[Stack \(Array Implementation\)](https://www.cs.usfca.edu/~galles/visualization/StackArray.html). <!--SR:!2024-09-29,2,221-->

Linked data structures are based on storing addresses of data items within the
==structure== itself.
[Stack \(Linked List Implementaion\)](https://www.cs.usfca.edu/~galles/visualization/StackLL.html). <!--SR:!2024-09-29,2,221-->

The implementation of a data structure usually requires writing a set of
procedures that create and manipulate instances of that structure. The
efficiency of a data structure cannot be analyzed separately from those
operations. This observation motivates the theoretical concept of an abstract
data type, a data structure that is defined ==indirectly== by the operations
that may be performed on it, and the mathematical properties of those operations
(including their space and time cost). <!--SR:!2024-09-29,2,221-->

Data structure efficiency analyzing with their procedures which create and
manipulate instances of that structure, which manipulations you know?
&#10;<br>
insert, delete, search, etc. <!--SR:!2024-09-29,2,221-->

## Data structures examples

- An [[array]] is a number of elements in a specific order typically
all the same type (depending on the language). Elements are accessed using an
integer ==index (usually zero-indexed)== to specify which element is required.
Typical implementations allocate contiguous memory words for the elements of
arrays. Arrays may be fixed-length or resizable. <!--SR:!2024-09-28,1,201-->

- A [[list#Linked list|linked list]] (or list) is a linear collection of data
elements of any type, called nodes, where each node has itself a value, and
points to the next node in the linked list. The principal advantage of a linked
list over an array is that values can always be efficiently inserted and removed
without ==relocating the rest of the list==. Certain other operations, such as
random access to a certain element, are however slower on lists than on arrays. <!--SR:!2024-09-28,1,201-->

- A [[record]] (also called tuple or struct) is an aggregate data structure. A
record is a value that contains ==other values==, typically in fixed number and
sequence and typically indexed by names. The elements of records are usually
called fields or members. In the context of object-oriented programming, records
are known as plain old data structures to distinguish them from objects. <!--SR:!2024-09-29,2,221-->

- A [[hash_table]], also known as hash maps and dictionary, are data structures
that provide fast retrieval of values based on ==keys==. They use a hashing
function to map keys to indexes in an array, allowing for constant-time access
in the average case. Hash tables are commonly used in
[[dictionary|dictionaries]], caches, and database indexing. However, hash
collisions can occur, which can impact their performance. Techniques like
chaining and open addressing are employed to handle collisions. <!--SR:!2024-09-29,2,221-->

- A [[graph]] is collection of nodes connected by ==edges==, representing
relationships between entities. Graphs can be used to model social networks,
[[computer_network|computer networks]], and transportation networks, among other
things. They consist of vertices (nodes) and edges (connections between nodes).
Graphs can be directed or undirected, and they can have cycles or be acyclic.
Graph traversal algorithms include breadth-first search and depth-first search. <!--SR:!2024-09-29,2,221-->

- [[stack|Stacks]] and [[queue|queues]] are abstract data types that can be
implemented using arrays or linked lists. A stack has two primary operations:
push (adds an element to the top of the stack) and pop (removes the topmost
element from the stack), that follow the **Last In, First Out** (LIFO)
principle. Queues have two main operations: enqueue (adds an element to the rear
of the queue) and dequeue (removes an element from the front of the queue) that
follow the **First In, First Out (FIFO)** principle. So stack and queues follows
==LIFO and FIFO== principles. <!--SR:!2024-09-29,2,221-->

- [[tree|Trees]] represent a hierarchical organization of elements. A tree
consists of nodes connected by edges, with one node being the root and all other
nodes forming subtrees. Trees are widely used in various algorithms and data
storage scenarios. Binary trees (particularly heaps, for example
[[binary_search_tree|binary search tree]]), AVL trees, and [[B-tree|B-trees]]
are some popular types of trees. They enable efficient and optimal searching,
sorting, and hierarchical representation of data.

- A [[trie]], also known as a prefix tree, is a specialized tree data structure
used for the efficient retrieval of ==strings==. Tries store characters of a
string as nodes, with each edge representing a character. They are particularly
useful in text processing scenarios like autocomplete, spell-checking, and
dictionary implementations. Tries enabling fast searching and prefix-based
operations on strings. <!--SR:!2024-09-29,2,221-->

Stack follow ==LIFO== principle (data manipulation and organization). <!--SR:!2024-09-29,2,221-->

Queue follow ==FIFO== principle (data manipulation and organization). <!--SR:!2024-09-29,2,221-->

## Language support

Do low-level and high-level programming languages have built-in support for data
structures?
&#10;<br>
Low-level languages don't have built-in support for data structures (or have
very basic support). High-level languages have special syntax or have standard
libraries with data structures implementations. <!--SR:!2024-09-29,2,221-->

Some languages allow defining opaque data types, which allows hiding
==implementation details== (in [[OOP]] languages typically used classes for this
purpose). <!--SR:!2024-09-28,1,201-->

Many known data structures have [[concurency|concurrent]] versions which allow
multiple computing threads to access a single concrete instance of a data
structure simultaneously.

## Data structure operations

Which data structure operations (for array) are important?
&#10;<br>
Here is a list of the most common operations:
- Read, lookup a value in array at a particular index.
- Search, if value exist in array, return index.
- Insert, add new value to additional slot within array.
- Delete, remove value from array. <!--SR:!2024-09-29,2,221-->

## To-do

- [ ] imperative and functional versions
- [ ] greedy
- [ ] dynamic strategies
- [ ] [Fizz buzz - Wikipedia](https://en.wikipedia.org/wiki/Fizz_buzz)
- [ ] [Data Structure Visualization](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)
- [ ] [Visualising data structures and algorithms through animation](https://visualgo.net/en/sorting)
