---
created: 2023-10-09T00:00+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 228
---

# Unix commands

> List of Unix commands as specified by IEEE Std 1003.1-2008, which is part of the Single UNIX Specification (SUS). These commands can be found on Unix operating systems and most Unix-like operating systems.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/List_of_Unix_commands)</cite>

Name

## Text processing

- `asa`:<wbr class="f"> Interpret carriage-control characters
- `awk`:<wbr class="f"> Pattern scanning and processing language
- `comm`:<wbr class="f"> Select or reject lines common to two files
- `csplit`:<wbr class="f"> Split files based on context
- `cut`:<wbr class="f"> Cut out selected fields of each line of a file
- `diff`:<wbr class="f"> Compare two files; see also cmp
- `ed`:<wbr class="f"> The standard text editor
- `ex`:<wbr class="f"> Text editor
- `expand`:<wbr class="f"> Convert tabs to spaces
- `fold`:<wbr class="f"> Filter for folding lines
- `head`:<wbr class="f"> Copy the first part of files
- `iconv`:<wbr class="f"> Codeset conversion
- `join`:<wbr class="f"> Merges two sorted text files based on the presence of a common field
- `lp`:<wbr class="f"> Send files to a printer
- `more`:<wbr class="f"> Display files on a page-by-page basis
- `nl`:<wbr class="f"> Line numbering filter
- `paste`:<wbr class="f"> Merge corresponding or subsequent lines of files
- `patch`:<wbr class="f"> Apply changes to files
- `pr`:<wbr class="f"> Print files
- `sed`:<wbr class="f"> Stream editor
- `sort`:<wbr class="f"> Sort, merge, or sequence check text files
- `tail`:<wbr class="f"> Copy the last part of a file
- `tr`:<wbr class="f"> Translate characters
- `tsort`:<wbr class="f"> Topological sort
- `unexpand`:<wbr class="f"> Convert spaces to tabs
- `uniq`:<wbr class="f"> Report or filter out repeated lines in a file
- `vi`:<wbr class="f"> Screen-oriented (visual) display editor
- `wc`:<wbr class="f"> Line, word and byte or character count
- `zcat`:<wbr class="f"> Expand and concatenate data

## System administration

- `who`:<wbr class="f"> Display who is on the system

## Shell programming

- `command`:<wbr class="f"> Execute a simple command
- `echo`:<wbr class="f"> Write arguments to standard output
- `expr`:<wbr class="f"> Evaluate arguments as an expression
- `false`:<wbr class="f"> Return false value
- `getopts`:<wbr class="f"> Parse utility options
- `logger`:<wbr class="f"> Log messages
- `printf`:<wbr class="f"> Write formatted output
- `read`:<wbr class="f"> Read a line from standard input
- `sh`:<wbr class="f"> Shell, the standard command language interpreter AT&T UNIX (in earlier versions, sh was either the Thompson shell or the PWB shell)
- `sleep`:<wbr class="f"> Suspend execution for an interval
- `tee`:<wbr class="f"> Duplicate the standard output
- `test`:<wbr class="f"> Evaluate expression
- `true`:<wbr class="f"> Return true value
- `xargs`:<wbr class="f"> Construct argument lists and invoke utility

## SCCS (Source Code Control System)

- `admin`:<wbr class="f"> Create and administer SCCS files
- `delta`:<wbr class="f"> Make a delta (change) to an SCCS file
- `get`:<wbr class="f"> Get a version of an SCCS file
- `prs`:<wbr class="f"> Print an SCCS file
- `rmdel`:<wbr class="f"> Remove a delta from an SCCS file
- `sact`:<wbr class="f"> Print current SCCS file-editing activity
- `sccs`:<wbr class="f"> Front end for the SCCS subsystem
- `unget`:<wbr class="f"> Undo a previous get of an SCCS file
- `val`:<wbr class="f"> Validate SCCS files
- `what`:<wbr class="f"> Identify SCCS files

## Programming

- `make`
- `fort77`
- `cc/c99`:<wbr class="f"> Compile standard C programs
- `cflow`:<wbr class="f"> Generate a C-language call graph
- `ctags`:<wbr class="f"> Create a tags file
- `cxref`:<wbr class="f"> Generate a C-language program cross-reference table
- `lex`:<wbr class="f"> Generate programs for lexical tasks
- `nm`:<wbr class="f"> Optional (SD, XSI)
- `strings`:<wbr class="f"> Find printable strings in files
- `strip`:<wbr class="f"> Remove unnecessary information from executable files
- `yacc`:<wbr class="f"> Yet another compiler compiler

## Process management

- `at`:<wbr class="f"> Execute commands at a later time
- `batch`:<wbr class="f"> Schedule commands to be executed in a batch queue
- `bg`:<wbr class="f"> Run jobs in the background
- `fg`:<wbr class="f"> Run jobs in the foreground
- `fuser`:<wbr class="f"> List process IDs of all processes that have one or more files open
- `jobs`:<wbr class="f"> Display status of jobs in the current session
- `kill`:<wbr class="f"> Terminate or signal processes
- `nice`:<wbr class="f"> Invoke a utility with an altered nice value
- `nohup`:<wbr class="f"> Invoke a utility immune to hangups
- `ps`:<wbr class="f"> Report process status
- `renice`:<wbr class="f"> Set nice values of running processes
- `time`:<wbr class="f"> Time a simple command
- `uux`:<wbr class="f"> Remote command execution
- `wait`:<wbr class="f"> Await process completion

