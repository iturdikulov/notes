---
title:
  "A Common-sense Guide to Data Structures and Algorithms: Level Up Your Core
  Programming Skills"
author: Jay Wengrow
date: 2020
dateAdded: 2023-04-11
canonicalUrl: https://www.google.com/books/edition/A_Common_sense_Guide_to_Data_Structures/SKX5ygEACAAJ?hl=en
citekey: JayWengrowCommonsenseGuideData2020
tags:
  - research
  - CS
localLibrary: zotero://select/items/1_R6AGTWDZ
cloudLibrary: http://zotero.org/users/9108355/items/R6AGTWDZ
draft: true
canonicalUrl: https://pragprog.com/titles/jwdsal2
---

If you thought that data structures and algorithms were all just theory, you're
missing out on what they can do for your code. Learn to use Big O Notation to
make your code run faster by orders of magnitude. Choose from data structures
such as hash tables, trees, and graphs to increase your code's efficiency
exponentially. With simple language and clear diagrams, this book makes this
complex topic accessible, no matter your background. This new edition features
practice exercises in every chapter, and new chapters on topics such as dynamic
programming and heaps and tries. Get the hands-on info you need to master data
structures and algorithms for your day-to-day work. Algorithms and data
structures are much more than abstract concepts. Mastering them enables you to
write code that runs faster and more efficiently, which is particularly
important for today's web and mobile apps. Take a practical approach to data
structures and algorithms, with techniques and real-world scenarios that you can
use in your daily production code, with examples in JavaScript, Python, and
Ruby. This new and revised second edition features new chapters on recursion,
dynamic programming, and using Big O in your daily work. Use Big O notation to
measure and articulate the efficiency of your code, and modify your algorithm to
make it faster. Find out how your choice of arrays, linked lists, and hash
tables can dramatically affect the code you write. Use recursion to solve tricky
problems and create algorithms that run exponentially faster than the
alternatives. Dig into advanced data structures such as binary trees and graphs
to help scale specialized applications such as social networks and mapping
software. You'll even encounter a single keyword that can give your code a turbo
boost. Practice your new skills with exercises in every chapter, along with
detailed solutions. Use these techniques today to make your code faster and more
scalable.

# Cover /1

Not superior, but looks good enough.

# Table of Contents /7

In book it's actually Contents.

Data structures (which make me more happy, haha), intro to algorithms, big O
with logarithms!), speed-up and optimize, big O in everyday code, blazing fast
lookup, elegant stack/queues, recursion, dynamic programming, recursive
algorithms, node-based data structures, binary search trees, heaps, tries?,
graphs, space constraints, code optimizations.

WOW this looks great. Unfortunately, I have no idea what about half of these,
but I WILL UNDERSTAND it ☕.

# Preface /14

## Who Is This Book For? /15

## What’s New in the Second Edition /15

## What’s in This Book? /16

## How to Read This Book /17

## Code Examples /19

## Online Resources /19

## Acknowledgments /20

## Connecting /21

- write better software (reduce entropy)
- this book help to understand how to write better software and not use a lot of
  math jargon, use common-sense language + a lot of diagrams
- with this knowledge you will to be able to write fast, efficient and elegant
  code
- this book for me!
- this book is updated and revisited (2nd edition)
- this book blends theory with practice
- knowledge of data structures and algorithms can reduce entropy in your code
- explain recursion and dynamic programming (?)
- book contains exercises and solutions

This book give answers to questions like:

- why data structures matter?
- why algorithms matter?
- Big O notation? ...

I need to read this book in order.

Some definitions are simplified, but they can be explained in more detail at the
end.

This book use mix of languages: JavaScript, Python, Ruby and pseudocode. Which
is good 😀.

# 1. Why Data Structures Matter /22

Why?

Because efficiency, you can write efficient or inefficient code. sort of
productive or unproductive code... For me unproductive means increase entropy of
system. Which I hate. Because programs must run fast... Efficient code looks even
better, easily to maintain and use in every-day life.

First step in writing fast code is to understand what data structures are and
how different data structures can affect to speed of our code.

Data structures? Array? Data structure operations? Measuring speed? Reading
operation? Searching operation? Insertion operation? Deletion operation? Sets?
And why single rule can affect efficiency? Exercises.

## Data Structures /23

Data structures refer to how data is organized. Data organization can be highly
impact on performance. Depending on data organization program can run faster or
slower by orders of **magnitude**.

So knowledge in data structures can write scalable, fast and efficient software.

## The Array: The Foundational Data Structure /24

Most basic data structure?
?
Array, versatile
<!--SR:!2023-04-16,4,270-->

Some information about arrays: [[array (computer science)]]

## Measuring Speed /25

