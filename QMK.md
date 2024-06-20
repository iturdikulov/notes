---
date: 2023-01-28
directory: ~/Computer/hardware/QMK
tags:
  - inbox
  - SR_software
sr-due: 2024-01-30
sr-interval: 5
sr-ease: 248
---

# QMK Firmware

> The goal of the QMK software project is to develop a completely customizable,
> powerful, and enjoyable firmware experience for any project - keyboard or
> otherwise - and to provide helpful, encouraging, and kind support and feedback
> for people with any software development experience.
TODO: add source


I use QMK on my keyboard (KBD75 rev2). I'have done some basic customizations to
keymap. I use Colemak-DH layout, but on system level (because I use also Russian
ЙЦУКЕН layout, so it's depends on qwerty layout).

Key codes: [qmk_firmware/docs/keycodes.md](https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md)

Flash firmware steps:

1. Go to directory with QMK firmware `cd qmk_firmware`

2. Prepare environment, I have configured [[NixOS]] module:
[qmk.nix](https://github.com/iturdikulov/dotfiles/blob/master/modules/hardware/qmk.nix).

3. Run qmk setup, in most situations you will answer `y` to all questions
   `qmk setup`

4. Test Your Build Environment (firmware can be compiled), kbdfans/kbd75/rev2 is
   my keyboard. `qmk compile -kb kbdfans/kbd75/rev2 -km default`

5. Configure keyboard `qmk config user.keyboard=kbdfans/kbd75/rev2`

6. Create keymap and set it as default

```sh
qmk new-keymap -km inomoz
qmk config user.keymap=inomoz
```

Now you have own keymap, you can edit it in
`keyboards/kbdfans/kbd75/keymaps/inomoz/keymap.c`. My layout is
[here](./external/keymap.c).

7. Compile and flash Firmware `qmk compile -kb kbdfans/kbd75/rev2 -km inomoz`

it's equivalent to `qmk compile` if keyboard and keymap are set in config.

9. Flash Firmware `qmk flash -kb kbdfans/kbd75/rev2 -km inomoz`

it's equivalent to `qmk flash` if keyboard and keymap are set in config.

Put Your Keyboard into `DFU` (Bootloader) Mode, after entering command above. In
my case I need to hold `ESC` and plug USB cable.

[More info](https://docs.qmk.fm/#/newbs_flashing?id=put-your-keyboard-into-dfu-bootloader-mode).

## My keymap variant

![Colemak-DH ANSI](img/Colemak-DH_ANSI.png)

## Keys

Check [QMK keymap](external/keymap.c) file to get actual keys map.

## References

- [qmk_firmware/users/callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
- [QMK Firmware - An open source firmware for AVR and ARM based keyboards](https://qmk.fm/)
- [QMK Configurator](https://config.qmk.fm/#/kbdfans/kbd75/rev2/LAYOUT)
- [QMK JSON converter](https://jhelvy.shinyapps.io/qmkjsonconverter/)
- [Inom-Turdikulov/qmk_firmware: Open-source keyboard firmware for Atmel AVR and Arm USB families](https://github.com/inomoz/qmk_firmware)
- [x] [My current keyboard layout :: Eli Rodríguez Pérez — Personal blog](https://eli-rodriguez.com/en/posts/my-current-keyboard-layout/)
- [ ] [QMK Basics – Thomas Baart](https://thomasbaart.nl/category/mechanical-keyboards/firmware/qmk/qmk-basics/)
