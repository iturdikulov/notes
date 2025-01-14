---
date: 2022-12-29T00:00+03:00
tags:
  - blog
  - productivity
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 267
---

# Sniprun

SnipRun selection::<kbd>f</kbd>
SnipRun initial mode::<kbd><leader>ze</kbd>
SnipRun run::<kbd><leader>zee</kbd>

Get output from code blocks

```bash
gcc --version
```

If there is no main function present, sniprun will wrap one around the code. It
also will add some of the standard include files needed to compile the code.

```c
printf("Hello World me!");
```

The equivalent example with explicitly writing include and the main function.

```c
#include <stdio.h>
int main(int argc,char **argv) {
  printf("Hello World");
  exit(0);
}
```
TODO: add more examples
