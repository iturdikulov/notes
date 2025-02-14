---
date: 2022-12-03T00:00+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2024-02-06
sr-interval: 9
sr-ease: 250
---

# Z shell (zsh)

> The Z shell (Zsh) is a [[Unix]] shell that can be used as an interactive login
> shell and as a command interpreter for shell scripting. Zsh is an extended
> Bourne shell with many improvements, including some features of [[Bash]], ksh,
> and tcsh.
>
> Zsh was created by Paul Falstad in 1990 while he was a student at Princeton
> University. It combines features from both ksh and tcsh, offering
> functionality such as programmable command-line completion, extended file
> globbing, improved variable/array handling, and themeable prompts.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Z_shell)</cite>

Shell is the interface between a user and the system itself. Which main layers
it consists of, first layer is program:
<br class="f">
```
+----------------+
|  Program/User  |
+----------------+
|  Shell         |
+----------------+
|  Kernel        |
+----------------+
|  Hardware      |
+----------------+
```

## Zsh learning path

- [[GNU_Readline]] for additional keybindings.
- [ ] [Advanced topics to take advantage of zsh](https://github.com/rothgar/mastering-zsh)
- [ ] [Z Shell Keyboard Shortcuts - Copperlight Writes](https://copperlight.github.io/shell/zsh-keyboard-shortcuts/)
- [ ] [config_manager/xdg_config/zsh/.zshrc at master · tjdevries/config_manager · GitHub](https://github.com/tjdevries/config_manager/blob/master/xdg_config/zsh/.zshrc)

## Basic keyboard bindings

`bindkey -L`:<wbr class="f"> List current shortcuts

- `C-r`:<wbr class="f"> Reverse search history
- `C-p`:<wbr class="f"> Previous command in history
- `C-n`:<wbr class="f"> Next command in history
- `/`:<wbr class="f"> Search backward in history
- `C-i`:<wbr class="f"> command completion like Tab
- `C-l`:<wbr class="f"> Clear the screen (same as clear command)
- `C-c`:<wbr class="f"> kill whatever is running
- `C-d`:<wbr class="f"> Exit shell (same as exit command when cursor line is empty)
- `C-z`:<wbr class="f"> Place current process in background

## ZSH vi mode

=command - Locate path of executable or command, can be used to run some aliased
program itself, `=watch`

Use `ESC` or `CTRL-[` to enter `Normal mode`. In `Normal mode` you can use `vv`
to edit current command line in an editor (e.g. `vi`/`vim`/`nvim`...), because
it is bound to the `Visual mode`.

You can change the editor by `ZVM_VI_EDITOR` option, by default it is
`$EDITOR`.

### Movement

- `$`:<wbr class="f"> To the end of the line
- `^`:<wbr class="f"> To the first non-blank character of the line
- `0`:<wbr class="f"> To the first character of the line
- `w`:<wbr class="f"> [count] words forward
- `W`:<wbr class="f"> [count] WORDS forward
- `e`:<wbr class="f"> Forward to the end of word [count] inclusive
- `E`:<wbr class="f"> Forward to the end of WORD [count] inclusive
- `b`:<wbr class="f"> [count] words backward
- `B`:<wbr class="f"> [count] WORDS backward
- `t{char}`:<wbr class="f"> Till before [count]'th occurrence of {char} to the right
- `T{char}`:<wbr class="f"> Till before [count]'th occurrence of {char} to the left
- `f{char}`:<wbr class="f"> To [count]'th occurrence of {char} to the right
- `F{char}`:<wbr class="f"> To [count]'th occurrence of {char} to the left
- `;`:<wbr class="f"> Repeat latest f, t, F or T [count] times
- `,`:<wbr class="f"> Repeat latest f, t, F or T in opposite direction

### Insertion

- `i`:<wbr class="f"> Insert text before the cursor
- `I`:<wbr class="f"> Insert text before the first character in the line
- `a`:<wbr class="f"> Append text after the cursor
- `A`:<wbr class="f"> Append text at the end of the line
- `o`:<wbr class="f"> Insert new command line below the current one
- `O`:<wbr class="f"> Insert new command line above the current one

### Surround

There are 2 kinds of keybinding mode for surround operating, default is
`classic` mode, you can choose the mode by setting `ZVM_VI_SURROUND_BINDKEY`
option.

1. Classic mode (verb->s->surround)

- `S"`:<wbr class="f"> Add `"` for visual selection
- `ys"`:<wbr class="f"> Add `"` for visual selection
- `cs"'`:<wbr class="f"> Change `"` to `'`
- `ds"`:<wbr class="f"> Delete `"`

2. S-prefix mode (s->verb->surround)
- `sa"`:<wbr class="f"> Add `"` for visual selection
- `sd"`:<wbr class="f"> Delete `"`
- `sr"'`:<wbr class="f"> Change `"` to `'`

Note that key sequences must be pressed in fairly quick succession to avoid a
timeout. You may extend this timeout with the `ZVM_KEYTIMEOUT` option

### How to select surround text object?

- `vi"`:<wbr class="f"> Select the text object inside the quotes
- `va(`:<wbr class="f"> Select the text object including the brackets

Then you can do any operation for the selection:

1. Add surrounds for text object

- `vi"` -> `S[` or `sa[` => `"object"` -> `"[object]"`
- `va"` -> `S[` or `sa[` => `"object"` -> `["object"]`

2. Delete/Yank/Change text object

- `di(` or `vi(` -> `d`
- `ca(` or `va(` -> `c`
- `yi(` or `vi(` -> `y`

### Search in current line

To search across the line, you can use `f` and `F` to search for the next and
previous occurrence of a character on the current line.

You can combine this with `;` and `,` to repeat the search in the same and the
opposite direction and `0` to jump to the beginning of the line and then do
search.

`0f{char}` - search for the first occurrence of `{char}` on the current line
`5f{char}` - search for the fifth occurrence of `{char}` on the current line
`0f{char};` - search for the first occurrence of `{char}` on the current line
and then repeat the search in the same direction.
