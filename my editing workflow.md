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

- [x] go to file::`<m-p>`

- [x] recent files, Telescope old files + CWD::`<m-e>`

- [x] recent locations::`<leader>o`, `<leader>i` n\*

- [x] find file, with history and fuzzy search::`M-p`

## Code navigation

- go to definition::`gd`

- go to declaration::`gD`

- find symbol, based on grep:`<leader>vws[S]`\*

- find usages/references::`<leader>vrr`

- go to older/newer position::`<c-o>/<c-i>`

- hover help::`K`

- go to previous/current file::`c-^`

- go to previous/next function hunk::`[[`/`]]`

### Harpoon n\*

- [x] add file into harpoon list::`leader-a`

- [x] show harpoon menu::`c-e`

- [x] close harpoon menu::`q or esc`

- [x] switch harpoon items::`c-t c-n c-m-t c-m-n`\*

## Code editing

- code folding::`zo/zc/zr` \*

- comment line::`gcc`

- comment block`gc<motion>`

- code formatting::`<leader>F`

- code actions::`<leader>vaa`

- macro record/replay::`q<letter>/@<letter>`

## Code refactoring

- [x] list document trouble::`<leader>xq`

- [x] list workspace trouble::`<leader>xQ`

- [x] from the quick-menu, open a file in splits
?
a vertical split with `C-v`, a horizontal split with `C-x`, a new tab with `C-t`

- [ ] rename/move/extract/inline

- [ ] automatic refactorings (<!-- black integration -->)

- [ ] sort/organize imports, manually?

### Rope
- [ ] https://github.com/python-rope/ropevim#keybinding

| Key               | Command                                                  |
|-------------------|----------------------------------------------------------|
| C-x p o           | RopeOpenProject | Synchronize                            |
| C-x p k           | RopeCloseProject | CloseProject
| C-x p f           | NOT USING RopeFindFile                                              |
| C-x p 4 f         | NOT USING RopeFindFileOtherWindow                                  |
| C-x p u           | RopeUndo | NOT used, works with builtin undo                                                |
| C-x p r           | RopeRedo | NOT used, works with builtin redo                                                 |
| C-x p c           | RopeProjectConfig | NOT USED                                       |
| C-x p n \[mpfd\]  | RopeCreate(Module\|Package\|File\|Directory) | Same            |
|                   | RopeWriteProject                                         |
|                   |                                                          |
| C-c r r           | RopeRename | Rename                                      |
| C-c r l           | RopeExtractVariable | IntroduceVariable                                      |
| C-c r m           | RopeExtractMethod                                        |
| C-c r i           | RopeInline                                               |
| C-c r v           | RopeMove                                                 |
| C-c r x           | RopeRestructure                                          |
| C-c r u           | RopeUseFunction                                          |
| C-c r f           | RopeIntroduceFactory                                     |
| C-c r s           | RopeChangeSignature                                      |
| C-c r 1 r         | RopeRenameCurrentModule                                  |
| C-c r 1 v         | RopeMoveCurrentModule                                    |
| C-c r 1 p         | RopeModuleToPackage                                      |
|                   |                                                          |
| C-c r o           | RopeOrganizeImports                                      |
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

- [ ] snippets in autocomplete

## Code debugging/testing

- [ ] https://github.com/tjdevries/config_manager/blob/78608334a7803a0de1a08a9a4bd1b03ad2a5eb11/xdg_config/nvim/after/plugin/dap.lua

- run debugger configuration::`<F5>`

- continue debugger::`<F6>`, not required in neovim

- restart debugger::`<leader>dR`

- toggle breakpoint::`<leader>db[B]`

- stop debugger::`<leader>dx`

- jump to cursor::`<S-F1>` \*

- step back::`<F1>` n\*

- step over::`<F3>`

- step into::`<F2>`

- step out::`<F4>`

- run to cursor::`<leader>dC`

- evaluate expression

- view breakpoints

- run the nearest test::`<leader>dnn`

- rerun the last test

- run current test file::`<leader>dnf` \*

- debug the nearest test::`<leader>ddc`

- open test results::`<leader>dno`

- show summary::`<leader>dns`

- toggle output panel::`<leader>dnt`

- coverage test

- generate test

- [ ] run group of tests, pytest cwd?

- [ ] CI/Reporting workflow

