---
created: 2023-08-14T00:00+03:00
tags:
  - blog
  - computer_programming_tools
sr-due: 2027-09-10
sr-interval: 792
sr-ease: 283
---

## netrw

> Netrw makes reading files, writing files, browsing over a network, and
> local browsing easy!\
> — <cite>`:h netrw`</cite>

## Flashcards

List key mappings:<wbr class="f"> `F1` or `:WhichKey` if available

Toggle banner:<wbr class="f"> `I`

Locate file in file manager:<wbr class="f"> `:Explore` or `:Ex`, keybinding is `<leader>pv`

netrw explore variants:<wbr class="f"> `:Vexplore`, `:Hexplore`, `:Texplore`, `:Sexplore`

Open directory, parent directory:<wbr class="f"> `<cr>`, `-` or `u`

Preview window (press again to update), close preview window:<wbr class="f"> `p`, `<C-w>z`

Toggle hidden files:<wbr class="f"> `gh`

Create file:<wbr class="f"> `%`

Create a new directory:<wbr class="f"> `d`

Clear marks in current buffer:<wbr class="f"> `mF`

Clear all marks:<wbr class="f"> `mu`

### Operation on files

NOTE: you can use `let g:netrw_keepdir = 0` to allow copy/move to parent
directories (or use `cd` keybinding to change current directory).

NOTE: to support recursive copy need to customize copy directories command:
`let g:netrw_localcopydircmd = 'cp -r'`

Assign the "target directory" used by the move and copy commands.:<wbr class="f"> `mt`

Assign target directory and copy in one command:<wbr class="f"> `mtmc`

**Copy/move** the marked files in the target directory.:<wbr class="f"> `mc`, `mm`

Runs an external command on the marked files.:<wbr class="f"> `mx`

Rename (move) file:<wbr class="f"> `R`

Marks a file or directory:<wbr class="f"> `mf`

Delete a file or an empty directory:<wbr class="f"> `D`

Delete a file or directory recursively:<wbr class="f"> `mx` then `trash.sh` (my custom script)

### Bookmarks

Add bookmark, most recent bookmark:<wbr class="f"> `mb`, `{num}gb`

List bookmarks and history:<wbr class="f"> `qb`

Remove the most recent bookmark:<wbr class="f"> `mB`

Mark visual selection:<wbr class="f"> `:normal mf`, which transforms to `:'<,'>normal mf`.

## Uncategorized

Change permissions:<wbr class="f"> `gp`

Select sorting style:<wbr class="f"> `s`, by name, time, or file size

Change the owner:<wbr class="f"> `mf` to select files, `mx` then `chown ...`

TODO: select all directories.
TODO: invert the selection.
TODO: switch between files and directories

## Help

- `:h netrw`
- `:h netrw-quickmap`

## External links

- [x] [Using Netrw, vim's builtin file explorer](https://vonheikemen.github.io/devlog/tools/using-netrw-vim-builtin-file-explorer/)
