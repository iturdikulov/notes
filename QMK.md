---
created: 2023-01-28T00:00+03:00
directory: ~/Computer/hardware/QMK
tags:
  - blog
  - keyboard
sr-due: 2025-07-25
sr-interval: 11
sr-ease: 248
---

# QMK Firmware

I use QMK on my keyboard (KBD75 rev2). I'have done some basic customizations to
keymap. I use Colemak-DH layout (check image below), but on system level
(because I use also Russian ЙЦУКЕН layout, so it's depends on qwerty layout).

![Colemak-DH ANSI](img/Colemak-DH_ANSI.png)
_Colemak-DH ANSI_

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

```bash
qmk new-keymap -km inomoz
qmk config user.keymap=inomoz
```

Now you have own keymap, you can edit it in
`keyboards/kbdfans/kbd75/keymaps/inomoz/keymap.c`. My layout is
[here](./external/keymap.c).

7. Compile and flash Firmware `qmk compile -kb kbdfans/kbd75/rev2 -km inomoz`
it's equivalent to `qmk compile` if keyboard and keymap are set in config.

9. Flash QMK Firmware `qmk flash -kb kbdfans/kbd75/rev2 -km inomoz`
it's equivalent to ==`qmk flash`== if keyboard and keymap are set in config.

When you flash QMK Keyboard, put it into `DFU` (Bootloader) Mode, In my case I
need to hold ==`S-ESC`== keybinding and plug USB cable.

[More info](https://docs.qmk.fm/#/newbs_flashing?id=put-your-keyboard-into-dfu-bootloader-mode).

## My keymap variant

I have [generated PDF file](./img/ref-QMK_config.pdf) with mine keymap,
here is [QMK keymap](external/keymap.c) file. To generate it I followed these
steps:

1. Go to directory with QMK firmware `cd <path_to_dir>/QMK`
2. Generate keymap.json file
```bash
qmk c2json --no-cpp keymap.c >keymap.json # without --no-cpp it might not work
```
3. Go to [QMK Configurator](https://config.qmk.fm/), upload here `keymap.json`
   and print it to PDF ( icon and  icon).

## My layers and modifiers

TODO: not actual

Hold `SYM` to activate the symbols layer.

Hold `NUM` to activate the navigation layer

The home row modifiers are `oneshot` so that it's possible to modify the keys on
the base layer, where there are no dedicated modifiers.

Sometimes you need to use qwerty layout (games for example), I created special
layer in QMK for that, which activate qwerty layout over the Colemak-DH layout
when I press special `QWE` default layer switch button (toggle logic).

## External links

- [qmk_firmware/users/callum](https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
- [QMK Firmware - An open source firmware for AVR and ARM based keyboards](https://qmk.fm/)
- [QMK Configurator](https://config.qmk.fm/#/kbdfans/kbd75/rev2/LAYOUT)
- [QMK JSON converter](https://jhelvy.shinyapps.io/qmkjsonconverter/)
- [Inom-Turdikulov/qmk_firmware: Open-source keyboard firmware for Atmel AVR and Arm USB families](https://github.com/inomoz/qmk_firmware)
- [x] [QMK: Mouse Turbo Click](https://getreuer.info/posts/keyboards/mouse-turbo-click/index.html)
- [x] [My current keyboard layout - Eli Rodríguez Pérez — Personal blog](https://eli-rodriguez.com/en/posts/my-current-keyboard-layout/)
- [ ] [QMK Basics – Thomas Baart](https://thomasbaart.nl/category/mechanical-keyboards/firmware/qmk/qmk-basics/)
