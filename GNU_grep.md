---
created: 2025-01-12T19:30+03:00
tags:
  - blog
external:
  - https://www.gnu.org/software/grep/
  - https://www.gnu.org/software/grep/manual/html_node/index.html
sr-due: 2025-07-27
sr-interval: 13
sr-ease: 270
---

# GNU grep

> Grep searches one or more input files for lines containing a match to a specified pattern. By default, Grep outputs the matching lines.\
> — <cite>[Grep- GNU Project - Free Software Foundation](https://www.gnu.org/software/grep/)</cite>

Though grep expects to do the matching on text, it has no limits on input line length other than available memory, and it can match arbitrary characters within a line. If the final byte of an input file is not a newline, grep silently supplies one. Since newline is also a separator for the list of patterns, there is no way to match newline characters in a text.
