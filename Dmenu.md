---
date: 2023-01-01
tags:
  - inbox
  - archive
  - SR_software
sr-due: 2024-01-29
sr-interval: 4
sr-ease: 270
---

# dmenu (dynamic menu for X)

TODO: move notes into rofi

> dmenu is a dynamic menu for X, originally designed for dwm. It manages large
> numbers of user-defined menu items efficiently.\
> — <cite>[dmenu](https://tools.suckless.org/dmenu/)</cite>

I widely use dmenu in my scripts, which linked with my global shortcuts. It's
allow integrating CLI programs with nice looking UI to quickly run desired
actions.

You can use dmenu as programs launcher (main purpose), search tool, etc. One of
popular alternative is [[Rofi]], which I use right now.

dmenu is keyboard oriented program, and need to use it's

dmenu keybindings

dmenu is completely controlled by the keyboard.

- NEXT: shift+enter and dmenu term wait?

`TAB`, `C-i`::Copy selection to the input field (to run with arguments)

`<cr>`::Confirm selection and exit (execute)

`C-<cr>`
&#10;
Confirm selection and continue (multi-run). Useful for running multiple instances of the same program.

`S-<cr>`::Confirm input and run (run exactly what is typed in the input field)

`ESC`, `C-c`, `C-g`::Exit without selecting an item

`C-a`, `M-g`::Home in input and menu

`C-e`, `M-G`::End in input and menu

`left`, `C-b`::Left in input and menu

`right`, `C-f`::Right in input and menu

`M-b`::Move to start word in input

`M-f`::Move to the end word in input

`C-n`, `M-h`::Down (or left) in menu

`C-p`, `M-l`::Up (or right) in menu

`M-j`::Page down

`M-k`::Page up

`BS`, `C-h`::Backspace in input

`DEL`, `C-d`::Delete in input

`C-w`::Delete word left

`C-u`::Delete line left

`C-k`::Delete line right

`C-y`::Paste from primary X selection

`C-Y`::Paste from X clipboard

## References

- dmenu manpages - `man dmenu`
- [ArchWiki page](https://wiki.archlinux.org/title/dmenu)
- [Dmenu Best Practices](http://www.troubleshooters.com/linux/dmenu/bestpractices.htm)
