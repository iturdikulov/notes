---
title: "Patch (Unix)"
date: 2023-03-12
tags:
  - inbox
  - definition
draft: true
sr-due: 2023-03-17
sr-interval: 4
sr-ease: 270
---

Patch - apply a diff file to an original file.

It's widely used to update the source code of a program, for example it's
official method to patch DWM and other suckless software.

Patch take a patch file (usually with `.diff` extension), containing a diff
generated with diff command, and apply it to the original file(s).

Basic usage:

- apply a patch - `patch <file> < <patch_file>`;
- revert a patch - `patch -R <file> < <patch_file>`.
- apply a patch to the current dir - `patch -p1 < <patch_file>`.
