---
date: 2023-04-06
tags:
  - inbox
  - productivity
external:
  - https://github.com/nvim-telescope/telescope.nvim
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 228
---

# Telescope - [[Neovim]] plugin

Highly extendable fuzzy finder over lists. Telescope is centered around
modularity, allowing for easy customization.

> Find, Filter, Preview, Pick. All lua, all the time.
> Gaze deeply into unknown regions using the power of the moon.\
> — <cite>[GitHub](https://github.com/nvim-telescope/telescope.nvim)</cite>

## Default Mappings

Mappings are fully customizable. Many familiar mapping patterns are set up as defaults.

TODO: More info, format flashcards

    TODO: convert to flashcards
    <C-n>/<Down> - Next item
    <C-p>/<Up> - Previous item
    j/k - Next/previous (in normal mode)
    H/M/L - Select High/Middle/Low (in normal mode)
    gg/G - Select the first/last item (in normal mode)
    <CR> - Confirm selection
    <C-x> - Go to file selection as a split
    <C-v> - Go to file selection as a vsplit
    <C-t> - Go to a file in a new tab
    <C-u> - Scroll up in preview window
    <C-d> - Scroll down in preview window
    <C-/> - Show mappings for picker actions (insert mode)
    ? - Show mappings for picker actions (normal mode)
    <C-c> - Close telescope
    <Esc> - Close telescope (in normal mode)
    <Tab> - Toggle selection and move to next selection
    <S-Tab> - Toggle selection and move to prev selection
    <C-q> - Send all items not filtered to quickfixlist (qflist)
    <M-q> - Send all selected items to qflist

