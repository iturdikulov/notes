---
date: 2025-02-05T22:28+03:00
tags:
  - blog
  - research
  - computer_programming_profession
author: Paul Graham
file: ./articles/Graham_-_Programming_Bottom_Up.html
---

# Programming Bottom-Up

Paul Graham's article on programming bottom-up [^1].

Why big programs (code-base) are not a good idea?
&#10;<br>
Fundamental elements of a program should not be too large, otherwise it's become
a mass of complexity, will be hard to read, test and debug. <!--SR:!2025-02-08,3,250-->

### Top-down program design

    A -> B
      -> C
      -> D
         -> E
         -> F
Can you explain this top-down porgram design diagram?
&#10;<br>
Hierarchical structure where higher-level are subroutines of program, that
subroutines devided to own, etc.

### Bottom-up design (Lisp)

Changing the language to suit the problem.

- In bottom-up design you are creating new ==operators== as basic building
  blocks.
- ==Rewrite== existing code to use new operators and structures.
- At the end with bottom-up design your program look as if the language had been
  ==designed for it==.
- With bottom-up design you have shorter programs, fewer components and
  connections between components, and thus ==less== chance for errors there
  (reduce complexity).
- Bottom-up promote code reuse?::Yes. <!--SR:!2025-02-08,3,250-->
- Bottom-up code easier to read?::Maybe, because it's less complex.
- Bottom-up promote redisign more often, because you see ==similarity and patterns== in
  code.

Is it possible to do bottom-up design in other languages?
&#10;<br>
> Bottom-up design is possible to a certain degree in languages other than Lisp.
> Whenever you see library functions, bottom-up design is happening.

Is Bottom-up design in large teams fits better?
&#10;<br>
Propably not.
> This style of development better suited to programs which can be
written by small groups.

As the size of the group increases, the productivity of individual programmers
goes up or down?
&#10;<br>
Actually, productivity goes down.

[^1]: [Programming Bottom-Up](https://www.paulgraham.com/progbot.html)
