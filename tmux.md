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
> programs in one terminal, detach them (they keep running in the background)
> and reattach them to a different terminal.\
> — <cite> [tmux Wiki](https://github.com/tmux/tmux/wiki)</cite>

Tmux is my daily driver for terminals, [[command-line_interface_CLI|CLI]] and
code [[Neovim|editors]].

## Cheat sheet

- List shortcuts::`?`
- Copycat search::`/`
- Reload config (without killing server)::`r`
- Save environment:`^s`, be careful, it will overwrite your current environment
- Restore environment:`^r`
- List paste buffers::`b`
- Choose which buffer to paste from, and paste from it::`B`
- Paste from the top paste buffer::`p`
- Paste into current buffer from clipboard::`C-S-v` (without prefix)
- Documentation search (cheat.sh)::`i`
- Big clock::`t`
- Prompt for command::`:`

### Sessions and windows

Sessions are the independent workspaces of Tmux.

- Rename window (tab)::`,` (comma)
- Rename session::`$`
- New tmux session::`tmux` from command line or `:new<CR>` from tmux session. <!--SR:!2024-09-22,1,203-->
- New tmux session with name::`tmux new -s myname` or `:new -s myname<CR>`
- Attach::`tmux a` (or at, or attach) or use `tma` alias. Optionally you can use
  session name (`tma -t myname`). <!-- TODO: mux alias? -->
- List sessions::`tmux ls` or use `tml` alias.
- Kill specific session::`tmux kill-session -t myname`.
- You can use ==`tmux kill-server`== to _cleanly and gracefully_ kill all
tmux open sessions (and server). Alternative is `Q` keybinding.
- You can **force kill** all tmux processes with ==`pkill -f --bind=enter:replace-query+print-querytmux`==.
- If you are inside a tmux session you would like to keep, use
  ==`tmux kill-session -a`== to close all other sessions.
- Jump next and previous session::`)`, `(`
- Interactive window/session list.
&#10;
`w`, `S`. Use `j` and `k` to navigate, and switch by hitting `<CR>`.
- Find window (changed to tmux-sessionizer)::`^a`
- Create window (tab) with current path if configured::`c`
- Previous window (custom binding, last-window)::`C-6`

- Next window (tab)::`C-n`
- Previous window (tab)::`C-p`
- Move window to the left::`P`
- Move window to the right::`N`

- Kill window (tab)::`X`
- Kill server::`q`
- Detach::`d`
- List and terminate clients::`:list-clients`, to terminate select and press `q`

### Panes

- Swap pane up, right, left, down::`k`, `l`, `h`, `j`
- Select up, right, left, down pane::`C-k`, `C-l`, `C-h`, `C-j` <!-- TODO: not working -->
- Move the current pane left::`{`
- Move the current pane right::`}`
- Open tmux context menu (RMB)::`C->`
- Split horizontally/vertically::`s`, `v`
- Make panes vertical, select layout even-vertical::`+`
- Make panes horizontal, select layout even-horizontal::`=`
- Last pane (back and forth)::`C-w`
- Toggle pane zoom (maximize current pane, other panes are hidden)::`o` or `z`
- Toggle between layouts::`space`

- Swap window left::`C-S-h`, `:swap-window -t -1; select-window -t -1`
- Swap window right::`:swap-window -t +1; select-window -t +1`

- Do I need always use prefix to resize panes?
&#10;
No, if you strike key fast enough (to hold you need to configure `repeat-time`
option).

- Resize pane up (by 5)::`M-Up`
- Resize pane down (by 5)::`M-Down`
- Resize pane left (by 5)::`M-Left`
- Resize pane right (by 5)::`M-Right`

- Resize pane up (by 1)::`C-Up`
- Resize pane down (by 1)::`C-Down`
- Resize pane left (by 1)::`C-Left`
- Resize pane right (by 1)::`C-Right`

- Join pane::`_` TODO: not actually working, need to investigate
- Kill pane::`x`
- Break pane into a window::`-`

### Commands

- Sync panes (show same text in all panes)::`:setw synchronize-panes`

### Copy mode

- With this option set, we can use h, j, k, l, w, e, ^, $, etc. to move
- around our buffer.

- Enter copy mode::`Enter`

- To get out of Copy mode, we just press the ==`Enter`== key (or `y` to yank
- and exit).

- Jump to character on same line::`f`
- Back to indentation::`^`
- Clear selection::`Escape`
- Copy selection::`Enter`
- Cursor down::`j`
- Cursor left::`h`
- Cursor right::`l`
- Cursor to bottom line::`L`
- Cursor to middle line::`M`
- Cursor to top line::`H`
- Cursor up::`k`
- End of line::`$`
- Goto line::`:`
- Half page down::`C-d`
- Half page up::`C-u`
- Next page::`C-f`
- Next word::`w`
- Previous page::`C-b`
- Previous word::`b`
- Quit mode::`q`
- Scroll down::`C-Down or J`
- Scroll up::`C-Up or K`
- Search again::`n`
- Search backward::`?`
- Search forward::`/`
- Start of line::`0`
- Start selection::`Space`

## References

- [ ] [tmux 2: Productive Mouse-Free Development by Brian P. Hogan](https://pragprog.com/titles/bhtmux2/tmux-2/)
