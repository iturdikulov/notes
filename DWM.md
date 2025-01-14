---
date: 2022-12-29T00:00+03:00
tags:
  - blog
  - archive
external:
  - https://github.com/bakkeby/dwm-flexipatch
directory: ~/Computer/software/dwm-flexipatch/
sr-due: 2023-01-28
sr-interval: 10
sr-ease: 257
---

# dwm (dynamic window manager)

> dwm is a dynamic window manager for X. It manages windows in tiled, monocle
> and floating layouts. All the layouts can be applied dynamically,
> optimizing the environment for the application in use and the task performed\
> — <cite>[dwm](https://dwm.suckless.org/)</cite>

UPDATE: right now I switched to [[Hyprland]].

I used long time `i3wm`, `KWin`, `GNOME`, `Desktop Window Manager`, various
status bars (like `polybar`), etc. But after that I discovered DWM, I just
switched to it and use it with maximum pleasure. It has some "disadvantages",
maybe not clear logic if you use it first time, but It's all manageable and
solvable. Especially if you use something like `DWM flexipatch`.

I use various patches, with my dwm-flexipatch fork:
[Inom-Turdikulov/dwm-flexipatch](https://github.com/iturdikulov/dwm-flexipatch).

I swapped meta key (ALT/META) to super key (WIN), which used in DWM by default
as modifier key, to reduce key conflicts in various programs.

Key notation in flashcards - I usually use vim key notation (`:h key-notation`),
with some exceptions.

## Launching DWM

You can use `~/.xinitrc` (for distros like [[archlinux]]). But right now I have
custom [[NixOS]] configuration.

```sh
# Environment variables
[ -f ~/.profile ] && . ~/.profile

# Autostart programs
[ -f ~/.xprofile ] && . ~/.xprofile

# optional, compositor
picom --experimental-backend  --backend glx --config ~/.config/picom/picom.conf -b

exec dwm
```

## Window model (tiled, monocle, floating)

By default, dwm is in tiled layout mode (`D-t`).

```text
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
_Tiled layout_
```

Monocle layout is good for ensuring a window is kept maximized and focused
(`D-m`).

```text
+------+----------------------------------+--------+
| tags | title                            | status |
+------+----------------------------------+--------+
|                                                  |----+
|                                                  |    |
|                                                  |    |
|                                                  | bg |
|                  Maximized Window                |win.|
|                  (focused window)                |    |
|                                                  |    |
|                                                  |    |
|                                                  |    |
|                                                  |    |
+--------------------------------------------------+    |
                                                   +----+
_Monocle layout_
```

Floating layout will be familiar to Windows users (`D-y`, customized).

```text
+------+----------------------------------+--------+
| tags | title                            | status |
+------+---------------------+------------+--------+
|                                                  |
|     +------------+       +-----------------+     |
|     |   win 2    |       |     win 3       |     |
|     +------------+       +-----------------+     |
|                                                  |
|     +----------------------------+               |
|     |             win 4          |               |
|     +----------------------------+               |
|                                                  |
+--------------------------------------------------+
_Floating layout_
```

Toggle between tiled and monocle layout::`<D-C-S-space>`.

## Workspaces

1. Main workspace, usually tmux session in pair with terminal.
2. Internet workspace
3. [[Obsidian]] (to render [[Zettelkasten]] notes) and zeal for documentation.
4. IM workspace, usually [[Slack]]
5. Media workspace, usually [[cmus]]
6. Free* workspace, I place some cheat-sheets or something like that here.
7. Email/Contacts workspaces
8. Vendor workspaces, remote desktops, VM's, remote devices, etc.
9. Gaming workspace

## Window's management

- Toggle top bar (all workspaces go into sort of full-screen mode)::`D-b`
- Toggle full screen mode for current window (fake full-screen)::`<D-f>`
- Focus left window (test with 3 windows)::`<D-h>`
- Focus right window (test with 3 windows)::`<D-l>`
- Increase number of horizontal windows on master::`<D-i>`
- Decrease number of horizontal windows on master::`<D-S-i>` (customized)
- Push active window from stack to master (swap)::`<D-CR>`

### Resize windows with [cfacts](https://dwm.suckless.org/patches/cfacts/)

- Increase width of left window::`<D-S-h>`, hold to increase width dynamically
- Resize window to left::`<D-S-l>`, hold to increase width dynamically
- Reset window size::`<D-S-o>`

## Tags adding/removing (windows move/switch)

- View tag (or switch to workspace)::`<D-1>`, ..., `<D-9>`
- View all windows on screen (to reset use view tag)::`<D-0>`
- Apply tag to active window (like move window to tag)::`<D-S-1>`, ..., `<D-S-9>`
- Toggle previous window (sort of common Alt-Tab behavior)::`<D-Tab>`
- Toggle tag 2 on focused window (window on multiple workspaces)::`<D-S-C-2>`
- Apply tag to all (window on all workspaces), to reset apply some specific tag.
&#10;<br>
`<D-S-0>`
- Banish tags (add/remove all windows from #2 tag). It's sort of moving all
windows from tag #2 to current tag. To reset press again or switch to tag.
&#10;<br>
`<D-C-2>`

## Floating windows control

- Toggle floating on active window::`<D-S-space>` or `Super+LeftMouse`
- Drag floating window using mouse (with drag)::`<D-LeftMouse>`
- Resize floating window using mouse (with drag)::`<D-RightMouse>` <!--SR:!2024-09-24,3,257-->

To control floating windows I use
[floatpos](https://github.com/bakkeby/patches/wiki/floatpos/) with configured
keymap. This patch requiring special `Mod3Mask` key. In my case `Mod3Mask` is
bind to `XF86Tools` (`F13`) key, added manually using [[QMK]]. Penultimate key
on my keyboard.
To enable mod3 key I run this command in [[DWM]] autostart script:
`xmodmap -e "clear mod3" -e "add mod3 = XF86Tools"`

Which keys you use as floating window resize/move keys (float position patch)?
```
These directions:
↖ ↑ ↗
← . →
↙ ↓ ↘
```
&#10;<br>
```text
↖l ↑u ↗y
←n , →i
↙h ↓e ↘.
```

Resize floating window modifier, window is positioned in a floating grid,
movement is relative to client's current position (center include).
```text
.--------
|        |
|        |
.--------* <- pivot point
```
&#10;<br>
`S-`

Move floating window modifier, absolute positioning (allows moving windows between
monitors)?
&#10;<br>
`C-`

## Programs control, other functional

Here core shortcuts, which I use in DWM, my primary launcher is [[Rofi]]:

Actual programs shortcuts/specific hardware control, etc. are located in
`config.h`. Check `SHCMD()` functions.

- Toggle sticky mode on active window (topmost)::`<D-S>`
- Kill active window::`D-S-c`
- Open `$TERMINAL` in scratchpad::`` D-` ``

- Programs menu::`<D-space>`
- Files menu::`<D-o>` <!--SR:!2024-09-24,3,257-->
- Mount menu::`<D-S-o>`
- Browser history menu::`<D-r>`
- Browser bookmarks menu::`<D-S-r>`
- Pass menu::`<D-p>`
- Calculator menu::`<D-c>`
- Active programs menu::`<D-a>`
- Unicode and Nerdfonts characters menu::`<D-\>`
- Power menu::`<D-S-C-Del>`, (all modifiers + `Del`)

- Convert clipboard to markdown URL and paste::`<D-v>`
- Hide all notifications::`<D-n>`
- Show 10 notifications from history::`<D-S-n>`
- Trigger `entr` instance #1 - #2::`<D-F1>` - `<D-F4>`
- Capture part of screen (screenshot) into clipboard::`Print`
- Starts a silent MP4 screencast and saves it in `~/Videos/record/`::`<D-Print>`
- Launches OBS Studio for screen recording::`<D-C-Print>`
- Pick HEX color from screen into clipboard::`<D-S-Print>`
- Speak selected text::`<D-AudioPlay>`

- Increase volume::`<D-AudioRaiseVolume>`
- Decrease volume::`<D-AudioLowerVolume>`
- Toggle play/pause for the audio player using `playerctl`::`<D-AudioPlay>`
- Next track in the audio player using `playerctl`::`<D-AudioNext>`
- Previous track in the audio player using `playerctl`::`<D-AudioPrev>`

- Play/Pause for MPV::`<D-C-AudioPlay>`
- Skip 10 seconds forward in MPV::`<D-C-AudioRaiseVolume>`
- Rewind 10 seconds in MPV::`<D-C-AudioLowerVolume>`
- Play next item in MPV::`<C-Next>`
- Play previous item in MPV::`<C-Previous>`

- Play/Pause for Brave::`<Shift-AudioPlay>`
- Rewind 10 seconds in Brave::`<Shift-AudioLowerVolume>`
- Skip 10 seconds forward in Brave::`<Shift-AudioRaiseVolume>`
- Next track in Brave::`<Shift-AudioNext>`
- Previous track in Brave::`<Shift-AudioPrev>`

- Focus next monitor::`<D-.>` +1
- Focus previous monitor::`<D-,>` -1
- Apply next monitor tag to current window (like move it to next monitor)::`<D-S-.>`
- Apply previous monitor tag to current window (like move it to previous monitor)::`<D-S-,>`

## Dwmblocks DND (not used anymore, maybe in future)

Enabled modules are: `datetime`, volume status and keyboard layout.
That items are not interactive.

I also created custom modules, `dnd`.

- [dnd](https://github.com/inomoz/dotfiles/blob/main/.local/bin/dnd)
(Do Not Disturb), key <kbd>s-C-n</kbd>.
It's toggling notifications pause mode, in status bar displayed ⛔ icon.

## To-do

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
