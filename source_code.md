---
external: https://en.wikipedia.org/wiki/Source_code
date: 2023-03-21
tags:
  - inbox
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 245
---

# Source code (or code)

> Any collection of text, with or without comments, written using a
> human-readable [[programming_language]], usually as plain text. The source
> code of a [[computer_program]] is specially designed to facilitate the work of
> computer programmers, who specify the actions to be performed by a computer
> mostly by writing source code.

I think it's sort of text representation of [[algorithm]], written in
programming language.

> Source code is often transformed by an [[assembly_language|assembler]] or
> [[compiler]] into binary [[machine_code]], which can be executed by computer.

In other words program (which now executed from machine code) translate source
code written by human into machine code, which can be executed by computer to
perform some actions (solve [[computational_problem]] as example).

As example, you can write some compiler program (source code) for new
programming language, by using one of existing compiler/programming language,
and then that program can translate your new programming language (your own
source code) into machine code, which can be executed by computer. This process
named [[bootstrapping]].

```
                ----------
               |          |
Source code -> | Compiler | -> Machine code
               |          |
                ----------

```

Goals of source code:

- correctness
- design, subjective
- style, such as readability, maintainability, extensibility, etc.
