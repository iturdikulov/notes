---
date: 2022-12-29
sr-due: 2024-01-25
sr-ease: 290
sr-interval: 253
tags:
- inbox
---

# Mouseless workflow

- [[Keyboard_shortcut]]
- [ ] [[research/Cneude-Building_Your_Mouseless_Development_Environment|book]] make more relevant

# Mouse emulation (qmk)

# Browser

I use now chromium based Web browser (brave-browser) and this
extensions:

  ----------------------------------------- ------------------------------------------------------------
  Search in active tab                      `C-l` -\> Type something -\> `RET`
  Search in new tab                         `C-l` -\> Type something -\> `M-RET`
  Search in default engine                  `C-k`
  Open link in current tab                  =C-=
  Open link in new tab and switch to it     `M-=|
                                            | Open link in background tab | =C-"`
  Open link in new tab using mouse          `C-S-LMB`
  Focus item in search dialog (next/prev)   `Fn+j` `Fn+k`
  Search in tabs                            `t`
  Go back in history                        `H`
  Go forward in history                     `L`
  Open history                              `C-H`
  Restore closed tab                        `C-T`
  Focus page content                        `S-F6`
  ----------------------------------------- ------------------------------------------------------------

# Univeral

Notepad based shortcuts, work mostly in any program, except specific.

I use custom qmk bindings, using `FN + letter` keybindings.

  ------------------------------- --------------------------------------------
  Close an open dialog box        `ESC`
  Open the help                   `F1`
  Switch tabs forward             `C-tab`
  Switch tabs backward            `C-S-tab`
  Close tab                       `C-w`
  Zoom in and out the page        `C-+`, `C--`
  Select all the text             `C-a`
  Search text                     `C-f`, `/`
  Create new tab                  `C-t`
  Create new window               `C-n`
  Open the Print dialog box       `C-p`
  Undo                            `C-z`
  Redo                            `C-y`
  Refresh                         `C-r`
  PgUp, Select PgUp               `FN-u`, `FN-S-u`
  PgDown, Select PgDown           `FN-d`, `FN-S-d`
  Left, Select Left               `FN-h`, `FN-S-h`
  Right, Select Right             `FN-l`, `FN-S-l`
  Word Left, Select Word Left     `FN-C-h`, `FN-C-S-h`
  Word Right, Select Word Right   `FN-C-l`, `FN-C-S-l`
  Up, Select Up                   `FN-k`, `FN-S-k`
  Down, Select Down               `FN-j`, `FN-S-j`
  Delete Word Left                `C-BCK`
  Delete Word Right               `C-DEL`
  Home, Select to Home            `FN-^`, `FN-S-^`
  End, Select to End              `FN-$`, `FN-S-$`
  Top, Select to Top              `FN-C-^`, `FN-C-S-^`
  Bottom, Select to bottom        `FN-C-$`, `FN-C-S-$`
  ------------------------------- --------------------------------------------

# DWM

## Basic

  ---------------------------------------------------- ---------
  Launch terminal.                                     S-M-RET
  Dmenu for running programs like the x-www-browser.   M-p
  Kill active window.                                  S-M-c
  Toggle the top bar.                                  M-b
  Quit dwm cleanly.                                    S-M-q
  ---------------------------------------------------- ---------

## Navigation & Resize

  --------------------------------------------------------------------- --------------
  Focus on next/previous window in current tag (clockwise, counter).    Mod + j / k
  Drag floating window.                                                 Mod1 + Mouse
  -- tiled --
  Increases / decreases number of windows on master                     M-i / d
  Increases / decreases master size.                                    Mod + h / l
  Push active window from stack to master, or pulls last used window.   M-RET
  -- tags --
  Apply tag to window (like move it to tag)                             S-M-2
  View tag 2.                                                           M-2
  Toggle Tags (sort of alt-tab per workspaces).                         M-Tab
  Toggle tag 2 on focused window (like add or remove from workspace)    M-C-S-2
  View all windows on screen.                                           M-0
  Banish tags (add/remove all with 2 tag, useful with all windows)      M-C-2
  Make focused window appear on all tags.                               S-M-0
  -- floating --
  To move the floating window around.                                   M-LMB
  To resize the floating window.                                        M-RMB
  To make an individual window un-float.                                M-MMB
  -- Screens --
  Move focus between screens (multi monitor setup)                      M-, / .
  Move active window to different screen.                               S-M-, / .
  --------------------------------------------------------------------- --------------

## Layout

  ----------------------------------------------------------- -----------
  Tiled mode. =                                               M-t
  Floating mode. \>\<\>                                       M-f
  Monocle mode. M                                             M-m
  Toggles to the previous layout mode.                        M-Space
  Toggle window layout, to make an individual window float.   M-S-Space
  ----------------------------------------------------------- -----------