When we measure how “fast” an operation takes, we do not refer to how fast the
operation takes in terms of pure time, but instead in ==how many steps it
takes==.

So if operation A take less steps than operation B, we can assume that operation
A will always be faster than operation B on all pieces of hardware.

Measuring the number of steps is key to analyzing the speed of an operation.

## Reading /26
## Searching /29
## Insertion /32
## Deletion /34
I placed notes here: [[array (computer science)]]

## Sets: How a Single Rule Can Affect Efficiency /36
I placed notes here: [[set (abstract data type)]]

## Wrapping Up /39
Analyze data structure before use them. Choose most suitable.

## Exercises /40

1. For an array containing 100 elements, provide the number of steps the
   following operations would take:
   a. Reading
   b. Searching for a value not contained within the array
   c. Insertion at the beginning of the array
   d. Insertion at the end of the array
   e. Deletion at the beginning of the array
   f. Deletion at the end of the array
   ?
   a. 1 step
   b. 100 steps
   c. 100 to shift right and 1 to insert = 101
   d. 1 step, but memory allocation?
   e. 1 to delete, 99 to shift left
   f. 1 step

2. For an array-based set containing 100 elements, provide the number of steps
   the following operations would take:
   a. Reading
   b. Searching for a value not contained within the array
   c. Insertion of a new value at the beginning of the set
   d. Insertion of a new value at the end of the set
   e. Deletion at the beginning of the set
   f. Deletion at the end of the set
   ?
   a. 1 step
   b. 100 steps
   c. 100 to search, 100 to shift right and 1 to insert = 201
   d. 100 to search, 1 step to insert
   e. 1 to delete, 99 to shift left
   f. 1 step

3. Normally the search operation in an array looks for the first instance of a
   given value. But sometimes we may want to look for every instance of a given
   value. For example, say we want to count how many times the value “apple” is
   found inside an array. How many steps would it take to find all the “apples”?
   Give your answer in terms of N. Don't overthink here.
   ?
   In classic search, we can do 1 step in best case it can take 1 step. But if
   you need search all occurrence, you need to do N steps.
   If the array contains N elements, searching for all instances of the
   string “apple” in an array will **take N steps**. When searching for just one
   instance, we can **cut our search short** as soon as we find it. But if we
   need to find all instances, we have no choice but inspect **each element** of
   the entire array.


# 2. Why Algorithms Matter /41

Placed some notes here [[algorithm]].

## Ordered Arrays /42

## Searching an Ordered Array /44

## Binary Search /46

## Binary Search vs. Linear Search /51

## Wrapping Up /54

## Exercises /54

# 3. O Yes! Big O Notation /55

## Big O: How Many Steps Relative to N Elements? /56

## The Soul of Big O /57

## An Algorithm of the Third Kind /60

## Logarithms /61

## O(log N) Explained /62

## Practical Examples /63

## Wrapping Up /65

## Exercises /65

# 4. Speeding Up Your Code with Big O /67

## Bubble Sort /67

## Bubble Sort in Action /68

## The Efficiency of Bubble Sort /73

## A Quadratic Problem /76

## A Linear Solution /78

## Wrapping Up /80

## Exercises /80

# 5. Optimizing Code with and Without Big O /82

## Selection Sort /82

## Selection Sort in Action /83

## The Efficiency of Selection Sort /89

## Ignoring Constants /90

## Big O Categories /91

## Wrapping Up /95

## Exercises /95

# 6. Optimizing for Optimistic Scenarios /97

## Insertion Sort /97

## Insertion Sort in Action /98

## The Efficiency of Insertion Sort /104

## The Average Case /106

## A Practical Example /109

## Wrapping Up /111

## Exercises /111

# 7. Big O in Everyday Code /113

## Mean Average of Even Numbers /113

## Word Builder /115

## Array Sample /117

## Average Celsius Reading /118

## Clothing Labels /119

## Count the Ones /120

## Palindrome Checker /120

## Get All the Products /121

## Password Cracker /125

## Wrapping Up /127

## Exercises /127

# 8. Blazing Fast Lookup with Hash Tables /131

## Hash Tables /131

## Hashing with Hash Functions /132

## Building a Thesaurus for Fun and Profit, but Mainly Profit /133

## Hash Table Lookups /135

## Dealing with Collisions /137

## Making an Efficient Hash Table /140

## Hash Tables for Organization /142

## Hash Tables for Speed /143

## Wrapping Up /148

## Exercises /149

# 9. Crafting Elegant Code with Stacks and Queues /150

## Stacks /150

## Abstract Data Types /153

## Stacks in Action /154

## The Importance of Constrained Data Structures /160

## Queues /161

## Queues in Action /163

