---
title: dwm (dynamic window manager)
date: 2022-12-29
tags:
  - inbox
  - definition
draft: true
sr-due: 2024-03-17
sr-interval: 4
sr-ease: 270
---

> dwm is a dynamic window manager for X. It manages windows in tiled, monocle
> and floating layouts. All of the layouts can be applied dynamically,
> optimizing the environment for the application in use and the task performed.
>
> &mdash; <cite>https://dwm.suckless.org/</cite>

![My configured DWM with 2 windows in foreground](../pasted_img_20230102033318.png)
_My configured DWM with 2 windows in foreground_

I used long time `i3wm`, `KWin`, `GNOME`, ~~`windows GUI`~~, various status bars
(like `polybar`), etc. But after that I discovered DWM, I just switched to it
and use it with maximum pleasure. It has some "disadvantages", maybe not clear
logic if you use it first time, but It's all manageable and solvable.

Right now I use various patches, with this DWM fork:
<kbd><https://github.com/bakkeby/dwm-flexipatch></kbd>

To use dwm effectively, you need to use [[dwm keyboard shortcuts]].

## Launching

Here my `~/.xinitrc`:

```bash
# load my environment variables
[ -f ~/.profile ] && . ~/.profile
[ -f ~/.profile-keys ] && . ~/.profile-keys

# load autostart programs and autorandr
[ -f ~/.xprofile ] && . ~/.xprofile

picom --experimental-backend  --backend glx --config ~/.config/picom/picom.conf -b
exec dwm
```

## Window model

```
+------+----------------------------------+--------+
| tags | title                            | status |
+------+---------------------+------------+--------+
|                            |                     |
|                            |                     |
|                            |                     |
|                            |                     |
|          master            |        stack        |
|        (first window)      |     (second window) |
|                            |                     |
|                            |                     |
|                            |                     |
+----------------------------+---------------------+
```

_Tiled layout_

By default, dwm in ==tiled== layout. But you can switch between ==tiled==,
==monocle==, ==floating== layouts.

Also, dwm support ==floating== windows.

For additional information, see [[dwm keyboard shortcuts]].
