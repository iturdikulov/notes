---
date: 2023-01-01
draft: true
sr-due: 2023-03-27
sr-ease: 290
sr-interval: 14
tags:
- inbox
- definition
- dev-tip
sr-due: 2024-02-03
sr-interval: 262
sr-ease: 310
---

# dmenu (dynamic menu for X)

> dmenu is a dynamic menu for X, originally designed for dwm. It manages large
> numbers of user-defined menu items efficiently.
>
> -- [dmenu](https://tools.suckless.org/dmenu/)

I widely use dmenu in my scripts, which linked with my global shortcuts. It's
allow integrating CLI programs with nice looking UI to quickly run desired
actions.

You can use dmenu as programs launcher (main purpose), search tool, etc. One of
popular alternative is `rofi`, but for me, it's too complex.

dmenu is keyboard oriented program, and need to use it's

## dmenu keybindings

dmenu is completely controlled by the keyboard.

{#TAB}::{#C-i}, Copy to the input field (to run with arguments)

{#RET}::Confirm selection and exit (execute)

{#C-RET}::Confirm selection and continue (multi-run)

{#S-RET}::Confirm input (multi-run)

{#ESC}, {#C-c}, {#C-g}::Exit without selecting an item

{#C-a}, {#M-g}::Home in input and menu

{#C-e}, {#M-G}::End in input and menu

{#left}, {#C-b}::Left in input and menu

{#right}, {#C-f}::Right in input and menu

{#M-b}::Move to start word in input

{#M-f}::Move to the end word in input

{#C-n}, {#M-h}::Down (or left) in menu

{#C-p}, {#M-l}::Up (or right) in menu

{#M-j}::Page down

{#M-k}::Page up

{#BS}, {#C-h}::Backspace in input

{#DEL}, {#C-d}::Delete in input

{#C-w}::Delete word left

{#C-u}::Delete line left

{#C-k}::Delete line right

{#C-y}::Paste from primary X selection

{#C-Y}::Paste from X clipboard

## Resources

- dmenu manpages - `man dmenu`
- [ArchWiki page](https://wiki.archlinux.org/title/dmenu)
- [Dmenu Best Practices](http://www.troubleshooters.com/linux/dmenu/bestpractices.htm)

