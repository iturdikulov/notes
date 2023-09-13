---
tags:
  - "research"
  - "inbox"
date: 2023
sr-due: 1678723200
sr-ease: 230
sr-interval: 1
external: https://www.youtube.com/playlist?list=PLawfWYMUziZqyUL5QDLVbe3j5BKWj42E5
directory: ~/Computer/science/HarvardX-CS50x
---

# HarvardX CS50x

## Week 0

TODO: Convert to zettelkasten definitions?
Long intro video with some basics:
- Binary numbers
- ASCII and Unicode
- Emojis and ZWJ (zero-width joiner/zero-width non-joiner)
- RGB color model and pixels
- Sound and Video encoding
- Binary search algorithm
- Time complexity
- Pseudocode
```
1 Pick up phone book
2 Open to middle of phone book
3 Look at page
4 If person is on page
5       Call person (end of algorithm)
6 Else if person is earlier in book
7       Open to middle of left half of book
8       Go back to line 3
9 Else if person is later in book
10      Open to middle of right half of book
11      Go back to line 3
12 Else
13      Person is not in phone book (end of algorithm)
```
- Scratch programming language
<https://scratch.mit.edu/projects/editor/?tutorial=getStarted>


## Week 1

<https://inom-turdikulov-humble-space-train-g65pjqvq7hw4pr.github.dev/>
<https://manual.cs50.io>
<https://manual.cs50.io/#cs50.h>

Describe V$Code from Micro$oft 😀

Write and compile C program:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n"); // this is [[statement (computer science)]]
}
```

```bash
make hello
./hello
```

- [[Printf_format_string|printf]] explanation
- [[Conditional|conditional programming]] explanation

Conditional program:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
```

- Linux basic [[Command-line_interface|cli]] usage.
- Do while loop usable sometimes, for example for input validation
- [[Truncation]]
- [[Type_conversion|type conversion]]
- [[Floating-point_arithmetic|floats]]
