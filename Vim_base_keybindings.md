---
date: 2024-03-03
tags:
  - inbox
  - SR_vim
---

# Vim base keybindings

I inspired by ThePirmeagen video [^1] to create this note, this cover small
subset of [[Neovim]] keybindings.

## 1. Movement/editing/writing Hotkeys:

`h word-motions`

`h`::move left ← (shot arrow left)
`j`::move down ↓ (shot arrow down)
`k`::move up ↑ (shot arrow up)
`l`::move right → (shot arrow right)

All jumps support motions::`d[ia]`, `c[ia]`, `y[ia]`, `v[ia]`!

`)`::jump by sentence forward, next bed 🛏️ (top/in)
`(`::jump by sentence backward, previous bed 🛏️ (top/in)

`}`::jump by paragraphs (downward), next house level roof 𓉩
`{`::jump by paragraphs (upward), previous house level roof 𓉩

`]]`::jump by section (downward), next house roof 🏘️
`[[`::jump by section (upward), previous house roof 🏘️

`w/W`::jump by start of words, next snake head 🐍
`b/B`::jump backward by words, previous snake head 🐍

`e/E`::jump to end of words, next peacock tail 🦚
`ge/gE`::jump backward to end of words, previous peacock tail 🦚

`={motion}`::filter (equalprog) / indent text, filter text 🧹

`gi`::jump to last insert position, last time writing place 📚

`gv`::re-select last visual selection, re-select last visual selection 🖍️

`gw`::format lines to text width, format lines to text width (cursor stay) 📏
`gq`::format lines to text width, format lines to text width (cursor reset) 📏

`0`::start of line, start of the track with reserve 🛣️

`^`::first non-blank character of line, start of the track 🛣️

`_`::first non-blank character of line, in motions linewise, whole line

`$`::end of line, finish line 🏁

`G`::End (prefix with number), basement ⬇

`i`::start insert mode at cursor, put a stamp before ✔️

`a`::append after the cursor, put a stamp after ✔️
`I`::insert at the beginning of the line, put a stamp on left document side (after padding) `[| ]`
`A`::append at the end of the line, put a stamp on right document side (after padding) `[ ]|`

`o`::open (append) blank line below current line, add a new line below current line 📝
`O`::open blank line above current line, add a new line above current line 📝

`ea`::append at end of word, add char after peacock tail 🦚

`r`::replace a single character (does not use insert mode), toggle a single character 🔄

`J`::join line below to the current one, remove bed legs 🛏️

`cc`::change (replace) an entire line, replace bed mattress 🛏️

`cw`::change (replace) to the end of word, cut peacock until tail 🦚

`c$`::change (replace) to the end of line, cut until finish line 🏁

`ss*`::delete character at cursor and substitute text, originally used `s`, remove stamp and put a new one ✔️

`S`::delete line at cursor and substitute text (same as cc), cut whole line and place a new one 📝

`yy`::yank (copy) a line
`2yy`::yank 2 lines

`yw`::yank word, yank until peacock tail 🦚

`y$`::yank to end of line, yank until finish line 🏁

`p`::put (paste) the clipboard after cursor, put a stamp after ✔️

`p`::put (paste) before cursor, put a stamp before ✔️

`dd`::delete (cut) a line

`dw`::delete (cut) the current word, delete until peacock tail 🦚

`x`::delete (cut) current character, remove a stamp ✔️

`:w`::write (save) the file, but don't exit, 💾

`:wq`::write (save) and quit, 💾 and 🚪

`:q`::quit (fails if anything has changed), quit, but check all stuff 🚪

`:q!`::quit and throw away changes, quit and throw away all stuff 🚪

`~`::case toggle (also useful `gU...`), grow a beard 🧔


## 2. File/window hotkeys:

`%`::find matching bracket (or other items, you can also combine `va%`), find matching bracket 🧲

`f`::search forward for character, search ? forward 🔍

`F`::search backward for character, search ? backward 🔎

`t`::search forward for space before character, search _? forward 🔍

`T`::search backward for space after character, search ?_ backward 🔎

`/pattern`::search for pattern, search forward (left-right each line) 🔍

`?pattern`::search backward for pattern, search backward (right-left each line) 🔎

`n`::	repeat search in same direction, search again 🔍

`N`::	repeat search in opposite direction, search again 🔎

`:e filename`::Edit a file in a new buffer, create a new file 📝

`:bnext (or :bn)`::go to next buffer, next page → 📄

`:bprev (of :bp)`::go to previous buffer, previous page ← 📄

`:bd`::	delete a buffer (close a file), cut a page ✂️ 📄

`:sp filename`::Open a file in a new buffer and split window, cut a page in half ✂️ 📄

`:Ex`::Open file explorer, open file explorer 📂

`ctrl+wv`::	Split windows vertically, cut a page in half vertically ✂️ 📄

`ctrl+ws`::Split windows, cut a page in half ✂️ 📄

`ctrl+ww`::switch between windows, switch between pages 📄 🔄 📄

`ctrl+wq`::	Quit a window, cut a part of page or whole page ✂️ 📄

`c-w+hjkl`
&#10;
                                                          📄
Move to window in direction, move to page in direction 📄 🔄 📄
                                                          📄

`C-w o`::Close other windows, cut other pages ✂️ 📄

## References

[^1]: [Two Simple Steps to go from IDE to Vim - YouTube](https://www.youtube.com/watch?v=1UXHsCT18wE)
