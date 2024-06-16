---
date: 2023-09-10
tags:
  - inbox
  - SR_productivity
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 223
---

# Tmux

> tmux is a terminal multiplexer. It lets you switch easily between several
> programs in one terminal, detach them (they keep running in the
> background) and reattach them to a different terminal.\
> — <cite>[tmux Wiki](https://github.com/tmux/tmux/wiki)</cite>

List shortcuts::`?`

Copycat search::`/`

Reload config (without killing server)::`r`

Refresh client:`^r`

List paster buffers::`b`

Choose which buffer to paste from::`B`

Paste from the top paste buffer::`p`

Paste into current buffer from clipboard::`P` or `C-S-v` (without prefix)

Documentation search (cheat.sh)::`i`

Big clock::`t`

Prompt for command::`:`

## Sessions and windows

Sessions are the independent workspaces of Tmux.

New tmux session::`tmux` from command line (but not from tmux session) or `:new<CR>` from tmux session.

New tmux session with name::`tmux new -s myname`

Attach::`tmux a` (or at, or attach) or use `tma` alias. Optionally you can use session name (`tma -t myname`).

List sessions::`tmux ls` or use `tml` alias.

Kill specific session::`tmux kill-session -t myname`.

You can use ==`tmux kill-server`== to _cleanly and gracefully_ kill all
tmux open sessions (and server). Alternative is `Q` keybinding.

Also, you can force kill all tmux processes with ==`pkill -f tmux`==.

If you are inside a tmux session you would like to keep, use
==`tmux kill-session -a`== to close all other sessions.

Rename session::`$`

Jump next and previous session::`)`, `(`

Interactive window/session list.
&#10;
`w`, `S`. Use `j` and `k` to navigate, and switch by hitting `RET`.

Find window (changed to tmux-sessionizer)::`a`

Create window (tab) with current path if configured::`c`

Previous window (custom binding, last-window)::`C-6`

Next window (tab)::`n`

Rename window (tab)::`,` (comma)

Kill window (tab)::`X`

Kill server::`q`

Detach::`d`

List and terminate clients::`:list-clients`, to terminate select and press `q`

## Panes

Split horizontally/vertically::`s`, `v`

Make panes vertical, select layout even-vertical::`+`

Make panes horizontal, select layout even-horizontal::`=`

Last pane (back and forth)::`C-w`

Toggle pane zoom (maximize current pane, other panes are hidden)::`o` or `z`

Toggle between layouts::`space`

Move the current pane left::`{`

Move the current pane right::`}`

Select up, right, left, down pane::`C-k`, `C-l`, `C-h`, `C-j`

Swap pane up, right, left, down::`K`, `L`, `H`, `J`

Do I need always use prefix to resize panes?
&#10;
No, if you strike key fast enough (to hold you need to configure `repeat-time` option).

Resize pane up (by 5)::`M-Up`
Resize pane down (by 5)::`M-Down`
Resize pane left (by 5)::`M-Left`
Resize pane right (by 5)::`M-Right`

Resize pane up (by 1)::`C-Up`
Resize pane down (by 1)::`C-Down`
Resize pane left (by 1)::`C-Left`
Resize pane right (by 1)::`C-Right`

Join pane::`_` TODO: not actually working, need to investigate

Kill pane::`x`

Break pane into a window::`-`

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

## References

- [ ] [tmux 2: Productive Mouse-Free Development by Brian P. Hogan](https://pragprog.com/titles/bhtmux2/tmux-2/)
