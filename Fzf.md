---
date: 2023-03-03
sr-due: 2024-01-22
sr-ease: 290
sr-interval: 250
tags:
- inbox
- development
- software
---

# fzf

- [ ] review [Vim universe. fzf - command line fuzzy finder](https://www.youtube.com/watch?v=qgG5Jhi_Els)

It's a general purpose fuzzy finder written in Golang that can be used with any
list of things: files, processes, command history, git branches, etc.

For [[Z_shell|Z shell]], it provides the following key bindings (overwrite
existing ones), and they are very handy:

- `C-r`::History search, paste the selected command from history into the command line
- `M-C`::Directory search, `cd` into the selected directory
- `C-t`::Paste the selected file path(s) into the command line. Useful to insert paths into arguments of commands.
- `vi $(fd \.yaml|fzf)`::run a command with the selected item from `fzf` as argument
- `mv $(fd -t directory|fzf) ~/Temp/`, DANGER::move a directory from selected path to `~/Temp/`

## Fuzzy completion mode

- Select multiple items with TAB key::`e **` and press `<TAB>`
- Select Files under parent directory::`e ../**<TAB>`
- Select Files under parent directory that match `fzf`::`e ../fzf**<TAB>`
- Select Files under your home directory::`e ~/**<TAB>`
- Select Directories under current directory (single-selection)::`cd **<TAB>`
- Select Host names::`ssh **<TAB>`
- Select Telent::`telnet **<TAB>`

- Select Directories under `~/.config` that match `nvim`
?
`cd ~/.config/nvim**<TAB>`

- Select Process IDs. Can select multiple processes with `TAB` or `S-TAB`
?
`kill -9 **<TAB>`

Select Environment variables / aliases
?
- `unset **<TAB>`
- `export **<TAB>`
- `unalias **<TAB>`

## Use with ripgrep

`rg . | fzf`::Fuzzy search every line in every file
`rg . | fzf | cut -d ":" -f 1`::Fuzzy search every line, in every file, and return the file location

## Resources

- `man fzf`
- [x] [So you've installed `fzf`. Now what?](https://andrew-quinn.me/fzf/)
- [ ] [Sidney Liebrand's blog - How FZF and ripgrep improved my workflow](https://sidneyliebrand.io/blog/how-fzf-and-ripgrep-improved-my-workflow)
