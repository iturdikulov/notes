---
external:
  - https://github.com/SidOfc/mkdx
created: 2023-04-05T00:00+03:00
tags:
  - blog
  - markdown
sr-due: 2025-07-22
sr-interval: 3
sr-ease: 252
---

# mkdx.vim

> mkdx.vim is a Markdown plugin that aims to reduce the time you spend formatting your [[markdown]] documents.\
> — <cite>[GitHub](https://github.com/SidOfc/mkdx)</cite>

Not use it's right now, I think it's too complicated for me, maybe in the future. I switched to the simplest plugin ([antonk52/markdowny.nvim](https://github.com/antonk52/markdowny.nvim)) to quick formatting, etc.

## Notes

When inside a link, typing a URL that starts with a ==`#`== will show a list of autocompletion based on the links of all the headers in the document.

Pressing `o` `O` and `<cr>` in insert mode on list item will ==create== a new list item (bullet on numeric). To insert a new line, press `<shift+enter>`.

Numbered list items will be ==renumbered== upon indenting / un-indenting. The algorithm for this is still pretty basic but attempts to ensure correct nesting. This feature uses `tab` and `shift+tab` to indent and unindent respectively.

## Core hotkeys

Wrap link:<wbr class="f"> `<leader>ln`

Toggle checklist item:<wbr class="f"> `<leader>t`

Toggle list item:<wbr class="f"> `<leader>ll`

Toggle task item (support visual mode):<wbr class="f"> `<leader>t`

Toggling lines from / to checklist items (alternative to telekasten `<leader>zt`)
<br class="f">
`<leader>lt`

Completing Checkboxes / Checklists (support visual mode, can be combined)
<br class="f">
`<leader>=` and `<leader>-` Sort of `+/-`

Dead link detection:<wbr class="f"> `<leader>L`

Insert kbd shortcut:<wbr class="f"> `<<tab>`

Toggling and promoting / demoting Headers:<wbr class="f"> `<leader>]` and `<leader>[`

Toggling Quotes:<wbr class="f"> `<leader>'`

Toggle links:<wbr class="f"> `<leader>ln`

Toggle as bold / italic / inline-code / strike-through, where n is a number of words
<br class="f">

- `n<leader>/` → italic
- `n<leader>b` → bold
- `` n<leader>` `` → inline code
- `n<leader>s` → strike-through

Convert CSV to table and back:<wbr class="f"> `<leader>,`

Jump to header:<wbr class="f"> `<leader>j`*

Generate or update TOC (you can also use details markup):<wbr class="f"> `<leader>i`

Open TOC in quickfix window (you can use `:cn` to navigate):<wbr class="f"> `<leader>I`
