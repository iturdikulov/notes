---
created: 2022-12-29T00:00+03:00
tags:
  - blog
  - archive
external:
  - https://github.com/bakkeby/dwm-flexipatch
directory: ~/Computer/software/dwm-flexipatch/
sr-due: 2034-06-08
sr-interval: 3255
sr-ease: 277
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

Toggle between tiled and monocle layout:<wbr class="f"> `<D-C-S-space>`.

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

- Toggle top bar (all workspaces go into sort of full-screen mode):<wbr class="f"> `D-b`
- Toggle full screen mode for current window (fake full-screen):<wbr class="f"> `<D-f>`
- Focus left window (test with 3 windows):<wbr class="f"> `<D-h>`
- Focus right window (test with 3 windows):<wbr class="f"> `<D-l>`
- Increase number of horizontal windows on master:<wbr class="f"> `<D-i>`
- Decrease number of horizontal windows on master:<wbr class="f"> `<D-S-i>` (customized)
- Push active window from stack to master (swap):<wbr class="f"> `<D-CR>`

### Resize windows with [cfacts](https://dwm.suckless.org/patches/cfacts/)

- Increase width of left window:<wbr class="f"> `<D-S-h>`, hold to increase width dynamically
- Resize window to left:<wbr class="f"> `<D-S-l>`, hold to increase width dynamically
- Reset window size:<wbr class="f"> `<D-S-o>`

## Tags adding/removing (windows move/switch)

- View tag (or switch to workspace):<wbr class="f"> `<D-1>`, ..., `<D-9>`
- View all windows on screen (to reset use view tag):<wbr class="f"> `<D-0>`
- Apply tag to active window (like move window to tag):<wbr class="f"> `<D-S-1>`, ..., `<D-S-9>`
- Toggle previous window (sort of common Alt-Tab behavior):<wbr class="f"> `<D-Tab>`
- Toggle tag 2 on focused window (window on multiple workspaces):<wbr class="f"> `<D-S-C-2>`
- Apply tag to all (window on all workspaces), to reset apply some specific tag.
<br class="f">
`<D-S-0>`
- Banish tags (add/remove all windows from #2 tag). It's sort of moving all
windows from tag #2 to current tag. To reset press again or switch to tag.
<br class="f">
`<D-C-2>`

## Floating windows control

- Toggle floating on active window:<wbr class="f"> `<D-S-space>` or `Super+LeftMouse`
- Drag floating window using mouse (with drag):<wbr class="f"> `<D-LeftMouse>`
- Resize floating window using mouse (with drag):<wbr class="f"> `<D-RightMouse>` <!--SR:!2024-09-24,3,257-->

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
<br class="f">
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
<br class="f">
`S-`

Move floating window modifier, absolute positioning (allows moving windows between
monitors)?
<br class="f">
`C-`

## Programs control, other functional

Here core shortcuts, which I use in DWM, my primary launcher is [[Rofi]]:

Actual programs shortcuts/specific hardware control, etc. are located in
`config.h`. Check `SHCMD()` functions.

- Toggle sticky mode on active window (topmost):<wbr class="f"> `<D-S>`
- Kill active window:<wbr class="f"> `D-S-c`
- Open `$TERMINAL` in scratchpad:<wbr class="f"> `` D-` ``

- Programs menu:<wbr class="f"> `<D-space>`
- Files menu:<wbr class="f"> `<D-o>` <!--SR:!2024-09-24,3,257-->
- Mount menu:<wbr class="f"> `<D-S-o>`
- Browser history menu:<wbr class="f"> `<D-r>`
- Browser bookmarks menu:<wbr class="f"> `<D-S-r>`
- Pass menu:<wbr class="f"> `<D-p>`
- Calculator menu:<wbr class="f"> `<D-c>`
- Active programs menu:<wbr class="f"> `<D-a>`
- Unicode and Nerdfonts characters menu:<wbr class="f"> `<D-\>`
- Power menu:<wbr class="f"> `<D-S-C-Del>`, (all modifiers + `Del`)

- Convert clipboard to markdown URL and paste:<wbr class="f"> `<D-v>`
- Hide all notifications:<wbr class="f"> `<D-n>`
- Show 10 notifications from history:<wbr class="f"> `<D-S-n>`
- Trigger `entr` instance #1 - #2:<wbr class="f"> `<D-F1>` - `<D-F4>`
- Capture part of screen (screenshot) into clipboard:<wbr class="f"> `Print`
- Starts a silent MP4 screencast and saves it in `~/Videos/record/`:<wbr class="f"> `<D-Print>`
- Launches OBS Studio for screen recording:<wbr class="f"> `<D-C-Print>`
- Pick HEX color from screen into clipboard:<wbr class="f"> `<D-S-Print>`
- Speak selected text:<wbr class="f"> `<D-AudioPlay>`

- Increase volume:<wbr class="f"> `<D-AudioRaiseVolume>`
- Decrease volume:<wbr class="f"> `<D-AudioLowerVolume>`
- Toggle play/pause for the audio player using `playerctl`:<wbr class="f"> `<D-AudioPlay>`
- Next track in the audio player using `playerctl`:<wbr class="f"> `<D-AudioNext>`
- Previous track in the audio player using `playerctl`:<wbr class="f"> `<D-AudioPrev>`

- Play/Pause for MPV:<wbr class="f"> `<D-C-AudioPlay>`
- Skip 10 seconds forward in MPV:<wbr class="f"> `<D-C-AudioRaiseVolume>`
- Rewind 10 seconds in MPV:<wbr class="f"> `<D-C-AudioLowerVolume>`
- Play next item in MPV:<wbr class="f"> `<C-Next>`
- Play previous item in MPV:<wbr class="f"> `<C-Previous>`

- Play/Pause for Brave:<wbr class="f"> `<Shift-AudioPlay>`
- Rewind 10 seconds in Brave:<wbr class="f"> `<Shift-AudioLowerVolume>`
- Skip 10 seconds forward in Brave:<wbr class="f"> `<Shift-AudioRaiseVolume>`
- Next track in Brave:<wbr class="f"> `<Shift-AudioNext>`
- Previous track in Brave:<wbr class="f"> `<Shift-AudioPrev>`

- Focus next monitor:<wbr class="f"> `<D-.>` +1
- Focus previous monitor:<wbr class="f"> `<D-,>` -1
- Apply next monitor tag to current window (like move it to next monitor):<wbr class="f"> `<D-S-.>`
- Apply previous monitor tag to current window (like move it to previous monitor):<wbr class="f"> `<D-S-,>`

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
