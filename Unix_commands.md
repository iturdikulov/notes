---
date: 2023-10-09T00:00+03:00
tags:
  - inbox
  - Unix
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 228
---

# Unix commands

> List of Unix commands as specified by IEEE Std 1003.1-2008, which is part of
> the Single UNIX Specification (SUS). These commands can be found on Unix
> operating systems and most Unix-like operating systems.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/List_of_Unix_commands)</cite>

Name

## Text processing

- `asa`::Interpret carriage-control characters
- `awk`::Pattern scanning and processing language
- `comm`::Select or reject lines common to two files
- `csplit`::Split files based on context
- `cut`::Cut out selected fields of each line of a file
- `diff`::Compare two files; see also cmp
- `ed`::The standard text editor
- `ex`::Text editor
- `expand`::Convert tabs to spaces
- `fold`::Filter for folding lines
- `head`::Copy the first part of files
- `iconv`::Codeset conversion
- `join`::Merges two sorted text files based on the presence of a common field
- `lp`::Send files to a printer
- `more`::Display files on a page-by-page basis
- `nl`::Line numbering filter
- `paste`::Merge corresponding or subsequent lines of files
- `patch`::Apply changes to files
- `pr`::Print files
- `sed`::Stream editor
- `sort`::Sort, merge, or sequence check text files
- `tail`::Copy the last part of a file
- `tr`::Translate characters
- `tsort`::Topological sort
- `unexpand`::Convert spaces to tabs
- `uniq`::Report or filter out repeated lines in a file
- `vi`::Screen-oriented (visual) display editor
- `wc`::Line, word and byte or character count
- `zcat`::Expand and concatenate data

## System administration

- `who`::Display who is on the system

## Shell programming

- `command`::Execute a simple command
- `echo`::Write arguments to standard output
- `expr`::Evaluate arguments as an expression
- `false`::Return false value
- `getopts`::Parse utility options
- `logger`::Log messages
- `printf`::Write formatted output
- `read`::Read a line from standard input
- `sh`::Shell, the standard command language interpreter
AT&T UNIX (in earlier versions, sh was either the Thompson shell or the PWB
shell)
- `sleep`::Suspend execution for an interval
- `tee`::Duplicate the standard output
- `test`::Evaluate expression
- `true`::Return true value
- `xargs`::Construct argument lists and invoke utility

## SCCS (Source Code Control System)

- `admin`::Create and administer SCCS files
- `delta`::Make a delta (change) to an SCCS file
- `get`::Get a version of an SCCS file
- `prs`::Print an SCCS file
- `rmdel`::Remove a delta from an SCCS file
- `sact`::Print current SCCS file-editing activity
- `sccs`::Front end for the SCCS subsystem
- `unget`::Undo a previous get of an SCCS file
- `val`::Validate SCCS files
- `what`::Identify SCCS files

## Programming

- `make`
- `fort77`
- `cc/c99`::Compile standard C programs
- `cflow`::Generate a C-language call graph
- `ctags`::Create a tags file
- `cxref`::Generate a C-language program cross-reference table
- `lex`::Generate programs for lexical tasks
- `nm`::Optional (SD, XSI)
- `strings`::Find printable strings in files
- `strip`::Remove unnecessary information from executable files
- `yacc`::Yet another compiler compiler

## Process management

- `at`::Execute commands at a later time
- `batch`::Schedule commands to be executed in a batch queue
- `bg`::Run jobs in the background
- `fg`::Run jobs in the foreground
- `fuser`::List process IDs of all processes that have one or more files open
- `jobs`::Display status of jobs in the current session
- `kill`::Terminate or signal processes
- `nice`::Invoke a utility with an altered nice value
- `nohup`::Invoke a utility immune to hangups
- `ps`::Report process status
- `renice`::Set nice values of running processes
- `time`::Time a simple command
- `uux`::Remote command execution
- `wait`::Await process completion

## Network

- `uucp`::System-to-system copy
- `uudecode`::Decode a binary file
- `uuencode`::Encode a binary file
- `uustat`::uucp status inquiry and job control

## Misc

- `alias`::Define or display aliases
- `ar`::Create and maintain library archives
- `bc`::Arbitrary-precision arithmetic language
- `cal`::Print a calendar
- `crontab`::Schedule periodic background work
- `date`::Display the date and time
- `env`::Set the environment for command invocation
- `fc`::Process the command history list
- `gencat`::Generate a formatted message catalog
- `getconf`::Get configuration values
- `grep`::Search text for a pattern
- `hash`::Hash database access method
- `id`::Return user identity
- `ipcrm`::Remove a message queue, semaphore set, or shared memory segment identifier
- `ipcs`::Report interprocess communication facilities status
- `locale`::Get locale-specific information
- `localedef`::Define locale environment
- `logname`::Return the user's login name
- `m4`::Macro processor
- `mailx`::Process messages
- `man`::Display system documentation
- `mesg`::Permit or deny messages
- `newgrp`::Change to a new group
- `od`::Dump files in various formats
- `pax`::Portable archive interchange
- `readlink` -
- `split`::Split files into pieces
- `stty`::Set the options for a terminal
- `tabs`::Set terminal tabs
- `talk`::Talk to another user
- `tput`::Change terminal characteristics
- `tty`::Return user's terminal name
- `type`::Displays how a name would be interpreted if used as a command
- `ulimit`::Set or report file size limit
- `umask`::Get or set the file mode creation mask
- `unalias`::Remove alias definitions
- `uname`::Return system name
- `uncompress`::Expand compressed data
- `write`::Write to another user's terminal


## Filesystem

- `basename`::Return non-directory portion of a pathname; see also dirname
- `cat`::Concatenate and print files
- `cd`::Change the working directory
- `chgrp`::Change the file group ownership
- `chmod`::Change the file modes/attributes/permissions
- `chown`::Change the file ownership
- `cksum`::Write file checksums and sizes
- `cmp`::Compare two files; see also diff
- `compress`::Compress data
- `cp`::Copy files
- `dd`::Convert and copy a file
- `df`::Report free disk space
- `dirname`::Return the directory portion of a pathname; see also basename
- `du`::Estimate file space usage
- `file`::Determine file type
- `find`::Find files
- `link`::Create a hard link to a file
- `ln`::Link files
- `ls`::List directory contents
- `mkdir`::Make directories
- `mkfifo`::Make FIFO special files
- `mv`::Move or rename files
- `pathchk`::Check pathnames
- `pwd`::Print working directory
- `rm`::Remove directory entries
- `rmdir`::Remove directories, if they are empty.
- `touch`::Change file access and modification times
- `unlink`::Call the unlink function

- `fdisk`::Partition table manipulator for Linux
- `timedatectl`::Control the system time and date, can be used to enable NTP (`timedatectl set-ntp true`)

## Batch utilities

- `qalter`::Alter batch job
- `qdel`::Delete batch jobs
- `qhold`::Hold batch jobs
- `qmove`::Move batch jobs
- `qmsg`::Send message to batch jobs
- `qrerun`::Rerun batch jobs
- `qrls`::Release batch jobs
- `qselect`::Select batch jobs
- `qsig`::Signal batch jobs
- `qstat`::Show status of batch jobs
- `qsub`::Submit a script

## Man Pages

```bash
# tracepath - traces path to a network host discovering MTU along this path
tracepath 1.1.1.1
```
