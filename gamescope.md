---
created: 2024-12-16T08:48+03:00
tags:
  - blog
external:
  - https://github.com/ValveSoftware/gamescope
sr-due: 2025-07-27
sr-interval: 13
sr-ease: 256
---

# gamescope: the micro-compositor formerly known as steamcompmgr

> Gamescope is a microcompositor from Valve that is used on the Steam Deck. Its goal is to provide an isolated compositor that is tailored towards gaming and supports many gaming-centric features such as:
>
> - Spoofing resolutions.
> - Upscaling using AMD FidelityFX™ Super Resolution or NVIDIA Image Scaling.
> - Limiting framerates.
>
> As a microcompositor it is designed to run as a nested session on top of your existing desktop environment though it is also possible to use it as an embedded compositor as well. — <cite>[Gamescope - ArchWiki](https://wiki.archlinux.org/title/Gamescope)</cite>

I currently use it to "fix" some specific display and perfomance issues with [[game|games]] under my [[NixOS]] system, by spoofing resolutions and use custom upscaling mechanisms.

## Keyboard shortcuts

To use shortcuts need to enable keyboard passthrough, with `D-F1` hotkey (`D-S-F1` to disable). TODO: maybe something changed: [issue: Super key for shortcuts considered harmful](https://github.com/ValveSoftware/gamescope/issues/391).

- Toggle fullscreen:<wbr class="f"> `D-f`
- Toggle nearest neighbour filtering:<wbr class="f"> `D-n`
- Toggle FSR upscaling:<wbr class="f"> `D-u`
- Toggle NIS upscaling:<wbr class="f"> `D-y`
- Increase FSR sharpness by 1:<wbr class="f"> `D-i`
- Decrease FSR sharpness by 1:<wbr class="f"> `D-o`
- Take screenshot (currently goes to /tmp/gamescope_$DATE.png):<wbr class="f"> `D-s`
- Toggle keyboard grab:<wbr class="f"> `D-g`
