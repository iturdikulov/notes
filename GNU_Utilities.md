---
date: 2023-04-19
sr-due: 2023-05-21
sr-ease: 280
sr-interval: 4
tags:
  - inbox
  - outline
  - software
sr-due: 2025-04-27
sr-interval: 566
sr-ease: 300
---

## GNU Core Utilities

> The GNU Core Utilities or coreutils is a package of GNU software containing
> implementations for many of the basic tools, such as cat, ls, and rm, which
> are used on [[Unix|unix]]-like operating systems.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/GNU_Core_Utilities)</cite>

Here I store basic coreutils and similar tools that I use on a daily basis.
A lot of these commands also usually exist in this
[[Unix_commands|Unix commands]] list.

### File utilities

- `chcon` - Changes file security context (SELinux)
- `chgrp` - Changes file group ownership
- `chown` - Changes file ownership
- `chmod` - Changes the permissions of a file or directory
- `cp` - Copies a file or directory
- `dd` - Copies and converts a file
- `df` - Shows disk free space on file systems
- `dir` - Is exactly like "ls -C -b". (Files are by default listed in columns and sorted vertically.)
- `dircolors` - Set up color for ls
- `install` - Copies files and set attributes
- `ln` - Creates a link to a file
- `ls` - Lists the files in a directory
- `mkdir` - Creates a directory
- `mkfifo` - Makes named pipes (FIFOs)
- `mknod` - Makes block or character special files
- `mktemp` - Creates a temporary file or directory
- `mv` - Moves files or rename files
- `realpath` - Returns the resolved absolute or relative path for a file
- `rm` - Removes (deletes) files, directories, device nodes and symbolic links
- `rmdir` - Removes empty directories
- `shred` - Overwrites a file to hide its contents, and optionally deletes it
- `sync` - Flushes file system buffers
- `touch` - Changes file timestamps; creates file
- `truncate` - Shrink or extend the size of a file to the specified size
- `vdir` - Is exactly like "ls -l -b". (Files are by default listed in long format.)

### Text utilities

- `b2sum` - Computes and checks BLAKE2b message digest
- `base32` - Encodes or decodes Base32, and prints result to standard output
- `base64` - Encodes or decodes Base64, and prints result to standard output
- `cat` - Concatenates and prints files on the standard output
- `cksum` - Checksums (IEEE Ethernet CRC-32) and count the bytes in a file.
- Supersedes other sum utilities with `-a` option from version 9.0.
- `comm` - Compares two sorted files line by line
- `csplit` - Splits a file into sections determined by context lines
- `cut` - Removes sections from each line of files
- `expand` - Converts tabs to spaces
- `fmt` - Simple optimal text formatter
- `fold` - Wraps each input line to fit in specified width
- `head` - Outputs the first part of files
- `join` - Joins lines of two files on a common field
- `md5sum` - Computes and checks MD5 message digest
- `nl` - Numbers lines of files
- `numfmt` - Reformat numbers
- `od` - Dumps files in octal and other formats
- `paste` - Merges lines of files
- `ptx` - Produces a permuted index of file contents
- `pr` - Converts text files for printing
- `sha1sum`, `sha224sum`, `sha256sum`, `sha384sum`, `sha512sum` - Computes and
- checks SHA-1/SHA-2 message digests
- `shuf` - generate random permutations
- `sort` - sort lines of text files
- `split` - Splits a file into pieces
- `sum` - Checksums and counts the blocks in a file
- `tac` - Concatenates and prints files in reverse order line by line
- `tail` - Outputs the last part of files
- `tr` - Translates or deletes characters
- `tsort` - Performs a topological sort
- `unexpand` - Converts spaces to tabs
- `uniq` - Removes duplicate lines from a sorted file
- `wc` - Prints the number of bytes, words, and lines in files

### Shell utilities

- `arch` - Prints machine hardware name (same as uname -m)
- `basename` - Removes the path prefix from a given pathname
- `chroot` - Changes the root directory
- `date` - Prints or sets the system date and time
- `dirname` - Strips non-directory suffix from file name
- `du` - Shows disk usage on file systems
- `echo` - Displays a specified line of text
- `env` - Displays and modifies environment variables
- `expr` - Evaluates expressions
- `factor` - Factors numbers
- `false` - Does nothing, but exits unsuccessfully
- `groups` - Prints the groups of which the user is a member
- `hostid` - Prints the numeric identifier for the current host
- `id` - Prints real or effective UID and GID
- `link` - Creates a link to a file
- `logname` - Print the user's login name
- `nice` - Modifies scheduling priority
- `nohup` - Allows a command to continue running after logging out
- `nproc` - Queries the number of (active) processors
- `pathchk` - Checks whether file names are valid or portable
- `pinky` - A lightweight version of finger
- `printenv` - Prints environment variables
- `printf` - Formats and prints data
- `pwd` - Prints the current working directory
- `readlink` - Displays value of a symbolic link
- `runcon` - Run command with specified security context
- `seq` - Prints a sequence of numbers
- `sleep` - Delays for a specified amount of time
- `stat` - Returns data about an inode
- `stdbuf` - Controls buffering for commands that use stdio
- `stty` - Changes and prints terminal line settings
- `tee` - Sends output to multiple files
- `test` - Evaluates an expression
- `timeout` - Run a command with a time limit
- `true` - Does nothing, but exits successfully
- `tty` - Prints terminal name
- `uname` - Prints system information
- `unlink` - Removes the specified file using the unlink function
- `uptime` - Tells how long the system has been running
- `users` - Prints the user names of users currently logged into the current host
- `who` - Prints a list of all users currently logged in
- `whoami` - Prints the effective userid
- `yes` - Prints a string repeatedly

### Other Utilities

- `[` - A synonym for test; this program permits expressions like [ expression ].

## GNU binutils

> The GNU Binary Utilities, or binutils, are a set of programming tools for
> creating and managing binary programs, object files, libraries, profile data,
> and assembly source code.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/GNU_Binutils)</cite>

[Website](https://www.gnu.org/software/binutils/).

- `as` - assembler popularly known as GAS (GNU Assembler)
- `ld` - linker
- `gprof` - profiler
- `addr2line` - convert address to file and line
- `ar` - create, modify, and extract from archives
- `c++filt` - demangling filter for C++ symbols
- `dlltool` - creation of Windows dynamic-link libraries
- `gold` - alternative linker for ELF files
- `nlmconv` - object file conversion to a NetWare Loadable Module
- `nm` - list symbols exported by object file
- `objcopy` - copy object files, possibly making changes
- `objdump` - dump information about object files
- `ranlib` - generate indices for archives (for compatibility; same as `ar -s`)
- `readelf` - display content of ELF files
- `size` - list total and section sizes
- `strings` - list printable strings
- `strip` - remove symbols from an object file
- `windmc` - generates Windows message resources
- `windres` - compiler for Windows resource files

## Other

- [[GNU_Sed|GNU Sed]]
- [[GNU_Readline|GNU Readline]]
- [[GNU_Privacy_Guard|GNU Privacy Guard (GPG)]]
- [[GNU_Debugger|GNU Debugger (GDB)]]

## Resources

- [ ] [GNU Coreutils Cheat Sheet](https://catonmat.net/gnu-coreutils-cheat-sheet)
- [ ] [[GNU_Compiler_Collection]]
