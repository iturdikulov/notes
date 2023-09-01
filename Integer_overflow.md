---
date: 2023-03-23
draft: true
sr-due: 2023-11-11
sr-ease: 290
sr-interval: 178
tags:
- inbox
---

# Integer overflow

> Number which is stored becomes larger than the capacity of the
> [[Computer_memory|memory]] it is stored in. The most likely result is that the
> number will reset to 0 and start over.\
> — <cite>[Wikipedia](https://simple.wikipedia.org/wiki/Integer_overflow)</cite>

Example:

```c
unsigned char c = 255;
c = c - 1;
printf("%d\n", c); // 254 - OK
c = c + 2;
printf("%d\n", c); // 0 - WTF?
```

TODO: integer underflow