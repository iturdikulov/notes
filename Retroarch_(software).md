---
date: 2022-12-29
draft: true
sr-due: 2024-01-20
sr-ease: 294
sr-interval: 248
tags:
- inbox
---

# RetroArch

Install & configure RetroArch on arch-based system!

# Install

```bash
# install package
pacman -S retroarch

# run first time to generate config files
retroarch

# Install
retroarch-assets-ozone # for a more desktop-friendly GUI.

```

# Configuration files

```bash
$HOME/.config/retroarch/retroarch.cfg

# ~/.config/retroarch/ - here main files

# Main directories
system - bios files
state - save states
saves - saves
```

# Recommended cores

<https://emulation.gametechwiki.com/index.php/Main_Page>

```bash
libretro-duckstation # ps 1
libretro-pcsx2 # ps 2
libretro-flycast # dreamcast
libretro-genesis-plus-gx # Sega MS/GG/MD/CD
libretro-bsnes-hd # Super Nintendo Entertainment System
libretro-mupen64plus-next # Nintendo 64 core
libretro-ppsspp # Sony PlayStation Portable core
```

# Useful links

<https://r-roms.github.io/megathread/retro/>
<https://archive.org/download/RetroarchSystemFiles/Retroarch-System/>
<http://81.234.103.195/>