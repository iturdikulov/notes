---
date: 2023-08-05
author:
  - Colin Plumb
external:
  - https://www.gnu.org/software/coreutils/manual/html_node/shred-invocation.html
tags:
  - inbox
  - productivity
sr-due: 2024-01-28
sr-interval: 3
sr-ease: 267
---

# Shred - secure delete

> Overwrite the specified FILE(s) repeatedly, in order to make it harder for
> even very expensive hardware probing to recover the data.\
> — <cite>`man shred`</cite>

I use it to secure delete files, directories and block devices.

Bellow some useful and tested commands. But be aware, double check what you are
trying to do, because shred is very powerful and can be destructive.

Delete data from block device, useful on [[operating_system|OS]] installation or
work with [[GNU_Privacy_Guard_GPG|GPG]] keys and files:
    `shred --verbose --random-source=/dev/urandom -n1 --zero /dev/sdX`

Overwrite file with zeros (final overwrite) and change permissions if required:
    `shred -zf pat/to/file`

Deallocate and remove file after overwriting:
    `shred -u path/to/file`

Overwrite file with garbage, 15 times (questionable if it is really needed)
    `shred -n15 path/to/file`

