---
date: 2023-02-21T00:00+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 225
---

# Keyboard shortcut

> In [[computing]], a keyboard shortcut also known as hotkey is a
> series of one or several keys to quickly invoke a software program or perform
> a preprogrammed action.
>
> This action may be part of the standard functionality
> of the operating system or application program, or it may have been written by
> the user in a scripting language.
>
> Some integrated keyboards also include pointing devices; the definition of
> exactly what counts as a "key" sometimes differs.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Keyboard_shortcut)</cite>

[[touch_typing|Touch typing]] and keyboard shortcuts are main driver of
mouseless workflow. In this note I describe the most used shortcuts in my
workflow, each section except "Universal" is linked to a more detailed note.

In this file I place **basic** keybindings list for each my most used program,
with link to detailed keybindings in separate note.

## QMK

I have a keyboard with [[QMK]] firmware, which allows me to create custom
keyboard layers, macros and other features.

I use [[Colemak_Mod-DH]] layout (not hardware, I use system layout) and my own
navigation and symbols layers.

My layers and modifiers:

Hold `SYM` to activate the symbols layer.
Hold `NAV` to activate the navigation layer

The home row modifiers are `oneshot` so that it's possible to modify the keys on
the base layer, where there are no dedicated modifiers.

Sometimes you need to use qwerty layout (games for example), I created special
layer in QMK for that, which activate qwerty layout over the Colemak-DH layout
when I press special `QWE` default layer switch button (toggle logic).

## Universal

Notepad based shortcuts, work mostly in all "classic" GUI program.

- Close an open dialog box:<wbr class="f"> `ESC`, sometimes `q` or even `M-F4` <!--SR:!2024-05-01,2,225-->
- Open the help:<wbr class="f"> `F1`
- Switch tabs forward:<wbr class="f"> `C-tab`
- Switch tabs backward:<wbr class="f"> `C-S-tab`
- Close tab:<wbr class="f"> `C-w` <!--SR:!2024-05-02,3,245-->
- Zoom in, zoom out, reset zoom of the page:<wbr class="f"> `C-+`, `C--`, `C-0`
- Select all the text:<wbr class="f"> `C-a`
- Search text:<wbr class="f"> `C-f`, `/`
- Create new tab:<wbr class="f"> `C-t`
- Create new window:<wbr class="f"> `C-n` <!--SR:!2024-05-01,2,225-->
- Open the Print dialog box:<wbr class="f"> `C-p`
- Undo:<wbr class="f"> `C-z` <!--SR:!2024-04-30,1,205-->
- Redo:<wbr class="f"> `C-y` or C-S-z
- Refresh:<wbr class="f"> `C-r`l
- PgDn, Select PgDn:<wbr class="f"> `NAV-h`, `NAV-S-h`
- PgUp, Select PgUp:<wbr class="f"> `NAV-,`, `NAV-S-,`
- Left, Select Left:<wbr class="f"> `NAV-n`, `NAV-S-n`
- Right, Select Right:<wbr class="f"> `NAV-i`, `NAV-S-i`
- Word Left, Select Word Left:<wbr class="f"> `NAV-C-n`, `NAV-C-S-n`
- Word Right, Select Word Right:<wbr class="f"> `NAV-C-i`, `NAV-C-S-i`
- Up, Select Up:<wbr class="f"> `NAV-u`, `NAV-S-u`
- Down, Select Down:<wbr class="f"> `NAV-e`, `NAV-S-e` <!--SR:!2024-04-30,1,205-->
- Delete Word Left:<wbr class="f"> `C-BCK` <!--SR:!2024-05-01,2,225-->
- Delete Word Right:<wbr class="f"> `C-DEL`
- Home, Select to Home:<wbr class="f"> `NAV-l`, `NAV-S-l` <!--SR:!2024-04-30,1,205-->
- End, Select to End:<wbr class="f"> `NAV-y`, `NAV-S-y`
- Top, Select to Top:<wbr class="f"> `NAV-C-l`, `NAV-C-S-l`
- Bottom, Select to bottom:<wbr class="f"> `NAV-C-y`, `NAV-C-S-y` <!--SR:!2024-04-30,1,205-->

