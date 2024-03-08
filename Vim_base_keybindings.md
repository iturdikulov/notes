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
<!--SR:!2024-03-10,2,247-->
`k`::move up ↑ (shot arrow up)
`l`::move right → (shot arrow right)
<!--SR:!2024-03-09,1,225-->

All jumps support motions::`d[ia]`, `c[ia]`, `y[ia]`, `v[ia]`!
<!--SR:!2024-03-09,1,225-->

`)`::jump by sentence forward, next bed 🛏️ (top/in)
<!--SR:!2024-03-09,2,248-->
`(`::jump by sentence backward, previous bed 🛏️ (top/in)
<!--SR:!2024-03-10,2,228-->

`}`::jump by paragraphs (downward), next house level roof 𓉩
<!--SR:!2024-03-10,2,247-->
`{`::jump by paragraphs (upward), previous house level roof 𓉩
<!--SR:!2024-03-09,2,248-->

`]]`::jump by section (downward), next house roof 🏘️
<!--SR:!2024-03-10,2,245-->
`[[`::jump by section (upward), previous house roof 🏘️
<!--SR:!2024-03-10,2,245-->

`w/W`::jump by start of words, next snake head 🐍
`b/B`::jump backward by words, previous snake head 🐍
<!--SR:!2024-03-10,2,247-->

`e/E`::jump to end of words, next peacock tail 🦚
<!--SR:!2024-03-10,2,227-->
`ge/gE`::jump backward to end of words (reverse e), previous peacock tail 🦚
<!--SR:!2024-03-10,2,245-->

`=motion`::filter (equalprog) / indent text, filter text 🧹

`gi`::jump to last insert position, last time writing place 📚

`gv`::re-select last visual selection 🖍️
<!--SR:!2024-03-10,2,247-->

`gw`::format lines to text width, format lines to text width (cursor stay) 📏
`gq`::format lines to text width, format lines to text width (cursor reset) 📏
<!--SR:!2024-03-09,2,248-->

`0`::start of line, start of the track with reserve 🛣️
<!--SR:!2024-03-10,2,245-->

`^`::first non-blank character of line, start of the track 🛣️
<!--SR:!2024-03-09,2,248-->

`_`::first non-blank character of line, in motions linewise, whole line
<!--SR:!2024-03-09,1,210-->

`$`::end of line, finish line 🏁

`G`::End (prefix with number), basement ⬇
<!--SR:!2024-03-10,2,247-->

`i`::start insert mode at cursor, put a stamp before ✔️
<!--SR:!2024-03-09,2,248-->

`a`::append after the cursor, put a stamp after ✔️
<!--SR:!2024-03-10,2,247-->
`I`::insert at the beginning of the line, put a stamp on left document side (after padding) `[| ]`
<!--SR:!2024-03-09,1,227-->
`A`::append at the end of the line, put a stamp on right document side (after padding) `[ ]|`
<!--SR:!2024-03-10,2,245-->

`o`::open (append) blank line below current line, add a new empty line below current line 📝
<!--SR:!2024-03-09,2,247-->
`O`::open blank line above current line, add a new line above current line 📝

`e a`::append at end of word, add char after peacock tail 🦚
<!--SR:!2024-03-09,1,208-->

`r`::replace a single character (does not use insert mode), toggle a single character 🔄
<!--SR:!2024-03-09,2,248-->

`J`::join line below to the current one, remove bed legs 🛏️

`cc`::change (replace) an entire line, replace bed mattress 🛏️
<!--SR:!2024-03-10,2,247-->

`cw`::change (replace) to the end of word, cut peacock until tail 🦚
<!--SR:!2024-03-10,2,247-->

`c$`::change (replace) to the end of line, cut until finish line 🏁

`ss*`::delete character at cursor and substitute text, originally used `s`, remove stamp and put a new one ✔️
<!--SR:!2024-03-09,2,248-->

