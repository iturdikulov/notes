---
created: 2023-09-10T00:00+03:00
tags:
  - blog
  - ENDS
sr-due: 2025-09-13
sr-interval: 65
sr-ease: 203
---

# Tmux

> tmux is a terminal multiplexer. It lets you switch easily between several programs in one terminal, detach them (they keep running in the background) and reattach them to a different terminal.\
> — <cite> [tmux Wiki](https://github.com/tmux/tmux/wiki)</cite>

Tmux is my daily driver for terminals, [[CLI]] and code [[Neovim|editors].

## Cheat sheet

- List shortcuts:<wbr class="f"> `?`
- Copycat search:<wbr class="f"> `/`
- Reload config (without killing server):<wbr class="f"> `r`
- Save environment:`^s`, be careful, it will overwrite your current environment
- Restore environment:`^r`
- List paste buffers:<wbr class="f"> `b`
- Choose which buffer to paste from, and paste from it:<wbr class="f"> `B`
- Paste from the top paste buffer:<wbr class="f"> `p`
- Paste into current buffer from clipboard:<wbr class="f"> `C-S-v` (without prefix)
- Documentation search (cheat.sh):<wbr class="f"> `i`
- Big clock:<wbr class="f"> `t`
- Prompt for command:<wbr class="f"> `:`

### Sessions and windows

Sessions are the independent workspaces of Tmux.

- Rename window (tab):<wbr class="f"> `,` (comma)
- Rename session:<wbr class="f"> `$`
- New tmux session:<wbr class="f"> `tmux` from command line or `:new<CR>` from tmux session. <!--SR:!2024-09-22,1,203-->
- New tmux session with name:<wbr class="f"> `tmux new -s myname` or `:new -s myname<CR>`
- Attach:<wbr class="f"> `tmux a` (or at, or attach) or use `tma` alias. Optionally you can use session name (`tma -t myname`). <!-- TODO: mux alias? -->
- List sessions:<wbr class="f"> `tmux ls` or use `tml` alias.
- Kill specific session:<wbr class="f"> `tmux kill-session -t myname`.
- You can use ==`tmux kill-server`== to _cleanly and gracefully_ kill all tmux open sessions (and server). Alternative is `Q` keybinding.
- You can **force kill** all tmux processes with ==`pkill -f --bind=enter:replace-query+print-querytmux`==.
- If you are inside a tmux session you would like to keep, use ==`tmux kill-session -a`== to close all other sessions.
- Jump next and previous session:<wbr class="f"> `)`, `(`
- Interactive window/session list.
  <br class="f">
`w`, `S`. Use `j` and `k` to navigate, and switch by hitting `<CR>`.
- Find window (changed to tmux-sessionizer):<wbr class="f"> `^a`
- Create window (tab) with current path if configured:<wbr class="f"> `c`
- Previous window (custom binding, last-window):<wbr class="f"> `C-6`

- Next window (tab):<wbr class="f"> `C-n`
- Previous window (tab):<wbr class="f"> `C-p`
- Move window to the left:<wbr class="f"> `P`
- Move window to the right:<wbr class="f"> `N`

- Kill window (tab):<wbr class="f"> `X`
- Kill server:<wbr class="f"> `q`
- Detach:<wbr class="f"> `d`
- List and terminate clients:<wbr class="f"> `:list-clients`, to terminate select and press `q`

### Panes

- Swap pane up, right, left, down:<wbr class="f"> `k`, `l`, `h`, `j`
- Select up, right, left, down pane:<wbr class="f"> `C-k`, `C-l`, `C-h`, `C-j` <!-- TODO: not working -->
- Move the current pane left:<wbr class="f"> `{`
- Move the current pane right:<wbr class="f"> `}`
- Open tmux context menu (RMB):<wbr class="f"> `C->`
- Split horizontally/vertically:<wbr class="f"> `s`, `v`
- Make panes vertical, select layout even-vertical:<wbr class="f"> `+`
- Make panes horizontal, select layout even-horizontal:<wbr class="f"> `=`
- Last pane (back and forth):<wbr class="f"> `C-w`
- Toggle pane zoom (maximize current pane, other panes are hidden):<wbr class="f"> `o` or `z`
- Toggle between layouts:<wbr class="f"> `space`

- Swap window left:<wbr class="f"> `C-S-h`, `:swap-window -t -1; select-window -t -1`
- Swap window right:<wbr class="f"> `:swap-window -t +1; select-window -t +1`

- Do I need always use prefix to resize panes?
  <br class="f">
No, if you strike key fast enough (to hold you need to configure `repeat-time` option).

- Resize pane up (by 5):<wbr class="f"> `M-Up`
- Resize pane down (by 5):<wbr class="f"> `M-Down`
- Resize pane left (by 5):<wbr class="f"> `M-Left`
- Resize pane right (by 5):<wbr class="f"> `M-Right`

- Resize pane up (by 1):<wbr class="f"> `C-Up`
- Resize pane down (by 1):<wbr class="f"> `C-Down`
- Resize pane left (by 1):<wbr class="f"> `C-Left`
- Resize pane right (by 1):<wbr class="f"> `C-Right`

- Join pane:<wbr class="f"> `_` TODO: not actually working, need to investigate
- Kill pane:<wbr class="f"> `x`
- Break pane into a window:<wbr class="f"> `-`

### Commands

- Sync panes (show same text in all panes):<wbr class="f"> `:setw synchronize-panes`

### Copy mode

- With this option set, we can use h, j, k, l, w, e, ^, $, etc. to move
- around our buffer.

- Enter copy mode:<wbr class="f"> `Enter`

- To get out of Copy mode, we just press the ==`Enter`== key (or `y` to yank
- and exit).

- Jump to character on same line:<wbr class="f"> `f`
- Back to indentation:<wbr class="f"> `^`
- Clear selection:<wbr class="f"> `Escape`
- Copy selection:<wbr class="f"> `Enter`
- Cursor down:<wbr class="f"> `j`
- Cursor left:<wbr class="f"> `h`
- Cursor right:<wbr class="f"> `l`
- Cursor to bottom line:<wbr class="f"> `L`
- Cursor to middle line:<wbr class="f"> `M`
- Cursor to top line:<wbr class="f"> `H`
- Cursor up:<wbr class="f"> `k`
- End of line:<wbr class="f"> `$`
- Goto line:<wbr class="f"> `:`
- Half page down:<wbr class="f"> `C-d`
- Half page up:<wbr class="f"> `C-u`
- Next page:<wbr class="f"> `C-f`
- Next word:<wbr class="f"> `w`
- Previous page:<wbr class="f"> `C-b`
- Previous word:<wbr class="f"> `b`
- Quit mode:<wbr class="f"> `q`
- Scroll down:<wbr class="f"> `C-Down or J`
- Scroll up:<wbr class="f"> `C-Up or K`
- Search again:<wbr class="f"> `n`
- Search backward:<wbr class="f"> `?`
- Search forward:<wbr class="f"> `/`
- Start of line:<wbr class="f"> `0`
- Start selection:<wbr class="f"> `Space`

## External links

- [ ] [tmux 2: Productive Mouse-Free Development by Brian P. Hogan](https://pragprog.com/titles/bhtmux2/tmux-2/)
