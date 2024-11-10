---
date: 2024-11-04
external:
  - https://docs.python.org/3/tutorial/interpreter.html
tags:
  - inbox
  - Python
---
# 2. Using the Python Interpreter

Python interpreter can be used in interactive mode or in scrips. In interactive
mode Python interpreter support [[GNU_Readline]] library, which provide rich
keybinding system.

Personally I have `py` command-line alias to run `python` in interactive mode
and `ipy` to run `ipython` (custom interactive shell).

Below some useful examples:

- `python` - interactive mode, to exit use: `C-d`, `C-z` or `quit()`.
- `python -c` - execute code
- `python -m <module> [arg]` - execute module with optional arguments
- `python -i [script]` - interactive with script execution, can be combined with
`-c` and `-m`.

Python interpreter support argument parsing. You can use `import sys; sys.argv`
to get current script or module name and arguments (list of strings). Minimal
length of `sys.argv` is 1, which first item is empty if we don't use any
arguments.

In `sys.argv` also stored `-c` and `-m` command line switches (`sys.argv[0]`)
and their arguments. Options found after `-c` command or `-m` module are not
consumed by the Python interpreter’s option processing but left in `sys.argv`
for the command or module to handle.

In interactive prompt usually for next command used `>>>` sign, for continuation
lines used secondary prompt `...`.

By default, Python 3 source files are treated as encoded in
==[[Unicode|UTF-8]]==, but standard library only use [[ASCII]] characters for
identifiers, this convention that any portable code **should follow**.

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
