---
date: 2023-05-24T00:00+03:00
tags:
  - blog
  - computer_programming_science
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 228
---

# Boolean data type

What is boolean data type?
<br class="f">
Data type that has one of two possible values, usually denoted as `true` and
`false`. Which is intended to represent the two truth values of logic and
Boolean algebra. <!--SR:!2025-02-21,2,228-->

It is named after George Boole [^1], who first defined an algebraic system of logic
in the mid 19th century.

conditional statements, which allow different actions by changing control flow
depending on whether a programmer-specified Boolean condition evaluates to true
or false. It

Boolean data type primary associated with [[conditional]] statemens, which
implement different actions behaviour with [[control_flow]].

If there is no explicit Boolean data type (like in `C90`), **can** boolean data
type be represented?
<br class="f">
Yes usually used `int` to represent `true` (0) and `false` (1) values. <!--SR:!2025-02-21,2,228-->

The implementation of Booleans in computers are most likely represented as a
full word or a bit?
<br class="f">
Usually as full [[word]], this is usually due to the ways computers transfer
blocks of information. <!--SR:!2025-02-21,2,228-->

Most [[programming_language|programming languages]], have
support for Boolean algebraic operations such as:

Conjunction (AND, &, *): returns `true` if both operands are ==`true`==. <!--SR:!2025-02-21,2,228-->

Disjunction (OR, |, +): returns `true` if at least one operand is ==`true`==. <!--SR:!2025-02-21,2,228-->

Equivalence (EQV, =, \=\=): returns `true` if both operands are ==the same==. <!--SR:!2025-02-20,1,208-->

OR - `true` when one or both inputs are true, XOR returns `true` when?
<br class="f">
When inputs are different.
Exclusive OR (XOR), `true` only if inputs differ.
```python
print(True ^ False,  False ^ True,  True ^ True,  False ^ False)
print(True or False, False or True, True or True, False or False)
```
<!--SR:!2025-02-21,2,228-->

Negation (NOT, !): Returns the opposite of the operand. `NOT true and NOT false`
will return ==`false`==. <!--SR:!2025-02-21,2,228-->

## Boolean expression

Expression which produce a `Boolean` value when evaluated. Used in many
[[programming_language|programming languages]] as built-in type.

In C you need to include `stdbool.h` to use `bool` type.

```c
#include <stdbool.h>
printf("true: %d\n", true); // true: 1
printf("false: %d\n", false); // false: 0
```

[^1]: [Wikipedia](https://en.wikipedia.org/wiki/George_Boole)
