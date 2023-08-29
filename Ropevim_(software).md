---
date: 2023-06-09
sr-due: 2023-08-25
sr-ease: 228
sr-interval: 1
tags:
- inbox
- software
---

# Ropevim, rope in vim

> Ropevim is a [[Neovim_(software)|vim]] mode that uses
> [rope](https://github.com/python-rope/rope) library to provide features like
> python refactorings and code-assists. You should install rope library before
> using ropevim. -- [ropevim](https://github.com/python-rope/ropevim)

## Quick start

```bash
# install plugin in neovim
# on issues maybe need remov .ropeproject or fix python3_host_prog
# (disable virtualenv/pyenv)
pip install pynvim # for neovim
pip install ropevim
```