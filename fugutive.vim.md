---
created: 2024-09-07T00:00+03:00
tags:
  - blog
  - VCS
sr-due: 2025-08-20
sr-interval: 38
sr-ease: 265
---

# fugutive.vim

> Fugitive is the premier Vim plugin for [[Git]]. Or maybe it's the premier Git
> plugin for Vim? Either way, it's "so awesome, it should be illegal". That's
> why it's called Fugitive.\
> — <cite>[tpope/vim-fugitive: A Git wrapper](https://github.com/tpope/vim-fugitive)</cite>

Get file local history/undotree:<wbr class="f"> `<leader>u`

Open git commit UI, git status:<wbr class="f"> `<Leader>gg`

Open git commit UI vertically:<wbr class="f"> `:vert G`

Fugitive menu:<wbr class="f"> `<leader>g`

`:diffoff[!]`:<wbr class="f"> Close diff window, can be used in combination with `:q[!]` to
close

`:diffupdate`:<wbr class="f"> update diff window, can help with highlighting issues

Index file represent ==last committed== version of file.

Checkout branch:<wbr class="f"> `<leader>go`

Grep in branch:<wbr class="f"> `<leader>gp`, `<leader>gP` (quickfix list)

Move current file to another location `:Git move`:<wbr class="f"> `<leader>gm`

Stage current file if it's working copy, or checkout if it's index file <br class="f">
`:Gwrite` or `<leader>gW`

`:Gwrite` on index file will ==checkout file==.

`:Gwrite` on working copy will ==stage file==.

`:diffput` its like ==`:Gwrite`== but for diff window and works with hunks.

`:diffput` on working copy will ==stage hunk==.

`:diffput` on index file will ==checkout hunk==.

`dp` is hotkey for ==`:diffput`==. `p` is stays for "put".

Checkout current file if it's working copy, or stage if it's index file <br class="f">
`:Gread` or `<leader>gR`

`:Gread` on index file will ==stage file==.

`:Gread` on working copy will ==checkout file==.

`:diffget` its like ==`:Gread`== but for diff window and works with hunks.

`:diffget` on working copy will ==checkout hunk==.

`:diffget` on index file will ==stage hunk==.

`do` is hotkey for ==`:diffget`==. `o` is stays for "obtain".

`:Gremove`:<wbr class="f"> Remove current file

`:Gmove <relative_path>`:<wbr class="f"> Move current file, to append current file use
`<ctrl-r>%`

`:G blame:<wbr class="f"> `Open split window with blame buffer

`:G commit`:<wbr class="f"> Open split window with commit buffer

`:Gedit :<path>` or `Gedit :0` or `<leader>ge`:<wbr class="f"> Open index file

`:Gdiffsplit` or `<leader>gd`:<wbr class="f"> vimdiff against the index version of the file,
quit from this mode by `:q`

`:Git diff` or `<leader>gD`:<wbr class="f"> git diff against the last committed version of the
file.

`:Git commit --ammend` or `<leader>ga`:<wbr class="f"> amend last commit

`:Git add -p` or `<leader>gA`:<wbr class="f"> run git add with patch

To use `:diffget` on deleted lines, place cursor position ==after== that lines.

List branches `<leader>gb` and then press =`<tab>`=.

Log git history of current file:<wbr class="f"> `<leader>gl`

Search in git history (`git log -S...`):<wbr class="f"> `<leader>gL`

Open fugitive object in new split/tab:<wbr class="f"> `o` or `O`

Perform a `:Gdiffsplit` on the file under the cursor.:<wbr class="f"> `dd`

Perform a `:Gvdiffsplit` on the file under the cursor:<wbr class="f"> `dv`

Perform a `:Ghdiffsplit` on the file under the cursor:<wbr class="f"> `ds`

Open diff/git for current file:<wbr class="f"> `=`

Stage/Unstage (add/reset) file, works in visual mode too (multiple files):<wbr class="f"> `-`

Next/previous hunk:<wbr class="f"> `(`, `)`

Stage hunk:<wbr class="f"> `s`

Unstage hunk:<wbr class="f"> `u`

Stash the changes:<wbr class="f"> `czz`

Apply topmost stash:<wbr class="f"> `cza`

Commit staged changes:<wbr class="f"> `cc`

Run `git add –patch` for current file (interactive stage):<wbr class="f"> `P`

Push changes:<wbr class="f"> `<leader>pp` (in fugitive mode for nvim)

Push and create merge request:<wbr class="f"> `<leader>pT` (in fugitive mode for nvim)

Pull:<wbr class="f"> `<leader>pP` (in fugitive mode for nvim)

During a merge conflict, this is a three-way diff against the "ours" and
"theirs" ancestors (open with `dd`). Additional ==`d2o`, `d3o`, `dp`== maps are
provided by vim-fugitive to obtain the hunk from the "ours" or "theirs"
ancestor, respectively.

What if I want to pick changes from `head` (target branch) or from `branch-name`
(merge-branch) during merge conflict (ignore remote or local changes), how to do
it with vim-fugitive?
<br class="f">
Need to use `Gwrite!`, `!` is required because this is dangerous command, and
you can lose your changes. Be very careful with this strategy anyway.

Git signs menu:<wbr class="f"> `<leader>h[key]`

`:Grename newname`:<wbr class="f"> Full rename

TODO: cherry-pick file/changes
