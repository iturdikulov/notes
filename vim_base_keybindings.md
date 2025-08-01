---
created: 2024-03-03T00:00+03:00
tags:
  - blog
  - computer_programming_tools
  - cheat-sheets
sr-due: 2025-08-27
sr-interval: 48
sr-ease: 229
---

# Vim base keybindings

I inspired by ThePirmeagen video [^1] to create this note, this cover small
subset of [[Neovim]] keybindings.

## 1. Movement/editing/writing Hotkeys:

`h word-motions`:

`h`:<wbr class="f"> move left ← (shot arrow left)
`j`:<wbr class="f"> move down ↓ (shot arrow down)
`k`:<wbr class="f"> move up ↑ (shot arrow up)
`l`:<wbr class="f"> move right → (shot arrow right)

All jumps support motions:<wbr class="f"> `d[ia]`, `c[ia]`, `y[ia]`, `v[ia]`!

`)`:<wbr class="f"> jump by sentence forward, next bed 🛏️ (top/in)
`(`:<wbr class="f"> jump by sentence backward, previous bed 🛏️ (top/in)

`}`:<wbr class="f"> jump by paragraphs (downward), next house level roof 𓉩
`{`:<wbr class="f"> jump by paragraphs (upward), previous house level roof 𓉩

`]]`:<wbr class="f"> jump by section (downward), next house roof 🏘️
`[[`:<wbr class="f"> jump by section (upward), previous house roof 🏘️

`w/W`:<wbr class="f"> jump by start of words, next snake head 🐍
`b/B`:<wbr class="f"> jump backward by words, previous snake head 🐍

`e/E`:<wbr class="f"> jump to end of words, next peacock tail 🦚
`ge/gE`:<wbr class="f"> jump backward to end of words (reverse e), previous peacock tail 🦚

`=motion`:<wbr class="f"> filter (equalprog) / indent text, filter text 🧹

`gi`:<wbr class="f"> jump to last insert position, last time writing place 📚

`gv`:<wbr class="f"> re-select last visual selection 🖍️

`gw`:<wbr class="f"> format lines to text width, format lines to text width (cursor stay) 📏
`gq`:<wbr class="f"> format lines to text width, format lines to text width (cursor reset) 📏

`0`:<wbr class="f"> start of line, start of the track with reserve 🛣️

`^`:<wbr class="f"> first non-blank character of line, start of the track 🛣️

`_`:<wbr class="f"> first non-blank character of line, in motions linewise, whole line

`$`:<wbr class="f"> end of line, finish line 🏁

`G`:<wbr class="f"> End (prefix with number), basement ⬇

`i`:<wbr class="f"> start insert mode at cursor, put a stamp before ✔️

`a`:<wbr class="f"> append after the cursor, put a stamp after ✔️
`I`:<wbr class="f"> insert at the beginning of the line, put a stamp on left document side (after padding) `[| ]`
`A`:<wbr class="f"> append at the end of the line, put a stamp on right document side (after padding) `[ ]|`

`o`:<wbr class="f"> open (append) blank line below current line, add a new empty line below current line 📝
`O`:<wbr class="f"> open blank line above current line, add a new line above current line 📝

`e a`:<wbr class="f"> append at end of word, add char after peacock tail 🦚

`r`:<wbr class="f"> replace a single character (does not use insert mode), toggle a single character 🔄

`J`:<wbr class="f"> join line below to the current one, remove bed legs 🛏️

`cc`:<wbr class="f"> change (replace) an entire line, replace bed mattress 🛏️

`cw`:<wbr class="f"> change (replace) to the end of word, cut peacock until tail 🦚

`c$`:<wbr class="f"> change (replace) to the end of line, cut until finish line 🏁

`ss*`:<wbr class="f"> delete character at cursor and substitute text, originally used `s`, remove stamp and put a new one ✔️

`S`:<wbr class="f"> delete line at cursor (except leading whitespace) and substitute text (same as cc), cut whole line and place a new one 📝

`yy`:<wbr class="f"> yank (copy) a line
`2yy`:<wbr class="f"> yank 2 lines

`yw`:<wbr class="f"> yank word, yank until peacock tail 🦚

`y$`:<wbr class="f"> yank to end of line, yank until finish line 🏁

`p`:<wbr class="f"> put (paste) the clipboard after cursor, put a stamp after ✔️

`p`:<wbr class="f"> put (paste) before cursor, put a stamp before ✔️

`dd`:<wbr class="f"> delete (cut) a line, all charactres including new line

`dw`:<wbr class="f"> delete (cut) the current word, delete until peacock tail 🦚

`x`:<wbr class="f"> delete (cut) current character, remove a stamp ✔️

`:w`:<wbr class="f"> write (save) the file, but don't exit, 💾

`:wq`:<wbr class="f"> write (save) and quit, 💾 and 🚪

`:q`:<wbr class="f"> quit (fails if anything has changed), quit, but check all stuff 🚪

`:q!`:<wbr class="f"> quit and throw away changes, quit and throw away all stuff 🚪

`~`:<wbr class="f"> case toggle (also useful `gU...`), grow a beard 🧔


## 2. File/window hotkeys:

`%`:<wbr class="f"> find matching bracket (or other items, you can also combine `va%`), find matching bracket 🧲

`f`:<wbr class="f"> search forward for character, search ? forward 🔍

`F`:<wbr class="f"> search backward for character, search ? backward 🔎

`t`:<wbr class="f"> search forward for space before character, search _? forward 🔍

`T`:<wbr class="f"> search backward for space after character (reverse of t), search ?_ backward 🔎

`/pattern`:<wbr class="f"> search for pattern, search forward (left-right each line) 🔍

`?pattern`:<wbr class="f"> search backward for pattern, search backward (right-left each line) 🔎

`n`:<wbr class="f"> 	repeat search in same direction, search again 🔍

`N`:<wbr class="f"> 	repeat search in opposite direction, search again 🔎

`:e filename`:<wbr class="f"> Edit a file in a new buffer, create a new file 📝

`:bnext (or :bn)`:<wbr class="f"> go to next buffer, next page → 📄

`:bprev (of :bp)`:<wbr class="f"> go to previous buffer, previous page ← 📄

`:bd`:<wbr class="f"> 	delete a buffer (close a file), cut a page ✂️ 📄

`:sp filename`:<wbr class="f"> Open a file in a new buffer and split window, cut a page in half ✂️ 📄

`:Ex`:<wbr class="f"> Open file explorer, open file explorer 📂

`ctrl+wv`:<wbr class="f"> 	Split windows vertically, cut a page in half vertically ✂️ 📄

`ctrl+ws`:<wbr class="f"> Split windows, cut a page in half ✂️ 📄

`ctrl+ww`:<wbr class="f"> switch between windows, switch between pages 📄 🔄 📄

`ctrl+wq`:<wbr class="f"> Quit a window, cut a part of page or whole page ✂️ 📄

`c-w+hjkl`
<br class="f">
                                                          📄
Move to window in direction, move to page in direction 📄 🔄 📄
                                                          📄

`C-w o`:<wbr class="f"> Close other windows, cut other pages ✂️ 📄

## References

[^1]: [Two Simple Steps to go from IDE to Vim - YouTube](https://www.youtube.com/watch?v=1UXHsCT18wE)
