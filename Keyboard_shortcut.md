---
date: 2023-02-21
tags:
  - inbox
  - SR_software
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 225
---

# Keyboard shortcut

> In [[Computing|computing]], a keyboard shortcut also known as hotkey is a
> series of one or several keys to quickly invoke a software program or perform
> a preprogrammed action. This action may be part of the standard functionality
> of the operating system or application program, or it may have been written by
> the user in a scripting language. Some integrated keyboards also include
> pointing devices; the definition of exactly what counts as a "key" sometimes
> differs.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Keyboard_shortcut)</cite>

[[Touch_typing|Touch typing]] and keyboard shortcuts are main driver of
mouseless workflow. In this note I describe the most used shortcuts in my
workflow, each section except "Universal" is linked to a more detailed note.

In this file I place **basic** keybindings list for each my most used program,
with link to detailed keybindings in separate note.

## [[QMK]]

I use [[Colemak_Mod-DH|Colemak Mod-DH]] layout (not hardware, I use system
layout) and my own navigation and symbols layers.

### Details

Hold `SYM` to activate the symbols layer.
Hold `NAV` to activate the navigation layer.
Hold `SYM` and `NAV` to activate the numbers layers.

The home row modifiers are oneshot so that it's possible to modify the keys on
the base layer, where there are no dedicated modifiers.

Sometimes you need to use qwerty layout (games for example), I created special
layer in QMK for that, which activate qwerty layout over the Colemak-DH layout
when I press special `QWE` default layer switch button (toggle logic).

## Universal

Notepad based shortcuts, work mostly in all "classic" GUI program.

- Close an open dialog box::`ESC`, sometimes `q` or even `M-F4`
- Open the help::`F1`
- Switch tabs forward::`C-tab`
- Switch tabs backward::`C-S-tab`
- Close tab::`C-w`
- Zoom in, zoom out, reset zoom of the page::`C-+`, `C--`, `C-0`
- Select all the text::`C-a`
- Search text::`C-f`, `/`
- Create new tab::`C-t`
- Create new window::`C-n`
- Open the Print dialog box::`C-p`
- Undo::`C-z`
- Redo::`C-y`
- Refresh::`C-r`l
- PgDn, Select PgDn::`NAV-h`, `NAV-S-h`
- PgUp, Select PgUp::`NAV-,`, `NAV-S-,`
- Left, Select Left::`NAV-n`, `NAV-S-n`
- Right, Select Right::`NAV-i`, `NAV-S-i`
- Word Left, Select Word Left::`NAV-C-n`, `NAV-C-S-n`
- Word Right, Select Word Right::`NAV-C-i`, `NAV-C-S-i`
- Up, Select Up::`NAV-u`, `NAV-S-u`
- Down, Select Down::`NAV-e`, `NAV-S-e`
- Delete Word Left::`C-BCK`
- Delete Word Right::`C-DEL`
- Home, Select to Home::`NAV-l`, `NAV-S-l`
- End, Select to End::`NAV-y`, `NAV-S-y`
- Top, Select to Top::`NAV-C-l`, `NAV-C-S-l`
- Bottom, Select to bottom::`NAV-C-y`, `NAV-C-S-y`

## [[Vim_base_keybindings|Base keybindings]] and [[Neovim]]

Since my most used program is Neovim, I have a lot of shortcuts for it. To quit
I use `ZZ`, `:x`, `:q` and `:qa` ☺.

## [[Obsidian]]

Obsidian is my [[Telekasten.nvim]] companion, main task is to render markdown
and process [[Spaced_repetition|space repetition]] notes.

## [[Browser_shortcuts|Browser shortcuts]].

- Search in active tab::`C-k` → Type something → `<cr>`
- Search in new tab::`C-k` → Type something → `M-<cr>`
- Open a link in current tab::`LMB` or `C-;` → `keys` (requires Vimium)
- Open link in new tab and switch to it::`C-S-LMB` or `C-:` → `keys` (requires Vimium)
- Focus item in search dialog (next/previous)::`F3`/`S-F3`
- Search in tabs (vimium)::`T`
- Go back in history (vimium)::`H`
- Go forward in history (vimium)::`L`
- Toggle history::`C-H`
- Restore closed tab::`C-S-T`
- Focus page content (useful to use from address bar)::`F6`

# [[DWM_keyboard_shortcuts]]

- First virtual desktop, primary::`D-1`
- Second virtual desktop, Internet::`D-2`
- Third virtual desktop, secondary::`D-3`
- Fourth virtual desktop, IM::`D-4`
- Launch terminal::`D-S-RET`
- Menu for running programs like::`D-space`
- Kill active window.::`D-S-c`
- Toggle the top bar.::`Pause` temporarily, `D-b` permanently
- List Active Windows::`D-a`
- Pass menu::`D-p`

## [[mpv]]

- Play/Pause::`space`
- Play next file::`>`
- Play previous file::`<`
- Quit::`q`

# [[GNU_Readline]]

`C-w` - Delete the word before the cursor.
`C-h` - Delete the character before the cursor.
`C-c` - Cancel the command line.
`C-d` - Delete (kill) the character underneath the cursor.
`C-b` - Move back one character.
`C-f` - Move forward one character.

## [[Z_shell]]

Some keybindings from GNU readline are available in Z shell, but I mostly use
Vi-mode in Zsh, and it has its own keybindings.

To enter Vi-mode in Zsh type `Esc`, to back to insert mode type `i`.

## [[Fzf]]

- `ls -l|fzf` - select and print a path
- `C-t` - paste path into command line
- `M-C` - cd into the selected directory

## [[Vimium]]

I use limited subset of Vimium keybindings, mostly for navigation. Other ones
are disabled.

- `:` - Search and click on link
- `gi` - Focus input
- `<C-6>` - Visit previous page

## [[Sioyek]]

- `O` - open recent documents list
- `F9`/`F8` - fit document to screen ignore margins/with margins
- `t` - open table of contents
- `ss`/`sl` - with selection - search in Google Scholar and library genesis
- `:` - open command palette, useful to find functional

## [[Slack]]

`C-k` - Jump to a conversation
`C-n` - Compose a new message
`C-S-l` - Open channel browser
`C-S-t` - Open the Threads view
`C-S-m` - Mentions & reactions
`C-f` - Search current channel or conversation

## [[Blender_common_shortcuts|Blender]]

## [[Krita]]

## [[Inkscape]]

## References

- [[QMK]]
- [Monkeytype | A minimalistic, customizable typing test](https://monkeytype.com/)
- [ShortcutFoo](https://www.shortcutfoo.com/)
