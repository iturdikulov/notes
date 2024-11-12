---
date: 2023-08-05
tags:
  - inbox
  - productivity
sr-due: 2024-02-04
sr-interval: 7
sr-ease: 254
---

# Rofi

> Rofi started as a clone of simpleswitcher, written by Sean Pringle - a popup
> window switcher roughly based on superswitcher. Simpleswitcher laid the
> foundations, and therefore Sean Pringle deserves most of the credit for this
> tool. Rofi (renamed, as it lost the simple property) has been extended with
> extra features, like an application launcher and ssh-launcher, and can act as
> a drop-in dmenu replacement, making it a very versatile tool. \
> — <cite>[davatorium/rofi](https://github.com/davatorium/rofi)</cite>

Rofi is my primary UI for GUI windows manage (launch/activate), passwords
picking with [[pass]], open bookmarks, favorite files open tool, etc.

## Key bindings (not all)

- Paste clipboard::`C-v`
- Clear line:`C-w`
- Move to end of line::`C-e`
- Move to start of line::`C-a`
- Move word forward::`M-f`
- Move word backward::`M-b`
- Move character forward::`C-f`
- Move character backward::`C-b` <!--SR:!2024-09-22,1,234-->
- Remove word backward::`C-BCK`
- Remove word forward::`C-A-d`
- Remove char forward::`C-d` or `DEL`
- Remove char backward::`C-h` or `BCK`
- Remove to EOL* (not working FSR)::`C-k`
- Delete till start of line::`C-u`
- Accept selection::`C-m` or `RET`
- Use entered text as command (useful to run commands with args)::`C-RET`
- Use entered text as command (in ssh/run modes)::`C-S-RET`
- Use alternate accept command (?)::`S-RET`
- Delete entry from history::`S-DEL`
- Switch to next mode::`S-Left` or `C-TAB`
- Switch to previous mode::`S-Right`
- Start completion for mode::`C-l`
- To the previous column::`C-Page_Up`
- Go to the next column::`C-Page_Down`
- Select previous entry::`Up` or `C-p`
- Select next entry::`Down` or `C-n`
- Go to next row::`Tab`
- Go to previous row::`S-Tab`
- Go to the previous page::`Page_Up`
- Go to the next page::`Page_Down`
- To the first entry::`Home`
- Go to the last entry::`End`
- Set selected item as input text::`C-space`
