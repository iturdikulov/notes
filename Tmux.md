---
date: 2023-09-10
tags:
  - inbox
  - SR_productivity
sr-due: 2024-01-27
sr-interval: 2
sr-ease: 243
---

# Tmux

> tmux is a terminal multiplexer. It lets you switch easily between several
> programs in one terminal, detach them (they keep running in the
> background) and reattach them to a different terminal.\
> — <cite>[tmux Wiki](https://github.com/tmux/tmux/wiki)</cite>

New tmux session::`tmux` from command line or `<leader>:new<CR>`

New tmux session with name:;`tmux new -s myname`

Attach::`tmux a  #  (or at, or attach)` or use `tma` alias. Optionally you
can use session name (`tma -t myname`).

List sessions::`tmux ls` or use `tml` alias.

Kill specific session::`tmux kill-session -t myname`.

You can use ==`tmux kill-server`== to _cleanly and gracefully_ kill all
tmux open sessions (and server).

If you are inside a tmux session you would like to keep, use ==`tmux
kill-session -a`== to close all other sessions.

Also, you can _grossly_ kill all tmux processes with ==`pkill -f tmux`==.

## Shortcuts (`<leader> ...`)

List shortcuts::`?`
Split horizontally::`s`
Split vertically::`v`
Rename session::`$`

Rename window (tab)::`,` (comma)
Kill window (tab)::`X`
Kill server::`q`
Kill pane::`x`

Create window (tab) with current path if configured::`c`
Interactive window list::`w`
Interactive session list::`S`
Copycat search::`/`

Next window (tab)::`n`
Previous window (tab)::`p`
Last pane::`C-w`

Find window (changed to tmux-sessionizer)::`f`
Toggle pane zoom (maximize current pane, other panes are hidden)::`o` or `z`

Make panes vertical, select layout even-vertical::`=`
Make panes horizontal, select layout even-horizontal::`+`
Toggle between layouts::`space`
Move the current pane left::`{`
Move the current pane right::`}`

Select left pane::`C-h`
Select down pane::`C-j`
Select up pane::`C-k`
Select right pane::`C-l`

Swap pane up::`K`
Swap pane left::`H`
Swap pane right::`L`
Swap pane down::`J`

Resize pane up (by 5)::`M-Up`
Resize pane down (by 5)::`M-Down`
Resize pane left (by 5)::`M-Left`
Resize pane right (by 5)::`M-Right`

Resize pane up (by 1)::`C-Up`
Resize pane down (by 1)::`C-Down`
Resize pane left (by 1)::`C-Left`
Resize pane right (by 1)::`C-Right`

Do I need always use prefix to resize panes?
?
No, if you strike key fast enough (to hold you need to configure
`repeat-time` option).

Break pane into a window::`-`
Join pane::`_` TODO: not actually working, need to investigate

Reload config (without killing server)::`r`
Refresh client:`^r`

List paster buffers::`b`
Choose which buffer to paste from::`B`
Paste from the top paste buffer::`p`
Paste into current buffer from clipboard::`P` or `C-v` (without prefix)

Documentation search (cheat.sh)::`i`

Detach::`d`
Big clock::`t`
Prompt for command::`:`

## Commands

Sync panes (show same text in all panes)::`:setw synchronize-panes`

## Copy mode

With this option set, we can use h, j, k, l, w, e, ^, $, etc. to move
around our buffer.

Enter copy mode::`Enter`

To get out of Copy mode, we just press the ==`Enter`== key (or `y` to yank
and exit).

Tmux copy mode - Jump to character on same line::`f`
Tmux copy mode - Back to indentation::`^`
Tmux copy mode - Clear selection::`Escape`
Tmux copy mode - Copy selection::`Enter`
Tmux copy mode - Cursor down::`j`
Tmux copy mode - Cursor left::`h`
Tmux copy mode - Cursor right::`l`
Tmux copy mode - Cursor to bottom line::`L`
Tmux copy mode - Cursor to middle line::`M`
Tmux copy mode - Cursor to top line::`H`
Tmux copy mode - Cursor up::`k`
Tmux copy mode - End of line::`$`
Tmux copy mode - Goto line::`:`
Tmux copy mode - Half page down::`C-d`
Tmux copy mode - Half page up::`C-u`
Tmux copy mode - Next page::`C-f`
Tmux copy mode - Next word::`w`
Tmux copy mode - Previous page::`C-b`
Tmux copy mode - Previous word::`b`
Tmux copy mode - Quit mode::`q`
Tmux copy mode - Scroll down::`C-Down or J`
Tmux copy mode - Scroll up::`C-Up or K`
Tmux copy mode - Search again::`n`
Tmux copy mode - Search backward::`?`
Tmux copy mode - Search forward::`/`
Tmux copy mode - Start of line::`0`
Tmux copy mode - Start selection::`Space`

## Resources

- [ ] [tmux 2: Productive Mouse-Free Development by Brian P. Hogan](https://pragprog.com/titles/bhtmux2/tmux-2/)