## Wrapping Up /164

## Exercises /165

# 10. Recursively Recurse with Recursion /166

## Recurse Instead of Loop /166

## The Base Case /168

## Reading Recursive Code /168

## Recursion in the Eyes of the Computer /171

## Filesystem Traversal /173

## Wrapping Up /176

## Exercises /176

# 11. Learning to Write in Recursive /178

## Recursive Category: Repeatedly Execute /178

## Recursive Category: Calculations /183

## Top-Down Recursion: A New Way of Thinking /185

## The Staircase Problem /190

## Anagram Generation /194

## Wrapping Up /198

## Exercises /198

# 12. Dynamic Programming /200

## Unnecessary Recursive Calls /200

## The Little Fix for Big O /204

## The Efficiency of Recursion /205

## Overlapping Subproblems /206

## Dynamic Programming through Memoization /208

## Dynamic Programming through Going Bottom-Up /211

## Wrapping Up /213

## Exercises /214

# 13. Recursive Algorithms for Speed /215

## Partitioning /215

## Quicksort /221

## The Efficiency of Quicksort /227

## Quicksort in the Worst-Case Scenario /232

## Quickselect /234

## Sorting as a Key to Other Algorithms /238

## Wrapping Up /239

## Exercises /240

# 14. Node-Based Data Structures /241

## Linked Lists /241

## Implementing a Linked List /243

## Reading /245

## Searching /247

## Insertion /248

## Deletion /252

## Efficiency of Linked List Operations /254

## Linked Lists in Action /255

## Doubly Linked Lists /256

## Queues as Doubly Linked Lists /258

## Wrapping Up /260

## Exercises /260

# 15. Speeding Up All the Things with Binary Search Trees /262

## Trees /263

## Binary Search Trees /265

## Searching /266

## Insertion /271

## Deletion /275

## Binary Search Trees in Action /286

## Binary Search Tree Traversal /287

## Wrapping Up /291

## Exercises /291

# 16. Keeping Your Priorities Straight with Heaps /293

## Priority Queues /293

## Heaps /295

## Heap Properties /298

## Heap Insertion /299

## Looking for the Last Node /301

## Heap Deletion /302

## Heaps vs. Ordered Arrays /306

## The Problem of the Last Node…Again /307

## Arrays as Heaps /309

## Heaps as Priority Queues /316

## Wrapping Up /316

## Exercises /317

# 17. It Doesn't Hurt to Trie /318

## Tries /319

## Storing Words /320

## Trie Search /324

## The Efficiency of Trie Search /328

## Trie Insertion /329

## Building Autocomplete /333

## Completing Autocomplete /339

## Tries with Values: A Better Autocomplete /340

## Wrapping Up /341

## Exercises /342

# 18. Connecting Everything with Graphs /344

## Graphs /345

## Directed Graphs /347

## Object-Oriented Graph Implementation /347

## Graph Search /350

## Depth-First Search /352

## Breadth-First Search /361

## The Efficiency of Graph Search /374

## Weighted Graphs /377

## Dijkstra’s Algorithm /380

## Wrapping Up /397

## Exercises /397

# 19. Dealing with Space Constraints /400

## Big O of Space Complexity /400

## Trade-Offs Between Time and Space /403

## The Hidden Cost of Recursion /406

## Wrapping Up /408

## Exercises /408

# 20. Techniques for Code Optimization /410

## Prerequisite: Determine Your Current Big O /410

## Start Here: The Best-Imaginable Big O /410

## Magical Lookups /412

## Recognizing Patterns /419

## Greedy Algorithms /427

## Change the Data Structure /440

## Wrapping Up /446

## Parting Thoughts /446

## Exercises /447

# A1. Exercise Solutions /451

## Chapter 1 /451

## Chapter 2 /452

## Chapter 3 /452

## Chapter 4 /453

## Chapter 5 /454

## Chapter 6 /454

## Chapter 7 /455

## Chapter 8 /456

## Chapter 9 /458

## Chapter 10 /459

## Chapter 11 /460

## Chapter 12 /462

## Chapter 13 /463

## Chapter 14 /465

## Chapter 15 /468

## Chapter 16 /470

## Chapter 17 /471

## Chapter 18 /473

## Chapter 19 /476

## Chapter 20 /477

# Index /486

## – A – /486

## – B – /486

## – C – /487

## – D – /487

## – E – /487

## – F – /488

## – G – /488

## – H – /488

## – I – /489

## – J – /489

## – K – /489

## – L – /489

## – M – /489

## – N – /489

## – O – /489

## – P – /490

## – Q – /490

## – R – /490

## – S – /491

## – T – /491

## – U – /492

## – V – /492

## – W – /492
