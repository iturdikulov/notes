---
date: 2023-08-14
sr-due: 2023-08-25
sr-ease: 232
sr-interval: 1
tags:
- inbox
- vim
- software
---

## netrw

> Netrw makes reading files, writing files, browsing over a network, and
> local browsing easy!\
> — <cite>`:h netrw`</cite>

## Flashcards

List key mappings::`F1` or `:WhichKey` if available

Toggle banner::`I`

Locate file in file manager::`:Explore` or `:Ex`, keybinding is `<leader>pv`

netrw explore variants::`:Vexplore`, `:Hexplore`, `:Texplore`, `:Sexplore`

Open directory, parent directory::`<cr>`, `-` or `u`

Preview window (press again to update), close preview window::`p`, `<C-w>z`

Toggle hidden files::`gh`

Create file::`%`

Create directory::`d`

Clear marks in current buffer::`mF`

Clear all marks::`mu`

### Operation on files

NOTE: you can use `let g:netrw_keepdir = 0` to allow copy/move to parent
directories (or use `cd` keybinding to change current directory).

NOTE: to support recursive copy need to customize copy directories command:
`let g:netrw_localcopydircmd = 'cp -r'`

Assign the "target directory" used by the move and copy commands.::`mt`

Assign target directory and copy in one command::`mtmc`

**Copy/move** the marked files in the target directory.::`mc`, `mm`

Runs an external command on the marked files.::`mx`

Rename (move) file::`R`

Marks a file or directory::`mf`

Delete a file or an empty directory::`D`

Delete a file or directory recursively::`mx` then `trash.sh` (my custom script)

### Bookmarks

Add bookmark, most recent bookmark::`mb`, `{num}gb`

List bookmarks and history::`qb`

Remove the most recent bookmark::`mB`

Mark visual selection::`:normal mf`, which transforms to `:'<,'>normal mf`.

## Uncategorized

Change permissions::`gp`

Select sorting style::`s`, by name, time, or file size

Change the owner::`mf` to select files, `mx` then `chown ...`

TODO: select all directories.
TODO: invert the selection.
TODO: switch between files and directories

## Resources

- `:h netrw`
- `:h netrw-quickmap`
- [x] [Using Netrw, vim's builtin file explorer](https://vonheikemen.github.io/devlog/tools/using-netrw-vim-builtin-file-explorer/)

