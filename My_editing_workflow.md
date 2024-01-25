---
date: 2023-04-04
tags:
  - inbox
  - SR_vim
sr-due: 2024-01-26
sr-interval: 1
sr-ease: 217
---

# My editing workflow

p* - pycharm only
n* - neovim only

I n daily life I use [[Pycharm]] and [[Neovim]] in [[Tmux]] session.

Maybe in near future I will switch to use only neovim.

Some of the bindings can be changed, so this guide is not 100% actual.
Better to check live bindings using telescope/config/etc.

- [ ] initialize netrw
- [ ] initialize VCS
- [ ] initialize testing
- [ ] initialize refactoring
- [ ] initialize debugging
- [ ] initialize learn
- [ ] initialize other

## Built-in maps

Insert new line above/below::`[<space>`, `]<space>`

## Files navigation


- [x] close all buffers except current and stay on original cursor position
?
`<leader>bD`, Use this: `:%bd\|e#\|bd#<cr>\|'"`

- [x] `cd` to current file path::`<leader>z%` n\*

- [ ] Cd to various directories::parent dir `:cd ..`, current file dir. `:cd %:h`, home dir. `:cd`, previous dir `:cd -`

- [x] focus editor::`<c-'>`

- [x] grep content in current project and open find toolbar::`<leader>fs`

- [x] locate file in telescope file manager::`<leader>pV`

- [x] recent files, Telescope old files + CWD::`<m-e>`

- [x] recent locations::`<leader>o`, `<leader>i` n\*

- [x] find file, with history and fuzzy search::`M-p`

- [x] telescope resume::`<m-P>` n\*

## Code navigation

- [x] go to definition::`gd`

- [x] go to declaration::`gD`

- [x] find symbol, based on grep:`<leader>vws[S]`\*

- [ ] find usages/references::`gr`

- [x] go to older/newer position::`<c-o>/<c-i>`

- [x] hover help::`K`

- [x] zeavim word under cursor or selection::`<leader>zh` In pycharm works only
      selection.

- [x] zeavim search motion::`gz[motion]` n\*

- [x] zeavim select doc-set and query::`<leader><leader>z` n\*

- [x] go to previous/current file::`c-^`

### Markdown

- [x] go to previous/next function hunk::`[[/]]`
- [x] go to link::`gx`
- [x] selection bold::`<C-b>`
- [x] selection italic::`<C-i>`
- [x] selection code::`<C-e>`
- [x] selection link::`<C-k>`
- [x] renumber list items::`gN`, using `bullets.vim` n\*
- [x] toggle checkbox::`<leader>zt` n\*
- [x] bullet demote::`<C-t>` or `>>` or `>` in visual mode
- [x] bullet promote::`<C-d>` or `<<` or `<` in visual mode
- [x] URL to markdown > clipboard > paste::`<leader>pl` n\*
- [x] HTML to markdown > clipboard > paste::`<leader>ph` n\*

### Harpoon n\*

- [ ] quick switch to terminal
      Ctrl-Z while editing in vim to send it to background, do your thing on the terminal and use fg at any time to bring up vim again.
      C-\ switch to terminal

- [x] add file into harpoon list::`leader-a`

- [x] show harpoon menu::`c-e`

- [x] close harpoon menu::`q or esc`

- [x] switch harpoon items::`c-t c-n c-m-t c-m-n`\*

## Code editing

- [x] mark modified files
?
In neovim it's `[+]` in the status line, in pycharm it's mark in tab (requires
enabling `Mark modified`).

- [x] code folding::`zo/zc/zr`

- [x] comment line::`gcc`

- [x] comment block`gc<motion>`

- [x] code formatting::`<leader>F`

- [x] code actions::`<leader>vaa`

- [x] macro record/replay::`q<letter>/@<letter>`

## Code refactoring

- [x] list document trouble::`<leader>xq`

- [x] list workspace trouble::`<leader>xQ`

- [x] from the quick-menu, open a file in splits
      ?
      a vertical split with `C-v`, a horizontal split with `C-x`, a new tab with `C-t`

- [x] black integration, for neovim using `efm` and `vim.lsp.buf.format()`. For
      pycharm using plugin.

