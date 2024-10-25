---
date: 2023-03-18
tags:
  - inbox
  - base
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 228
---
# Control flow

Remember, you start loop from 0 and check condition by ==N== if you use `<`
[[boolean_expression]]. So it's canonical to write some like this:

## Control flow in loop

```c
int i = 0;
int N = 10; // easly readable bounday condition

while (i < N) {  // we use <, not <= to execute N times instead of N+1
                 // and it's easy imagine like I need iterate N times
    // do something
    i++;
}
```
