---
created: 2023-07-20T00:00+03:00
tags:
  - blog
  - ends
sr-due: 2025-07-29
sr-interval: 1
sr-ease: 208
---

# Filesystem Hierarchy Standard (FHS)

> The Filesystem Hierarchy Standard (FHS) is a reference describing the conventions used for the layout of a UNIX system. It has been made popular by its use in Linux distributions, but it is used by other UNIX variants as well. It is maintained by the Linux Foundation. The latest version is 3.0 (`man hier`), released on 3 June 2015.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Filesystem_Hierarchy_Standard)</cite>

Root directory in FHS is ==`/`==, and it contains some standard children directories. Every `/` which is not the first character of a path is a directory separator.

In Unix OS each running program (process) has own current directory (CWD) and each program can change it independently. You can for example type `cd ...` command into some directory in terminal, and it becomes CWD for shell. To find out what is the current directory, you can use ==`pwd` (**p**rint **w**orking **d**irectory)== command.

Visualization of typical FHS layout:

![[./img/ref-Linux_Files_Structure.png]]
