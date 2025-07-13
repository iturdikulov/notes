---
created: 2023-04-02T00:00+03:00
external:
  - https://gcc.gnu.org/
tags:
  - blog
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 233
---

# GNU Compiler Collection (GCC)

## Tips

> By default, GCC and clang are pretty quiet about compilation warnings and
> errors, which can be very useful information. Explicitly using stricter
> compiler flags is recommended. Here are some recommended defaults:
>
> `-Wall -Wextra -Werror -O2 -std=c99 -pedantic`
>
> For information on what these flags do as well as other flags, consult the man
> page for your C compiler (e.g. `man 1 gcc`) or just search online.\
> — <cite>[Learn C in Y Minutes](https://learnxinyminutes.com/docs/c/)</cite>
