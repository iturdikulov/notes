---
created: 2023-05-24T00:00+03:00
tags:
  - blog
  - head
sr-due: 2025-09-13
sr-interval: 65
sr-ease: 208
---

# Boolean datatype

What is boolean datatype?
<br class="f">
Data type that has one of two possible values, usually denoted as `true` and `false`. Which is intended to represent the two truth values of logic and Boolean algebra. <!--SR:!2025-02-26,5,228-->

It is named after George Boole[^1], who first defined an algebraic system of logic in the mid 19th century.

Conditional statements, which allow different actions by changing ==control flow== depending on whether a programmer-specified Boolean condition evaluates to true or false. 

Boolean datatype primary associated with [[conditional]] statements, which implement different actions behavior with [[control_flow]].

If there is no explicit Boolean datatype (like in `C90`), **can** boolean datatype be represented?
<br class="f">
Yes usually used `int` to represent `true` (0) and `false` (1) values. <!--SR:!2025-02-26,5,228-->

The implementation of Booleans in computers are most likely represented as a full word or a bit?
<br class="f">
Usually as full [[word]], this is usually due to the way's computers transfer blocks of information. <!--SR:!2025-02-26,5,228-->

Most [[programming_language|programming languages]], have support for Boolean algebraic operations such as:

Conjunction (AND, &, *): returns `true` if both operands are ==`true`==. <!--SR:!2025-02-26,5,228-->

Disjunction (OR, |, +): returns `true` if at least one operand is ==`true`==. <!--SR:!2025-08-12,11,228-->

Equivalence (EQV, =, \=\=): returns `true` if both operands are ==the same==. <!--SR:!2025-02-23,2,208-->

OR - returns `true` when one or both inputs are true, XOR returns `true` when?
<br class="f">
When inputs are different. Exclusive OR (XOR), `true` only if inputs differ.
```python
print(True ^ False,  False ^ True,  True ^ True,  False ^ False)
print(True or False, False or True, True or True, False or False)
```
_Results:_
```
True True False False
True True True False
```

Negation (NOT, !): Returns the opposite of the operand. `NOT true and NOT false` will return ==`false`==. <!--SR:!2025-02-26,5,228-->

## Boolean expression

Expression which produce a `Boolean` value when evaluated. Used in many [[programming_language|programming languages]] as built-in type.

In C you need to include `stdbool.h` to use `bool` type.

```c
#include <stdbool.h>
printf("true: %d\n", true); // true: 1
printf("false: %d\n", false); // false: 0
```

[^1]: [Wikipedia](https://en.wikipedia.org/wiki/George_Boole)
