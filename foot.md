---
date: 2025-02-20T08:47+03:00
tags:
  - blog
  - productivity
---

# foot - minimalistic terminal emulator

> The fast, lightweight and minimalistic Wayland terminal emulator.\
> — <cite>[foot](https://codeberg.org/dnkl/foot)</cite>

foot supports all [[font|fonts]] that can be loaded by freetype, including
bitmap fonts and color emoji fonts.

## Keyboard shortcuts

`<S-PageUp>`/`<S-PageDown>`: Scroll history
`<C-S-c>`, `XF86Copy`: Copy selection into clipboard
`<C-S-v>`, `XF86Paste`: Paste
`<S-Insert>`: Paste primary
`<C-=>`: Enlarge font
`<C-->`: Shrink font
`<C-0>`: Reset font
`<C-S-n>`: New terminal

`<C-S-o>`: URL open mode
`<C-S-u>`: Unicode input
`<C-S-z>`: Prev prompt
`<C-S-x>`: Next prompt

Scrollback search:

`<C-S-r>`: Start scrollback search
`<C-r>`: Search back
`<C-s>`: Search forward
`<C-w>`: Extend word
`<C-S-w>`: Extend word, but separate words only with spaces
`<C-v>`, `<C-S-v>`, `<C-y>`, `XF86Paste`: Paste search
`<S-Insert>`: Paste search primary
`<Esc>`, `<C-g>`: Cancel search
`<CR>`: Finish the search and copy the current match to the primary selection

URL mode:

`t`: Toggle URL display
`<Esc>`, `<C-c>`, `<C-g>`, `<C-d>`: Exit URL mode