# Popular

  ------------------------------ ------------------
  Jump to (slack, github, etc)   `C-k`
  ------------------------------ ------------------

# Readline

[https://readline.kablamo.org/emacs.html](https://readline.kablamo.org/emacs.html)

## Base

  ----- --------------------------------
  C-a   Move to the beginning of line.
  C-e   Move to the end of line.
  C-f   Move forward a character.
  C-b   Move back a character.
  M-f   Move forward a word.
  M-b   Move backward a word.
  C-l   Clear the screen
  ----- --------------------------------

## Commands for Changing Text

  ---------- --------------------------------------
  C-d        Delete one character at point.
  BCK        Delete one character backward.

  C-v        Quoted insert. (C-v tab)
  M-TAB or   Insert a tab character.
  M-C-i
  C-t        Exchange the char before cursor with
             the character at cursor.
  M-t        Exchange the word before cursor with
             the word at cursor.
  M-u        Uppercase the current word.
  M-l        Lowercase the current word.
  M-c        Capitalize the current word.
  ---------- --------------------------------------

## Killing and Yanking

  --------- ----------------------------------------
  C-k       Kill the text from point to the end of
            the line.
  C-x BCK   Kill backward to the beginning of the
            line.
  C-u       Kill backward from point to the
            beginning of the line.
  M-d       Kill from point to the end of the
            current word.
  M-BCK     Kill the word behind point.
  C-w       Kill the word behind point, using
            white space as a word boundary.
  M-\\      Delete all spaces and tabs around
            point.
  C-y       Yank the top of the kill ring into the
            buffer at point.
  M-y       Rotate the kill ring, and yank the new
            top
  --------- ----------------------------------------

## Keyboard Macros

  ------- ---------------------------------------
  C-x (   Begin saving the chars typed into the
          current keyboard macro.
  C-x )   End saving the chars typed into the
          current keyboard macro.
  C-x e   Re-execute the last keyboard macro
          defined.
  ------- ---------------------------------------

## Commands for Manipulating the History

  ---------- ----------------------------------------
  Return     Accept the line regardless of where
             the cursor is.
  C-p        Fetch the previous command from the
             history list.
  C-n        Fetch the next command from the
             history list.
  M-\<       Move to the first line in the history.
  M-\>       Move to the end of the input history
  C-r        Search backward starting at the
             urrent line (incremental).
  C-s        Search forward starting at the current
             line (incremental).
  M-p        Search backward using non-incremental
             search.
  M-n        Search forward using non-incremental
             search.
  M-C-y      Insert the n-th argument to the
             previous command at point.
  M-. M-\_   Insert the last argument to the
             previous command.
  ---------- ----------------------------------------

## Completing

  ------ --------------------------------------
  TAB    Attempt to perform completion on the
         text before point.
  M-?    List the possible completions of the
         text before point.
  M-\*   Insert all completions of the text
         before point generated by
         possible-completions.
  ------ --------------------------------------

## Miscellaneous

  ------------- ----------------------------------------
  C-x C-r       Read and execute the contents of
                inputrc file.
  C-g           Abort the current editing command and
                ring the terminal
  M-a, M-b,     If the metafield char
  M-x, ...      run the command that is bound to
                uppercase char.
  ESC           Metafy the next character typed.
                For example, ESC-p is equivalent to
                Meta-p
  C-\_ or       Incremental undo, separately
  C-x C-u       remembered for each line.
  M-r           Undo all changes made to this line.
  M-&           Perform tilde expansion on the current
                word.
  C-@ or        Set the mark to the point.
  M-\<space\>
  C-x C-x       Swap the point with the mark.
  C-\]          Move to the next occurance of current
                character under cursor.
  M-C-\]        Move to the previous occurrence of
                current character under cursor.
  M-#           Without argument line is commented,
                with argument uncommented (if it was
                commented).
  C-e           When in vi mode, switch to emacs mode.
                mode
  M-C-j         When in emacs mode, switch to vi mode.
  M-0, M-1,     Specify the digit to the argument.
  ..., M--      M-- starts a negative argument.
  ------------- ----------------------------------------

# MPV

# Zathura

# Visidata

# Emacs

# Notmuch

# Dired

# Org

# Pdf-tools

# Slack

# Krita

# Incscape

# Blender

# Audacity

# IMV

# Maim

From emacs mode you can then switch to vicmd mode (\"normal-mode\") with
the key sequence ^XV^, that is Ctrl+x followed by Ctrl+v. To get back to
emacs mode just type any key sequence that would normally get you to
viins mode (\"insert-mode\") with vi-like bindings, e.g. i or a.

## Resources

- [[QMK]]
- [Monkeytype | A minimalistic, customizable typing test](https://monkeytype.com/)
