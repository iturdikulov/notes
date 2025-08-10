---
created: 2023-03-21T00:00+03:00
tags:
  - blog
  - WEAPON
sr-due: 2025-09-13
sr-interval: 65
sr-ease: 169
---

# Side effect

A part of a program with a side effect performs a ==noticeable== action other than giving back a value. [^1] Examples include showing a picture on a computer screen, or checking what year it is. Code with side effects can be harder to understand without any context, and the order of instructions is more important for code with side effects.

In functional programming, programmers try to avoid side effects when they can, so it is easier to prove that a program will always do what it is supposed to. In some functional languages, like Standard ML, Scheme, or Scala, side effects are not restricted, but programmers still try to use them less. In Haskell, actions with side effects must be stated explicitly—this makes it easier to tell what code does or does not have them. 

A "side effect" is like throwing a stone into a pond:

- The main purpose is to throw the stone (the function's return value)
- But it also creates ripples that change the pond (modifying variables, printing output, etc.)

```c
#include <stdio.h>

int main(){
    int x = 5;
    printf("x: %d\n", x);
    int y = ++x;  // Main effect: returns 6 to y
                  // Side effect: x is now changed to 6
	
    printf("x after side effect\n");
    printf("x: %d\n", x);
}
```

[^1]: [Side effect (computer science) - Simple English Wikipedia](https://simple.wikipedia.org/wiki/Side_effect_(computer_science))