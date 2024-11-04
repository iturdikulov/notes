---
external:
  - https://docs.python.org/3/tutorial/interpreter.html
date: 2023
tags:
  - inbox
  - Python
---
# 2. Using the Python Interpreter

We can start interactive interpreter with following commands:

- `python -c` - execute Python code, useful for one-liners scripts, if command
contains spaces, quote it.

- `python -m [arg]` - execute Python module with optional arguments, `pythom -m
venv .venv`.

## Interactive Interpreter

Does Python interpreter support [[GNU_Readline|readline]] library?
&#10;
Yes, which provides command line editing and history. <!--SR:!2024-11-01,3,250-->

Commands:

- `python` - start interactive interpreter mode. Exit: `C-d`, `C-z` or `quit()`.
- `python -i [script]` - start interactive interpreter mode (after executing
script for example), can be combined with `-c` and `-m`.

I also have `py` alias to run `python` command and `ipy` to run `ipython`
(custom interactive shell).

How I can get command line arguments in interactive interpreter?
&#10;
Python interpreter support argument parsing. You can use `import sys; sys.argv`
to get current script name and arguments (list of strings). Minimal length of
`sys.argv` is 1, it can be: empty, script name (`python -`, `-` is standard
input) or module name (`python -m -i lzma`). <!--SR:!2024-10-30,1,230-->

In `sys.argv` also stored `-c` and `-m` (`sys.argv[0]`) and their arguments.
Options found after `-c` command or `-m` module are not consumed by the Python
interpreter’s option processing but left in `sys.argv` for the command or module
to handle.

In interactive prompt usually for next command used `>>>` sign, for continuation
lines used secondary prompt ==`...`==. <!--SR:!2024-11-01,3,250-->

By default, Python 3 source files are treated as encoded in
==[[Unicode|UTF-8]]==, but standard library only use [[ASCII]] characters for
identifiers, this convention that any portable code should follow. <!--SR:!2024-11-01,3,250-->

Can I use non UTF-8 encoding?
&#10;
Yes, if you need to set non UTF-8 encoding, use `# -*- coding: ENCODING_NAME
-*-` comment as first line or after [[shebang]]:
```python
#!/usr/bin/env python3
# -*- coding: cp1251 -*-
print("Здесь можно использовать кодировку cp1251")
```
<!--SR:!2024-10-30,1,230-->
