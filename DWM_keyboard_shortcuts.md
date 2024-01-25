---
date: 2023-03-13
tags:
  - inbox
  - development
  - spaced_repetition
---

# dwm keyboard shortcuts

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

## Programs specific shortcuts

Actual programs shortcuts/specific hardware control, etc. located in
`config.h`.
Check `SHCMD()` functions.

Also, I have predefined workspace programs shortcuts. For example to open
browser and feed reader I use `<M-S-2>`.

## Resize windows

Toggle top bar (all workspaces go into sort of full-screen mode)::`D-b`

Toggle full screen mode for current window (fake full-screen)::`<D-y>`

Focus next window::`<D-h>`

Focus previous window::`<D-l>`

Resize window to right::`<D-S-h>`, you can also "prefire" changing width

Resize window to left::`<D-S-l>`

Increase / decrease number of windows on master
?
`<D-i>`, `<D-d>`. I see here user-case when you need multiple horizontal windows
on master.

Push active window from stack to master (toggle)::`<D-CR>`

## Tags adding/removing

Apply tag to active window (like move window to tag)::`<D-S-1>`, ..., `<D-S-9>`

View tag (or switch to workspace)::`<D-1>`, ..., `<D-9>`

Switch per window in current workspace::`<D-Tab>`

View all windows on screen (reset - apply tag)::`<D-S-0>`

Toggle tag 2 on focused window (add/remove to workspace)
You can see same window on multiple tags, on active and on tag #2!
?
`<D-S-C-2>`

Apply tag to all (window appear on all tags), to reset apply some tag.
?
`<D-S-0>`

Banish tags (add/remove all windows from #2 tag)
It's sort of moving all windows from tag #2 to current tag. To reset press
again.
?
`<D-C-2>`

## Toggle workspace layout

I recommend test layout using at least 2 windows.

Tiled layout::`<D-t>`
Floating layout::`<D-f>`
Monocle layout::`<D-m>`

Toggle between tiled and monocle layout::`<D-C-S-space>`

## Floating windows control

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
?
q f p
r c t
x s d

In my case `Mod3Mask` is bind to `XF86Tools` (`F13`) key, (added manually using
[[QMK]]).

TODO: not actual, add info about xorg config
To enable mod3 key I run this command in [[DWM]] autostart script:
`xmodmap -e "clear mod3" -e "add mod3 = XF86Tools"`

Move floating window using grid
?
`Mod3Mask-qfprtxsd`

Move floating window (more precise)
?
`Mod3Mask-M-qfprtxsd`

Resize client, client is positioned in a floating grid, movement is relative to
client's current position (center include)
?
`Mod3Mask-S-qfprtxsdc`

Move floating window, absolute positioning (allows moving windows between
monitors)?
?
`Mod3Mask-C-qfprtxsd`, but it's probably useless for me.


## TODO

- TODO: create fancy screenshot with border
