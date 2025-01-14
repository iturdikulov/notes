---
date: 2024-11-04T08:42+03:00
tags:
  - inbox
  - productivity
---

# ls

Ls used to display everything in some directory, by default `ls` doesn't show hidden (started with `.`) files and directories.

`ls` is one of most popular [[GNU_Utilities]] tool.

List of common commands:

- List files in directory::`ls <dir>`
- Display everything in `<dir>`, including hidden files::`ls -a <dir>`
- Display all files, along with the size and timestamp::`ls -lh <dir>`
- Display files, sorted by size::`ls -S <dir>`
- Display directories only::`ls -d */ <dir>`
- Display directories only, include hidden::`ls -d .*/ */ <dir>`
- Display files sorted by create time::`ls -lt`
- To display files in a single column, without details::`ls -1`
- Show all the subtree files (Recursive Mode)::`ls -R
