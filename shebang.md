---
created: 2023-03-14T00:00+03:00
tags:
  - blog
  - ENDS
sr-due: 2025-07-29
sr-interval: 9
sr-ease: 268
---

# Shebang (Unix)

> In computing, a shebang is the character sequence consisting of the characters number sign and exclamation mark ==(#!)== at the beginning of a script. It is also called sharp-exclamation, sha-bang, hashbang, pound-bang, or hash-pling.
>
> When a text file with a shebang is used as if it is an executable in a Unix-like operating system, the program loader mechanism parses the rest of the file's initial line as an interpreter directive. The loader executes the specified interpreter program, passing to it as an argument the path that was initially used when attempting to run the script, so that the program may use the file as input data. For example, if a script is named with the path `path/to/script`, and it starts with the line `#!/bin/sh`, then the program loader is instructed to run the program `/bin/sh`, passing `path/to/script` as the first argument.
>
> The shebang line is usually ignored by the interpreter, because the "#" character is a comment marker in many scripting languages; some language interpreters that do not use the hash mark to begin comments still may ignore the shebang line in recognition of its purpose.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Shebang_(Unix))</cite>
