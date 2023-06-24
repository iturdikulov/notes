---
canonicalUrl: https://sw.kovidgoyal.net/kitty/
date: 2023-04-05
draft: true
sr-due: 2023-06-17
sr-ease: 270
sr-interval: 4
tags:
  - definition
  - dev-tip
---

# Kitty (terminal emulator)

> `kitty` is designed for power **keyboard** users. To that end all its controls
> work with the keyboard (although it fully supports mouse interactions as
> well). Its configuration is a simple, human editable, single file for easy
> reproducibility (I like to store configuration in source control).

> The code in kitty is designed to be simple, modular and hackable. It is
> written in a mix of [[c (programming language)|c]] (for
> performance sensitive parts) and [[Python]] (for easy hackability
> of the UI). It does not depend on any large and complex UI toolkit, using only
> OpenGL for rendering everything (NOTE: not perfect with specific fonts).

> Finally, kitty is designed from the ground up to support all modern terminal
> features, such as [[unicode]], true color, bold/italic fonts,
> text formatting, etc. It even extends existing text formatting escape codes,
> to add support for features not available elsewhere, such as colored and
> styled (curly) underlines. One of the design goals of kitty is to be easily
> extensible, so that new features can be added in the future with relatively
> little effort.

## Shortcuts

Open URL in web browser
?
`C-S-e`

Edit kitty.conf
?
`C-S-f2`

Reload kitty.conf
?
`C-S-f5`

Go to specific tab
?
`C-M-n`

Close current tab
?
`C-S-q`

Move tab forward
?
`C-S-.`

Move tab backward
?
`C-S-,`

## Custom shortcuts

Switch project using sessionizer
?
`C-space`

Find tab
?
`C-M-f`

Start keyboard-driven text selection as a kitten, using [kitty_grab](https://github.com/yurikhan/kitty_grab)
?
`C-M-c`
