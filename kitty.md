---
external:
  - https://sw.kovidgoyal.net/kitty/
date: 2023-04-05T00:00+03:00
tags:
  - blog
  - archive
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 254
---

# Kitty (terminal emulator)

> `kitty` is designed for power **keyboard** users. To that end all its controls
> work with the keyboard (although it fully supports mouse interactions as
> well). Its configuration is a simple, human editable, single file for easy
> reproducibility (I like to store configuration in source control).
>
> The code in kitty is designed to be simple, modular and hackable. It is
> written in a mix of [[C]] (for performance sensitive parts) and [[Python]]
> (for easy hackability of the UI). It does not depend on any large and complex
> UI toolkit, using only OpenGL for rendering everything (NOTE: not perfect with
> specific fonts).
>
> Finally, kitty is designed from the ground up to support all modern terminal
> features, such as [[Unicode]], true color, bold/italic fonts,
> text formatting, etc. It even extends existing text formatting escape codes,
> to add support for features not available elsewhere, such as colored and
> styled (curly) underlines. One of the design goals of kitty is to be easily
> extensible, so that new features can be added in the future with relatively
> little effort.\
> — <cite>[kitty](https://sw.kovidgoyal.net/kitty/overview)</cite>

<!-- NEXT: link/note to wezterm -->
Personally, I just switched to Wezterm and not use kitty right
now.

## Shortcuts

Kitty support any operation with keyboard (which is cool) and also supports all
shortcuts customization.

`Mod` key in my configuration is `Ctrl+Shift`.

## Scrolling

These shortcuts are working only in terminal mode (not in any TUI/Full screen
console application).

Line up / Line down:<wbr class="f"> `Mod+k` / `Mod+j`

Page up / Page down:<wbr class="f"> `Mod+u` / `Mod+d`

Top / Bottom:<wbr class="f"> `Mod+\` / `Mod+/`

Previous / Next shell prompt vertical position:<wbr class="f"> `Mod+z` / `Mod+x`

Browse scrollback in less:<wbr class="f"> `Mod+h`

Browse last cmd output:<wbr class="f"> `Mod+g`

## Tabs

New tab:<wbr class="f"> `Mod-t`

Close tab:<wbr class="f"> `Mod-q`

Next tab / Previous tab:<wbr class="f"> `C-<tab>` / `C-S-<tab>`

Switch layout:<wbr class="f"> `Mod-l`

Go to specific tab:<wbr class="f"> `C-M-<tab number>`

Close current tab:<wbr class="f"> `Mod-q`

Move tab forward / backward:<wbr class="f"> `Mod-.` / `Mod-,`

Set tab title:<wbr class="f"> `C-S-M-t`

## Windows

New window:<wbr class="f"> `Mod-RET`

New OS window:<wbr class="f"> `M-S-RET`, it's my custom shortcut

Close window:<wbr class="f"> `s-S-c`, it's my custom shortcut

Resize window:<wbr class="f"> `Mod-r`

Next window / Previous window:<wbr class="f"> `Mod+]` / `Mod+[` * TODO: need rebind

Move window forward:<wbr class="f"> `Mod+f`

Move window backward:<wbr class="f"> `Mod+b`

Move window to top `Mod+\``

Visually focus window (with number):<wbr class="f"> `Mod+F7`

Visually swap window (with number):<wbr class="f"> `Mod+F8`

Focus specific window:<wbr class="f"> `Mod+<window number>` (1-9)

TODO: check other window shortcuts

## Other

Increase font size:<wbr class="f"> `Mod-equal`
Decrease font size:<wbr class="f"> `Mod-minus`
Restore font size:<wbr class="f"> `Mod-backspace`

Open URL in web browser:<wbr class="f"> `Mod-e`

Edit kitty.conf:<wbr class="f"> `Mod-F2`

Reload kitty.conf:<wbr class="f"> `Mod-F5`

Show help:<wbr class="f"> `Mod-F1`

Copy to clipboard:<wbr class="f"> `Mod-c`

Paste from clipboard:<wbr class="f"> `Mod-v`

Paste from selection:<wbr class="f"> `Mod-s`

Pass selection to program:<wbr class="f"> `Mod-o` ?

Toggle full-screen:<wbr class="f"> `Mod-F11`

Input Unicode character:<wbr class="f"> `C-M-u`, customized

Reset the terminal:<wbr class="f"> `Mod-delete` ?

Edit kitty.conf:<wbr class="f"> `Mod-f2`
Reload kitty.conf:<wbr class="f"> `Mod-f5`
Debug kitty.conf:<wbr class="f"> `Mod-f6`

Open a kitty shell:<wbr class="f"> `Mod-escape`

## Custom shortcuts

Switch project using sessionizer:<wbr class="f"> `C-space`

Switch project using sessionizer and ignore duplicate tabs:<wbr class="f"> `C-S-space`

Find tab:<wbr class="f"> `C-M-F`

Start keyboard-driven text selection as a kitten, using [kitty_grab](https://github.com/yurikhan/kitty_grab):<wbr class="f"> `C-M-c`
