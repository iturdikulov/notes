---
date: 2023-03-03
tags:
  - inbox
  - SR-productivity
sr-due: 2024-02-03
sr-interval: 8
sr-ease: 253
---

# fzf

It's a general purpose ==fuzzy finder== written in [[Go]] that can be used with
any list of things: files, processes, command history, git branches, etc.

For [[Zsh]], it provides the following key bindings (overwrite existing ones),
and they are very handy:

- `M-C`::Directory search, `cd` into the selected directory
- `C-t`::Paste the selected file path(s) into the command line. Useful to insert
quickly paths into arguments of commands.
- `vi $(fd \.yaml|fzf)`::run a command with the selected item from `fzf` as argument
- `mv $(fd -t directory|fzf) ~/Temp/`, DANGER::move a directory from selected path to `~/Temp/`

## Fuzzy completion mode

- Select multiple items in FZF::`vi **` and press `<TAB>` <!--SR:!2024-09-22,1,233-->
- Select Files under parent directory::`vi ../**<TAB>`
- Select Files under parent directory that match `fzf`::`vi ../fzf**<TAB>`
- Select Files under your home directory::`vi ~/**<TAB>`
- Find/Change to some directory under current directory (single-selection)::`cd **<TAB>`
- Select Host names::`ssh **<TAB>`
- Select Telent::`telnet **<TAB>`

- Select Directories under `~/.config` that match `nvim`
&#10;<br>
`cd ~/.config/nvim**<TAB>`

- Select Process IDs. Can select multiple processes with `TAB` or `S-TAB`
&#10;<br>
`kill -9 **<TAB>`

Select [[environment_variable]] / aliases
&#10;<br>
- `unset **<TAB>`
- `export **<TAB>`
- `unalias **<TAB>`

## Using fzf with ripgrep

`rg . | fzf`::Fuzzy search every line in every file
`rg . | fzf | cut -d ":" -f 1`::Fuzzy search every line, in every file, and return the file location

## TODO

- [ ] review [Vim universe. fzf - command line fuzzy finder](https://www.youtube.com/watch?v=qgG5Jhi_Els)

## External links

- `man fzf`
- [x] [So you've installed `fzf`. Now what?](https://andrew-quinn.me/fzf/)
- [ ] [Navigating a filesystem quickly with fzf and fd](https://mike.place/2017/fzf-fd/)
- [ ] [Sidney Liebrand's blog - How FZF and ripgrep improved my workflow](https://sidneyliebrand.io/blog/how-fzf-and-ripgrep-improved-my-workflow)
