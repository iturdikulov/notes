---
date: 2025-09-13 23:31
tags:
  - blog
  - work-tool-clean
---

# Python code snippets

Snippets collection from [friendly snippets](https://github.com/iturdikulov/friendly-snippets/tree/main/snippets/python).

## Basic snippets

- Shebang line: <wbr class="f"> `#env` → `#!/usr/bin/env python`
- Pyright ignore line: <wbr class="f"> `#ignore` → `# pyright: ignore[]`
- Multiline string: <wbr class="f"> `#` → multiline block
- Self reference: <wbr class="f"> `s` → `self.`
- Magic methods: <wbr class="f"> `__` → `__init__` (customizable)
- Basic class: <wbr class="f"> `class` → `class classname:`
- Derived class: <wbr class="f"> `classd` → `class classname(parent):`
- Class template: <wbr class="f"> `classi` → Full class with `docstring, __init__, and super()`

## Functions & Methods

- Function: <wbr class="f"> `def` → `def fname():`
- Function with return type: <wbr class="f"> `deft` → `def fname() -> None:`
- Method: <wbr class="f"> `defs` → `def mname(self):`
- Method with return type: <wbr class="f"> `defst` → `def mname(self) -> None:`
- Property template: <wbr class="f"> `property` → Full @property decorator template
- Lambda: <wbr class="f"> `lambda` → `lambda parameter_list: expression`

## Control Flow

- If statement: <wbr class="f"> `if` → `if condition:`
- If/else: <wbr class="f"> `ifelse` → Complete `if/else` structure
- Match/case: <wbr class="f"> `match` → `match expression:` with case block
- Case wildcard: <wbr class="f"> `casew` → `case _:`

## Loops & Iteration

- For loop: <wbr class="f"> `for` → `for value in iterable:`
- For with range: <wbr class="f"> `forr` → `for value in range():`
- While loop: <wbr class="f"> `while` → `while condition:`
- With statement: <wbr class="f"> `with` → `with expression as target:`

## Error Handling

- Try/except: <wbr class="f"> `try` → Complete `try/except` with exception handling
- Try/except/else: <wbr class="f"> `trya` → `try/except/else` blocks
- Try/except/finally: <wbr class="f"> `tryf` → `try/except/finally` blocks
- Try/except/else/finally: <wbr class="f"> `tryef` → `try/except/else/finally` blocks
- Except block: <wbr class="f"> `except` → `except:`
- Except as: <wbr class="f"> `exceptas` → `except Exception as e:`

## Advanced

Import: <wbr class="f"> `import` → `import datetime`
From import: <wbr class="f"> `fromim` → `from pathlib import Path`
Main guard: <wbr class="f"> `ifmain` → `if __name__ == "__main__":`
Jupyter cell: `#cell` → `# %%`
Jupyter markdown cell: `#mark` → `# %% [markdown]`