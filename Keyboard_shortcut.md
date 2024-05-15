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

## QMK

I have a keyboard with [[QMK]] firmware, which allows me to create custom
keyboard layers, macros and other features.

I use [[Colemak_Mod-DH|Colemak Mod-DH]] layout (not hardware, I use system
layout) and my own navigation and symbols layers.

My layers and modifiers:

Hold `SYM` to activate the symbols layer.
Hold `NAV` to activate the navigation layer.
Hold `SYM` and `NAV` to activate the numbers layers.

The home row modifiers are `oneshot` so that it's possible to modify the keys on
the base layer, where there are no dedicated modifiers.

Sometimes you need to use qwerty layout (games for example), I created special
layer in QMK for that, which activate qwerty layout over the Colemak-DH layout
when I press special `QWE` default layer switch button (toggle logic).

## Universal

Notepad based shortcuts, work mostly in all "classic" GUI program.

- Close an open dialog box::`ESC`, sometimes `q` or even `M-F4` <!--SR:!2024-05-01,2,225-->
- Open the help::`F1`
- Switch tabs forward::`C-tab`
- Switch tabs backward::`C-S-tab`
- Close tab::`C-w` <!--SR:!2024-05-02,3,245-->
- Zoom in, zoom out, reset zoom of the page::`C-+`, `C--`, `C-0`
- Select all the text::`C-a`
- Search text::`C-f`, `/`
- Create new tab::`C-t`
- Create new window::`C-n` <!--SR:!2024-05-01,2,225-->
- Open the Print dialog box::`C-p`
- Undo::`C-z` <!--SR:!2024-04-30,1,205-->
- Redo::`C-y` or C-S-z
- Refresh::`C-r`l
- PgDn, Select PgDn::`NAV-h`, `NAV-S-h`
- PgUp, Select PgUp::`NAV-,`, `NAV-S-,`
- Left, Select Left::`NAV-n`, `NAV-S-n`
- Right, Select Right::`NAV-i`, `NAV-S-i`
- Word Left, Select Word Left::`NAV-C-n`, `NAV-C-S-n`
- Word Right, Select Word Right::`NAV-C-i`, `NAV-C-S-i`
- Up, Select Up::`NAV-u`, `NAV-S-u`
- Down, Select Down::`NAV-e`, `NAV-S-e` <!--SR:!2024-04-30,1,205-->
- Delete Word Left::`C-BCK` <!--SR:!2024-05-01,2,225-->
- Delete Word Right::`C-DEL`
- Home, Select to Home::`NAV-l`, `NAV-S-l` <!--SR:!2024-04-30,1,205-->
- End, Select to End::`NAV-y`, `NAV-S-y`
- Top, Select to Top::`NAV-C-l`, `NAV-C-S-l`
- Bottom, Select to bottom::`NAV-C-y`, `NAV-C-S-y` <!--SR:!2024-04-30,1,205-->

## Vim

Since my most used program is Neovim, I have a lot of shortcuts for it. To quit
I use `ZZ`, `:x`, `:q` and `:qa` ☺. I store basic keybindings in my
[[Vim_base_keybindings|Base keybindings]] note and more advanced in [[Neovim]].

## GNU Readline

[[GNU_Readline|GNU readline]] used in many programs like Bash, Python, etc. So I
need to know some basic keybindings to work with it.

- Move back one character.::`C-b`
- Move forward one character.::`C-f`
- Delete the word before the cursor.::`C-w`
- Delete the character before the cursor.::`C-h`
- Cancel the command line.::`C-c`
- Delete (kill) the character underneath the cursor.::`C-d` <!--SR:!2024-04-30,1,205-->

## Obsidian

[[Obsidian]] is my [[Telekasten.nvim|Zettelkasten system]] companion, main task
is to render markdown, process [[Spaced_repetition|space repetition]] notes and
work with [[Excalidraw]] diagrams.

## Web Browser

I store my shortcuts (advanced list) in [[Browser_shortcuts|Browser shortcuts]]
note. Currently, I'm using [[Brave]] browser and sometimes [[Firefox]].

Here are some universal shortcuts:

- Search in active tab::`C-k` → Type something → `<cr>`
- Search in new tab::`C-k` → Type something → `M-<cr>` <!--SR:!2024-04-30,1,205-->
- Open a link in current tab::`LMB` or `C-;` → `keys` (requires Vimium)
- Open link in new tab and switch to it::`C-S-LMB` or `C-:` → `keys` (requires Vimium)
- Focus item in search dialog (next/previous)::`F3`/`S-F3`
- Toggle history::`C-H` <!--SR:!2024-05-01,2,225-->
- Restore closed tab::`C-S-T` <!--SR:!2024-05-02,3,245-->
- Focus page content (useful to use from address bar)::`F6`

I also use limited subset of Vimium keybindings:

- Search in tabs (vimium)::`T`
- Go back in history (vimium)::`H`
- Go forward in history (vimium)::`L`

- Search and click on link::`:`
- Focus input::`gi`
- Visit previous page::`<C-6>`

## DWM

My main window manager is [[DWM]].

Here is a list of the most used shortcuts:

- First virtual desktop, primary::`s-1`
- Launch terminal::`s-S-RET`
- Menu for running programs like::`s-space`
- Kill active window.::`s-S-c`
- Make window full-screen.::`s-f` <!--SR:!2024-05-02,3,245-->
- Toggle the top bar.::`s-b`
- List Active Windows::`s-a` <!--SR:!2024-05-02,3,245-->
- Pass menu::`s-p`

## MPV

I use [[MPV]] as my main multimedia player.

Basic keybindings:

- Play/Pause::`space`
- Play next file::`>`
- Play previous file::`<`
- Quit::`q` <!--SR:!2024-05-02,3,245-->

<!-- NEXT: Continue with other programs -->

## [[cmus]]

## [[Z_shell]]

Some keybindings from GNU readline are available in Z shell, but I mostly use
Vi-mode in Zsh, and it has its own keybindings.

To enter Vi-mode in Zsh type `Esc`, to back to insert mode type `i`.

## [[Fzf]]

- Select and print a path::`ls -l|fzf` <!--SR:!2024-05-02,3,245-->
- Paste path into command line::`C-t`
- Change directory into selected path::`M-C`

## [[Sioyek]]

- `O` - Open recent documents list
- `F9`/`F8` - Fit document to screen ignore margins/with margins
- `t` - Open table of contents
- `ss`/`sl` - With selection - search in Google Scholar and library genesis
- `:` - Open command palette, useful to find functional

## [[Slack]]

- `C-k` - Jump to a conversation
- `C-n` - Compose a new message
- `C-S-l` - Open channel browser
- `C-S-t` - Open the Threads view
- `C-S-m` - Mentions & reactions
- `C-f` - Search current channel or conversation

## [[Blender_common_shortcuts|Blender]]

- `Tab` - Switch between Edit and Object mode
- `F3` - Search operation
- `F12` - Render image
- `~` - Toggle Fly/Walk mode

## [[Krita]]

- RMB - Show a palette of brushes, color history and other tools
- LMB+Space - pan the canvas. Also with middle button drag
- B - Freehand Brush Tool
- T - Move Tool

## [[Inkscape]]

- S - Select and transform objects
- P - Pen Tool
- C-S-l - Layers and Objects
- S-M-b - Trace Bitmap

## External links

- [Monkeytype | A minimalistic, customizable typing test](https://monkeytype.com/)
- [ShortcutFoo](https://www.shortcutfoo.com/)
- [KeyCombiner](https://keycombiner.com/)

