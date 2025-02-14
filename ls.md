---
date: 2024-11-04T08:42+03:00
tags:
  - blog
  - computer_programming_tools
---

# ls

Ls used to display everything in some directory, by default `ls` doesn't show hidden (started with `.`) files and directories.

`ls` is one of most popular [[GNU_Utilities]] tool.

List of common commands:

- List files in directory:<wbr class="f"> `ls <dir>`
- Display everything in `<dir>`, including hidden files:<wbr class="f"> `ls -a <dir>`
- Display all files, along with the size and timestamp:<wbr class="f"> `ls -lh <dir>`
- Display files, sorted by size:<wbr class="f"> `ls -S <dir>`
- Display directories only:<wbr class="f"> `ls -d */ <dir>`
- Display directories only, include hidden:<wbr class="f"> `ls -d .*/ */ <dir>`
- Display files sorted by create time:<wbr class="f"> `ls -lt`
- To display files in a single column, without details:<wbr class="f"> `ls -1`
- Show all the subtree files (Recursive Mode):<wbr class="f"> `ls -R
