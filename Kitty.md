---
external: https://sw.kovidgoyal.net/kitty/
date: 2023-04-05
sr-due: 2023-06-17
sr-ease: 270
sr-interval: 4
tags:
- development
- software
---

# Kitty (terminal emulator)

> `kitty` is designed for power **keyboard** users. To that end all its controls
> work with the keyboard (although it fully supports mouse interactions as
> well). Its configuration is a simple, human editable, single file for easy
> reproducibility (I like to store configuration in source control).

> The code in kitty is designed to be simple, modular and hackable. It is
> written in a mix of [[C|c]] (for
> performance sensitive parts) and [[Python]] (for easy hackability
> of the UI). It does not depend on any large and complex UI toolkit, using only
> OpenGL for rendering everything (NOTE: not perfect with specific fonts).

> Finally, kitty is designed from the ground up to support all modern terminal
> features, such as [[Unicode]], true color, bold/italic fonts,
> text formatting, etc. It even extends existing text formatting escape codes,
> to add support for features not available elsewhere, such as colored and
> styled (curly) underlines. One of the design goals of kitty is to be easily
> extensible, so that new features can be added in the future with relatively
> little effort.

TODO: https://sw.kovidgoyal.net/kitty/overview

## Shortcuts

Kitty support any operation with keyboard (which is cool) and also supports all
shortcuts customization.

`Mod` key in my configuration is `Ctrl+Shift`.

## Scrolling

These shortcuts are working only in terminal mode (not in any TUI/Full screen
console application).

Line up / Line down::`Mod+k` / `Mod+j`

Page up / Page down::`Mod+u` / `Mod+d`

Top / Bottom::`Mod+\` / `Mod+/`

Previous / Next shell prompt vertical position::`Mod+z` / `Mod+x`

Browse scrollback in less::`Mod+h`

Browse last cmd output::`Mod+g`

## Tabs

New tab::`Mod-t`

Close tab::`Mod-q`

Next tab / Previous tab::`C-<tab>` / `C-S-<tab>`

Switch layout::`Mod-l`

Go to specific tab::`C-M-<tab number>`

Close current tab::`Mod-q`

Move tab forward / backward::`Mod-.` / `Mod-,`

Set tab title::`C-S-M-t`

## Windows

New window::`Mod-RET`

New OS window::`M-S-RET`, it's my custom shortcut

Close window::`s-S-c`, it's my custom shortcut

Resize window::`Mod-r`

Next window / Previous window::`Mod+]` / `Mod+[` * TODO: need rebind

Move window forward::`Mod+f`

Move window backward::`Mod+b`

Move window to top `Mod+\``

Visually focus window (with number)::`Mod+F7`

Visually swap window (with number)::`Mod+F8`

Focus specific window::`Mod+<window number>` (1-9)

TODO: check other window shortcuts

## Other

Increase font size::`Mod-equal`
Decrease font size::`Mod-minus`
Restore font size::`Mod-backspace`

Open URL in web browser::`Mod-e`

Edit kitty.conf::`Mod-F2`

Reload kitty.conf::`Mod-F5`

Show help::`Mod-F1`

Copy to clipboard::`Mod-c`

Paste from clipboard::`Mod-v`

Paste from selection::`Mod-s`

Pass selection to program::`Mod-o` ?

Toggle full-screen::`Mod-F11`

Input Unicode character::`C-M-u`, customized

Reset the terminal::`Mod-delete` ?

Edit kitty.conf::`Mod-f2`
Reload kitty.conf::`Mod-f5`
Debug kitty.conf::`Mod-f6`

Open a kitty shell::`Mod-escape`

## Custom shortcuts

Switch project using sessionizer::`C-space`

Switch project using sessionizer and ignore duplicate tabs::`C-S-space`

Find tab::`C-M-F`

Start keyboard-driven text selection as a kitten, using [kitty_grab](https://github.com/yurikhan/kitty_grab)::`C-M-c`
