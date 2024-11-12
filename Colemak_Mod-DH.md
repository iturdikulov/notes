---
date: 2023-08-28
external: https://colemakmods.github.io/mod-dh/
archive: true
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 4
sr-ease: 274
---

# Colemak Mod-DH

> Colemak Mod-DH introduces a minor modification to the Colemak keyboard layout,
> designed to make typing more comfortable. The resulting layout is commonly
> known as Colemak-DH.\
> — <cite>[Colemak Mod-DH](https://colemakmods.github.io/mod-dh/)</cite>

On [[Android]] you can use special application, which add new layout for
physical keyboard: [ColemakMods/mod-dh](https://github.com/ColemakMods/mod-dh/tree/master/android).

To temporarily switch into Colemak-DH layout use this commands (require xorg):
`setxkbmap us,ru -variant colemak_dh`.

It's also possible to use `loadkeys` command to load Colemak-DH layout on TTY.
Find the layout in `/usr/share/kbd/keymaps/i386/colemak/` and load it with
`loadkeys colemak_dh` command.
