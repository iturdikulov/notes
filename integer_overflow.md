---
date: 2023-03-23T00:00+03:00
tags:
  - blog
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 230
---

# Integer overflow

> Number which is stored becomes larger than the capacity of the
> [[computer_memory]] it is stored in. The most likely result is that the number
> will reset to 0 and start over.\
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