## Vim

Since my most used program is Neovim, I have a lot of shortcuts for it. To quit
I use `ZZ`, `:x`, `:q` and `:qa` 😼. I store basic keybindings in my
[[vim_base_keybindings|Base keybindings]] note and more advanced in [[Neovim]].

## GNU Readline

[[GNU_Readline]] used in many programs like Bash, Python, etc. So I need to know
some basic keybindings to work with it.

- Move back one character.:<wbr class="f"> `C-b`
- Move forward one character.:<wbr class="f"> `C-f`
- Delete the word before the cursor.:<wbr class="f"> `C-w`
- Delete the character before the cursor.:<wbr class="f"> `C-h`
- Cancel the command line.:<wbr class="f"> `C-c`
- Delete (kill) the character underneath the cursor.:<wbr class="f"> `C-d` <!--SR:!2024-04-30,1,205-->

## Obsidian

[[Obsidian]] is my [[Telekasten|Zettelkasten system]] companion, main task
is to render markdown, process [[spaced_repetition]] notes and
work with [[excalidraw]] diagrams.

Core keybindings:

- Switch between edit and read mode:<wbr class="f"> `C-e`
- Focus on last note:<wbr class="f"> `M-n`
- Open quick switcher:<wbr class="f"> `M-p`
- Open command palette:<wbr class="f"> `C-:`
- Open graph view:<wbr class="f"> `C-g`
- Open backlinks for the current file:<wbr class="f"> `M-b`
- Follow link under cursor:<wbr class="f"> `M-RET`
- Navigate back:<wbr class="f"> `C-M-left`
- Navigate forward:<wbr class="f"> `C-M-right`

## Web Browser

I store my shortcuts (advanced list) in [[browser_shortcuts]]
note. Currently, I'm using [[Brave]] browser and sometimes [[Firefox]].

Here are some universal shortcuts:

- Search in active tab:<wbr class="f"> `C-k` → Type something → `<cr>`
- Search in new tab:<wbr class="f"> `C-k` → Type something → `M-<cr>` <!--SR:!2024-04-30,1,205-->
- Open a link in current tab:<wbr class="f"> `LMB` or `C-;` → `keys` (requires Vimium)
- Open link in new tab and switch to it:<wbr class="f"> `C-S-LMB` or `C-:` → `keys` (requires Vimium)
- Focus item in search dialog (next/previous):<wbr class="f"> `F3`/`S-F3`
- Toggle history:<wbr class="f"> `C-H` <!--SR:!2024-05-01,2,225-->
- Restore closed tab:<wbr class="f"> `C-S-T` <!--SR:!2024-05-02,3,245-->
- Focus page content (useful to use from address bar):<wbr class="f"> `F6`

I also use limited subset of Vimium keybindings:

- Search in tabs (vimium):<wbr class="f"> `T`
- Go back in history (vimium):<wbr class="f"> `H`
- Go forward in history (vimium):<wbr class="f"> `L`

- Search and click on link:<wbr class="f"> `:`
- Focus input:<wbr class="f"> `gi`
- Visit previous page:<wbr class="f"> `<C-6>`

## Hyprland

TODO: add

## MPV

I use [[MPV]] as my main multimedia player.

Basic keybindings:

- Play/Pause:<wbr class="f"> `space`
- Play next file:<wbr class="f"> `>`
- Play previous file:<wbr class="f"> `<`
- Quit:<wbr class="f"> `q` <!--SR:!2024-11-20,7,245-->

## cmus

[[cmus]] is my favorite audio-player, near to zero setup, and keyboard driven.

Basic keybindings:

