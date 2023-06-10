---
date: 2023-04-04
draft: true
tags:
  - inbox
  - definition
  - vim-tip
sr-due: 2023-05-21
sr-interval: 4
sr-ease: 271
---

# My editing workflow

p* - pycharm only
n* - neovim only

I n daily life I use [[pycharm]] and [[neovim (text editor)]] inside
[[kitty (terminal emulator)]].

Maybe in near future I will switch to use only neovim.

## Built-in maps

Insert new line above/below::`[<space>`, `]<space>`

## Files navigation

- [x] `cd` to current file path::`<leader>z%` n\*

- [x] focus editor::`<c-'>`

- [x] grep content in current project and open find toolbar::`<leader>fs`

- [x] locate file in file manager::`<leader>pv`

- [x] recent files, Telescope old files + CWD::`<m-e>`

- [x] recent locations::`<leader>o`, `<leader>i` n\*

- [x] find file, with history and fuzzy search::`M-p`

- [x] telescope resume::`<m-P>` n*

## Code navigation

- [x] go to definition::`gd`

- [x] go to declaration::`gD`

- [x] find symbol, based on grep:`<leader>vws[S]`\*

- [x] find usages/references::`<leader>vrr`

- [x] go to older/newer position::`<c-o>/<c-i>`

- [x] hover help::`K`

- [x] zeavim word under cursor or selection::`<leader>zh` In pycharm works only
  selection.

- [x] zeavim search motion::`gz[motion]` n\*

- [x] zeavim select doc-set and query::`<leader><leader>z` n\*

- [x] go to previous/current file::`c-^`

- [x] go to previous/next function hunk::`[[`/`]]`
- [x] go to link::`gx`
- [x] selection bold::`<C-b>`
- [x] selection italic::`<C-i>`
- [x] selection code::`<C-e>`
- [x] selection link::`<C-k>`
- [x] renumber list items::`gN`, using `bullets.vim` n\*
- [x] toggle checkbox::`<leader>zt` n*
- [x] bullet demote::`<C-t>` or `>>` or `>` in visual mode
- [x] bullet promote::`<C-d>` or `<<` or `<` in visual mode
- [x] URL to markdown > clipboard > paste::`<leader>pl` n\*
- [x] HTML to markdown > clipboard > paste::`<leader>ph` n\*


### Harpoon n\*

- [x] add file into harpoon list::`leader-a`

- [x] show harpoon menu::`c-e`

- [x] close harpoon menu::`q or esc`

- [x] switch harpoon items::`c-t c-n c-m-t c-m-n`\*

## Code editing

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

- [ ] black integration on_save, pre_commit
- [ ] linter integration, https://github.com/astral-sh/ruff-lsp

### Rope

- [ ] https://github.com/python-rope/ropevim#keybinding

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

- [ ] sync templates

## Code run/debugging/testing

- [x] auto-import:
      neovim: autocomplete or insert mode and press `<c-space>`
      pycharm: type and press `<c-space><c-space>`

- [ ] https://github.com/tjdevries/config_manager/blob/78608334a7803a0de1a08a9a4bd1b03ad2a5eb11/xdg_config/nvim/after/plugin/dap.lua

- [x] run debugger configuration::`<F5>`

- [x] continue debugger::`<F6>`, not required in neovim

- [x] restart debugger::`<leader>dR`

- [x] toggle breakpoint::`<leader>db[B]`

- [x] stop debugger::`<leader>dx`

- [ ] jump to cursor::`<S-F1>` \*

- [x] step back::`<F1>` n\*

- [x] step over::`<F3>`

- [x] step into::`<F2>`

- [x] step out::`<F4>`

- [ ] run to cursor::`<leader>dC`

- [ ] evaluate expression

- [ ] view breakpoints

- [x] run the nearest test::`<leader>dnn`

- [x] rerun the last test

- [ ] run current test file::`<leader>dnf` \*

- [x] debug the nearest test::`<leader>ddc`

- [x] open test results::`<leader>dno`

- [x] show summary::`<leader>dns`

- [x] toggle output panel::`<leader>dnt`

- [ ] coverage test

- [ ] generate test, AI-test generate?

- [ ] run group of tests, pytest cwd?

- [ ] CI/Reporting workflow

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

- [ ] Fugitive.lua keybindings

- [ ] Control size of git status window

`:Gwrite`::Stage current file

`:Gread`::Checkout current file

`:Gremove`::Remove current file

`:Gmove <relative_path>`::Move current file

Open autocomplete in commit buffer::`C-n`

`:G blame::`Open split window with blame buffer

`:G commit`::Open split window with commit buffer

