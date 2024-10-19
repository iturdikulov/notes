---
date: 2023-03-14
tags:
  - inbox
  - productivity
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 268
---

# GNU sed (stream editor) is a non-interactive command-line text editor.

> sed is commonly used to filter text, i.e., it takes text input, performs some
> operation (or set of operations) on it, and outputs the modified text. sed is
> typically used for extracting part of a file using pattern matching or
> substituting multiple occurrences of a string within a file.\
> — <cite>[GNU sed](https://www.gnu.org/software/sed/)</cite>

    # Example: delete the 4th line in a file
    $ sed '4d' input.txt > output.txt

    # Example: replace every occurrence of 'hello' with 'world' on lines 10-20
    $ sed '10,20s/hello/world/' input.txt > output.txt

## References

- [ ] `man sed`
