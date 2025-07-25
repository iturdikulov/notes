---
created: 2023-08-28T00:00+03:00
external: https://colemakmods.github.io/mod-dh/
archive: true
tags:
  - blog
sr-due: 2025-07-28
sr-interval: 18
sr-ease: 214
---

# Colemak Mod-DH

> Colemak Mod-DH introduces a minor modification to the Colemak keyboard layout, designed to make typing more comfortable. The resulting layout is commonly known as Colemak-DH.\
> — <cite>[Colemak Mod-DH](https://colemakmods.github.io/mod-dh/)</cite>

On [[Android]] you can use special application, which add new layout for physical keyboard: [ColemakMods/mod-dh](https://github.com/ColemakMods/mod-dh/tree/master/android).

To temporarily switch into Colemak-DH layout use this commands (require Xorg): `setxkbmap us,ru -variant colemak_dh`.

It's also possible to use `loadkeys` command to load Colemak-DH layout on TTY. Find the layout in `/usr/share/kbd/keymaps/i386/colemak/` and load it with `loadkeys colemak_dh` command.
