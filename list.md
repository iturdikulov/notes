---
created: 2023-03-16T00:00+03:00
tags:
  - blog
  - head
sr-due: 2025-09-12
sr-interval: 64
sr-ease: 200
---

# List (abstract data type)

List are not necessary [[array]]. But in [[Python]] list is array of references to other objects.

> CPython’s lists are really ==variable-length arrays==, not Lisp-style linked lists. The implementation uses a contiguous array of references to other objects, and keeps a pointer to this array and the array’s length in a list head structure.\
> — <cite>[How are lists implemented in CPython?](https://docs.python.org/3/faq/design.html#how-are-lists-implemented-in-cpython).</cite>

## Linked list

> In [[computer_science]], a linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a [[data_structure]] consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains data, and a reference (in other words, a link) to the next node in the sequence. This structure allows for ==efficient insertion or removal of elements== from any position in the sequence during iteration. More complex variants add additional links, allowing more efficient insertion or removal of nodes at arbitrary positions. A drawback of linked lists is that data access time is a linear function of the number of nodes for each linked list (I.e., the access time linearly increases as nodes are added to a linked list.) because nodes are serially linked so a node needs to be accessed first to access the next node (so difficult to pipeline). Faster access, such as random access, is not feasible. Arrays have better cache locality compared to linked lists.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Linked_list)</cite>
