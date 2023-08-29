---
date: 2023-03-20
draft: true
sr-due: 2023-09-13
sr-ease: 270
sr-interval: 119
tags:
- inbox
---

# Turing machine

System of rules, states and transitions rather than a real machine.

There 2 purposes of Turing machine:

- deciding formal languages
- solving mathematical problems

TODO: describe Turing machine -
https://en.wikipedia.org/wiki/Universal_Turing_machine
![Universal Turing machine](./img/Universal_Turing_machine.svg) _Universal
Turing machine_

Turning machine consists of:

- A limited set of states, with start state and while running it always has
  current state
- An infinite tape divided into cells, each cell can contain a symbol
- Read/write head, which can move on the tape and can read/write symbols
- A set of rules, which define what to do when the machine is in a certain state
  and reads a certain symbol (a definition of a so-called transition function).

When a Turing machine is started, a [[Word]] (out of the
working-alphabet) must be present on the infinite tape of the machine, initial
input. The read/write-device on the first character now reads the first
character and depending on the current state of Turing machine the
read/write-device overwrites the character with a new one or moves one cell to
the left or to the right. Furthermore, the current state of the machine can be
switched.

TODO: Turing machines that decide languages TODO: Turing machines that compute
functions TODO: [[Turing_complete]]