`S`::delete line at cursor (except leading whitespace) and substitute text (same as cc), cut whole line and place a new one 📝
<!--SR:!2024-03-10,2,227-->

`yy`::yank (copy) a line
`2yy`::yank 2 lines
<!--SR:!2024-03-10,2,245-->

`yw`::yank word, yank until peacock tail 🦚
<!--SR:!2024-03-09,2,247-->

`y$`::yank to end of line, yank until finish line 🏁

`p`::put (paste) the clipboard after cursor, put a stamp after ✔️

`p`::put (paste) before cursor, put a stamp before ✔️

`dd`::delete (cut) a line, all charactres including new line
<!--SR:!2024-03-09,2,247-->

`dw`::delete (cut) the current word, delete until peacock tail 🦚

`x`::delete (cut) current character, remove a stamp ✔️
<!--SR:!2024-03-10,2,247-->

`:w`::write (save) the file, but don't exit, 💾
<!--SR:!2024-03-09,1,225-->

`:wq`::write (save) and quit, 💾 and 🚪
<!--SR:!2024-03-10,3,250-->

`:q`::quit (fails if anything has changed), quit, but check all stuff 🚪
<!--SR:!2024-03-10,2,247-->

`:q!`::quit and throw away changes, quit and throw away all stuff 🚪
<!--SR:!2024-03-10,2,245-->

`~`::case toggle (also useful `gU...`), grow a beard 🧔


## 2. File/window hotkeys:

`%`::find matching bracket (or other items, you can also combine `va%`), find matching bracket 🧲

`f`::search forward for character, search ? forward 🔍
<!--SR:!2024-03-10,2,245-->

`F`::search backward for character, search ? backward 🔎

`t`::search forward for space before character, search _? forward 🔍
<!--SR:!2024-03-09,2,248-->

`T`::search backward for space after character (reverse of t), search ?_ backward 🔎
<!--SR:!2024-03-09,1,225-->

`/pattern`::search for pattern, search forward (left-right each line) 🔍
<!--SR:!2024-03-10,2,245-->

`?pattern`::search backward for pattern, search backward (right-left each line) 🔎
<!--SR:!2024-03-09,2,248-->

`n`::	repeat search in same direction, search again 🔍
<!--SR:!2024-03-10,2,247-->

`N`::	repeat search in opposite direction, search again 🔎
<!--SR:!2024-03-10,3,250-->

`:e filename`::Edit a file in a new buffer, create a new file 📝

`:bnext (or :bn)`::go to next buffer, next page → 📄
<!--SR:!2024-03-10,3,250-->

`:bprev (of :bp)`::go to previous buffer, previous page ← 📄
<!--SR:!2024-03-10,2,247-->

`:bd`::	delete a buffer (close a file), cut a page ✂️ 📄
<!--SR:!2024-03-10,2,247-->

`:sp filename`::Open a file in a new buffer and split window, cut a page in half ✂️ 📄
<!--SR:!2024-03-09,1,227-->

`:Ex`::Open file explorer, open file explorer 📂

`ctrl+wv`::	Split windows vertically, cut a page in half vertically ✂️ 📄
<!--SR:!2024-03-09,2,248-->

`ctrl+ws`::Split windows, cut a page in half ✂️ 📄
<!--SR:!2024-03-10,2,245-->

`ctrl+ww`::switch between windows, switch between pages 📄 🔄 📄
<!--SR:!2024-03-09,2,248-->

`ctrl+wq`::	Quit a window, cut a part of page or whole page ✂️ 📄

`c-w+hjkl`
&#10;
                                                          📄
Move to window in direction, move to page in direction 📄 🔄 📄
                                                          📄
<!--SR:!2024-03-09,2,248-->

`C-w o`::Close other windows, cut other pages ✂️ 📄

## References

[^1]: [Two Simple Steps to go from IDE to Vim - YouTube](https://www.youtube.com/watch?v=1UXHsCT18wE)
