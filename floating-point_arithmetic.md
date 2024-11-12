---
date: 2023-03-23
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 228
---

# Floating-point arithmetic

> Floating-point arithmetic (FP) is arithmetic that represents real numbers
> approximately, using an integer with a fixed precision, called the
> `significand`, scaled by an integer exponent of a fixed base.
>
> In practice, most floating-point systems use base two, though base ten
> (decimal floating point) is also common.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Floating-point_arithmetic)</cite>

Example of floating-point number:

$$$
12.345 = \underbrace{12345}_\text{significand}
\times \underbrace{10}_\text{base}\!\!\!\!\!\!^{\overbrace{-3}^\text{exponent}}
$$$

Base two floating pointing is used by default and can produce rounding errors.

This [code example](https://onlinegdb.com/EsZMTfVd8) for example never
terminates:

```c
#include <stdio.h>

int main() {
    // Write C code here
     for(double d = 0; d != 0.3; d += 0.1)
        printf("%d", d); // never terminates !!!
    return 0;
}
```

Decimal (base ten) floating-point usable to work with money values. TODO: add
note?

## References

- [ ] [Representation of Floating Point Numbers - 1 - YouTube](https://www.youtube.com/watch?v=ji3SfClm8TU)
- [ ] [Floating Point Math](https://0.30000000000000004.com/)
