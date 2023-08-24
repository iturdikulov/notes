---
date: 2023-03-23
draft: true
sr-due: 2023-04-02
sr-ease: 270
sr-interval: 4
tags:
- inbox
- definition
sr-due: 2023-11-11
sr-interval: 178
sr-ease: 290
---

# Integer overflow

> Number which is stored becomes larger than the capacity of the
> [[Computer_memory|memory]] it is stored in. The most likely result is that the
> number will reset to 0 and start over
>
> -- [Wikipedia](https://simple.wikipedia.org/wiki/Integer_overflow)

Example:

```c
unsigned char c = 255;
c = c - 1;
printf("%d\n", c); // 254 - OK
c = c + 2;
printf("%d\n", c); // 0 - WTF?
```

TODO: integer underflow
