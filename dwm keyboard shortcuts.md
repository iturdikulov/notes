---
date: 2023-03-13
draft: true
sr-due: 2024-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- dev-tip
---

# dwm keyboard shortcuts

I swapped meta key (ALT/META) to super key (WIN), which used in DWM by default
as modifier key, to decrease key conflicts in various programs.

I use VIM key notation, exceptions - `WIN` key is `Super` and few others [[vim keycodes]].

## Specific

Toggle sticky window
?
<kbd>super</kbd>+<kbd>shift</kbd>+<kbd>s</kbd>

Run display fix script. Sometimes it's needed to fix display after suspend or hibernate (usually after switching display).
?
<kbd>super</kbd>+<kbd>shift</kbd>+<kbd>ctrl</kbd>+<kbd>w</kbd>

Enable Do not Disturb mode
?
<kbd>super</kbd>+<kbd>ctrl</kbd>+<kbd>n</kbd>

Sync email (TODO: need check)
?
<kbd>super</kbd>+<kbd>ctrl</kbd>+<kbd>e</kbd>

Create Screenshot::<kbd>PrntScrn</kbd>

TODO: create fancy screenshot with border

Create full screenshot and save it in ~/Pictures/screenshots/::<kbd>Super-PrntScrn</kbd>
Create active window screenshot and copy to clipboard::<kbd>Super-S-PrnScrn</kbd>

Toggle full screen mode
?
<kbd>Super-y</kbd>

## Media keys

Volume Up::<kbd>RaiseVolume</kbd>
Volume Down::<kbd>LowerVolume</kbd>

Mpv Pause::<kbd>Play</kbd>
Mpv Next::<kbd>Next</kbd>
Mpv Prev::<kbd>Prev</kbd>
Mpv Forward::<kbd>Forward</kbd>
Mpv Rewind::<kbd>Rewind</kbd>

Strawberry Pause::<kbd>Super-Play</kbd>
Strawberry Next::<kbd>Super-Next</kbd>
Strawberry Prev::<kbd>Super-Prev</kbd>
Strawberry Forward::<kbd>Shift-Next</kbd>
Strawberry Rewind::<kbd>Shift-Prev</kbd>
Strawberry Volume Up::<kbd>Super-RaiseVolume</kbd>
Strawberry Volume Down::<kbd>Super-LowerVolume</kbd>

## Run

Run Browser::<kbd><M-S-2></kbd>
Run Dictionary and Translator::<kbd><M-S-3></kbd>
Developer Documentation::<kbd><M-S-4></kbd>
Instant Messaging::<kbd><M-S-5></kbd>
Image Editor::<kbd><M-S-6></kbd>
Music Player::<kbd><M-S-7></kbd>
Research management::<kbd><M-S-8></kbd>
Remote Server::<kbd><M-S-9></kbd>
Games management::<kbd><M-S-F1></kbd>
Virtual Machine management::<kbd><M-S-F2></kbd>
Remote connect to mobile device::<kbd><M-S-F3></kbd>

[[dmenu]] for running programs::<kbd>Super-p</kbd>
Terminal::<kbd>S-M-CR</kbd>
Kill active window::<kbd>Super-S-c</kbd>
Show tags alternatives in top bar::<kbd>Super-n</kbd>
Toggle top bar::<kbd>Super-b</kbd>
Focus next window::<kbd>Super-h</kbd>
Focus prev window::<kbd>Super-l</kbd>
Resize window to right::<kbd>Super-shift-h</kbd>
Resize window to left::<kbd>Super-shift-l</kbd>
Power menu::<kbd>Super-S-C-Del</kbd>
Pass menu::<kbd>Super-S-p</kbd>
Active programs::<kbd>Super-a</kbd>
Unicode menu::<kbd>Super-u</kbd>
Morc menu::<kbd>M-S-p</kbd>
Clipboard history::<kbd>Super-v</kbd>

## Resize windows

increase / decrease number of windows on master::Super+{i,d}
increase / decrease master size::Super+{l,h}
push active window from stack to master (toggle)::Super+Return

## Tags adding/removing

apply tag to active window (like move window to tag)::<kbd>Super-S-{1-F4}</kbd>
view tag::<kbd>Super-{1-F4}</kbd>
Toglge tags (sort of alt-tab per workspaces)::<kbd>Super-Tab</kbd>
toggle bar::Super+b
view all windows on screen (reset - apply tag)::Super+0

toggle tag 2 on focused window (add/remove to workspace)
you can see same window on multiple tags, on active and on tag #2!
?
Super+Shift+Control+2


apply tag to all (window appear on all tags), to reset apply tag again.
?
Super+Shift+0

banish tags (add/remove all windows from #2 tag)
it's sort of moving all windows from tag #2 to current tag. On tag switch - DWM reset this.
?
Super+Control+2


## Toggle workspace layout

Tiled layout::<kbd>Super-t</kbd>
Floating layout::<kbd>Super-f</kbd>
Monocle layout::<kbd>Super-m</kbd>
Toggle between tiled and floating layout::<kbd>Super+space</kbd>
Toggle active window layout (useful to set floating)::<kbd>Super+S+space</kbd>

## Floating windows control

Drag floating window::<kbd>Super-LeftMouse</kbd>
Make individual window float/unfloat (using mouse)::<kbd>Super+LeftMouse</kbd>
Resize floating window (modifiers)::<kbd>Super+RightMouse</kbd>

Which keys you use as floating window resize/move keys?
```
These directions:
↖ ↑ ↗
← . →
↙ ↓ ↘
```
?
q w f
a c s
x r d

Move floating window, client position is limited to monitor window area::<kbd>Mod3Mask-</kbd>
Move floating window, absolute positioning (allows moving windows between monitors)::<kbd>Mod3Mask-C-</kbd>
Resize client, client center position is fixed which means that client expands in all directions including center::<kbd>Mod3Mask-S-</kbd>
Resize client, client is positioned in a floating grid, movement is relative to client's current position (center include)::<kbd>Mod3Mask-M-</kbd>

## To-Do

- TODO: rewrite keybindings in more readable format
