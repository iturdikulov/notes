---
date: 2023-04-06T00:00+03:00
tags:
  - blog
  - SR-productivity
external:
  - https://github.com/nvim-telescope/telescope.nvim
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 228
---

# Telescope - Neovim plugin

Highly extendable fuzzy finder over lists. Telescope is centered around
modularity, allowing for easy customization.

> Find, Filter, Preview, Pick. All lua, all the time.
> Gaze deeply into unknown regions using the power of the moon.\
> — <cite>[GitHub](https://github.com/nvim-telescope/telescope.nvim)</cite>

One of my most-used [[Neovim]] plugins, I use it for project navigation,
filtering search, and many other things.

## Keyboard shortcuts

Mappings are fully customizable. Many familiar mapping patterns are set up as
defaults.

- Show mappings for picker actions (insert mode)::`C-/`
- Show mappings for picker actions (normal mode)::`?`
- Next item::`C-n` / `Down`
- Previous item::`C-p` / `Up`
- Next/previous (in normal mode)::`j/k`
- Select High/Middle/Low (in normal mode)::`H/M/L`
- Select the first/last item (in normal mode)::`gg/G`
- Confirm selection::`CR`
- Go to file selection as a split::`C-x`
- Go to file selection as a vsplit::`C-v`
- Go to a file in a new tab::`C-t`
- Scroll up in preview window::`C-u`
- Scroll down in preview window::`C-d`
- Close telescope::`C-c`
- Toggle selection and move to next selection::`Tab`
- Toggle selection and move to prev selection::`S-Tab`
- Send all items not filtered to quickfixlist (qflist)::`C-q`
- Send all selected items to qflist::`M-q`
- Change directory functionality to some pickers, like find files (custom mappng)::`cd`
