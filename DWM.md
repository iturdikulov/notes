---
date: 2022-12-29
tags:
  - inbox
  - SR_productivity
external:
  - https://github.com/bakkeby/dwm-flexipatch
directory: ~/Computer/software/dwm-flexipatch/
sr-due: 2024-02-07
sr-interval: 10
sr-ease: 257
---

# dwm (dynamic window manager)

> dwm is a dynamic window manager for X. It manages windows in tiled, monocle
> and floating layouts. All the layouts can be applied dynamically,
> optimizing the environment for the application in use and the task performed\
> — <cite>[dwm](https://dwm.suckless.org/)</cite>

I used long time `i3wm`, `KWin`, `GNOME`, `Desktop Window Manager`, various
status bars (like `polybar`), etc. But after that I discovered DWM, I just
switched to it and use it with maximum pleasure. It has some "disadvantages",
maybe not clear logic if you use it first time, but It's all manageable and
solvable. Especially if you use something like `DWM flexipatch`.

Right now I use various patches, with my dwm-flexipatch fork:
[Inom-Turdikulov/dwm-flexipatch](https://github.com/Inom-Turdikulov/dwm-flexipatch).

To use dwm effectively, I use my own [[DWM_keyboard_shortcuts|dwm shortcuts]].

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

For additional information, see [[DWM_keyboard_shortcuts]].

## Additional functional

### Dwmblocks DND (not used anymore, maybe in future)

Enabled modules are: `datetime`, volume status and keyboard layout.
That items are not interactive.

I also created custom modules, `dnd`.

- [dnd](https://github.com/inomoz/dotfiles/blob/main/.local/bin/dnd)
(Do Not Disturb), key <kbd>s-C-n</kbd>.
It's toggling notifications pause mode, in status bar displayed ⛔ icon.

## Keyboard shortcuts

Keyboard shortcuts are described in [[DWM_keyboard_shortcuts]] note.

## Workspaces (beta)

- 1. My main working workspace. Usually tmux session in pair with terminal.
- 2. Browser workspace, also can contains [[Newsboat]] tmux session.
- 3. [[ChatGPT]] + and [[Translate-shell]] workspace
- 4. My personal wiki/education workspace, neovim with wiki project
- 5. My personal art/game_dev workspace, [[Krita_(software)]], [[Godot]], etc.
- 6. Free* workspace
- 7. Email/Contacts workspaces
- 8. Working Chat workspace, usually [[Slack]]
- 9. Stream and music workspace


## Keyboard shortcuts

I swapped meta key (ALT/META) to super key (WIN), which used in DWM by default
as modifier key, to decrease key conflicts in various programs.

Key notation in flashcards - I just use vim key notation (`:h key-notation`),
with some exceptions.

Here core shortcuts, which I use in DWM.

Kill active window (hard to avoid mistakes)::`D-S-c`

Power menu ::`<D-S-C-Del>`, (all modifiers + `Del`)

Pass menu::`<D-p>`

Programs menu::`<D-space>`

Active programs::`<D-a>`

Unicode and [[Nerd_fonts|Nerdfonts]] menu::`<D-u>`

Toggle sticky on active window (topmost)::`<D-S>`

Focus next monitor::`<D-.>` +1

Focus previous monitor::`<D-,>` -1

Apply next monitor tag to current window (like move it to next monitor)::`<D-S-.>`

Apply previous monitor tag to current window (like move it to previous monitor)::`<D-S-,>`

### Programs specific shortcuts

Open `$TERMINAL` in scratchpad::`D-'`

Open calculator scratchpad::`D-"`

Actual programs shortcuts/specific hardware control, etc. located in
`config.h`.
Check `SHCMD()` functions.

Also, I have predefined workspace programs shortcuts. For example to open
browser and feed reader I use `<M-S-2>`.

### Resize windows

Toggle top bar (all workspaces go into sort of full-screen mode)::`D-b`

Toggle full screen mode for current window (fake full-screen)::`<D-y>`

Focus next window::`<D-h>`

Focus previous window::`<D-l>`

Resize window to right::`<D-S-h>`, you can also "prefire" changing width

Resize window to left::`<D-S-l>`

Increase / decrease number of windows on master
&#10;
`<D-i>`, `<D-d>`. I see here user-case when you need multiple horizontal windows
on master. This also helpful if you need two side-by side windows (vertical
layout).

Push active window from stack to master (toggle)::`<D-CR>`

### Tags adding/removing

Apply tag to active window (like move window to tag)::`<D-S-1>`, ..., `<D-S-9>`

View tag (or switch to workspace)::`<D-1>`, ..., `<D-9>`

Switch per window in current workspace::`<D-Tab>`

View all windows on screen (reset - apply tag)::`<D-S-0>`

Toggle tag 2 on focused window (add/remove to workspace)
You can see same window on multiple tags, on active and on tag #2!
&#10;
`<D-S-C-2>`

Apply tag to all (window appear on all tags), to reset apply some tag.
&#10;
`<D-S-0>`

Banish tags (add/remove all windows from #2 tag)
It's sort of moving all windows from tag #2 to current tag. To reset press
again.
&#10;
`<D-C-2>`

### Toggle workspace layout

I recommend test layout using at least 2 windows.

Tiled layout::`<D-t>`
Floating layout::`<D-f>`
Monocle layout::`<D-m>`

Toggle between tiled and monocle layout::`<D-C-S-space>`

### Floating windows control

Toggle floating on active window::`<D-S-space>`

Toggle floating on active window using mouse::`Super+LeftMouse`

Drag floating window using mouse (with drag)::`<D-LeftMouse>`

Resize floating window using mouse (with drag)::`<D-RightMouse>`

Which keys you use as floating window resize/move keys (float position patch)?
```
These directions:
↖ ↑ ↗
← . →
↙ ↓ ↘
```
&#10;
q f p
r c t
x s d

In my case `Mod3Mask` is bind to `XF86Tools` (`F13`) key, (added manually using
[[QMK]]).

TODO: not actual, add info about xorg config
To enable mod3 key I run this command in [[DWM]] autostart script:
`xmodmap -e "clear mod3" -e "add mod3 = XF86Tools"`

Move floating window using grid
&#10;
`Mod3Mask-qfprtxsd`

Move floating window (more precise)
&#10;
`Mod3Mask-M-qfprtxsd`

Resize client, client is positioned in a floating grid, movement is relative to
client's current position (center include)
&#10;
`Mod3Mask-S-qfprtxsdc`

Move floating window, absolute positioning (allows moving windows between
monitors)?
&#10;
`Mod3Mask-C-qfprtxsd`, but it's probably useless for me.

## TODO

- TODO: create fancy screenshot with border
- [x] create repo with my patches, I switched to [DWM
flexipatch](file:///home/inom/Computer/software/dwm-flexipatch/)
- [-] describe dwmblocks, I not use dwmblocks now, instead I use [GitHub -
Gerschtli/dwm-status: Highly performant and configurable DWM status
service](https://github.com/Gerschtli/dwm-status)

## External links

- [dwm - dynamic window manager | suckless.org software that sucks less](https://dwm.suckless.org/tutorial/)
- [Dave's Visual Guide to dwm - ratfactor](https://ratfactor.com/dwm)
- [dwm - Gentoo Wiki](https://wiki.gentoo.org/wiki/Dwm)
