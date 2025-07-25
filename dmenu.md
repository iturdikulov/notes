---
created: 2023-01-01T00:00+03:00
tags:
  - blog
  - archive
sr-due: 2025-07-22
sr-interval: 4
sr-ease: 270
---

# dmenu (dynamic menu for X)

> dmenu is a dynamic menu for X, originally designed for dwm. It manages large numbers of user-defined menu items efficiently.\
> — <cite>[dmenu](https://tools.suckless.org/dmenu/)</cite>

I widely used dmenu in my scripts (before rofi), which linked with my global shortcuts. It's allow integrating CLI programs with nice looking UI to quickly run desired actions.

You can use dmenu as programs launcher (main purpose), search tool, etc. One of popular alternative is [[Rofi]], which I use right now.

dmenu is keyboard oriented program, and need to use it's

dmenu keybindings

dmenu is completely controlled by the keyboard.

- NEXT: shift+enter and dmenu term wait?

`TAB`, `C-i`:<wbr class="f"> Copy selection to the input field (to run with arguments)

`<cr>`:<wbr class="f"> Confirm selection and exit (execute)

`C-<cr>`
<br class="f">
Confirm selection and continue (multi-run). Useful for running multiple instances of the same program.

`S-<cr>`:<wbr class="f"> Confirm input and run (run exactly what is typed in the input field)

`ESC`, `C-c`, `C-g`:<wbr class="f"> Exit without selecting an item

`C-a`, `M-g`:<wbr class="f"> Home in input and menu

`C-e`, `M-G`:<wbr class="f"> End in input and menu

`left`, `C-b`:<wbr class="f"> Left in input and menu

`right`, `C-f`:<wbr class="f"> Right in input and menu

`M-b`:<wbr class="f"> Move to start word in input

`M-f`:<wbr class="f"> Move to the end word in input

`C-n`, `M-h`:<wbr class="f"> Down (or left) in menu

`C-p`, `M-l`:<wbr class="f"> Up (or right) in menu

`M-j`:<wbr class="f"> Page down

`M-k`:<wbr class="f"> Page up

`BS`, `C-h`:<wbr class="f"> Backspace in input

`DEL`, `C-d`:<wbr class="f"> Delete in input

`C-w`:<wbr class="f"> Delete word left

`C-u`:<wbr class="f"> Delete line left

`C-k`:<wbr class="f"> Delete line right

`C-y`:<wbr class="f"> Paste from primary X selection

`C-Y`:<wbr class="f"> Paste from X clipboard

## External links

- dmenu manpages - `man dmenu`
- [ArchWiki page](https://wiki.archlinux.org/title/dmenu)
- [Dmenu Best Practices](http://www.troubleshooters.com/linux/dmenu/bestpractices.htm)
