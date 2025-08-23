---
created: 2023-08-05T00:00+03:00
tags:
  - blog
  - ends
sr-due: 2027-05-22
sr-interval: 681
sr-ease: 254
---

# Rofi

> Rofi started as a clone of simpleswitcher, written by Sean Pringle - a popup window switcher roughly based on superswitcher. Simpleswitcher laid the foundations, and therefore Sean Pringle deserves most of the credit for this tool. Rofi (renamed, as it lost the simple property) has been extended with extra features, like an application launcher and ssh-launcher, and can act as a drop-in dmenu replacement, making it a very versatile tool.\
> — <cite>[davatorium/rofi](https://github.com/davatorium/rofi)</cite>

Rofi is my primary UI for GUI windows manage (launch/activate), passwords picking with [[pass]], open bookmarks, favorite files open tool, etc.

## Key bindings

- Go to the previous page:<wbr class="f"> `Page_Up`
- Go to the next page:<wbr class="f"> `Page_Down`

- Paste clipboard:<wbr class="f"> `C-v`
- Clear line:`C-w`
- Move to end of line:<wbr class="f"> `C-e`
- Move to start of line:<wbr class="f"> `C-a`
- Move word forward:<wbr class="f"> `M-f`
- Move word backward:<wbr class="f"> `M-b`
- Move character forward:<wbr class="f"> `C-f`
- Move character backward:<wbr class="f"> `C-b` <!--SR:!2024-09-22,1,234-->
- Remove word backward:<wbr class="f"> `C-BCK`
- Remove word forward:<wbr class="f"> `C-A-d`
- Remove char forward:<wbr class="f"> `C-d` or `DEL`
- Remove char backward:<wbr class="f"> `C-h` or `BCK`
- Remove to EOL* (not working FSR):<wbr class="f"> `C-k`
- Delete till start of line:<wbr class="f"> `C-u`
- Accept selection:<wbr class="f"> `C-m` or `RET`
- Use entered text as command (useful to run commands with args):<wbr class="f"> `C-RET`
- Use entered text as command (in ssh/run modes):<wbr class="f"> `C-S-RET`
- Use alternate accept command (?):<wbr class="f"> `S-RET`
- Delete entry from history:<wbr class="f"> `S-DEL`
- Switch to next mode:<wbr class="f"> `S-Left` or `C-TAB`
- Switch to previous mode:<wbr class="f"> `S-Right`
- Start completion for mode:<wbr class="f"> `C-l`
- To the previous column:<wbr class="f"> `C-Page_Up`
- Go to the next column:<wbr class="f"> `C-Page_Down`
- Select previous entry:<wbr class="f"> `Up` or `C-p`
- Select next entry:<wbr class="f"> `Down` or `C-n`
- Go to next row:<wbr class="f"> `Tab`
- Go to previous row:<wbr class="f"> `S-Tab`
- To the first entry:<wbr class="f"> `Home`
- Go to the last entry:<wbr class="f"> `End`
- Set selected item as input text:<wbr class="f"> `C-space`
