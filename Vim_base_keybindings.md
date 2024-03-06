---
date: 2024-03-03
tags:
  - inbox
---

# Vim base keybindings

I inspired by ThePirmeagen video [^1] to create this note, this cover small
subset of [[Neovim]] keybindings.



## 1. Movement/editing/writing Hotkeys:

`h word-motions`

h::move left ← (shot arrow left)
j::move down ↓ (shot arrow down)
k::move up ↑ (shot arrow up)
l::move right → (shot arrow right)

)::jump by sentence forward, next bed 🛏️ (top/in)
(::jump by sentence backward, previous bed 🛏️ (top/in)

}::jump by paragraphs (downward), next house floor roof 𓉩
{::jump by paragraphs (upward), previous house roof roof 𓉩

]]::jump by section (downward), next house roof 🏘️
[[::jump by section (upward), previous house roof 🏘️

w/W::jump by start of words, next snake head 🐍
b/B::jump backward by words, previous snake head 🐍

e/E::jump to end of words, next peacock tail 🦚
ge/gE::jump backward to end of words, previous peacock tail 🦚

0::start of line, start of the track with reserve 🛣️

^::first non-blank character of line, start of the track 🛣️

_::first non-blank character of line, in motions linewise, whole line

$::end of line, finish line 🏁

G::End (prefix with number), basement ⬇

i::start insert mode at cursor, put a stamp before ✔️

a::append after the cursor, put a stamp after ✔️
I::insert at the beginning of the line, put a stamp on left document side (after padding) `[| ]`
A::append at the end of the line, put a stamp on right document side (after padding) `[ ]|`

o::open (append) blank line below current line, add a new line below current line 📝
O::open blank line above current line, add a new line above current line 📝

ea::append at end of word, add char after peacock tail 🦚

r::replace a single character (does not use insert mode), toggle a single character 🔄

J::join line below to the current one, remove bed legs 🛏️

cc::change (replace) an entire line, replace bed mattress 🛏️

cw::change (replace) to the end of word, cut peacock until tail 🦚

c$::change (replace) to the end of line, cut until finish line 🏁

s::delete character at cursor and substitute text

S::delete line at cursor and substitute text (same as cc)

yy::yank (copy) a line

2yy::yank 2 lines

yw::yank word

y$::yank to end of line

p::put (paste) the clipboard after cursor

P::put (paste) before cursor

dd::delete (cut) a line

dw::delete (cut) the current word

x::delete (cut) current character

:w::write (save) the file, but don't exit

:wq::write (save) and quit

:q::quit (fails if anything has changed)

:q!::quit and throw away changes



## 2. File/window hotkeys:

/pattern::search for pattern

?pattern::search backward for pattern

n::	repeat search in same direction

N::	repeat search in opposite direction

:e filename::Edit a file in a new buffer

:bnext (or :bn)::go to next buffer

:bprev (of :bp)::go to previous buffer

:bd::	delete a buffer (close a file)

:sp filename::Open a file in a new buffer and split window

ctrl+ws::	Split windows

ctrl+ww::	switch between windows

ctrl+wq::	Quit a window

ctrl+wv::	Split windows vertically

## References

[^1]: [Two Simple Steps to go from IDE to Vim - YouTube](https://www.youtube.com/watch?v=1UXHsCT18wE)
