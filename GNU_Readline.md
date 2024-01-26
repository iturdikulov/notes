---
date: 2023-02-03
tags:
  - inbox
  - research
  - SR_development
sr-due: 2024-01-27
sr-interval: 1
sr-ease: 228
---

# GNU Readline

> The GNU Readline library provides a set of functions for use by applications
> that allow users to edit command lines as they are typed in. Both Emacs and
> vi editing modes are available. The Readline library includes additional
> functions to maintain a list of previously-entered command lines, to recall
> and perhaps reedit those lines, and perform csh-like history expansion on
> previous commands.
>
> The history facilities are also placed into a separate library, the History
> library, as part of the build process. The History library may be used without
> Readline in applications which desire its capabilities.\
> — <cite>[The GNU Readline Library](https://tiswww.case.edu/php/chet/readline/rltop.html)</cite>

Documentation available [here](https://tiswww.case.edu/php/chet/readline/readline.html).

Basically I use `vi` mode in readline, including python and ipython interactive
shell (`~/.inputrc`, `~/.ipython/profile_default/ipython_config.py`).

## Bare essentials

`C-b`::Move back one character.
`C-f`::Move forward one character.

`DEL or Backspace`::Delete the character to the left of the cursor.
`C-d`::Delete the character underneath the cursor.
`C-_` or `C-x C-u`::Undo the last editing command. You can undo all the way back to an empty line.

## Readline Movement Commands

`M-f`::Move forward a word, where a word is composed of letters and digits.
`M-b`::Move backward a word.

`C-a`::Move to the start of the line.
`C-e`::Move to the end of the line.
`C-l`::Clear the screen, reprinting the current line at the top.

## Readline Killing Commands (aka Cut and Paste)

> When you use a kill command, the text is saved in a kill-ring. Any number of
> consecutive kills save all of the killed text together, so that when you yank
> it back, you get it all. The kill ring is not line specific; the text that you
> killed on a previously typed line is available to be yanked back later, when
> you are typing another line.

`C-w`
?
Kill from the cursor to the previous whitespace. This is different than `M-DEL`
because the word boundaries differ.

`C-k`::Kill the text from the current cursor position to the end of the line.

`M-d`
?
Kill from the cursor to the end of the current word, or, if between words, to
the end of the next word. Word boundaries are the same as those used by `M-f`.

`M-DEL`
?
Kill from the cursor to the start of the current word, or, if between words, to
the start of the previous word. Word boundaries are the same as those used by
`M-b`.

Here is how to yank the text back into the line. Yanking means to copy the
most-recently-killed text from the kill buffer.

`C-y`::Yank the most recently killed text back into the buffer at the cursor.

`M-y`::Rotate the kill-ring, and yank the new top. You can only do this if the
prior command is `C-y` or `M-y`.

## Readline Arguments

> You can pass numeric arguments to Readline commands. Sometimes the argument
> acts as a repeat count, other times it is the sign of the argument that is
> significant. If you pass a negative argument to a command which normally acts
> in a forward direction, that command will act in a backward direction. For
> example, to kill text back to the start of the line, you might type
> ==‘M-- C-k’==.

> The general way to pass numeric arguments to a command is to type meta digits
> before the command. If the first ‘digit’ typed is a minus sign (‘-’), then the
> sign of the argument will be negative. Once you have typed one meta digit to
> get the argument started, you can type the remainder of the digits, and then
> the command. For example, to give the C-d command an argument of 10, you could
> type ==‘M-1 0 C-d’==, which will delete the next ten characters on the input line.

## Searching for Commands in the History

To search backward in the history for a particular string, type::`C-r`.

Typing ==C-s== searches forward through the history.

The characters present in the value of the isearch-terminators variable are used
to terminate an incremental search. If that variable has not been assigned a
value, the ==ESC and C-J== characters will terminate an incremental search.

==C-g== will abort an incremental search and restore the original line. When the
search is terminated, the history entry containing the search string becomes the
current line.


## TODO

- [ ] sync with zsh/vi/neovim/ssh host `h rsi`

## References

- [GNU Readline Library](https://tiswww.case.edu/php/chet/readline/readline.html)

