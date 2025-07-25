---
created: 2022-12-29T00:00+03:00
tags:
  - blog
  - archive
sr-due: 2025-09-16
sr-interval: 68
sr-ease: 247
---

# Sniprun

SnipRun selection:<wbr class="f"> <kbd>f</kbd> SnipRun initial mode:<wbr class="f"> <kbd><leader>ze</kbd> SnipRun run:<wbr class="f"> <kbd><leader>zee</kbd>

Get output from code blocks

```bash
gcc --version
```

If there is no main function present, sniprun will wrap one around the code. It also will add some of the standard include files needed to compile the code.

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
