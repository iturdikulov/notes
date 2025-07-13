---
created: 2022-12-29T00:00+03:00
tags:
  - blog
sr-due: 2027-07-01
sr-interval: 721
sr-ease: 269
---

# RetroArch

Install & configure RetroArch on arch-based system!

## Install

TODO: rewrite this section and use NixOS setup

```bash
# install package
pacman -S retroarch

# run first time to generate config files
retroarch

# Install
retroarch-assets-ozone # for a more desktop-friendly GUI.
```

## Configuration files

```bash
$HOME/.config/retroarch/retroarch.cfg

# ~/.config/retroarch/ - here main files

# Main directories
system - bios files
state - save states
saves - saves
```

## Recommended cores

```bash
libretro-duckstation # ps 1
libretro-pcsx2 # ps 2
libretro-flycast # dreamcast
libretro-genesis-plus-gx # Sega MS/GG/MD/CD
libretro-bsnes-hd # Super Nintendo Entertainment System
libretro-mupen64plus-next # Nintendo 64 core
libretro-ppsspp # Sony PlayStation Portable core
```

## External links

- [Emulation General Wiki](https://emulation.gametechwiki.com/index.php/Main_Page)
- [Retro - /r/Roms Megathread](https://r-roms.github.io/megathread/retro/)
- [RetroarchSystemFiles directory listing](https://archive.org/download/RetroarchSystemFiles/Retroarch-System/)
- [En-ROMs directory listing](https://archive.org/download/En-ROMs/En-ROMs/)
