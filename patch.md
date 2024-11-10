---
date: 2023-03-12
tags:
  - inbox
  - VCS
external:
  - https://savannah.gnu.org/projects/patch/
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 272
---

# Patch (Unix)

Patch - apply a diff file to an original file.

TODO: term/source?

It's widely used to update the source code of a program, for example it's
official method to patch DWM and other suckless software.

Patch take a patch file (usually with `.diff` extension), containing a diff
generated with diff command, and apply it to the original file(s).

Basic usage:

- apply a patch - `patch <file> < <patch_file>`;
- revert a patch - `patch -R <file> < <patch_file>`.
- apply a patch to the current dir - `patch -p1 < <patch_file>`.