- Up/Down:<wbr class="f"> `k`/`j`
- Seek -5/+5 seconds:<wbr class="f"> `h`/`l`>`
- Seek -1/+1 minutes:<wbr class="f"> `,`/`.`
- Switch views:<wbr class="f"> `1-7`
- Pause playback:<wbr class="f"> `c`
- Next track:<wbr class="f"> `b`
- Previous track:<wbr class="f"> `z`
- Toggle shuffle:<wbr class="f"> `s`
- Restart track:<wbr class="f"> `x`
- Jump to the currently playing track:<wbr class="f"> `i`
- Searching:<wbr class="f"> `/`
- Reduce the volume by 10%:<wbr class="f"> `-`
- Increase the volume by 10%:<wbr class="f"> `+`

## Z shell

I use [[Zsh]] as my main interactive command interpreter.

Some keybindings from GNU readline are available in Z shell, but I
usually use Vi-mode in Zsh, and it has its own keybindings.

To enter Vi-mode in Zsh type `Esc`, to back to insert mode type `i`.

## fzf

I use [[fzf]] as main UI provider for list of anything, for mine shell scripts
and commands.

Some keybindings, which integrated with Zsh:

- Select and print a path:<wbr class="f"> `ls -l|fzf` <!--SR:!2024-05-02,3,245-->
- Paste path into command line:<wbr class="f"> `C-t`
- Change directory into selected path:<wbr class="f"> `M-C`

For reverse search in history with ==`C-r`== hotkey and ==`Up`== key, I use
different tool - [atuin](https://github.com/atuinsh/atuin).

## Sioyek

I use [[Sioyek]] to read and annotate PDFs. It's optimized for research and
reading scientific papers.

Basic keybindings:

- Open recent documents list:<wbr class="f"> `O`
- Fit document to screen ignore margins/with margins:<wbr class="f"> `F9`/`F8`
- Open table of contents:<wbr class="f"> `t`
- With selection - search in Google Scholar and library genesis:<wbr class="f"> `ss`/`sl`
- Open command palette, useful to find functional:<wbr class="f"> `:`
- Search bookmark in the current file and all the bookmarks:<wbr class="f"> `gb` and `gB`

## Slack

[[Slack]] is my team communication tool.

Basic keybindings:

Jump to a conversation:<wbr class="f"> `C-k`
Open direct message's menu:<wbr class="f"> `C-S-k`
Compose a new message:<wbr class="f"> `C-n`
Open channel browser:<wbr class="f"> `C-S-l`
Open the Threads view:<wbr class="f"> `C-S-t`
Mentions & reactions:<wbr class="f"> `C-S-m`
Search current channel or conversation:<wbr class="f"> `C-f`

## Blender

[[Blender]] is my favorite 3D modeling software.

Some keys to navigate and quick actions:

- Switch between Edit and Object mode:<wbr class="f"> `Tab`
- Change Mode Pie Menu:<wbr class="f"> `C-TAB`
- Shading Pie Menu:<wbr class="f"> `Z`
- Navigation Pie Menu:<wbr class="f"> `` ` ``
- Focus:<wbr class="f"> `.`
- Isolate:<wbr class="f"> `/`
- Search operation:<wbr class="f"> `F3`
- Render image:<wbr class="f"> `F12`
- Toggle Fly/Walk mode:<wbr class="f"> `~`
- Zoom to region:<wbr class="f"> `S-B`

## Krita

I use [[Krita]] as my board and drawing tool.

- Show a palette of brushes, color history and other tools:<wbr class="f"> `RMB`
- Pan the canvas. Also with middle button drag:<wbr class="f"> `LMB+Space`
- Freehand Brush Tool:<wbr class="f"> `B`
- Move Tool:<wbr class="f"> `T`

## Inkscape

[[Inkscape]] is a vector graphics editor. I use it rarely, but it's very
powerful, and I'm planning to learn it more.

- Select and transform objects:<wbr class="f"> `S`
- Pen Tool:<wbr class="f"> `P`
- Layers and Objects:<wbr class="f"> `C-S-l`
- Trace Bitmap:<wbr class="f"> `S-M-b`

## External links

- [Monkeytype | A minimalistic, customizable typing test](https://monkeytype.com/)
- [ShortcutFoo](https://www.shortcutfoo.com/)
- [KeyCombiner](https://keycombiner.com/)
- [VimGolf - real Vim ninjas count every keystroke!](https://www.vimgolf.com/)
