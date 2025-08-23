---
date: 2025-08-17T11:26:31+03:00
created: 2023-02-21T00:00:00+03:00
tags:
  - blog
  - outline
  - ends
sr-due: 2025-07-23
sr-interval: 2
sr-ease: 130
---

# Keyboard shortcut

> In [[computing]], a keyboard shortcut also known as hotkey is a series of one or several keys to quickly invoke a software program or perform a pre-programmed action.
> 
> This action maybe part of the standard functionality of the operating system or application program, or it may have been written by the user in a scripting language.
> 
> Some integrated keyboards also include pointing devices; the definition of exactly what counts as a "key" sometimes differs.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Keyboard_shortcut)</cite>

[[touch_typing|Touch typing]] and [[computer_keyboard]] shortcuts are main driver of mouseless workflow. In this note I describe the most used shortcuts in my workflow, each section except "Universal" is linked to a more detailed note.

Sometimes you need to create and use non-standard shortcuts, and this [Keyboard Heatmap](https://www.patrick-wied.at/projects/heatmap-keyboard/) tool can find most used keys, you can type comfort keys for you, analyze heatmap and decide which keys you want to use.

In this file I place **basic** keybindings list for each my most used program, with link to detailed keybindings in separate note.

## Universal

Notepad based shortcuts, work mostly in all "classic" GUI program.

- Close an open dialog box:<wbr class="f"> `ESC`, sometimes `q` or even `M-F4` <!--SR:!2024-05-01,2,225-->
- Open the help:<wbr class="f"> `F1`
- Switch tabs forward:<wbr class="f"> `C-tab`
- Switch tabs backward:<wbr class="f"> `C-S-tab`
- Close tab:<wbr class="f"> `C-w` <!--SR:!2025-08-07,7,245-->
- Zoom in, zoom out, reset zoom of the page:<wbr class="f"> `C-+`, `C--`, `C-0`
- Select all the text:<wbr class="f"> `C-a`
- Search text:<wbr class="f"> `C-f`, `/`
- Create new tab:<wbr class="f"> `C-t`
- Create new window:<wbr class="f"> `C-n` <!--SR:!2024-05-01,2,225-->
- Open the Print dialog box:<wbr class="f"> `C-p`
- Undo:<wbr class="f"> `C-z` <!--SR:!2024-04-30,1,205-->
- Redo:<wbr class="f"> `C-y` or `C-S-z`
- Refresh:<wbr class="f"> `C-r`

- Delete Word Left:<wbr class="f"> `C-BCK` <!--SR:!2024-05-01,2,225-->
- Delete Word Right:<wbr class="f"> `C-DEL`

I use 75 keyboard ([[QMK#My layers and modifiers]]), which haven't individual navigation keys and I use custom `NAV` layer, which allowing me to use them, here is list of this shortcuts:

- Up, Select Up:<wbr class="f"> `NAV-u`, `NAV-S-u`
- Down, Select Down:<wbr class="f"> `NAV-e`, `NAV-S-e` <!--SR:!2024-04-30,1,205-->
- Left, Select Left:<wbr class="f"> `NAV-n`, `NAV-S-n`
- Word Left, Select Word Left:<wbr class="f"> `NAV-C-n`, `NAV-C-S-n`
- Right, Select Right:<wbr class="f"> `NAV-i`, `NAV-S-i`
- Word Right, Select Word Right:<wbr class="f"> `NAV-C-i`, `NAV-C-S-i`
- PgUp, Select PgUp:<wbr class="f"> `NAV-l`, `NAV-S-l`
- PgDn, Select PgDn:<wbr class="f"> `NAV-y`, `NAV-S-y`
- Home, Select to Home:<wbr class="f"> `NAV-j`, `NAV-S-j` <!--SR:!2024-04-30,1,205-->
- Top, Select to Top:<wbr class="f"> `NAV-C-j`, `NAV-C-S-j`
- End, Select to End:<wbr class="f"> `NAV-;`, `NAV-S-;`
- Bottom, Select to bottom:<wbr class="f"> `NAV-C-;`, `NAV-C-S-;` <!--SR:!2024-04-30,1,205-->

## Other

I can setup `RightAlt-` to ISO level3 Shift (type characters like ¡ºª¢áß while holding `RightAlt-`, label `2`) and `Shift-RightAlt-` to ==compose== key (one key press + sequence) in KDE, system settings → configure switching → alternate symbols. <!--SR:!2025-08-03,3,250-->

My current Desktop Environment is KDE and I use a lot customized [[KDE_common_shortcuts]].

Since my most used program is Neovim, I have a lot of shortcuts for it. To quit I use `ZZ`, `:x`, `:q` and `:qa` 😼. I store basic keybindings in my [[vim_base_keybindings|Base keybindings]] note and more advanced in [[Neovim]].

[[GNU_Readline]] used in many programs like Bash, Python, etc. So I need to know some basic keybindings to work with it.

[[Obsidian#Hotkeys|Obsidian]] is my [[Telekasten|Zettelkasten system]] companion, main task is to render markdown, process [[spaced_repetition]] notes and work with [[excalidraw]] diagrams.

Browser, currently, I use [[Firefox]] with [[Vimium]] extension.

I use [[Zathura]] to read PDFs. It's fast and support many formats.

[[Slack]] is my team communication tool.

[[Blender]] is my favorite 3D modeling software.

I use [[Krita]] as my primary drawing tool.

[[Inkscape]] is a vector graphics editor. I use it rarely, but it's very powerful, and I'm planning to learn it more.

I use [[MPV]] as my main multimedia player.

[[cmus]] is my favorite audio-player, near to zero setup, and keyboard driven.

I use [[Zsh]] as my main interactive command interpreter. Some keybindings from GNU readline are available in Z shell, but I usually use Vi-mode in Zsh, and it has its own keybindings. To enter Vi-mode in Zsh type `Esc`, to back to insert mode type `i`.

I use [[fzf]] as main UI provider for list of anything, for mine shell scripts and commands.

For reverse search in history with ==`C-r`== hotkey and ==`Up`== key, I use [atuin](https://github.com/atuinsh/atuin).

Remove item from atuin:

- Select the entry you want to delete
- Press `C-o` to open the inspector
- Press `C-d` to delete the entry NOTE: there is no confirmation dialog after pressing `C-d`.

Lazygit as [[version_control]] tool, to list shortcuts press `?` in TUI.

## External links

- [Monkeytype | A minimalistic, customizable typing test](https://monkeytype.com/)
- [ShortcutFoo](https://www.shortcutfoo.com/)
- [KeyCombiner](https://keycombiner.com/)
- [VimGolf - real Vim ninjas count every keystroke!](https://www.vimgolf.com/)