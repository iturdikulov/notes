---
canonicalUrl: https://en.wikipedia.org/wiki/Source_code
date: 2023-03-21
draft: true
sr-due: 2023-09-12
sr-ease: 270
sr-interval: 118
tags:
- inbox
---

# Source code (or code)

> Any collection of text, with or without comments, written using a
> human-readable [[Programming_language]], usually as plain text. The source
> code of a [[Computer_program]] is specially designed to facilitate the work of
> computer programmers, who specify the actions to be performed by a computer
> mostly by writing source code.

I think it's sort of text representation of [[Algorithm]], written in
programming language.

> Source code is often transformed by an [[Assembly_language|assembler]] or
> [[Compiler]] into binary [[Machine_code]], which can be executed by computer.

In other words program (which now executed from machine code) translate source
code written by human into machine code, which can be executed by computer to
perform some actions (solve [[Computational_problem]] as example).

As example, you can write some compiler program (source code) for new
programming language, by using one of existing compiler/programming language,
and then that program can translate your new programming language (your own
source code) into machine code, which can be executed by computer. This process
named [[Bootstrapping_(compilers)]].

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