- [x] [neotest](https://github.com/harrisoncramer/nvim/blob/main/lua/plugins/neotest.lua)

## Errors and warnings navigation

- go to next/previous error::`[d` `]d`

- go to file with error::?? Traceback actions.

## VCS

- log git history of current file::`<leader>gl`

- [ ] open 3-way diff/merge

- get file local history/undotree::`<leader>u`


- [ ] cherry-picking/compare

- [ ] open diff/git for current file::`=`

- [ ] stage/unstage file `-`

- [ ] commit chunk or selection of chunk `s`

- [ ] commit staged changes cc

- [ ] revert all changes, stash the changes czz Push stash. Pass a [count] of 1 to add `--include-untracked` or 2 to add `--all`.

- [ ] stash changes

- [ ] czA Apply topmost stash, or stash@{count}.

- [ ] dv Perform a |:Gvdiffsplit| on the file under the cursor.

- [ ] dd Perform a |:Gdiffsplit| on the file under the cursor.

- [ ] ds Perform a |:Ghdiffsplit| on the file under the cursor.

- [ ] gt - accept left side of diff

- [ ] gn - accept right side of diff

- [ ] telescope git... Telescope git\_...

- add/remove into stage

- commit/push

- pull/rebase/merge

- diff

- push and create merge request `git push -o merge_request.create --set-upstream origin HEAD`

- [-] ~~gitsigns.nvim~~ - overkill? vim fugitive is enough?

## Custom


- [ ] quick switch to terminal
      Ctrl-Z while editing in vim to send it to background, do your thing on the terminal and use fg at any time to bring up vim again.
      C-\ switch to terminal

- [ ] nvim term help/video tutor

- [ ] find commands, aka action search
      leader-f-a

- [ ] telescope builtin's, super search, `:h telescope.builtin` n\*::`<leader>fF`

- [ ] find hotkey/action::`<leader>fk` in vim to find action use `<leader>fK`

- [ ] open git commit UI, git status::`<Leader>gg`

- [ ] git history :G l or :G log

- [ ] jump to source from git history O or o

- [ ] next/prev hunk ( )

- [ ] stage hunk s

- [ ] unstage hunk u

- [ ] diagnostics `<Leader>vd`

- [ ] declaration/definition ?? how it works
      leader-v-g-d[D]

- [ ] rename leader-v-r-n

- [ ] add/remove/list remove dynamic workspace folders leader w a, leader w r, leader w l

- [ ] permanent bookmarks, marks, using viminfo?

- [ ] external documentation
      leader-zw search word
      gz <Plug>ZVOperator
      leader>z <Plug>ZVVisSelection
      <leader><leader>z <Plug>ZVKeyDocset

- [ ] search in git repo (telescope-git)

- [ ] list active buffers, to switch c-a-p

- [ ] structure view :TSPlaygroundToggle

- Push changes leader-p

## Todo

- [ ] telescope command_history

- [-] JS debugging (browser)
  Propably easly just use chrome built-in debugger/sourcemaps
  https://stackoverflow.com/questions/71810002/how-to-configure-the-dap-debugger-under-neovim-for-typescript

- [-] ~~select in~~

- [ ] new scratch file :enew

- [ ] execute scratch file

- [ ] execute current file (open externally) leader o or leader O (run using xdg-open)

- [ ] add quotes/x pairs to words/sentence
      https://github.com/kylechui/nvim-surround
      https://stackoverflow.com/questions/2147875/what-vim-commands-can-be-used-to-quote-unquote-words

- [-] vim shell output actions...
  :h redir, !...|grep, r!... etc

- [ ]  run method?


## LSP

- [ ] https://github.com/astral-sh/ruff-lsp

- [ ] linter, built-in into lsp

- [-] python lsp actions
  - [ ] autoimport
  - [ ] remove unused imports
- [ ] python lsp symbols
- [ ] optimize imports
- [ ] copilot tab issue (try indent, while suggestion active!), markdown alignment issues
      possible insert tab by S-Tab, but better to use S-Return

- [ ] diff branches. Working tree diff.
- [ ] compare working tree with branch
      git-diff or :Merginal

## SQL

- [ ] connect and open database console
- [ ] execute query and show results
- [ ] copy all results/row/column
- [ ] toggle results view

- [ ] https://github.com/kristijanhusak/vim-dadbod-ui/blob/master/doc/dadbod-ui.txt
- [ ] vim-dadbod-ui https://github.com/kristijanhusak/vim-dadbod-ui#mappings
      full-featured database client, possible set values, load values from files, query, work with multiple databases

## Vim surround

```
    Old text                    Command         New text
--------------------------------------------------------------------------------
    surr*ound_words             ysiw)           (surround_words)
    *make strings               ys$"            "make strings"
    [delete ar*ound me!]        ds]             delete around me!
    remove <b>HTML t*ags</b>    dst             remove HTML tags
    'change quot*es'            cs'"            "change quotes"
    n* <b>or tag* types</b>        csth1<CR>       <h1>or tag types</h1>
    n* delete(functi*on calls)     dsf             function calls
```

## Code style

## Commit style

## Automation


- [ ] https://github.com/tpope/vim-unimpaired