`:Gedit [<path>]`::Open index file

`:Gdiffsplit`::vimdiff against the index version of the file

- [ ] Perform a `:Gdiffsplit` on the file under the cursor.::`dd`

- [ ] 1/5 http://vimcasts.org/blog/2011/05/the-fugitive-series/

- [ ] https://github.com/lewis6991/gitsigns.nvim

- [ ] https://www.reddit.com/r/vim/comments/8h044y/comment/dym4eax/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button

- [ ] list branches

- [ ] diff branches. Working tree diff.

- [ ] compare working tree with branch
      git-diff or :Merginal

- [x] log git history of current file::`<leader>gl`

- [x] `dv`::Perform a `:Gvdiffsplit` on the file under the cursor

- [x] `ds`::Perform a `:Ghdiffsplit` on the file under the cursor

- [ ] `gt` - accept left side of diff

- [ ] `gn` - accept right side of diff

- [ ] accept left/right hunk in 3-way diff/merge conflict

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

- [ ] revert all changes, stash the changes `czz` Push stash. Pass a [count] of 1 to add `--include-untracked` or 2 to add `--all`.

- [ ] stash changes

- [ ] czA Apply topmost stash, or stash@{count}.

- [ ] grep in VCS repo history

- [x] Push changes::`<leader>p`

- [ ] pull & merge

- [ ] pull & rebase

- [ ] push and create merge request `git push -o merge_request.create --set-upstream origin HEAD`

- [ ] cherry-picking commit
      https://www.reddit.com/r/neovim/comments/tuhs7u/comment/i35571l/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button

- [ ] https://vi.stackexchange.com/questions/tagged/plugin-fugitive

### Git Signs

- [ ] `:h gitsigns.txt`

## Custom

- [ ] quick switch to terminal
      Ctrl-Z while editing in vim to send it to background, do your thing on the terminal and use fg at any time to bring up vim again.
      C-\ switch to terminal

- [x] telescope command_history::`<leader>fc` n\*

- [x] telescope builtin's, super search, `:h telescope.builtin` ::`<leader>fF` n\*

- [x] find hotkey/action::`<leader>fk` in vim to find action use `<leader>fK`

- [x] open git commit UI, git status::`<Leader>gg`

- [x] show diff from git history::`Return`, in `Pycharm` it's `Ctrl+D` *

- [x] open fugitive object in new split::`o` or `O` n\*

- [x] diagnostics `<Leader>vd`

- [x] rename object (using LSP):`<Leader>vrn`

- [ ] add/remove/list remove dynamic workspace folders leader w a, leader w r, leader w l

- [ ] list active buffers, to switch c-a-p

- [ ] structure view :TSPlaygroundToggle


## netrw

## SQL

- [ ] connect and open database console
- [ ] execute query and show results
- [ ] copy all results/row/column
- [ ] toggle results view

- [ ] https://github.com/kristijanhusak/vim-dadbod-ui/blob/master/doc/dadbod-ui.txt
- [ ] vim-dadbod-ui https://github.com/kristijanhusak/vim-dadbod-ui#mappings
      full-featured database client, possible set values, load values from files, query, work with multiple databases

## Vim surround

- [x] surr\*ound_words ysiw) (surround_words)
- [x] \*make strings ys$" "make strings"
- [x] [delete ar\*ound me!] ds] delete around me!
- [x] remove <b>HTML t\*ags</b> dst remove HTML tags
- [x] 'change quot\*es' cs'" "change quotes"
- [x] <b>or tag\* types</b> csth1<CR> <h1>or tag types</h1> n\*
- [x] delete(functi\*on calls) dsf function calls n\*

## JS debugging (browser)

- [ ] Probably easily just use chrome built-in debugger/sourcemaps
- [ ] https://stackoverflow.com/questions/71810002/how-to-configure-the-dap-debugger-under-neovim-for-typescript
- [ ] https://github.com/mxsdev/nvim-dap-vscode-js/issues/14

## Learn

- [ ] `:h fugitive.txt`
- [ ] `:h lua-guide`
- [ ] `:h terminal`
- [ ] `:h`

## Code style

- [ ] https://peps.python.org/pep-0008/

## Commit style

- [ ] https://github.com/conventional-commits/conventionalcommits.org

## Automation

- [ ] vim shell output actions... :h redir, !...|grep, r!... etc
- [ ] https://github.com/tpope/vim-unimpaired
- [ ] new scratch file `:enew`
- [ ] execute scratch file
- [ ] execute current file (open externally) leader o or leader O (run using xdg-open)
- [ ] https://github.com/stevearc/aerial.nvim
- [ ] https://learnvim.irian.to/basics/fold
