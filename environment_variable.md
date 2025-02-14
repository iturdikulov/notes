---
date: 2024-11-14T20:16+03:00
tags:
  - blog
  - unix
---

# Environment variable (env-var)

> An environment variable is a user-definable value that **can** affect the way
> running processes will behave on a computer. Environment variables are part of
> the environment in which a process runs.\
> — <cite>[Environment variable - Wikipedia](https://en.wikipedia.org/wiki/Environment_variable)</cite>

Is each process has its own set of environment variables?
<br class="f">
Yes, in all [[Unix]] and Unix-like systems, as well as on Windows, each process
has its own separate set of environment variables. Useful to set program
settings, pass information to child processes. They are widely used to store
specific configurations for programs (customize behaviour).

Collection of environment variables function as a [[hash_table|associative
array]] where both the keys and values are ==strings==.

The commands `env` and `set` can be used to set environment variables and are
often incorporated directly into the shell.

The following commands can also be used, but are often dependent on a certain
shell.

Unix shells:

`export` - special command which exporting shell variables to child processes.

```
VARIABLE=value         # this env variable will be not inherited into their child processes
export VARIABLE        # for Bourne and related shells, will be exported to child processes

export VARIABLE=value  # set and export for ksh, bash, and related shells
setenv VARIABLE value  # set and export for csh and related shells

unset VARIABLE         # remove variable from environment (but not from parent process)
```

DOS, OS/2, and Windows:

```
# set VARIABLE=value in cmd.exe
SET VARIABLE=value

# remove VARIABLE in cmd.exe
SET VARIABLE=

# set with powershell
$env:VARIABLE = "VALUE"
```

Read env vars in [[Python]]:

```python
import os

# If you run this script with `MY_NAME=YourName`, then you get different
# output.
name = os.getenv("MY_NAME", "World")  # get value or default value
print(f"Hello {name} from Python")

path = os.environ["PATH"]  # special environment variable to find programs
                           # contain separated by colon paths, order matters
print(f"PATH: {path}")
```
