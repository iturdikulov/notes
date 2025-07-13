---
created: 2023-03-21T00:00+03:00
tags:
  - blog
  - computer_programming
  - computer_science
sr-due: 2025-07-22
sr-interval: 8
sr-ease: 209
---

# Function

> In [[computer_programming]], a function or subroutine is a sequence of program
> instructions that performs a specific task, packaged as a unit. This unit can
> then be used in programs wherever that particular task should be performed.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Function_\(computer_programming\))</cite>

So functions is sort of group of instruction to perform some elementary task. We
can execute function anytime by calling it.

In different programming languages, a function may be called a routine,
subprogram, subroutine, method, or procedure.

Usually function consist of these parts:
<br class="f">
- Declaration (or header): name, parameters (arguments) and return type.
- Definition: body of function (statement), this is what executed when function
  called (or invoked).
- Return value: function result (one or many).
- Function call: call to function witn parenthesis `hello_world("Earth")`.

A function call may also have ==[[side_effect|side effects]]== such as modifying
data structures in a computer memory, reading from or writing to a peripheral
device, creating a file, halting the program or the machine, or even delaying
the program's execution for a specified time.

                  ----------
    Arguments -> | Function | -> Side effects
                  ----------
