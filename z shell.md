---
title: Z shell
date:  2022-12-03
tags:
    - inbox
    - definition
draft: true
sr-due: 2023-03-16
sr-interval: 3
sr-ease: 250
---


# TODO: check this...

<https://github.com/alexanderepstein/Bash-Snippets>

# Kill process by pattern

Use pkill -f, which matches the pattern for any part of the command line

`pkill -f my_pattern`

Just in case it doesn\'t work, try to use this one as well:

`pkill -9 -f my_pattern`

<https://stackoverflow.com/questions/8987037/how-to-kill-all-processes-with-a-given-partial-name>

* TODO
  https://github.com/alexanderepstein/Bash-Snippets

* Kill process by pattern

Use pkill -f, which matches the pattern for any part of the command line

~pkill -f my_pattern~

Just in case it doesn't work, try to use this one as well:

~pkill -9 -f my_pattern~

https://stackoverflow.com/questions/8987037/how-to-kill-all-processes-with-a-given-partial-name

Moving
command	description
ctrl + a	Goto BEGINNING of command line
ctrl + e	Goto END of command line
ctrl + b	move back one character
ctrl + f	move forward one character
alt + f	move cursor FORWARD one word
alt + b	move cursor BACK one word
ctrl + xx	Toggle between the start of line and current cursor position
ctrl + ] + x	Where x is any character, moves the cursor forward to the next occurance of x
alt + ctrl + ] + x	Where x is any character, moves the cursor backwards to the previous occurance of x
Edit / Other
command	description
ctrl + d	Delete the character under the cursor
ctrl + h	Delete the previous character before cursor
ctrl + u	Clear all / cut BEFORE cursor
ctrl + k	Clear all / cut AFTER cursor
ctrl + w	delete the word BEFORE the cursor
alt + d	delete the word FROM the cursor
ctrl + y	paste (if you used a previous command to delete)
ctrl + i	command completion like Tab
ctrl + l	Clear the screen (same as clear command)
ctrl + c	kill whatever is running
ctrl + d	Exit shell (same as exit command when cursor line is empty)
ctrl + z	Place current process in background
ctrl + _	Undo
ctrl + x ctrl + u	Undo the last changes. ctrl+ _ does the same
ctrl + t	Swap the last two characters before the cursor
esc + t	Swap last two words before the cursor
alt + t	swap current word with previous
esc + .
esc + _
alt + [Backspace]	delete PREVIOUS word
alt + <	Move to the first line in the history
alt + >	Move to the end of the input history, i.e., the line currently being entered
alt + ?	display the file/folder names in the current path as help
alt + *	print all the file/folder names in the current path as parameter
alt + .	print the LAST ARGUMENT (ie "vim file1.txt file2.txt" will yield "file2.txt")
alt + c	capitalize the first character to end of word starting at cursor (whole word if cursor is at the beginning of word)
alt + u	make uppercase from cursor to end of word
alt + l	make lowercase from cursor to end of word
alt + n
alt + p	Non-incremental reverse search of history.
alt + r	Undo all changes to the line
alt + ctl + e	Expand command line.
~[TAB][TAB]	List all users
$[TAB][TAB]	List all system variables
@[TAB][TAB]	List all entries in your /etc/hosts file
[TAB]	Auto complete
cd -	change to PREVIOUS working directory
History
command	description
ctrl + r	Search backward starting at the current line and moving 'up' through the history as necessary
crtl + s	Search forward starting at the current line and moving 'down' through the history as necessary
ctrl + p	Fetch the previous command from the history list, moving back in the list (same as up arrow)
ctrl + n	Fetch the next command from the history list, moving forward in the list (same as down arrow)
ctrl + o	Execute the command found via Ctrl+r or Ctrl+s
ctrl + g	Escape from history searching mode
!!	Run PREVIOUS command (ie sudo !!)
!vi	Run PREVIOUS command that BEGINS with vi
!vi:p	Print previously run command that BEGINS with vi
!n	Execute nth command in history
!$	Last argument of last command
!^	First argument of last command
^abc^xyz	Replace first occurance of abc with xyz in last command and execute it
Kill a job
n = job number, to list jobs, run jobs

kill %n
Example:

kill %1
References
http://cnswww.cns.cwru.edu/php/chet/readline/readline.html
https://github.com/fliptheweb/bash-shortcuts-cheat-sheet/blob/master/README.md


## Keybindings
Use `ESC` or `CTRL-[` to enter `Normal mode`.

Check also [[gnu readline]] additional keybinding.

# ZSH vi mode

## History

- `ctrl-p` : Previous command in history
- `ctrl-n` : Next command in history
- `/`      : Search backward in history
- `n`      : Repeat the last `/`


