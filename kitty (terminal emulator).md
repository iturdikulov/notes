---
canonicalUrl: https://sw.kovidgoyal.net/kitty/
date: 2023-04-05
draft: true
sr-due: 2023-06-17
sr-ease: 270
sr-interval: 4
tags:
- definition
- termtip
---

# Kitty (terminal emulator)

> `kitty` is designed for power **keyboard** users. To that end all its controls
> work with the keyboard (although it fully supports mouse interactions as
> well). Its configuration is a simple, human editable, single file for easy
> reproducibility (I like to store configuration in source control).

> The code in kitty is designed to be simple, modular and hackable. It is
> written in a mix of [[c (programming language)|c]] (for
> performance sensitive parts) and [[python]] (for easy hackability
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
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>e</kbd>
<!--SR:!2023-04-16,1,232-->

Edit kitty.conf
?
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>f2</kbd>
<!--SR:!2023-05-03,18,270-->

Reload kitty.conf
?
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>f5</kbd>
<!--SR:!2023-04-19,4,272-->

Go to specific tab
?
<kbd>ctrl</kbd>+<kbd>alt</kbd>+<kbd>n</kbd>
<!--SR:!2023-04-19,4,272-->

Close current tab
?
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>q</kbd>
<!--SR:!2023-05-05,3,212-->

Move tab forward
?
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>.</kbd>
<!--SR:!2023-04-16,1,232-->

Move tab backward
?
<kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>,</kbd>
<!--SR:!2023-04-16,1,232-->

## Custom shortcuts

Switch project using sessionizer
?
<kbd>c</kbd>+<kbd>space</kbd>
<!--SR:!2023-04-19,4,272-->

Find tab
?
<kbd>c</kbd>+<kbd>a</kbd>+<kbd>f</kbd>
<!--SR:!2023-05-05,3,212-->

Switch to `n` tab
?
<kbd>c</kbd>+<kbd>a</kbd>+<kbd>[n]</kbd>
<!--SR:!2023-04-19,4,272-->

Start keyboard-driven text selection as a kitten, using [kitty_grab](https://github.com/yurikhan/kitty_grab)
?
<kbd>c</kbd>+<kbd>a</kbd>+<kbd>c</kbd>
<!--SR:!2023-04-16,1,232-->