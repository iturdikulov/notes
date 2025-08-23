---
created: 2023-04-06T00:00+03:00
tags:
  - blog
  - ends
external:
  - https://github.com/nvim-telescope/telescope.nvim
sr-due: 2025-07-27
sr-interval: 17
sr-ease: 168
---

# Telescope - Neovim plugin

Highly extendable fuzzy finder over lists. Telescope is centered around modularity, allowing for easy customization.

> Find, Filter, Preview, Pick. All lua, all the time. Gaze deeply into unknown regions using the power of the moon.\
> — <cite>[GitHub](https://github.com/nvim-telescope/telescope.nvim)</cite>

One of my most-used [[Neovim]] plugins, I use it for project navigation, filtering search, and many other things.

## Keyboard shortcuts

Mappings are fully customizable. Many familiar mapping patterns are set up as defaults.

- Show mappings for picker actions (insert mode):<wbr class="f"> `C-/`
- Show mappings for picker actions (normal mode):<wbr class="f"> `?`
- Next item:<wbr class="f"> `C-n` / `Down`
- Previous item:<wbr class="f"> `C-p` / `Up`
- Next/previous (in normal mode):<wbr class="f"> `j/k`
- Select High/Middle/Low (in normal mode):<wbr class="f"> `H/M/L`
- Select the first/last item (in normal mode):<wbr class="f"> `gg/G`
- Confirm selection:<wbr class="f"> `CR`
- Go to file selection as a split:<wbr class="f"> `C-x`
- Go to file selection as a vsplit:<wbr class="f"> `C-v`
- Go to a file in a new tab:<wbr class="f"> `C-t`
- Scroll up in preview window:<wbr class="f"> `C-u`
- Scroll down in preview window:<wbr class="f"> `C-d`
- Close telescope:<wbr class="f"> `C-c`
- Toggle selection and move to next selection:<wbr class="f"> `Tab`
- Toggle selection and move to prev selection:<wbr class="f"> `S-Tab`
- Send all items not filtered to quickfixlist (qflist):<wbr class="f"> `C-q`
- Send all selected items to qflist:<wbr class="f"> `M-q`
- Change directory functionality to some pickers, like find files (custom mappng):<wbr class="f"> `cd`