## Mode indicators

`Normal mode` is indicated with block style cursor, and `Insert mode` with
beam style cursor by default.

## Vim edition

In `Normal mode` you can use `vv` to edit current command line in an editor
(e.g. `vi`/`vim`/`nvim`...), because it is bound to the `Visual mode`.

You can change the editor by `ZVM_VI_EDITOR` option, by default it is
`$EDITOR`.

## Movement

- `$`   : To the end of the line
- `^`   : To the first non-blank character of the line
- `0`   : To the first character of the line
- `w`   : [count] words forward
- `W`   : [count] WORDS forward
- `e`   : Forward to the end of word [count] inclusive
- `E`   : Forward to the end of WORD [count] inclusive
- `b`   : [count] words backward
- `B`   : [count] WORDS backward
- `t{char}`   : Till before [count]'th occurrence of {char} to the right
- `T{char}`   : Till before [count]'th occurrence of {char} to the left
- `f{char}`   : To [count]'th occurrence of {char} to the right
- `F{char}`   : To [count]'th occurrence of {char} to the left
- `;`   : Repeat latest f, t, F or T [count] times
- `,`   : Repeat latest f, t, F or T in opposite direction


## Insertion

- `i`   : Insert text before the cursor
- `I`   : Insert text before the first character in the line
- `a`   : Append text after the cursor
- `A`   : Append text at the end of the line
- `o`   : Insert new command line below the current one
- `O`   : Insert new command line above the current one

## Surround

There are 2 kinds of keybinding mode for surround operating, default is
`classic` mode, you can choose the mode by setting `ZVM_VI_SURROUND_BINDKEY`
option.

1. `classic` mode (verb->s->surround)

- `S"`    : Add `"` for visual selection
- `ys"`   : Add `"` for visual selection
- `cs"'`  : Change `"` to `'`
- `ds"`   : Delete `"`

 2. `s-prefix` mode (s->verb->surround)
- `sa"`   : Add `"` for visual selection
- `sd"`   : Delete `"`
- `sr"'`  : Change `"` to `'`

Note that key sequences must be pressed in fairly quick succession to avoid a timeout. You may extend this timeout with the [`ZVM_KEYTIMEOUT` option](#readkey-engine).

### How to select surround text object?

- `vi"`   : Select the text object inside the quotes
- `va(`   : Select the text object including the brackets

Then you can do any operation for the selection:

1. Add surrounds for text object

- `vi"` -> `S[` or `sa[` => `"object"` -> `"[object]"`
- `va"` -> `S[` or `sa[` => `"object"` -> `["object"]`

2. Delete/Yank/Change text object

- `di(` or `vi(` -> `d`
- `ca(` or `va(` -> `c`
- `yi(` or `vi(` -> `y`

## Increment and Decrement

In normal mode, typing `ctrl-a` will increase to the next keyword, and typing
`ctrl-x` will decrease to the next keyword. The keyword can be at the cursor,
or to the right of the cursor (on the same line). The keyword could be as
below:

- Number (Decimal, Hexadecimal, Binary...)
- Boolean (True or False, Yes or No, On or Off...)
- Weekday (Sunday, Monday, Tuesday, Wednesday...)
- Month (January, February, March, April, May...)
- Operator (&&, ||, ++, --, ==, !==, and, or...)
- ...

For example:

1. Increment

- `9` => `10`
- `aa99bb` => `aa100bb`
- `aa100bc` => `aa101bc`
- `0xDe` => `0xdf`
- `0Xdf` => `0Xe0`
- `0b101` => `0b110`
- `0B11` => `0B101`
- `true` => `false`
- `yes` => `no`
- `on` => `off`
- `T` => `F`
- `Fri` => `Sat`
- `Oct` => `Nov`
- `Monday` => `Tuesday`
- `January` => `February`
- `+` => `-`
- `++` => `--`
- `==` => `!=`
- `!==` => `===`
- `&&` => `||`
- `and` => `or`
- ...

2. Decrement:

- `100` => `99`
- `aa100bb` => `aa99bb`
- `0` => `-1`
- `0xdE0` => `0xDDF`
- `0xffFf0` => `0xfffef`
- `0xfffF0` => `0xFFFEF`
- `0x0` => `0xffffffffffffffff`
- `0Xf` => `0Xe`
- `0b100` => `0b010`
- `0B100` => `0B011`
- `True` => `False`
- `On` => `Off`
- `Sun` => `Sat`
- `Jan` => `Dec`
- `Monday` => `Sunday`
- `August` => `July`
- `/` => `*`
- `++` => `--`
- `==` => `!=`
- `!==` => `===`
- `||` => `&&`
- `or` => `and`
- ...




