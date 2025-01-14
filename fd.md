---
date: 2023-06-17T00:00+03:00
tags:
  - inbox
  - productivity
external:
  - https://github.com/sharkdp/fd
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 252
---

# fd

> fd is a program to **find** entries in your **filesystem**. It is a simple,
> **fast** and user-friendly alternative to find. While it does not aim to
> support all of find's powerful functionality, it provides sensible
> (opinionated) defaults for a majority of use cases.\
> — <cite>[Github](https://github.com/sharkdp/fd)</cite>

## Commands

Search query can be a string or a regular expression.

```bash
# Simple search:
fd <search query> <directory>

# Searching for a particular file extension:
fd -e <file extension> <search query>

# Searching for a particular file name:
fd -g <file name>.<file extension>

# Search for hidden and ignored files:
fd -H <search query>

# Excluding specific files or directories:
fd -E <file or directories which should be excluded> <search query>

# Include ignored and hidden files in the search:
fd -H -I "string|regex"

# Execute a command on each search result returned:
# {} is placeholder for filename, check `man fd` "--format" section for more
# information.
fd "string|regex" -x command {}
fd -d 1 -e avi -x ffmpeg -i {} -vcodec libx264 -acodec aac {.}.mp4
```

## External links

- [ ] [How to use fd](https://github.com/sharkdp/fd#how-to-use)
