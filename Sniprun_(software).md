---
date: 2022-12-29
draft: true
sr-due: 2024-01-02
sr-ease: 270
sr-interval: 230
tags:
- inbox
- vim
---

# Sniprun

SnipRun selection::<kbd>f</kbd> SnipRun initial mode::<kbd><leader>ze</kbd>
SnipRun, useful to check specific line, if code already
loaded/executed::<kbd><leader>zee</kbd>

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

<!-- TODO: add more examples -->