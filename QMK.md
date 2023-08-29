---
date: 2023-01-28
draft: false
sr-due: 2024-01-08
sr-ease: 270
sr-interval: 236
tags:
- inbox
- software
---

# QMK Firmware

> The goal of the QMK software project is to develop a completely customizable,
> powerful, and enjoyable firmware experience for any project - keyboard or
> otherwise - and to provide helpful, encouraging, and kind support and feedback
> for people with any software development experience.

- QMK official site: https://qmk.fm/
- My fork of QMK: https://github.com/inomoz/qmk_firmware

I use QMK on my keyboard (KBD75 rev2). I'have done some basic customizations to
keymap. I use Colemak-DH layout, but on system level (because I use also Russian
ЙЦУКЕН layout, so it's depends on qwerty layout).

Key codes: https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md

Flash firmware steps:

1. Go to directory with QMK firmware `cd qmk_firmware`

2. Prepare environment:
   https://docs.qmk.fm/#/newbs_getting_started?id=prerequisites-3

```
sudo pacman --needed --noconfirm -S git python-pip libffi
sudo pacman -S qmk  # optionally you can install qmk from PIP
```

3. Run qmk setup, in most situations you will answer `y` to all questions
   `qmk setup`

4. Test Your Build Environment (firmware can be compiled), kbdfans/kbd75/rev2 is
   my keyboard. `qmk compile -kb kbdfans/kbd75/rev2 -km default`

5. Configure keyboard `qmk config user.keyboard=kbdfans/kbd75/rev2`

6. Create keymap and set it as default

```
qmk new-keymap -km inomoz
qmk config user.keymap=inomoz
```

Now you have own keymap, you can edit it in
`keyboards/kbdfans/kbd75/keymaps/inomoz/keymap.c`

7. Compile and flash Firmware `qmk compile -kb kbdfans/kbd75/rev2 -km inomoz`

it's equivalent to `qmk compile` if keyboard and keymap are set in config.

9. Flash Firmware `qmk flash -kb kbdfans/kbd75/rev2 -km inomoz`

it's equivalent to `qmk flash` if keyboard and keymap are set in config.

Put Your Keyboard into `DFU` (Bootloader) Mode, after entering command above. In
my case I need to hold `ESC` and plug USB cable.

https://docs.qmk.fm/#/newbs_flashing?id=put-your-keyboard-into-dfu-bootloader-mode

## Keys

TODO: describe keys

## My keymap variant

![Colemak-DH ANSI](./img/Colemak-DH_ANSI.png)

## Inspiration

https://peterxjang.com/img/miryoku-layout.png

## Resources

- [QMK Configurator](https://config.qmk.fm/#/kbdfans/kbd75/rev2/LAYOUT)
- [QMK JSON converter](https://jhelvy.shinyapps.io/qmkjsonconverter/)

## TODO

- [ ] https://thomasbaart.nl/2018/12/09/qmk-basics-tap-and-hold-actions/#:~:text=Tapping%20Force%20Hold%3A%20Allows%20you,modifier%20without%20pressing%20another%20key.