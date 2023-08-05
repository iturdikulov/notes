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

Key notation in flashcards - I just use vim key notation (`:h key-notation`),
with some exceptions.

## Specific

TODO: create fancy screenshot with border

Toggle sticky on active window (topmost)::`<D-S>`

Toggle floating on active window ::`<D-S-space>`

Create Screenshot::`<Print>`

Start screencast recording of selected region ([[MP4]] format)::`<D-Print>`

Start screencast recording of selected region ([[GIF]] format)::`<D-C-Print>`

Create full screenshot and save it in ~/Pictures/screenshots/::Super-PrntScrn
Create active window screenshot and copy to clipboard::Super-S-PrnScrn

Toggle full screen mode
?
Super-y

## Media keys

Volume Up::RaiseVolume
Volume Down::LowerVolume

Mpv Pause::Play
Mpv Next::Next
Mpv Prev::Prev
Mpv Forward::Forward
Mpv Rewind::Rewind

Strawberry Pause::Super-Play
Strawberry Next::Super-Next
Strawberry Prev::Super-Prev
Strawberry Forward::Shift-Next
Strawberry Rewind::Shift-Prev
Strawberry Volume Up::Super-RaiseVolume
Strawberry Volume Down::Super-LowerVolume

## Run

Run Browser::<M-S-2>
Run Dictionary and Translator::<M-S-3>
Developer Documentation::<M-S-4>
Instant Messaging::<M-S-5>
Image Editor::<M-S-6>
Music Player::<M-S-7>
Research management::<M-S-8>
Remote Server::<M-S-9>
Games management::<M-S-F1>
Virtual Machine management::<M-S-F2>
Remote connect to mobile device::<M-S-F3>

[[dmenu]] for running programs::Super-p
Terminal::S-M-CR
Kill active window::Super-S-c
Show tags alternatives in top bar::Super-n
Toggle top bar::Super-b
Focus next window::Super-h
Focus prev window::Super-l
Resize window to right::Super-shift-h
Resize window to left::Super-shift-l
Power menu::Super-S-C-Del
Pass menu::Super-S-p
Active programs::Super-a
Unicode menu::Super-u
Morc menu::M-S-p
Clipboard history::Super-v

## Resize windows

increase / decrease number of windows on master::Super+{i,d}
increase / decrease master size::Super+{l,h}
push active window from stack to master (toggle)::Super+Return

## Tags adding/removing

apply tag to active window (like move window to tag)::Super-S-{1-F4}
view tag::Super-{1-F4}
Toglge tags (sort of alt-tab per workspaces)::Super-Tab
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

I recommend test layout using at least 2 windows.

Tiled layout::Super-t
Floating layout::Super-f
Monocle layout::Super-m, so switch between windows, use `M-tab`
Toggle between tiled and monocle layout::`<D-C-S-space>`

## Floating windows control

Drag floating window::Super-LeftMouse
Make individual window float/unfloat (using mouse)::Super+LeftMouse
Resize floating window (modifiers)::Super+RightMouse

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

Move floating window, client position is limited to monitor window area::Mod3Mask-
Move floating window, absolute positioning (allows moving windows between monitors)::Mod3Mask-C-
Resize client, client center position is fixed which means that client expands in all directions including center::Mod3Mask-S-
Resize client, client is positioned in a floating grid, movement is relative to client's current position (center include)::Mod3Mask-M-

## To-Do

- TODO: rewrite keybindings in more readable format
- TODO: not really actual, maybe need to add some links to SHCMD sections
