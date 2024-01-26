---
date: 2023-06-09
tags:
  - inbox
  - SR_software
  - SR_vim
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 246
---

# Ropevim, rope in vim

> Ropevim is a [[Neovim|vim]] mode that uses
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