- [x] linter integration, [GitHub - astral-sh/ruff-lsp: A Language Server Protocol implementation for Ruff.](https://github.com/astral-sh/ruff-lsp)
      Added but with zero configuration. n\*

### Rope

- [ ] [GitHub - python-rope/ropevim: vim mode that uses rope library to provide features like python refactorings and code-assists](https://github.com/python-rope/ropevim#keybinding)

| Key               | Command                                                  |
| ----------------- | -------------------------------------------------------- | --------------------------------- |
| C-x p o           | RopeOpenProject                                          | Synchronize                       |
| C-x p k           | RopeCloseProject                                         | CloseProject                      |
| C-x p f           | NOT USING RopeFindFile                                   |
| C-x p 4 f         | NOT USING RopeFindFileOtherWindow                        |
| C-x p u           | RopeUndo                                                 | NOT used, works with builtin undo |
| C-x p r           | RopeRedo                                                 | NOT used, works with builtin redo |
| C-x p c           | RopeProjectConfig                                        | NOT USED                          |
| C-x p n \[mpfd\]  | RopeCreate(Module\|Package\|File\|Directory)             | Same                              |
|                   | RopeWriteProject                                         |
|                   |                                                          |
| C-c r r           | RopeRename                                               | Rename                            |
| C-c r l           | RopeExtractVariable                                      | IntroduceVariable                 |
| C-c r m           | RopeExtractMethod                                        | ExtractMethod                     |
| C-c r i           | RopeInline                                               | Inline                            |
| C-c r v           | RopeMove                                                 | Move                              |
| C-c r x           | RopeRestructure                                          |
| C-c r u           | RopeUseFunction                                          |
| C-c r f           | RopeIntroduceFactory                                     |
| C-c r s           | RopeChangeSignature                                      |
| C-c r 1 r         | RopeRenameCurrentModule                                  |
| C-c r 1 v         | RopeMoveCurrentModule                                    |
| C-c r 1 p         | RopeModuleToPackage                                      |
|                   |                                                          |
| C-c r o           | RopeOrganizeImports                                      | OrganizeImports                   |
| C-c r n \[vfcmp\] | RopeGenerate(Variable\|Function\|Class\|Module\|Package) |
|                   |                                                          |
| C-c r a /         | RopeCodeAssist                                           |
| C-c r a g         | RopeGotoDefinition                                       |
| C-c r a d         | RopeShowDoc                                              |
| C-c r a f         | RopeFindOccurrences                                      |
| C-c r a ?         | RopeLuckyAssist                                          |
| C-c r a j         | RopeJumpToGlobal                                         |
| C-c r a c         | RopeShowCalltip                                          |
|                   | RopeAnalyzeModule                                        |
|                   | RopeAutoImport                                           |
|                   | RopeGenerateAutoimportCache                              |

## Code autocompletion

- [x] confirm autocomplete::`<c-y>`

- [x] confirm copilot::`<tab>`

- [x] snippets in autocomplete

## Code run/debugging/testing

- [x] auto-import:
      neovim: autocomplete or insert mode and press `<c-space>`
      pycharm: type and press `<c-space><c-space>`

- [x] Review and pick something from [tjdervis-dap config](https://github.com/tjdevries/config_manager/blob/master/xdg_config/nvim/after/plugin/dap.lua)

- [x] telescope-dap.nvim prefix::`<leader>dl`
- [x] view breakpoints::`<leader>dlb`

- [x] run debugger configuration::`<F5>`

- [x] continue debugger::`<F6>`, not required in neovim

- [x] restart debugger::`<leader>dR`

- [x] toggle breakpoint::`<leader>db[B]`

- [x] stop debugger::`<leader>dx`

- [x] step back::`<F1>` n\*

- [x] step over::`<F3>`

- [x] step into::`<F2>`

- [x] step out::`<F4>`

- [ ] jump to cursor::`<S-F1>` \*

- [ ] run to cursor::`<leader>dC`

- [ ] evaluate expression

- [ ] run current test file::`<leader>dnf` \*

- [ ] coverage test

- [ ] generate test, AI-test generate?

- [ ] run group of tests, pytest cwd?

- [ ] CI/Reporting workflow

- [x] run the nearest test::`<leader>dnn`

- [x] rerun the last test

- [x] debug the nearest test::`<leader>ddc`

- [x] open test results::`<leader>dno`

- [x] show summary::`<leader>dns`

- [x] toggle output panel::`<leader>dnt`

- [x] [neotest](https://github.com/harrisoncramer/nvim/blob/main/lua/plugins/neotest.lua)

## Errors and warnings navigation

- [x] go to next/previous error::`[d` `]d`

- [x] go to file with error (under cursor)::`gf` or `gF` n\*

## VCS n\*

NOTE: I just won't deeply integrate VCS keybindings into pycharm (and it's maybe
even not easy to implement same workflow like in neovim/vim-fugitive). So I
decided use only neovim/vim-fugitive for VCS work. Also, this will help me to
switch into Neovim/Vim easily.

### Fugitive

- [x] import fugitive.lua keybindings

- [x] Control size of git status window and allow toggle it n\*

- [x] `:diffoff[!]`::Close diff window, can be used in combination with `:q[!]` to close

- [x] `:diffupdate`::update diff window, can help with highlighting issues

Index file represent ==last committed== version of file.

Checkout branch::`<leader>go`

Grep in branch, `:Git grep`, but I prefer telescope `<leader>fs`::`<leader>gp`

Move current file to another location `:Git move`::`<leader>gm`

- [x] `:Gwrite` or `<leader>gw`
?
Stage current file if it's working copy, or checkout if it's index file

- [x] `:Gwrite` on working copy will ==stage file==.
- [x] `:Gwrite` on index file will ==checkout file==.
- [x] `:diffput` its like ==`:Gwrite`== but for diff window and works with hunks.
- [x] `:diffput` on working copy will ==stage hunk==.
- [x] `:diffput` on index file will ==checkout hunk==.
- [x] `dp` is hotkey for ==`:diffput`==. `p` is stays for "put".

- [x] `:Gread` or `<leader>gR`
?
Checkout current file if it's working copy, or stage if it's index file

- [x] `:Gread` on working copy will ==checkout file==.
- [x] `:Gread` on index file will ==stage file==.
- [x] `:diffget` its like ==`:Gread`== but for diff window and works with hunks.
- [x] `:diffget` on working copy will ==checkout hunk==.
- [x] `:diffget` on index file will ==stage hunk==.
- [x] `do` is hotkey for ==`:diffget`==. `o` is stays for "obtain".


`:Gremove`::Remove current file

`:Gmove <relative_path>`::Move current file

Open autocomplete in commit buffer::`C-n`

`:G blame::`Open split window with blame buffer

`:G commit`::Open split window with commit buffer

`:Gedit :<path>` or `Gedit :0` or `<leader>ge`::Open index file

`:Gdiffsplit` or `<leader>gd`::vimdiff against the index version of the file

`:Git diff` or `<leader>gD`::git diff against the last committed version of the file.

`:Git commit --ammend` or `<leader>ga`::amend last commit

`:Git add -p` or `<leader>gA`::run git add with patch

- [x] to use `:diffget` on deleted lines, place cursor position ==after== that
lines

- [x] list branches `<leader>gb` and then press =`<tab>`=.

- [x] log git history of current file::`<leader>gl`

- [x] `dv`::Perform a `:Gvdiffsplit` on the file under the cursor

- [x] `ds`::Perform a `:Ghdiffsplit` on the file under the cursor

- [ ] Perform a `:Gdiffsplit` on the file under the cursor.::`dd`

- [ ] 2/5 http://vimcasts.org/blog/2011/05/the-fugitive-series/

- [-] [GitHub - lewis6991/gitsigns.nvim: Git integration for
buffers](https://github.com/lewis6991/gitsigns.nvim). Stopped using it, generate
some errors in my setup, don't really used it.

- [ ] [Vim Git Plugins : r/vim](https://www.reddit.com/r/vim/comments/8h044y/comment/dym4eax/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button)

- [ ] diff branches. Working tree diff.

- [ ] compare working tree with branch
      git-diff or :Merginal

- [ ] `gt` - accept left side of diff

- [ ] `gn` - accept right side of diff

- [ ] accept left/right hunk in 3-way diff/merge conflict

- [ ] grep in VCS repo history

- [ ] cherry-picking commit [If you could chose only one, would you choose "vim-fugitive" or "lazygit", and why? : r/neovim](      https://www.reddit.com/r/neovim/comments/tuhs7u/comment/i35571l/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button)

- [ ] [Newest 'plugin-fugitive' Questions - Vi and Vim Stack Exchange](https://vi.stackexchange.com/questions/tagged/plugin-fugitive)

- [x] stash the changes::`czz`, require staging changes before

- [x] Apply topmost stash::`cza`

- [ ] push and create merge request::`<leader>T` in vim-fugitive buffer

- [x] get file local history/undotree::`<leader>u`

- [x] open diff/git for current file::`=`

- [x] stage/unstage (add/reset) file, works in visual mode too (multiple files)
      ?
      `-`

- [x] open file in the window below (git status)::`<cr>`

- [x] commit chunk or selection of chunk::`s`

- [x] run `git add –patch` for current file::`P`

- [x] commit staged changes::`cc`

- [x] next/previous hunk::`(`, `)`

- [x] stage hunk::`s`

- [x] unstage hunk::`u`

- [x] Push changes::`<leader>p` (in fugitive mode for nvim) n\*

- [x] pull & rebase::`<leader>P` (in fugitive mode for nvim) n\*

### Git Signs

- [ ] `:h gitsigns.txt`

## Custom

- [x] telescope command_history::`<leader>fc` n\*

- [x] telescope builtin's, super search, `:h telescope.builtin` ::`<leader>fF` n\*

- [x] find hotkey/action::`<leader>fk` in vim to find action use `<leader>fK`

- [x] open git commit UI, git status::`<Leader>gg`

- [x] show diff from git history::`Return`, in `Pycharm` it's `Ctrl+D` \*

- [x] open fugitive object in new split::`o` or `O` n\*

- [x] diagnostics `<Leader>vd`

- [x] rename object (using LSP):`<Leader>vrn`

- [ ] close all windows except current::`<C-w>o`

- [x] add/remove/list workspace folders
?
`<Leader>wa`, `<Leader>wr`, `<Leader>wl`. Pycharm alternative is project
structure. n\*

- [x] telescope list active buffers::`<M-b>`

- [x] parsed syntax-tree view::`:TSPlaygroundToggle` n\*

## [[Netrw]]

Main file manager

## SQL

- [x] toggle DB UI::`<leader>qt`
- [x] toggle last query info::`<leader>qi` n\*
- [x] execute query::`<leader>S`
- [ ] [GitHub - kristijanhusak/vim-dadbod-completion: Database autocompletion powered by https://github.com/tpope/vim-dadbod](https://github.com/kristijanhusak/vim-dadbod-completion)
- [x] connect and open database console
- [x] copy all results/row/column::`y[motion]`, `yic` n\*

- [ ] [vim-dadbod-ui/doc/dadbod-ui.txt at master · kristijanhusak/vim-dadbod-ui · GitHub](https://github.com/kristijanhusak/vim-dadbod-ui/blob/master/doc/dadbod-ui.txt)
- [ ] vim-dadbod-ui [GitHub - kristijanhusak/vim-dadbod-ui: Simple UI for https://github.com/tpope/vim-dadbod](https://github.com/kristijanhusak/vim-dadbod-ui#mappings) full-featured database client, possible set values, load values from files, query, work with multiple databases

## Vim surround

- [x] `surr*ound_words ysiw)` (surround_words)
- [x] `*make strings ys$"` "make strings"
- [x] `[delete ar*ound me!] ds]` delete around me!
- [x] remove `<b>HTML t*ags</b> dst` remove HTML tags
- [x] change `quot*es' cs'"` "change quotes"
- [x] `<b>or tag* types</b> csth1<CR>` `<h1>or tag types</h1>` n\*
- [x] `delete(functi*on calls) dsf` function calls n\*

## JS debugging (browser)

- [ ] Probably easily just use chrome built-in debugger/sourcemaps
- [x] [How to configure the DAP debugger under neovim for typescript? - Stack Overflow](https://stackoverflow.com/questions/71810002/how-to-configure-the-dap-debugger-under-neovim-for-typescript)
- [ ] [Break points do not work · Issue #14 · mxsdev/nvim-dap-vscode-js · GitHub](https://github.com/mxsdev/nvim-dap-vscode-js/issues/14)

## Learn

- [x] [How to: Create a git Merge Conflict](https://jonathanmh.com/how-to-create-a-git-merge-conflict/)
- [ ] `:h terminal`
- [ ] `:h fugitive.txt`
- [ ] `:h lua-guide`
- [ ] `:h`

## Code style

## Commit style

## CLI tools

## Automation

- [ ] vim-shell output actions... `:h redir`, `!...|grep`, `r!...`, etc.
- [ ] [GitHub - tpope/vim-unimpaired: unimpaired.vim: Pairs of handy bracket mappings](https://github.com/tpope/vim-unimpaired)
- [ ] new scratch file `:enew`
- [ ] execute scratch file
- [ ] execute current file (open externally) leader o or leader O (run using xdg-open)
- [ ] [GitHub - stevearc/aerial.nvim: Neovim plugin for a code outline window](https://github.com/stevearc/aerial.nvim)
- [ ] [Fold](https://learnvim.irian.to/basics/fold)

## Custom

replace single quotes to double: `:s/\'\(.*\)\'/\"\1\"`

map specific insert key in specific terminal: CTRL-K CTRL-F1 to get key code,
then map it...

## Resources

- [ ] [[research/Irianto-Learn_Vim]]
- [ ] [[research/Neil-Modern_Vim]]
- [ ] [[research/Neil-Practical_Vim]]
- [ ] [[research/Osipov-Mastering_Vim]]