## Network

- `uucp`:<wbr class="f"> System-to-system copy
- `uudecode`:<wbr class="f"> Decode a binary file
- `uuencode`:<wbr class="f"> Encode a binary file
- `uustat`:<wbr class="f"> uucp status inquiry and job control

## Misc

- `alias`:<wbr class="f"> Define or display aliases
- `ar`:<wbr class="f"> Create and maintain library archives
- `bc`:<wbr class="f"> Arbitrary-precision arithmetic language
- `cal`:<wbr class="f"> Print a calendar
- `crontab`:<wbr class="f"> Schedule periodic background work
- `date`:<wbr class="f"> Display the date and time
- `env`:<wbr class="f"> Set the environment for command invocation
- `fc`:<wbr class="f"> Process the command history list
- `gencat`:<wbr class="f"> Generate a formatted message catalog
- `getconf`:<wbr class="f"> Get configuration values
- `grep`:<wbr class="f"> Search text for a pattern
- `hash`:<wbr class="f"> Hash database access method
- `id`:<wbr class="f"> Return user identity
- `ipcrm`:<wbr class="f"> Remove a message queue, semaphore set, or shared memory segment identifier
- `ipcs`:<wbr class="f"> Report interprocess communication facilities status
- `locale`:<wbr class="f"> Get locale-specific information
- `localedef`:<wbr class="f"> Define locale environment
- `logname`:<wbr class="f"> Return the user's login name
- `m4`:<wbr class="f"> Macro processor
- `mailx`:<wbr class="f"> Process messages
- `man`:<wbr class="f"> Display system documentation
- `mesg`:<wbr class="f"> Permit or deny messages
- `newgrp`:<wbr class="f"> Change to a new group
- `od`:<wbr class="f"> Dump files in various formats
- `pax`:<wbr class="f"> Portable archive interchange
- `readlink` -
- `split`:<wbr class="f"> Split files into pieces
- `stty`:<wbr class="f"> Set the options for a terminal
- `tabs`:<wbr class="f"> Set terminal tabs
- `talk`:<wbr class="f"> Talk to another user
- `tput`:<wbr class="f"> Change terminal characteristics
- `tty`:<wbr class="f"> Return user's terminal name
- `type`:<wbr class="f"> Displays how a name would be interpreted if used as a command
- `ulimit`:<wbr class="f"> Set or report file size limit
- `umask`:<wbr class="f"> Get or set the file mode creation mask
- `unalias`:<wbr class="f"> Remove alias definitions
- `uname`:<wbr class="f"> Return system name
- `uncompress`:<wbr class="f"> Expand compressed data
- `write`:<wbr class="f"> Write to another user's terminal

## Filesystem

- `basename`:<wbr class="f"> Return non-directory portion of a pathname; see also dirname
- `cat`:<wbr class="f"> Concatenate and print files
- `cd`:<wbr class="f"> Change the working directory
- `chgrp`:<wbr class="f"> Change the file group ownership
- `chmod`:<wbr class="f"> Change the file modes/attributes/permissions
- `chown`:<wbr class="f"> Change the file ownership
- `cksum`:<wbr class="f"> Write file checksums and sizes
- `cmp`:<wbr class="f"> Compare two files; see also diff
- `compress`:<wbr class="f"> Compress data
- `cp`:<wbr class="f"> Copy files
- `dd`:<wbr class="f"> Convert and copy a file
- `df`:<wbr class="f"> Report free disk space
- `dirname`:<wbr class="f"> Return the directory portion of a pathname; see also basename
- `du`:<wbr class="f"> Estimate file space usage
- `file`:<wbr class="f"> Determine file type
- `find`:<wbr class="f"> Find files
- `link`:<wbr class="f"> Create a hard link to a file
- `ln`:<wbr class="f"> Link files
- `ls`:<wbr class="f"> List directory contents
- `mkdir`:<wbr class="f"> Make directories
- `mkfifo`:<wbr class="f"> Make FIFO special files
- `mv`:<wbr class="f"> Move or rename files
- `pathchk`:<wbr class="f"> Check pathnames
- `pwd`:<wbr class="f"> Print working directory
- `rm`:<wbr class="f"> Remove directory entries
- `rmdir`:<wbr class="f"> Remove directories, if they are empty.
- `touch`:<wbr class="f"> Change file access and modification times
- `unlink`:<wbr class="f"> Call the unlink function

- `fdisk`:<wbr class="f"> Partition table manipulator for Linux
- `timedatectl`:<wbr class="f"> Control the system time and date, can be used to enable NTP (`timedatectl set-ntp true`)

## Batch utilities

- `qalter`:<wbr class="f"> Alter batch job
- `qdel`:<wbr class="f"> Delete batch jobs
- `qhold`:<wbr class="f"> Hold batch jobs
- `qmove`:<wbr class="f"> Move batch jobs
- `qmsg`:<wbr class="f"> Send message to batch jobs
- `qrerun`:<wbr class="f"> Rerun batch jobs
- `qrls`:<wbr class="f"> Release batch jobs
- `qselect`:<wbr class="f"> Select batch jobs
- `qsig`:<wbr class="f"> Signal batch jobs
- `qstat`:<wbr class="f"> Show status of batch jobs
- `qsub`:<wbr class="f"> Submit a script

## Man Pages

```bash
# tracepath - traces path to a network host discovering MTU along this path
tracepath 1.1.1.1
```
