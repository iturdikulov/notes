---
date: 2022-12-29
tags:
  - inbox
  - SR_computer_science
sr-due: 2024-01-26
sr-interval: 4
sr-ease: 221
---

# Data structures

> In [[Computer_science|computer science]], a data structure is a data
> organization, management, and storage format that is usually chosen for
> efficient access to data. More precisely, a data structure is a collection of
> data values, the relationships among them, and the functions or operations
> that can be applied to the data, i.e., it is an algebraic structure about
> data.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Data_structure)</cite>

What is data structures in computer science?
&#10;
Data structures providing organization (relationships), management (functions or
operations) and format for some data. Each data structure has own efficiency and
optimizations.

Analyzing the number of steps an operation takes is the heart of understanding
the ==performance== of data structures. Choose right data structure can greatly
impact on it of your program.

Data itself is just basically numbers and strings (in computers all data finally
stored as [[Bit|bit]] sequences).

Basic data structure is [[Array|array]].

Data structures refer to ==how== data is organized. But data organization can be
highly impact on **performance**. Your program can run fast and efficient or
even not run at all (out of memory as example).

Depending on data organization program can run faster
or slower by orders of **magnitude**.

So solid knowledge in data structures allows you to write scalable, fast and
efficient software, increase your software expertise and make you happy 🙂.

## Implementation

Array and record data structures are based on computing the addresses of data
items with arithmetic operations.
[Stack \(Array Implementation\)](https://www.cs.usfca.edu/~galles/visualization/StackArray.html).

Linked data structures are based on storing addresses of data items within the
structure itself.
[Stack \(Linked List Implementaion\)](https://www.cs.usfca.edu/~galles/visualization/StackLL.html).

The implementation of a data structure usually requires writing a set of
procedures that create and manipulate instances of that structure. The
efficiency of a data structure cannot be analyzed separately from those
operations. This observation motivates the theoretical concept of an abstract
data type, a data structure that is defined indirectly by the operations that
may be performed on it, and the mathematical properties of those operations
(including their space and time cost).

Data structure efficiency analyzing with their procedures which create and
manipulate instances of that structure (insert, delete, search, etc.).

## Examples

- An [[Array|array]] is a number of elements in ==a specific order==, typically
all of the same type (depending on the language). Elements are accessed using an
integer index to specify which element is required. Typical implementations
allocate contiguous memory words for the elements of arrays. Arrays may be
fixed-length or resizable.

- A [[List#Linked list|linked list]] (or list) is a linear collection of data
elements of any type, called nodes, where each node has itself a value, and
points to the next node in the linked list. The principal advantage of a linked
list over an array is that values can always be efficiently inserted and removed
without ==relocating the rest of the list==. Certain other operations, such as
random access to a certain element, are however slower on lists than on arrays.

- A [[Record|record ]] (also called tuple or struct) is an aggregate data
structure. A record is a value that contains ==other values==, typically in
fixed number and sequence and typically indexed by names. The elements of
records are usually called fields or members. In the context of object-oriented
programming, records are known as plain old data structures to distinguish them
from objects.

- [[Hash_table|Hash tables]], also known as hash maps, are data structures that
provide fast ==retrieval of values based on keys==. They use a hashing function
to map keys to indexes in an array, allowing for constant-time access in the
average case. Hash tables are commonly used in [[Dictionary|dictionaries]],
caches, and database indexing. However, hash collisions can occur, which can
impact their performance. Techniques like chaining and open addressing are
employed to handle collisions.

- [[Graph|Graphs]] are collections of nodes connected by edges, representing
relationships between entities. Graphs can be used to model social networks,
[[Computer_network|computer networks]], and transportation networks, among other
things. They consist of vertices (nodes) and edges (connections between nodes).
Graphs can be directed or undirected, and they can have cycles or be acyclic.
Graph traversal algorithms include breadth-first search and depth-first search.

- [[Stack|Stacks]] and [[Queue|queues]] are abstract data types that can be
implemented using arrays or linked lists. A stack has two primary operations:
push (adds an element to the top of the stack) and pop (removes the topmost
element from the stack), that follow the **Last In, First Out** (LIFO)
principle. Queues have two main operations: enqueue (adds an element to the rear
of the queue) and dequeue (removes an element from the front of the queue) that
follow the **First In, First Out (FIFO)** principle. So stack and queues follows
==LIFO== and ==FIFO== principles.

- [[Tree|Trees ]] represent a hierarchical organization of elements. A tree
consists of nodes connected by edges, with one node being the root and all other
nodes forming subtrees. Trees are widely used in various algorithms and data
storage scenarios. Binary trees (particularly heaps, for example
[[Binary_search_tree|binary search tree]]), AVL trees, and [[B-tree|B-trees]]
are some popular types of trees. They enable efficient and optimal searching,
sorting, and hierarchical representation of data.

- A [[Trie|trie]], also known as a prefix tree, is a specialized tree data
structure used for the efficient ==retrieval of strings==. Tries store
characters of a string as nodes, with each edge representing a character. They
are particularly useful in text processing scenarios like autocomplete,
spell-checking, and dictionary implementations. Tries enable fast searching and
prefix-based operations on strings.

## Language support

Low-level languages don't have built-in support for data structures (or have
very basic support). High-level languages have special syntax or have standard
libraries with data structures implementations.

Some languages allow defining opaque data types, which allows hiding
implementation details (in [[Object-oriented_programming|OOP]] languages
typically used classes for this purpose).

Many known data structures have concurrent versions which allow multiple
computing threads to access a single concrete instance of a data structure
simultaneously.

## Data structure operations

Which data structure operations are important?
&#10;
Here is a list of the most common operations and how they can be used with an
array.
- Read, lookup a value in array at a particular index.
- Search, if value exist in array, return index.
- Insert, add new value to additional slot within array.
- Delete, remove value from array.

## References

- [ ] imperative and functional versions
- [ ] greedy
- [ ] dynamic strategies
- [ ] [Fizz buzz - Wikipedia](https://en.wikipedia.org/wiki/Fizz_buzz)
- [ ] [Data Structure Visualization](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)
- [ ] [Visualising data structures and algorithms through animation](https://visualgo.net/en/sorting)
