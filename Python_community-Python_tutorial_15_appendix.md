---
external:
  - https://docs.python.org/3/tutorial/appendix.html
tags:
  - blog
  - annotation_article
created: 2025-01-14T11:41+03:00
sr-due: 2025-07-23
sr-interval: 9
sr-ease: 238
---

# 15. Appendix

When an error occurs, the interpreter prints an error message and a stack trace.
In interactive mode, it then returns to the ==primary prompt==; when input came
from a file, it exits with a nonzero exit status after printing the stack trace.
Exceptions handled by an
[`except`](https://docs.python.org/3/reference/compound_stmts.html#except)
clause in a [`try`](https://docs.python.org/3/reference/compound_stmts.html#try)
statement are not errors in this context. Some errors are unconditionally fatal
and cause an exit with a nonzero exit status; this applies to internal
inconsistencies and some cases of running out of memory. All error messages are
written to the standard error stream; normal output from executed commands is
written to standard output.

Typing the interrupt character (usually `C-c` or `Delete`) to the primary or
secondary prompt cancels the input and returns to the primary prompt.
Typing an interrupt while a command is executing raises the
==[`KeyboardInterrupt`](https://docs.python.org/3/library/exceptions.html#KeyboardInterrupt)==
exception, which may be handled by a
[`try`](https://docs.python.org/3/reference/compound_stmts.html#try) statement.

On BSD’ish Unix systems, Python scripts can be made directly executable, like
shell scripts, by putting the line
<br class="f">
```sh
#!/usr/bin/env python3
```
Assuming that the interpreter is on the user’s `PATH` at the beginning of the
script and giving the file an executable mode. The `#!` must be the first two
characters of the file. On some platforms, this first line must end with a
Unix-style line ending (`'\n'`), not a Windows (`'\r\n'`) line ending. Note that
the hash, or pound, character, `'#'`, is used to start a comment in Python.

The script can be given an executable mode, or permission, using the **chmod**
command.
<br class="f">
```sh
$ chmod +x myscript.py
```

On Windows systems, there is no notion of an “executable mode”. The Python
installer automatically ==associates `.py` files with `python.exe`== so that a
double-click on a Python file will run it as a script. The extension can also be
`.pyw`, in that case, the console window that normally appears is suppressed.

When you use Python ==interactively==, it is frequently handy to have some
standard commands executed every time the interpreter is started. You can do
this by setting an environment variable named
[`PYTHONSTARTUP`](https://docs.python.org/3/using/cmdline.html#envvar-PYTHONSTARTUP)
to the name of a file containing your start-up commands. This is similar to the
`.profile` feature of the Unix shells.
\
This file is only read in interactive sessions, not when Python reads commands
from a script, and not when `/dev/tty` is given as the explicit source of
commands (which otherwise behaves like an interactive session). It is executed
in the same namespace where interactive commands are executed, so that objects
that it defines or imports can be used without qualification in the interactive
session. You can also change the prompts `sys.ps1` and `sys.ps2` in this file.

If you want to read an additional start-up file from the current directory, you
can program this in the global start-up file using code like `if
os.path.isfile('.pythonrc.py'): exec(open('.pythonrc.py').read())`. If you want
to use the startup file (`PYTHONSTARTUP`) in a script, you must do this
explicitly in the script:
<br class="f">
```
import os
filename = os.environ.get('PYTHONSTARTUP')
if filename and os.path.isfile(filename):
    with open(filename) as fobj:
        startup_file = fobj.read()
    exec(startup_file)
```

Python provides two hooks to let you customize it: sitecustomize and
usercustomize. To see how it works, you need first to find the location of your
user site-packages directory. Start Python and run this code:
```python
>>> import site
>>> site.getusersitepackages()
'/home/user/.local/lib/python3.x/site-packages'
```

Now you can create a file named `usercustomize.py` in that directory and put
anything you want in it. It will affect every invocation of Python, unless it is
started with the
[`-s`](https://docs.python.org/3/tutorial/appendix.html../using/cmdline.html#cmdoption-s)
option to disable the automatic import.

sitecustomize works in the same way, but is typically created by an administrator of the computer in the global site-packages directory, and is imported before usercustomize. See the documentation of the [`site`](https://docs.python.org/3/tutorial/appendix.html../library/site.html#module-site "site: Module responsible for site-specific configuration.") module for more details.

Footnotes

\[[1](https://docs.python.org/3/tutorial/appendix.html#id1)\]

A problem with the GNU Readline package may prevent this.
