---
date: 2024-09-07
tags:
  - inbox
  - VCS
---

# fugutive.vim

> Fugitive is the premier Vim plugin for [[Git]]. Or maybe it's the premier Git
> plugin for Vim? Either way, it's "so awesome, it should be illegal". That's
> why it's called Fugitive.\
> — <cite>[tpope/vim-fugitive: A Git wrapper](https://github.com/tpope/vim-fugitive)</cite>

Get file local history/undotree::`<leader>u`

Open git commit UI, git status::`<Leader>gg`

Open git commit UI vertically::`:vert G`

Fugitive menu::`<leader>g`

`:diffoff[!]`::Close diff window, can be used in combination with `:q[!]` to
close

`:diffupdate`::update diff window, can help with highlighting issues

Index file represent ==last committed== version of file.

Checkout branch::`<leader>go`

Grep in branch::`<leader>gp`, `<leader>gP` (quickfix list)

Move current file to another location `:Git move`::`<leader>gm`

Stage current file if it's working copy, or checkout if it's index file &#10;
`:Gwrite` or `<leader>gW`

`:Gwrite` on index file will ==checkout file==.

`:Gwrite` on working copy will ==stage file==.

`:diffput` its like ==`:Gwrite`== but for diff window and works with hunks.

`:diffput` on working copy will ==stage hunk==.

`:diffput` on index file will ==checkout hunk==.

`dp` is hotkey for ==`:diffput`==. `p` is stays for "put".

Checkout current file if it's working copy, or stage if it's index file &#10;
`:Gread` or `<leader>gR`

`:Gread` on index file will ==stage file==.

`:Gread` on working copy will ==checkout file==.

`:diffget` its like ==`:Gread`== but for diff window and works with hunks.

`:diffget` on working copy will ==checkout hunk==.

`:diffget` on index file will ==stage hunk==.

`do` is hotkey for ==`:diffget`==. `o` is stays for "obtain".

`:Gremove`::Remove current file

`:Gmove <relative_path>`::Move current file, to append current file use
`<ctrl-r>%`

`:G blame::`Open split window with blame buffer

`:G commit`::Open split window with commit buffer

`:Gedit :<path>` or `Gedit :0` or `<leader>ge`::Open index file

`:Gdiffsplit` or `<leader>gd`::vimdiff against the index version of the file,
quit from this mode by `:q`

`:Git diff` or `<leader>gD`::git diff against the last committed version of the
file.

`:Git commit --ammend` or `<leader>ga`::amend last commit

`:Git add -p` or `<leader>gA`::run git add with patch

To use `:diffget` on deleted lines, place cursor position ==after== that lines.

List branches `<leader>gb` and then press =`<tab>`=.

Log git history of current file::`<leader>gl`

Search in git history (`git log -S...`)::`<leader>gL`

Open fugitive object in new split/tab::`o` or `O`

Perform a `:Gdiffsplit` on the file under the cursor.::`dd`

Perform a `:Gvdiffsplit` on the file under the cursor::`dv`

Perform a `:Ghdiffsplit` on the file under the cursor::`ds`

Open diff/git for current file::`=`

Stage/Unstage (add/reset) file, works in visual mode too (multiple files)::`-`

Next/previous hunk::`(`, `)`

Stage hunk::`s`

Unstage hunk::`u`

Stash the changes::`czz`

Apply topmost stash::`cza`

Commit staged changes::`cc`

Run `git add –patch` for current file (interactive stage)::`P`

Push changes::`<leader>pp` (in fugitive mode for nvim)

Push and create merge request::`<leader>pT` (in fugitive mode for nvim)

Pull::`<leader>pP` (in fugitive mode for nvim)

During a merge conflict, this is a three-way diff against the "ours" and
"theirs" ancestors. Additional ==d2o and d3o== maps are provided by vim-fugitive
to obtain the hunk from the "ours" or "theirs" ancestor, respectively.

Git signs menu::`<leader>h[key]`

`:Grename newname`::Full rename

TODO: cherry-pick file/changes
