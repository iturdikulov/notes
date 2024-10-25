---
external:
  - https://docs.python.org/3/tutorial/index.html
date: 2023
tags:
  - inbox
  - Python
---
# 2. Using the Python Interpreter

- Start interactive interpreter mode: `python3` or better `ipython`. On my
  machines also avaiable `ipy` and `py` aliases.
- Exit: `C-d`, `C-z` or `quit()`
- Interpreter support [[GNU_Readline|readline]] library (which is cool)
- `python -c` - execute Python code, useful for one-liners scripts, if command
contains spaces, use quotes
- `python -m [arg]` - execute Python module, `pythom -m venv .venv`
- `python -i [script]` - start interactive interpreter mode (after executing
script for example), can be combined with `-c` and `-m`.

Python interpreter support argument parsing. You can use `import sys; sys.argv`
to get current script name and arguments (list of strings). Minimal length of
`sys.argv` is 1, it can be: empty, script name (`python -`, `-` is standard
input) or module name (`python -m -i lzma`).

In `sys.argv` also stored `-c` and `-m` (`sys.argv[0]`) and their arguments.
Options found after `-c` command or `-m` module are not consumed by the Python
interpreter’s option processing but left in `sys.argv` for the command or module
to handle.

In interactive prompt usually for next command used `>>>` sign, for continuation
lines used secondary prompt ==`...`==.

By default, Python 3 source files are treated as encoded in [[Unicode|UTF-8]],
but standard library only use [[ASCII]] characters for identifiers, this
convention that any portable code should follow.

If you need to set non UTF-8 encoding, use `# -*- coding: ==ENCODING_NAME== -*-`
comment as first line or after [[shebang]]:
```python
#!/usr/bin/env python3
# -*- coding: cp1251 -*-
print("Здесь можно использовать кодировку cp1251")
```
