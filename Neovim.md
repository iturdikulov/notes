---
date: 2023-02-20
tags:
  - inbox
  - SR_vim
  - SR_software
external: https://neovim.io/
directory: ~/Computer/software/nvim/
---

TODO: global cleanup and organize resources

# Neovim (text editor)

> Neovim is based on Vim by Bram Moolenaar.
>
> Neovim is emphatically a fork of Vim, not a clone: compatibility with Vim
> (especially editor and Vimscript features) is maintained where possible.\
> — <cite>`:help nvim`</cite>

Enable logs - `nvim -V10nvim.log`

Get variable value - `:verbose set conceallevel`

Hide line numbers - `:set nonu nornu`

## Features

# General

# Basic editing

# Advanced editing

# API

To start with different config use `NVIM_APPNAME` env variable.

# Programming language support

# UI

Hyperextensible Vim-based text editor.

NEXT: issue with very long lines, how to deal with it?

## What I handle by it

- Notes, Weekly calendar - telekasten.nvim together with [[Obsidian]]
- File management - [[Netrw]]
- Code editing (highly customized setup)
- Code blocks running

## Basics

up::`k`
down::`j`
left::`h`
right::`l`

normal mode, for navigation and manipulation of text::`ESC` or `C-[` or `C-c` or `C-S` (custom)

insert mode, for inserting new text.::`iIaAoO`

visual, for navigation and manipulation of text selections::`v` or `V` or `C-v`
<!--SR:!2023-06-06,2,228-->

command-line, for entering editor commands::`:`

replace mode, replace existing text by directly typing over it.::`R`

mode similar to visual, but with a more MS Windows-like behavior::`select`

similar to the command-line mode but optimized for batch processing::`ex-mode` TODO: check

select something::`v[motion]`

copy something::`y[register][num][motion]`

copy something into system clipboard::`"<SPC>y[motion]`

delete something (can be used with black hole register)::`d[register][num][motion]`

change something (can be used with black hole register)::`c[register][num][motion]`

`:`::command mode

TODO: keybindings in command mode

How to split line (a/i/r)
?

- `a<cr><esc>`
- `r<cr>`
- `i<cr><esc>`

`:!`
?
external filter, used in command mode to execute something

`:r!`
?
Redirect output of external command to current buffer

You could also use ==`w !python`== to run your python program (no need to save,
it will pass the content as stdin, that's what w ! is for). That way you don't
to support multiple languages in your plugin. Just instruct the users to use
this Vim feature.

`C-t` in insert mode::indent
`C-d` in insert mode::unindent

### Search & replace

`/`::search mode

`?`::backward search mode

`//`::repeat last search

`/search\c`::case insensitive search

`/search\C`::case sensitive search

`set ignorecase`
?
case insensitive search

`set smartcase`
?
case insensitive search, unless there is a capital letter in the search, but `ignorecase` needs to be on

`vim[grep][!] /{pattern}/[g][j][f] {file} ...`
?
Search pattern across files pattern.

`grep {pattern} {file} ...`::Search pattern across files pattern.

`:copen`::Open quickfix window

`C-k`::`:cnext`

`C-j`::`:cprev`

`@:`::repeat last command

`@@`::repeat last `@<whatever>`

Find each occurrence of 'foo' (in all lines), and replace it with 'bar'
?
`:%s/foo/bar/g[c]`
`%` - all lines.
`s` - substitute.
`g` - global (all occurrences in the line not only the first one).
`[c]` - confirmations.

The replacement will check each line in the buffer, but will only match within the last visual selection
?
`:%s/\%Vfoo/bar/g[c]`
`[c]` - confirmations.

`:'<,'>s/old/new/g`::replace all old with new throughout visual selection

`&`::repeat last substitute, equal to `:s//~/`

`:s/\[foo\]//g`::Escape the square brackets with a backslash, to replace `[foo]`

`:s/pat\/tern/replace/g`::Escape the `/` to match "pat/tern"

`:s#pat/tern#replace#g`::Use another character as separator to match "pat/tern".

`:%s/\(^ *\)\@<! \/ /g`
?
Replace multiple spaces with one, This says find 2 or more spaces (` \`)
that are NOT preceded by 'the start of the line followed by zero or more
spaces'.

`f[x]|Fx`::search line forward for 'x', backward for 'x'

`t[x]|Tx`::search line forward before 'x', backward before 'x'

`,|;`::backward, forward after that "finds", works for s, f and t

You can also just press f/t/F/T ==again== to continue search

`/ ESC`::clear search highlights or `:noh`

`n|N`::repeat search in same direction, in opposite direction

`*|#` or `g*|g#`::search forward word under cursor, search backward word under cursor

How to do granular find and replace in the whole file
?
1. Search something with `/`
2. Type `cgn` and `word` to replace, or run some command, where `gn` is a
   motion that selects the next match of the last used search pattern. Of course
   you can use `cgN` and `dgn` to delete, etc.
3. Find next `n/N` and repeat `.`

Find and Replace in Multiple Files using `argslist`
?
1. Initialize the argslist with `:args *.ext` from CWD.
2. Optionaly add more files with `:argadd *.ext`. You can also use `**/*.ext`
   to search recursively.
3. Optionally remove some files with `:argdelete *.ext`, to delet all use `*`
4. Do search and replace: `:argdo %s/foo/bar/[g][e][c] | update`. `e` here prevents
   error messages when there is no match, `c` is for confirmation.
You can also use `:bufdo` to do the same thing in all open buffers.
To use argslist in vimgrep use `:vimgrep // ##`. `//` is last search pattern.
Use `:cdo` to do something with the quickfix list.

Search with telescope and quickfix
?
1. `<leader>fs` to grep results
2. `<C-q>` to add all results to the quickfix list
3. `:cdo s/StringOne/StringTwo/g | update` to make the change and save all the files.

### Navigation

Scrolling up, cursor staying on the same line `C-e`

Up to # line, works with relative line numbers::`#k`

Down to # line, works with relative numbers::`#j`

Move left, down, up, right `hjkll`

Move the cursor forward by a screen of text::`C-f`

Move the cursor backward by a screen of text::`C-b`

Move the cursor up by half a screen::`C-u`

Move the cursor down by half a screen::`C-d`

go To line n `:n`

go to first line::`gg`

go to last line of document::`G`
<!--SR:!2023-06-07,3,249-->

go to line n::`[n]gg`

go To line n::`[n]G`

Puts the current line at the top::`zt`

Puts the current line at the middle (and scroll to middle)::`zz`

Puts the current line at the bottom::`zb`

Scrolling down, cursor staying on the same line::`C-y`
<!--SR:!2023-06-05,2,233-->

Jump by **s**tart of words (punctuation considered words)::`w`

Jump by **s**tart words (words determined only by spaces, no punctuation)::`W`
<!--SR:!2023-06-07,3,249-->

Jump to en**d** of words (punctuation considered words)::`e`

Jump to en**d** of words (no punctuation)::`E`
<!--SR:!2023-06-05,1,193-->

Jump **b**ackward by words (punctuation considered words)::`b`
<!--SR:!2023-06-05,1,211-->

Jump **b**ackward by words (no punctuation)::`B`

Jump backwar**d** to end of words::`ge`
<!--SR:!2023-06-06,1,170-->

**J**ump to zero symbol (start of line)::`0`
<!--SR:!2023-06-05,2,233-->

   **J**ump to first non-blank character of line::`^`

Jump to end of lin**e**::`$`

Jump to the last non-blank character of the lin**e** ::`g_`

Move to the current line (useful for making commands line-based)::`_`

Move line upwards, on the first not blank character::`-`
<!--SR:!2023-06-05,1,209-->

Move line downwards, on the first not blank character::`+`

Move the cursor forward to the next sentence (or table cell)::`)`
<!--SR:!2023-06-07,2,208-->

Move backward by a sentence (or table cell)::`(`

Move the cursor a paragraph backwards::`{`

Move the cursor a paragraph forwards::`}`

Move the cursor a section forwards or to the next `{`::`]]`
<!--SR:!2023-06-05,2,230-->

Move the cursor a section backwards or the previous `{`::`]]`

Move the cursor to the top, middle, bottom of the screen.::`HML`
<!--SR:!2023-06-05,1,209-->

Jump to matching brace, bracket, or parentheses::`%`

Return to the line where the cursor was before the latest jump::`''`

Start typing on the last inserting point you can type. TODO: conflict with LSP key::`gi`

Re-select and jump to the last visual selection with::`gv`

Jump to function/variable definition::`gd`

Goes to the older cursor position on the change list::`g;`

Goes to the newer cursor position on the change list::`g,`

Jump to previous position you were at::`C-o`

Jump to more recent position you were a::`C-i`

### Clipboard

`ysiw[char]`:::change the surrounding of inner word
<!--SR:!2023-06-06,1,191-->

`ysWf ysWF`:::wrap text/word with function example

`yw`::yank word

`yy`::yank (copy) a line

`2yy`::yank 2 lines

`y$`::yank to end of line

`p`::put (paste) the clipboard after cursor/current line

`P`::put (paste) before cursor/current line
<!--SR:!2023-06-06,2,228-->

`:set`::paste avoid unexpected effects in pasting

`:registers`::display the contents of all registers

`"xyw`::yank word into register x

`"xyy`::yank line into register x

`:[range]y`::x yank `[range]` lines into register x

`"xp`::put the text from register x after the cursor

`"xP`::put the text from register x before the cursor

`"xgp`::just like "p", but leave the cursor just after the new text

`"xgP`::just like "P", but leave the cursor just after the new text
<!--SR:!2023-06-05,1,209-->

`:[line]put`::x put the text from register x after `[line]`

### Changing text

`cs[char][char or <tag>]`:::change the surrounding char to char or <tag>

Run `normal mode` command in `insert mode`::`C-o[motion]`

Read input character and insert it (useful to insert TAB for example)::`C-q`

Replace a single character (does not use insert mode)::`r`

Enter `insert mode`, but replacing characters rather than inserting::`R`

Join line below to the current one::`J`

Change (replace) an entire line::`cc`

(replace) to the end of word::`cw`

Change (replace) to the end of line::`C`

Change until \' character (or for any character)::`ct'` or `ct{char}`

Delete character at cursor and substitute text::`s`

Delete line at cursor and substitute text (same as cc)::`S`

Transpose two letters (delete and paste, technically)::`xp`

Reverse two letters (delete and paste, technically)::`Xp`

Undo changes::`u`

Redo changes::`C-r`
<!--SR:!2023-06-05,1,209-->

Insert content of register r (`in insert mode`)::`C-rr`

Repeat last command::`.`

Switch case of current symbol or selection::`~`

Switch case of current word::`g~iw`

Make current word uppercase::`gUiw`

Make current word lowercase::`guiw`
<!--SR:!2023-06-05,1,211-->

Make uppercase until end of line::`gU$`

Make lowercase until end of line::`gu$`

Change line to UPPER::`gUU`

Fill text::`gw`
<!--SR:!2023-06-06,1,208-->

Swap current line with next (line down)::`ddp`

Swap current line with previous (line up)::`ddkP`
<!--SR:!2023-06-06,2,231-->

Duplicate line and stay on same line::`yyP`

Fix spaces / tabs issues in whole file::`:%retab`

### Deleting text

`ds[char or t]`:::deletes the surrounding char or HTML element
<!--SR:!2023-06-06,1,208-->

Delete current character, previous character::`x`

Delete previous character::`X`

Delete the current word::`dw`

Delete (cut) a line::`dd`

Delete until the next \' character on the line (or any character)::`dt'` or `dt{char}`

Delete from cursor to end of line::`D`
<!--SR:!2023-06-06,3,250-->

Delete \[range\] lines::`:[range]d`

### Formatting

`>>`::indent line one column to right

`<<'::indent line one column to left
<!--SR:!2023-06-06,2,228-->

`==`::auto-indent current line
<!--SR:!2023-06-07,2,208-->

`=`::indent text, works with visual selection

`>`::shift right in visual mode (v)

`<`::shift left in visual mode (v)
<!--SR:!2023-06-06,1,208-->

### Visual Mode

`S[text object]`:::in visual state will surround a text object

`V`:::start linewise visual mode

`o`:::move to other end of marked area

`O`:::move to other corner of block

`U`:::upper case of marked area
<!--SR:!2023-06-08,3,228-->

`C-v`:::start visual block mode

`aw`:::mark a word

`ab`:::mark a () block (with braces)

`ib`:::mark inner () block

`ggVG`:::Select All
<!--SR:!2023-06-08,3,228-->

`vc`:::change (replace) marked text

`y`:::yank (copy) marked text

`vd`:::delete marked text

`v~`:::switch case
`
`v%`:::selects matching parenthesis
<!--SR:!2023-06-06,1,208-->

`vi{`:::selects matching curly brace

`vi"`:::selects text between double quotes
<!--SR:!2023-06-06,2,229-->

`vi'`:::selects text between single quotes

`viW|vis|vip|viB`:::select word, sentence, paragraph, innermost brackets

`vt|vT|vf|VF`:::select and search
<!--SR:!2023-06-07,2,209-->

### Fold

TODO: need test

Fold text object ...<motion>
?
`zf`

`zf#j`:::creates a fold from the cursor down # lines.
<!--SR:!2023-06-06,1,208-->

`zf/`:::string creates a fold from the cursor to string.

`zj`:::moves the cursor to the next fold.

`zk`:::moves the cursor to the previous fold.

`zo`:::opens a fold at the cursor.

`zO`:::opens all folds at the cursor.

`zm`:::increases the fold-level by one.

`zM`:::closes all open folds.
<!--SR:!2023-06-06,1,208-->

`zr`:::decreases the fold-level by one.

`zR`:::decreases the fold-level to zero — all folds will be open.

`zd`:::deletes the fold at the cursor.

`zE`:::deletes all folds.

`[z`:::move to start of open fold.

`]z`:::move to end of open fold.

`za`:::toggle fold *
<!--SR:!2023-06-06,2,228-->

`zo|zc`:::Fold/Unfold

`zO|zC`:::open all nested folds, close all nested folds
<!--SR:!2023-06-06,1,208-->

### Bookmarks

List all the current marks::`:marks`
<!--SR:!2023-06-06,3,250-->

Make a bookmark named `a` at the current cursor position::`m[a]`

Go to position of bookmark `a`::`` `[a] ``

Go to the line with bookmark `a`::`'[a]`

Go to the line that you last edited::`` `. ``

### Files

Switch to previous file, the best alternative to `c-o`
Useful to check `harpoon`
?
`c-^`

`:e [filename]` or `:edit [filename]`
?
Edit file, support `tab` completion. Can be used instead touch and edit files.
Also works outside vim (with my alias `e`)

Switch to buffer whose filename begins with "vimrc"::`:b vimrc[tab]`

Edit the file whose name is under or after the cursor::`gf`
<!--SR:!2023-06-06,1,208-->

`:x` or `ZZ`::quit and save

`:q!` or `ZQ`::quit without saving and ignore changes

quit without saving and exit with error code::`:cq`

exit::`:q`

save without exiting::`:w` or custom keybinding `C-s`

Save with some name (save as)::`:w [filename]`

write the current file and exit `:wq [file]`

write/force write and exit `:wq! [file]`

write/force write and exit, but only write the lines in \[range\] `:[range]wq[!]`

### Macro

record macro / stop recording macro::`q<register>`

play macro::`@<register>`

replay last command::`@:`

### Vim Text objects (motions)

outer::`a`

inner::`i`

word::`w`

sentence::`s`
<!--SR:!2023-06-06,1,208-->

paragraph::`p`

argument (require plugin, works inside brackets)::`a`

single and double quote::`❜` `"`

back quote::`` ` ``

a parenthesized block::`)` `}`

a tag::`t`
<!--SR:!2023-06-06,2,231-->

a single tag::`>`

entire content::`e`

#### Advanced text objects (`nvim-treesitter-textobjects`)

TODO: add more examples

`B`::code block

## Advanced

`zf`::fold text object
<!--SR:!2023-06-06,2,228--> (can create fold)

Find link under cursor::`gx` - open URL under cursor (`netrw-gx`)
<!--SR:!2023-06-05,1,211-->

Type ==`tab`== to complete a command

Open list of possible commands in command mode::`C-d`

List previous commands in command mode::`C-f`

### Spell checking

`]d`:::next diagnostic

`[d`:::previous diagnostic

`]s`:::next misspelled word

`[s`:::previous misspelled word
<!--SR:!2023-06-07,3,248-->

`zg`:::add word to wordlists TODO: merge wordlists with ltex plugin

`z=`:::suggest word

### Vim registers

What is vim register?
?
It's sort of space in memory to store text. Every register can be accessed using double quote `"`.
For example `r` register, copy/paste will be like this `"ry` / `"rp`.
You can access register in insert/command mode by `C-r[register name]`.
You can use the `:reg[a|b|c]` command to see all the registers and their content.
If you use `qw` to record a macro, the register `"w` will have all actions which you have done.

The unnamed register (yank, delete)::`""`

10 numbered registers (latest yank, newest, ..., oldest)::`"0` to `"9`

The last entered text (read only)::`".`

Current file path (read only)::`"%`

Most recently used command (read only)::`":`

The alternate file register (sort of last edited file)::`"#`

The black hole register::`"_`
<!--SR:!2023-06-06,2,228-->

Register AKA the selection (system clipboard)::`"*`, `"+`
<!--SR:!2023-06-06,2,213-->

Last search pattern register::`"/`

26 Named registers \"a to \"z (or \"A to\"Z), sort of clipboards::`[a-z]`

The small delete register::`"-`

The expression register, useful for calculation::`C-r =...` `"=`

### Paths and history

Print directory/name of file
?
`:echo @%`

Get name of file ('tail')
?
`:echo expand('%:t')`

Get full path of file
`:echo expand('%:p')`

Get directory containing file ('head')
`:echo expand('%:p:h')`

How to paste yanked text into the Vim command line?
?
Hit `<C-r>"`. If you have literal control characters in what you have yanked, use `<C-r><Ctrl-o>"`.
[Source](https://stackoverflow.com/questions/3997078/how-to-paste-yanked-text-into-the-vim-command-line)

How to paste system clipboard into the Vim command line?
?
I use `C-S-v`, it's working in my terminal. Or use `<C-r>"`.

How to open terminal?
?
You can use this shortcut `C-\`. To go back, exit from insert mode (`C-\\`)
and use `C-^`.

TODO: Open term in popup window?

How to open terminal in vertical split?
?
`:vsplit term://some command`

How do you search through Vim's command history?
?
Use `q:` or `q/` in normal mode and then press `/`.
Press `C-f` in command mode to open the command history window.
For more about the command history window, see `:h cmdwin`.

How quickly close command history window?
?
`<C-c><C-c>`

### Buffers

List buffers
?
`:buffers` - built-in command
`:Telescope buffers` - telescope command, or `M-b` hotkey.

Switch to buffer
?
`:b <buffer name>` or `:b <buffer number>`

Create new scratch buffer::`:enew`

### Windows

You can use vim motion keys to navigate between open windows, for example to navigate to left window?
?
`C-w h`
So moving between windows can be done with `C-w` followed by `h/j/k/l` for
left/down/up/right navigation respectively.

split open file::`:sp f`

vertical split open file::`:vsp f`
<!--SR:!2023-06-05,1,193-->

next/previous tab::`gt gT`

`C-w v`::window split vertically
<!--SR:!2023-06-06,2,213-->

`C-w s`::window split horizontal

`C-w C-w`::to switch windows
<!--SR:!2023-06-07,2,228-->

`C-w q`::to kill windows (quit window). Better `bd` replacement
<!--SR:!2023-06-06,3,250-->

Delete current buffer::`<leader>bd` or `:bd`

Close all buffers except current one::`<leader>bD`

maximize buffer::`C-w \_`

maximize buffer width::`C-w |`

`C-w >` and `C-w <`:::Increase and decrease window width

`C-w +` and `C-w -`:::Increase and decrease window height
<!--SR:!2023-06-05,2,233!2023-06-06,2,228-->

Equal window::`C-w =`
<!--SR:!2023-06-05,2,230-->

Close other windows::`C-w o`

Swap windows::`C-w x`
<!--SR:!2023-06-06,2,213-->

Open current window in new tab::`C-w T`

jumps to the last window you used \*::`C-w C-p`

Create a new window and start editing an empty file in it::`:new` or `C-w n`

### Workspaces

Workspaces: Neovim doesn't have native workspace support like Emacs.
However, you can achieve similar functionality using tabs or different
instances of Neovim. Personally I use [[Tmux]] with sessionizer script
(bind to `Tmux prefix + f`).

### Sessions

`:h shada`::opens shada help, viminfo analog, store various settings

Save current session
?
`:mksession`, more info: `:h mksession`

Source file, which can be session
?
`:source` `file` or `:so` `file`

Save view
?
`:mkview [N]` - N is a view name (1-9).
This use `shada` file, which is a viminfo analog. Check `:h shada` for more info.

Load view
?
`:loadview [N]`, N is a view name (1-9)
<!--SR:!2023-06-06,1,208-->

### Netrw

Go up a directory::`-`

Go back to the previous directory in the history::`u`

Jump to the most recent directory saved on the "Bookmarks". To create a bookmark we use `mb`::`gb`

Open a preview window::`p`
<!--SR:!2023-06-07,2,228-->

Close the preview window::`<C-w>z`

Toggle hidden files::`gh`

Create a new file::`%`

Create a new directory::`d`

Rename a file::`R`

Delete a file::`D`

## Customization

`C-s`::save current buffer

`M-\`::toggle copilot

TODO: not working
`M-S-del`::delete current file, warning deleting without confirmation. TODO: use trash-cli
<!--SR:!2023-06-06,2,228-->

## Plugins

`SPC v p p`::open the packer config

`C-p`::open file in project (`Telescope find_files`)

`SPC SPC`::open file in project using `Telescope frecency` (recently used files). TODO: I'm not using this need review.

`<SPC>pv`::to open the file browser plugin in CWD

`:Explore`::open file browser (native) in CWD

## Commenting

TODO: need to review this (more examples)

comment line::`gcc`

comment motion::`gc[motion,a]`

### Markdown Snippets

`codeblock`::insert code block

`code`::insert inline code

`pyc`::insert python code block

`javac`::insert java code block

`clc`::insert c code block
<!--SR:!2023-06-05,2,230-->

`cppc`::insert CPP code block

`jsc`::insert JavaScript code block

`phpc`::insert PHP code block
<!--SR:!2023-06-05,2,233-->

`sqlc`::insert SQL code block

`tsc`::insert typescript code block

`rubyc`::insert ruby code block

`goc`::insert go code block
<!--SR:!2023-06-06,2,210-->

`rustc`::insert rust code block

`lua`::insert Lua code block
<!--SR:!2023-06-06,2,231-->

`shc`::insert bash code block
<!--SR:!2023-06-05,2,233-->

### Telekasten

TODO: need review

Find notes::`<leader>zf`

Search **in** notes::`<leader>zg`

Follow link::`<leader>zz`

Find weekly notes::`<leader>zw`

List weeks::`<leader>zW`
<!--SR:!2023-06-08,3,248-->

Create new note::`<leader>zn`

Create new note from template::`<leader>zN`
<!--SR:!2023-06-06,2,213-->

Yank note link::`<leader>zy`
<!--SR:!2023-06-07,2,228-->

Show calendar::`<leader>zc`

Full Calendar::`<leader>zC`

Paste link::`<leader>zi`

Paste image and link::`<leader>zI`

Toggle TODO (including visual)::`<leader>zt`

Show tags::`<leader>z#`

Show backlinks::`<leader>zb`

Find friends::`<leader>zF`

Preview image::`<leader>zp`
<!--SR:!2023-06-06,2,210-->

Browse media::`<leader>zm`

Rename note::`<leader>zr`

## Lua in neovim

`:lua =vim.lsp.buf_get_clients()`::list lsp clients

## Scripts

If you need markdown links, use ==`url_to_markdown.sh`== script. TODO: automate
this.
<!--SR:!2023-06-06,2,228-->


## Cheat sheet

![](Vim_Cheat_Sheet_for_Programmers.pdf)

## Resources

- [neovimcraft, plugins](https://neovimcraft.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [VimGolf - real Vim ninjas count every keystroke!](https://www.vimgolf.com/)
- [Vim Awesome](https://vimawesome.com/)
- [[research/Neil-Modern_Vim]]
- [[research/Neil-Practical_Vim]]
- [Interactive Vim tutorial](http://www.openvim.com/)
- [VimGolf](https://www.vimgolf.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [Neovim Discourse](https://neovim.discourse.group/categories)
- [.] 1/7 [Изучаем Vim - YouTube](https://www.youtube.com/playlist?list=PLcjongJGYetkY4RFSVftH43F91vgzqB7U)

- [ ] [How to Do 90% of What Plugins Do (With Just Vim) - YouTube](https://www.youtube.com/watch?v=XA2WjJbmmoM)
- [ ] [7 Habits For Effective Text Editing 2.0 - YouTube](https://www.youtube.com/watch?v=eX9m3g5J-XA)
- [ ] Current main goal: [[My_editing_workflow]]
- [ ] [Harpoon : Vim Conference 2021 - YouTube](https://youtu.be/Qnos8aApa9g)
- [ ] [Learning Vim and Vimscript](https://github.com/iggredible/Learn-Vim)
- [x] [How to Vim in 2023: Tips and Tricks - YouTube](https://www.youtube.com/watch?v=FrMRyXtiJkc)
- [x] [Setup nvim-lspconfig + nvim-cmp | Devlog](https://vonheikemen.github.io/devlog/tools/setup-nvim-lspconfig-plus-nvim-cmp/)
- [x] [@DebuggingInNe] Debugging In Neovim (ft BashBunni and TJ DeVries) - YouTube


- [ ] [Resolve Git Merge Conflicts with Neovim and Fugitive! - YouTube](https://www.youtube.com/watch?v=vpwJ7fqD1CE)
- [ ] [Vim Cheat Sheet](http://jrmiii.com/attachments/Vim.pdf)
- [ ] [How can you list the matches of Vim's search? - Stack Overflow](https://stackoverflow.com/questions/509690/how-can-you-list-the-matches-of-vims-search)
- [ ] [GitHub - tpope/vim-surround: surround.vim: Delete/change/add parentheses/quotes/XML-tags/much more with ease](https://github.com/tpope/vim-surround)
- [ ] [Debugging Javascript applications with Neovim](https://miguelcrespo.co/posts/debugging-javascript-applications-with-neovim/)
- [ ] [How to paste yanked text into the Vim command line - Stack Overflow](https://stackoverflow.com/questions/3997078/how-to-paste-yanked-text-into-the-vim-command-line)

- [ ] [GitHub - nvim-treesitter/nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)
- [ ] [Language of VIM/NEOVIM – allsyed's blog](https://allsyed.com/posts/language-of-vim-neovim/)
- [ ] [Debugging Neovim with Neovim and nvim-dap](https://zignar.net/2023/02/17/debugging-neovim-with-neovim-and-nvim-dap/)
  - [Neovim Plugin: nvim-dap - YouTube](https://www.youtube.com/watch?v=ga3Cas7vNCk)
  - [How to debug like a PRO using Neovim 🔥](https://miguelcrespo.co/how-to-debug-like-a-pro-using-neovim)
- [ ] [GitHub - mfussenegger/nvim-lint: An asynchronous linter plugin for Neovim complementary to the built-in Language Server Protocol support.](https://github.com/mfussenegger/nvim-lint)


- [ ] [vim - How do I yank all matching lines into one buffer? - Stack Overflow](https://stackoverflow.com/questions/1474966/how-do-i-yank-all-matching-lines-into-one-buffer)
- [ ] [GitHub - kosayoda/nvim-lightbulb: VSCode 💡 for neovim's built-in LSP.](https://github.com/kosayoda/nvim-lightbulb)

- [ ] [GitHub - ThePrimeagen/refactoring.nvim: The Refactoring library based off the Refactoring book by Martin Fowler](https://github.com/ThePrimeagen/refactoring.nvim)
- [ ] [GitHub - lsyncd/lsyncd: Lsyncd (Live Syncing Daemon) synchronizes local directories with remote targets](https://github.com/lsyncd/lsyncd)
- [-] [GitHub - chrishrb/gx.nvim: Implementation of gx without the need of netrw](https://github.com/chrishrb/gx.nvim), not useful for me
- [ ] [How can I make the Neovim terminal run the current file in Python? - Vi and Vim Stack Exchange](https://vi.stackexchange.com/questions/15431/how-can-i-make-the-neovim-terminal-run-the-current-file-in-python)
- [ ] [Using vimdiff as your git diff tool. - YouTube](https://www.youtube.com/watch?v=hb5RVnOda2o)
- [ ] [Nvim autocmd](https://www.reddit.com/r/neovim/comments/xhtr1p/nvim_autocmd_filetype_option/)
- [ ] [Using netrw](https://vonheikemen.github.io/devlog/tools/using-netrw-vim-builtin-file-explorer/)
- [ ] [How to switch from Pycharm to Vim? : r/vim](https://www.reddit.com/r/vim/comments/qdgnid/how_to_switch_from_pycharm_to_vim/)
- [ ] [GitHub - christoomey/vim-tmux-navigator: Seamless navigation between tmux panes and vim splits](https://github.com/christoomey/vim-tmux-navigator)
- [ ] [Using (neo)vim for C++ development](https://idie.ru/posts/vim-modern-cpp/)
- [ ] [Testing Your Code — The Hitchhiker's Guide to Python](https://docs.python-guide.org/writing/tests/)
- [ ] [GitHub - hari-rangarajan/CCTree: Vim CCTree plugin](https://github.com/hari-rangarajan/CCTree)
- [ ] [GitHub - chipsenkbeil/distant.nvim: 🚧 (Alpha stage software) Edit files, run programs, and work with LSP on a remote machine from the comfort of your local environment 🚧](https://github.com/chipsenkbeil/distant.nvim)
- [ ] [GitHub - Weissle/persistent-breakpoints.nvim: Neovim plugin for persistent breakpoints.](https://github.com/Weissle/persistent-breakpoints.nvim)
- [ ] [Does anyone actually use EasyMotion? : r/vim](https://www.reddit.com/r/vim/comments/1yfzg2/does_anyone_actually_use_easymotion/)


- [ ] [Magically format embedded languages in Neovim - YouTube](https://www.youtube.com/watch?v=v3o9YaHBM4Q)
- [ ] [Automatically Execute *Anything* in Nvim - YouTube](https://www.youtube.com/watch?v=9gUatBHuXE0)
- [ ] [Execute **anything** in neovim (now customizable) - YouTube](https://www.youtube.com/watch?v=HlfjpstqXwE)

TODO: emc review

## Installing Packages, using Telekasten as example

TODO: nixos based configuration

- `SPC f p` to open the config.
- To add a package, add the package to `.doom.d/package.el`
- Then close and `doom refresh`
- Then go to `.doom.d/config.el` to configure the package
- `def-package!` is a macro you can use to configure packages
  - `space h help` you can look up method man pages
  - `:init` is used for setting the package up
  - `:config` to set configuration after the package has been
    initialized
  - `:after` lets you set which package it should load after
- You can use `:after!` to configure packages that are already there

### Inline navigation

- `f` and then the letter you want to navigate to.
  - `,` will go backward
  - `;` will go forward after that "find"
- `t` to find and move cursor to the character before what you've searched.
- `v` puts you in vi mode. You can select text by with `v t some-char-you-navigate-to` or `v f some-char-you-navigate-to`
- `;` to jump to the next find
- `,` to jump to the previous one
- `s` to snipe

### Long distance navigation inside the file

- Evil-snipe lets you go to all the occuranses in your document
- `g s SPC` to use avy and going to a certain word in file.
- `t` is the same thing except for a character you want to jump to before the one you insert
- `s` to do a double character search
- Evil-snipe will remember your last search so `,` and `;` will navigate
- `F` or `T` to go backwards
- `g s SPC` and then select the letter that avy gives you to navigate to that spot
  - These letters are on your home row so they are easy to click
- `SPC h v` for variable, to set the avy variable to search all open
  windows
  - `avy-all-windows` lets you search in all windows open.
- You can remove a word with
  `g s SPC select-one-letter x select-the-removal-spot`
  - You can use `X` to stay in your original spot of search
- You can go `g s space select-one-letter i select-the-correction-spot`
  to correct the spelling of the search
  - Install ispell on your OS first
- You can `yank` a word from one place to another with
  `g s SPC select-one-letter y select-the-correction-spot-to-paste`
- Use `t` to "teleport" the word from one place to another
  `g s SPC select-one-letter t select-the-correction-spot-to-teleport`

## Multiple cursor in Emacs with Evil-multiedit

- Make selections and then edit those selections interactively
- `M d` will select the current word, and again will find another
  occurance
- `M D` will find the occurence upward
- You can use a visual selection to select multiple words.
- `R` will select all occurances
- `C-n` for next selection `C-p` for previous
- Exclude matches with `RET`
- You can make an edit and the changes will be reflected in all the
  selection



Multiple Cursors

    Multiple Cursors: Neovim also supports multiple cursors, although not natively.
        Plugins like vim-multiple-cursors or vim-visual-multi offer similar functionality, allowing you to select multiple instances of a word and edit them simultaneously.

# Special Thanks

- [Link to youtube video series -
  org-mode](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)

- [Three HUGE Mistakes New Emacs Users
  Make](https://www.youtube.com/watch?v=s0ed8Da3mjE)

- [notes by
  ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)

- [Manage your life in plain
  text](https://www.udemy.com/course/getting-yourself-organized-with-org-mode/learn/lecture/21946276#overview)
  (also exist
  [youtube](https://www.youtube.com/watch?v=sQS06Qjnkcc&list=PLVtKhBrRV_ZkPnBtt_TD1Cs9PJlU0IIdE)
  video series).

- https://docs.doomemacs.org/latest/ \*

- https://emacs-lsp.github.io/lsp-mode/page/main-features/ (LSP
  starting point) \*

- https://github.com/niyumard/Doom-Emacs-Cheat-Sheet \*

- https://raw.githubusercontent.com/hackjutsu/vim-cheatsheet/master/README.md

- https://raw.githubusercontent.com/LeCoupa/awesome-cheatsheets/master/tools/vim.txt

- https://thingsfittogether.com/wp-content/uploads/2021/03/Vim-Cheatsheet-2-Final-Draft.png

- https://github.com/rstacruz/cheatsheets/blob/master/vim.md

- https://imgur.com/gallery/YLInLlY

- https://emacs-lsp.github.io/lsp-mode/page/keybindings/

- https://resources.jetbrains.com/storage/products/pycharm/docs/PyCharm_ReferenceCard.pdf

- https://vimsheet.com/

- https://vim.fandom.com/

- https://vim.fandom.com/wiki/Best_Vim_Tips#Really_useful

- https://vimhelp.org/vim_faq.txt.html

- [Link to youtube video
  series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)

- http://vimcasts.org/

- https://vim.fandom.com

- https://www.vimgolf.com/

- https://www.emacswiki.org/emacs/SiteMap \*

- https://hungyi.net/

- https://www.emacswiki.org/emacs/PythonProgrammingInEmacs

- https://wikemacs.org/wiki/Python

# [TODO]

- Replace multiple spaces with one \`:%s/$^ *$\\@\<! \\/ /g\` This
  says \"find 2 or more spaces (\' \\\\\') that are NOT preceded
  by \'the start of the line followed by zero or more spaces\'\"

https://github.com/tpope/vim-surround/blob/master/doc/surround.txt

# [TODO]

# [TODO]

- org-make-toc

- download image from clipboard, save attach...

- make line headline

- quickly add sub-headline

- org-roam subnode find

- increment in emacs (org-shift... can handle this in org-mode)

- splitted text to autofill

- autoindent, based on previous line (as I remember exists specific
  plugin)

- https://www.reddit.com/r/emacs/comments/a3rajh/chrome_bookmarks_sync_to_org/

- https://noonker.github.io/posts/2020-04-22-elfeed/

\`C-r+0\` - in insert mode inserts the last yanked text, working in
command mode \`C-r+\"\` - in insert mode inserts clipboard, working in
command mode

\`gr\[motion\] grr\` replace with register (yanked) motion / line

\`\[s \]s\` - MoveStatementUp MoveStatementDown

M-x +snippets

bookmarks
https://www.gnu.org/software/emacs/manual/html_node/emacs/Bookmarks.html#:\~:text=Bookmarks%20are%20somewhat%20like%20registers,were%20reading%20in%20various%20files.

Goto Test FindUsages SelectIn GotoFile GotoClass FileStructurePopup
JumpToLastWindow \`~yp~ ~yl~\` QuickListPopupAction / Log \`~yd~ ~ya~\`
Compare.LastVersion / Annotate \`\[q \]q\` PreviousOccurence /
NextOccurence \`\[m \]m\` MethodUp / MethodDown \`\[c \]c\`
PrevChangeMarker / NextChangeMarker \`,c ,r\` - CompileDirty / Run \`,R
,b\` - RunAnything Debug \`,c ,d\` - RunClass / DebugClass \`,t ,T\` -
RerunTests / RerunFailedTests add char before link/after link wrap chars
into `xxx` make line list item hunspell dictonary with
Computer Science terms... all tabs to spaces (existi somewhere in github
configurations) search in hidden org-mode blocks elfeed read it later or
favorites find in org-roam files org-attch dir function

https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macro-Counter.html
generate row, column number-ranges

---

You might be looking for the bookmark feature. On vanilla emacs, C-x r m
will bookmark the current file, and C-x r b will let you choose from a
list of bookmarked files. It\'s amazingly useful

---

# Emacs & Evil Commands

```example
M-x Find Any Action (execute extended command)
M-` text-mode emulation of menubar *
C-c C-c run... *
C-g Quit popup/dialog or cancel operation *
C-[ Close popup or Escape key alternative (evil)
C-+ C-- Zoom plus Zoom minus
M-x for entering a command *
SPC q q Quit Emacs
SPC f p to open the config
SPC h v describe variable
SPC o t for opening vterm in a popup window
SPC o T for opening vterm in fullscreen
SPC t varius commands (toggle)
SPC t l toggle line numbers (useful on small screen)

C-SPC company autocomplete (insert mode)
C-S-SPC company autocomplete common (insert mode)

:jumps list jumps
:![command] exec command in active window (generated new shell output buffer)
```
# Emacs Build & Run

```example
SPC ; eval
SPC c e evaluate buffer or region
SPC c E evaluate & replace region
SPC c s Send to repl

SPC c lsp code actions
SPC c c compile
SPC c C recompile
SPC c d jump to defention *
SPC c D jump to referencesg *
SPC c f format buffer/region
SPC c i find implementations *
SPC c j jump to symbol in current workspace
SPC c J jump to symbol in any workspace
SPC c k jump to documentation

SPC c l = LSP formatting
SPC c l a LSP code actons (a - code actions, h - higlight symbol, l - lens)
SPC c l F LSP fodlers (a - add, b - unblacklist, r - remove)
SPC c l g LSP goto menu
SPC c l g d LSP goto declaration (alternative - gd)
SPC c l G LSP peek menu
SPC c l h LSP help menu
SPC c l r LSP refactor menu
SPC c l T LSP toggle menu
SPC c l w LSP workspaces menu

SPC c o Organize Imports
SPC c r LSP rename
SPC c t Find type defention
SPC c x List errors

unbinded
lsp-find-declaration
```

# Emacs debug (dap-mode)

You need configure a keys:
https://docs.doomemacs.org/latest/#/usage/keybindings

```example
SPC o d open debug chooser

SPC d s dap-debug
SPC d h dap-hydra (q - quit)
SPC d n dap-next
SPC d i dap-step-in
SPC d o dap-step-out
SPC d c dap-continue
SPC d r dap-debug-restart

SPC d r dap-debug-recent
SPC d l dap-debug-last

SPC e dap-eval
SPC r dap-eval-region
SPC s dap-eval-thing-at-point
SPC a dap-ui-expressions-add
SPC d dap-ui

SPC b dap-breakpoint-toggle
SPC c dap-breakpoint-condition
SPC h dap-breakpoint-hit-condition
SPC l dap-breakpoint-log-message
```

## Emacs clipboard

```example
SPC f y yank file path
SPC f Y yank file path from project
SPC i y insert text from kill-ring (clipboard)
SPC n y org export to clipboard
SPC n Y org export to clipboard as rich text
```

# Emacs Version Control (magit)

```example
SPC g g shows Magit status page, tab to expand/collapse headlines
SPC g magit menu
SPC g l g list gists

Aviable in magit status:
? list of available commands and help, q to close this help page

TAB expand headlines in the status page
s under "Unstaged changes” to stage a change
u undo a stage
c to commit, you can press q to quit the commit screen
b s branch and spinoff to create another branch, rewinding the commits you made to master
b b switch branches

t t to create a tag, default place is the commit you are currently selecting
V to select a change in a diff and x to discard that change (revert).
P to push and then =p= to your remote or =u= to a another remote

@ for forge, configure it with M-x forge-pull
@ c p to create a pull request with forge
 - select the base branch
 - then select the target branch
 - then provide a short description
 - C-c C-c to finish the pull request
 - now there will be a pull requests tab

C-x v vc menu
C-x v = vc diff

```

See also - https://magit.vc/manual/magit-refcard.pdf


# Additional Emacs Packages

## Org Mode

Sure, here are Neovim alternatives for the provided Emacs and Evil commands:
Emacs & Evil Commands

    SPC-u alternative to C-u: Neovim doesn't have a direct equivalent, as C-u is a specific Emacs prefix key. Neovim doesn't use prefixes like this in its default mappings.
    M-x Find Any Action (execute extended command): Neovim doesn't have an equivalent command as it doesn't have the same extensive command execution functionality out of the box. Neovim primarily relies on its modes and key combinations for functionalities.
    C-[ Close popup or Escape key alternative (evil): In Neovim, the Escape key serves a similar role to exit insert mode and return to normal mode, which is the equivalent of closing or canceling operations.
    SPC f p to open the config: In Neovim, you'd typically edit the init.vim or init.lua file directly, often found at ~/.config/nvim/.
    SPC h v describe variable: Neovim doesn't have a direct equivalent to describe a variable within the editor. You might need to refer to documentation or comments within the code.
    SPC o t for opening vterm in a popup window / SPC o T for opening vterm in fullscreen: Neovim has various terminal integration plugins like nvim-terminal-emulator that allow opening a terminal inside Neovim splits or tabs.

Emacs Build & Run

    SPC c e evaluate buffer or region: In Neovim, you might use a terminal within Neovim to execute commands related to your code or use specific plugins that offer evaluation of code snippets within the editor.
    SPC c d jump to definition / SPC c D jump to references: Neovim has LSP (Language Server Protocol) support, and jumping to definitions and references is often integrated through LSP plugins like nvim-lsp.
    SPC c l a LSP code actions: Similar LSP code actions can be triggered using LSP plugins like nvim-lspconfig.
    SPC c o Organize Imports: Organizing imports might depend on the language and associated plugin configurations within Neovim.

Emacs debug (dap-mode)

    Neovim has debugging support through plugins like nvim-dap, which provides similar debugging functionalities with different key bindings and configurations.
    Commands like SPC d s dap-debug could be replaced with corresponding nvim-dap commands configured in your Neovim setup.

Emacs Clipboard

    Neovim doesn't have direct alternatives for these Emacs clipboard commands. However, yanking and pasting operations can be performed using the standard Vim motions (y, p, P) within normal mode.

Emacs Version Control (magit)

    SPC g g shows Magit status page: Neovim doesn't have a built-in version control system like Magit. Git operations are typically performed via the terminal within Neovim, or through plugins like fugitive.vim.
    @ c p to create a pull request with forge: Creating pull requests or interacting with Git forges like GitHub is usually done through the browser or dedicated Git client tools.

Additional Emacs Packages

    Org Mode: Neovim doesn't have a direct equivalent to Org Mode, which is a comprehensive tool in Emacs for organizing notes, tasks, and documents. Neovim users might employ other Markdown-based note-taking plugins or task management systems for similar functionalities.

For Neovim, the functionalities and key mappings often rely on plugins and specific configurations tailored to the user's workflow and preferences.

### General

```example
TAB a section to fold a subtree (hide it)
S-TAB to cycle through folded states

C-c C-z to insert a note for a heading in org mode.
C-c C-c to insert a tag for a heading in org mode.

SPC m org menu
SPC X to capture
SPC m r r to refile

SPC m i org toggle item, convert to plain-text list or numbered list
SPC m t to change a status of a todo
SPC m o setting a property.
SPC m q add tag a headline
SPC m + org-ctrl-c-minus, insert separator in table or modify bullet state of line

C-S-hjkl org shift left,down,up,

S-left|S-right change the status of a todo as well (loop over statuses).

C-Return to create a headline of the same type
M-up lets you shift the position of the section
M-h|l promotes, demotes a headline to the next level
S-up|down will toggle the priority of tasks

SPC m x org toggle checkbox
SPC o a org agenda menu
 a - agenda, m - tag search, t - todo list
```

### Links, Hyperlinks and more

```example
SPC m l add a link menu
SPC m l l add a link to an org page, :: to specify a heading or a line number
SPC n l stores a link to a particular headline (available when you add a link)
```

Examples: You can paste [http](https://example.com) links as well You
can \"link\" some text with specific code `SPC m l l` elisp:
[(+ 2 2)](elisp:(+ 2 2)), when you click the link, emacs will evaluate
the expression Show [My Agenda](elisp:org-agenda) [List Files](shell:ls)
in directory

Defining custom Link Types - [Whatch the video about custom
links](https://youtube.com/watch?v=Febe4lUK5G4)

### Custom

```example
C-u C-c C-l in an org-buffer insert svg, png images directly from cliboard, save with human-readable name.
```

### [Org Roam](https://orgroam.com)

These keybinding only work after installing org-roam. To install org
roam edit your \`init.el\` file and add \`(org +roam2)\` in its
designated place. Watch https://www.youtube.com/watch?v=AyhPmypHDEw to
understand what org-roam is.

```example
SPC n r f Find an existing node or create a new one.
SPC n r i Insert a link to another node.
SPC n r r Toggle backlinks pane
SPC m m o t Add a roam tag.
SPC m m o a Add a roam alias.
```

### Babel

```example
SPC m ' edit inside the babel in another buffer.
SPC m k org babel remove results
```

1. Python code with mathplotlib graph

```
import matplotlib
import matplotlib.pyplot as plt
fig=plt.figure(figsize=(3,2))
plt.plot([1,3,2])
fig.tight_layout()

fname = 'images/myfig.svg'
plt.savefig(fname)
fname # return this to org-mode
```

2. ob-spice

```
*Virtual Ground Test: opamp gain = 1000
vin in 0 dc 0V sin(0 0.1 100Hz)
r1 in inn 10k
r2 in inn 10k
EOpamp out 0 0 inn 1000
.tran 0.1ms 0.05s
.print tran v(in)
.meas tran vtest find v(in) at=0.04e-3
.end
.control
run
set gnuplot_terminal=png
gnuplot images/spice.png v(in) v(out) v(inn)
.endc
```
## [TODO]

## Evil Lion

## [TODO]

- You can remove a word with \`g s SPC select-one-letter x
  select-the-removal-spot\`
- You can use \`X\` to stay in your original spot of search
- You can go \`g s space select-one-letter i
  select-the-correction-spot\` to correct the spelling of the search
- Install ispell on your OS first
- You can \`yank\` a word from one place to another with \`g s SPC
  select-one-letter y select-the-correction-spot-to-paste\`
- Use \`t\` to \"teleport\" the word from one place to another \`g s
  SPC select-one-letter t select-the-correction-spot-to-teleport\`

## Notmuch

```example
SPC o m open notmuch

# notmuch workspace
SPC m c compose email
SPC m d mark as deleted
SPC m s mark as spam
SPC m u notmuch update
q quick
```

## Elfeed

## Abbrev-mode

## Ropemacs

## tree-sitter

## TRAMP

## ReBuilder

---
# Special Thanks

- [Link to youtube video series -
  org-mode](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)

- [Three HUGE Mistakes New Emacs Users
  Make](https://www.youtube.com/watch?v=s0ed8Da3mjE)

- [notes by
  ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)

- [Manage your life in plain
  text](https://www.udemy.com/course/getting-yourself-organized-with-org-mode/learn/lecture/21946276#overview)
  (also exist
  [youtube](https://www.youtube.com/watch?v=sQS06Qjnkcc&list=PLVtKhBrRV_ZkPnBtt_TD1Cs9PJlU0IIdE)
  video series).

- https://docs.doomemacs.org/latest/ \*

- https://emacs-lsp.github.io/lsp-mode/page/main-features/ (LSP
  starting point) \*

- https://github.com/niyumard/Doom-Emacs-Cheat-Sheet \*

- https://raw.githubusercontent.com/hackjutsu/vim-cheatsheet/master/README.md

- https://raw.githubusercontent.com/LeCoupa/awesome-cheatsheets/master/tools/vim.txt

- https://thingsfittogether.com/wp-content/uploads/2021/03/Vim-Cheatsheet-2-Final-Draft.png

- https://github.com/rstacruz/cheatsheets/blob/master/vim.md

- https://imgur.com/gallery/YLInLlY

- https://emacs-lsp.github.io/lsp-mode/page/keybindings/

- https://resources.jetbrains.com/storage/products/pycharm/docs/PyCharm_ReferenceCard.pdf

- https://vimsheet.com/

- https://vim.fandom.com/

- https://vim.fandom.com/wiki/Best_Vim_Tips#Really_useful

- https://vimhelp.org/vim_faq.txt.html

- [Link to youtube video
  series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)

- http://vimcasts.org/

- https://vim.fandom.com

- https://www.vimgolf.com/

- https://www.emacswiki.org/emacs/SiteMap \*

- https://hungyi.net/

- https://www.emacswiki.org/emacs/PythonProgrammingInEmacs

- https://wikemacs.org/wiki/Python

# [TODO]

- Replace multiple spaces with one \`:%s/$^ *$\\@\<! \\/ /g\` This
  says \"find 2 or more spaces (\' \\\\\') that are NOT preceded
  by \'the start of the line followed by zero or more spaces\'\"

https://github.com/tpope/vim-surround/blob/master/doc/surround.txt

# [TODO]

# [TODO]

- org-make-toc

- download image from clipboard, save attach...

- make line headline

- quickly add sub-headline

- org-roam subnode find

- increment in emacs (org-shift... can handle this in org-mode)

- splitted text to autofill

- autoindent, based on previous line (as I remember exists specific
  plugin)

- https://www.reddit.com/r/emacs/comments/a3rajh/chrome_bookmarks_sync_to_org/

- https://noonker.github.io/posts/2020-04-22-elfeed/

\`C-r+0\` - in insert mode inserts the last yanked text, working in
command mode \`C-r+\"\` - in insert mode inserts clipboard, working in
command mode

\`gr\[motion\] grr\` replace with register (yanked) motion / line

\`\[s \]s\` - MoveStatementUp MoveStatementDown

M-x +snippets

bookmarks
https://www.gnu.org/software/emacs/manual/html_node/emacs/Bookmarks.html#:\~:text=Bookmarks%20are%20somewhat%20like%20registers,were%20reading%20in%20various%20files.

Goto Test FindUsages SelectIn GotoFile GotoClass FileStructurePopup
JumpToLastWindow \`~yp~ ~yl~\` QuickListPopupAction / Log \`~yd~ ~ya~\`
Compare.LastVersion / Annotate \`\[q \]q\` PreviousOccurence /
NextOccurence \`\[m \]m\` MethodUp / MethodDown \`\[c \]c\`
PrevChangeMarker / NextChangeMarker \`,c ,r\` - CompileDirty / Run \`,R
,b\` - RunAnything Debug \`,c ,d\` - RunClass / DebugClass \`,t ,T\` -
RerunTests / RerunFailedTests add char before link/after link wrap chars
into `xxx` make line list item hunspell dictonary with
Computer Science terms... all tabs to spaces (existi somewhere in github
configurations) search in hidden org-mode blocks elfeed read it later or
favorites find in org-roam files org-attch dir function

https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macro-Counter.html
generate row, column number-ranges

## Org Mode

### Basics

- Org mode gives you structure to your document
- `*` for a h1 `**` for an h2 and so on
- You can `TAB` a section to fold a subtree (hide it)
- You can use `SHIFT TAB` to cycle through folded states
- `C-return` to create a headline of the same type
- `M arrow up` lets you shift the position of the section
- `M h` promotes a headline to the next level
- `M l` demotes
- You can create lists
  1.  onw
  2.  2
  3.  wooo
  4.  3

### Links, Hyperlinks and more

- `SPC m l` to add a link to an org page
- You can add `::` to specify a heading or a line number
- You can paste http links as well

### Defining custoom Link Types

- [Whatch the video about custom links](https://youtube.com/watch?v=Febe4lUK5G4)

### Linking to words &amp; Bookmarks

- `SPC n l` stores a link to a particular headline

### Code Snippets &amp; Babel

- `SPC i s` for inserting code snippets

  - Example:

    ```emacs-lisp
    (+ 2 3 4 5)
    ```

- `C-c C-c` to execute the code.
- `SPC m '` to edit inside the babel in another buffer.
- Results will show up in a `##+RESULTS` header
- This feature is called Babel
- One snippet can consume the output of another snippet
- You can create your own snippets in the following directory: `~/.doom.d/snippets/`

### Task Management

- Create a task by prefixing any heading with `TODO`
- `DONE` means the task is done
- You can create your custom key words by changing this variable: `org-todo-keywords`

  - remember you can get to your variables through `SPC h v` (M-x counsel-describe-variable)
  - These values are already set in Doom:

    ```text
    ((sequence "TODO(t)" "PROJ(p)" "STRT(s)" "WAIT(w)" "HOLD(h)" "|" "DONE(d)" "KILL(k)")
    (sequence "[ ](T)" "[-](S)" "[?](W)" "|" "[X](D)"))
    ```

- `SPC m t` to change a status of a todo
- `SHIFT left` and `SHIFT right` can be used to change the status of a todo as well.
- If you finish a task with a command, org mode will add a date that you "closed" the task.
- `SPC o a t` to open the agenda -&gt; todo list
- `q` to quit
- `org-agenda-files` is a variable you can set to filter which files agenda searches for todos in.

#### Priorities for Tasks

- `SHIFT up` and `SHIFT down` will toggle the priority of tasks
- `org-fancy-priorities` gives you fancy looking priorities

#### Marking Tasks with Tags

- Tags can be attached to any headlines
- `SPC m q` to tag a headline
- Example:
  - TODO play more games :fun:
- Tags are hierarchical so nested headings will be tagged with the
  parent header tag
- `org-tag-sparce-tree` will search for headings that only have a specific
  tag

#### Setting a poperty for a task/headline

- `SPC m o` is used for setting a property.

<!--list-separator-->

- Marking Headlines with Categories

  - You can use [categories](https://orgmode.org/manual/Categories.html) to change the label in agenda view.

<!--list-separator-->

- Org-Habits

  - If you want to [keep track of your habits](https://orgmode.org/manual/Tracking-your-habits.html) using org mode, you can set the `STYLE` property to habit.
    - If you want to set a category (for chani

### Lists

- Two types of lists, ordered and unordered lists
  - `SHIFT right` and `SHIFT left` can be used to change the type of lists.
- You can also change an unorded list by changing the first item to 1. and then typing `C-c C-c` and vice verca.

### Checkboxes

- [ ] This is still todo
- [-] This is in progress
- [x] This is a done task

#### You can see how many are done with a "cookie" <code>[1/2]</code>

- [-] Task 1
- [x] Task 2
- You can do this by adding <code>[/]</code> to the heading and pressing `C-c C-c`
- You can't assign a tag or a priority

## Magit

- Magit is enabled by default in Doom Emacs's init.el
- `SPC g g` shows Magit status page
  - Most commands are done from the status page
  - Use tab to expand headlines in the status page
- `?` in Magit's status page for a nice list of available commands and help, `q` to close this help page
- Open diff view for a file with `TAB`
- Press `s` under "Unstaged changes" to stage a change
  - `u` to undo a change
  - `c` to commit
- `b s` for branch and spinoff to create another branch, rewinding the
  commits you made to master
- `b b` to switch branches

### Git Commit Flow in More Detail

- `t t` to create a tag, default place is the commit you are currently
  selecting
- `V` to select a change in a diff and `x` to discard that change.
- `s` to stage
- `c` to commit, you can `q` to quit the commit screen
- `P` to push and then `p` to your remote or `u` to a another remote

### Magit with Forge for Issuing Pull Requests - Emacs

- Forge is installed in emacs doom
- `@` for forge
- Set up forge with `M x forge-pull`
  - the first time you will get a token from github
- `@ c p` to create a pull request with forge
  - select the base branch
  - then select the target branch
  - then provide a short description
  - `C-c C-c` to finish the pull request
- Now there will be a `pull requests` tab

## Terminal

- Set up vterm in your init.el file.
- `SPC o T` for opening vterm
- `SPC o t` for opening vterm in a popup window

## File Tree

- Set up neotree or treemacs in your init.el file.
- `SPC o p` for opening neotree or treemacs

## Others

- `C-c C-z` to insert a note for a heading in org mode.

<!--listend-->

- `C-c C-c` to insert a tag for a heading in org mode.

## Capturing

- `SPC X` to capture (the new thing gets caputured to a single file but that's fine since we can easily refile it.)
- `SPC m r r` to refile

## Org Roam

These keybinding only work after installing org-roam. To install org roam edit your `init.el` file and add `(org +roam2)` in its designated place. Watch [this video](https://www.youtube.com/watch?v=AyhPmypHDEw) to understand what org-roam is.

- `SPC n r f` Find an existing node or create a new one.
- `SPC n r i` Insert a link to another node.
- `SPC n r r` Toggle backlinks pane
- `SPC m m o t` Add a roam tag.
- `SPC m m o a` Add a roam alias.
## Sources

- [Link to youtube video series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)
- [This org file is mostly from the notes taken from the series above by ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)
- [Three HUGE Mistakes New Emacs Users Make](https://www.youtube.com/watch?v=s0ed8Da3mjE) (they are included in the tips above)

## What to learn <code>[0/2]</code>

### Dired

## Base Emacs keybindings, useful in `M-x` extend command menu, mini buffers, etc

jump to mark `SPC s r`
---

scroll Down `C-n` or `C-j`
scroll Up `C-p` or `C-k`
scroll Left `C-b`
scroll Right `C-f`

scroll to top `M-<`
scroll to bottom `M->`
beginning of line `C-a`
end of line `C-e`

kill next char `C-d`
kill word \* `C-w`
kill whole line \* `C-S-BSPC`
kill to end of sentence (kill-sentence) `M-k`
Delete spaces and tabs around point `M-\`

History (also work in evil command input) \* `C-s`
Go to previous group (like page down) `C-S-k`
Go to next group (like page up) `C-S-j`
Open an embark-act menu to chose a useful action `C-;`, `SPC a`

---
## Emacs files

---

for saving the current file \[customized command\] `C-s`

open project sidebar `SPC o p`
find file in project sidebar (locate) \* `SPC o P`

to open a project (also FAST switch to project) \* `SPC p p`
to open a file in a project `SPC SPC`

search or create new file \* `SPC . [file]`
find file from here `SPC f F`
to delete this file `SPC f D`
recently visited files `SPC f r`
rename file `SPC f R`
Save file \* `C-s`
save file as `SPC f S`
recently visited files in a project `SPC p r`
find file in other project `SPC p f`
locate file `SPC f l`
projectile discover commands `M-x projectile-disco*`

---

### Treemacs

---

Project Keybinds `C-c C-p`
Collapse project at point. `TAB`
Collapse all projects. `S-TAB`
Remove project at point from the workspace `C-c C-p r`
Select a new project to add to the workspace `C-c C-p a`
Collapse menu `C-c C-p c`
Collapse project `C-c C-p c c`

Workspaces Keybinds `C-c C-w`

Open current file or tag in vertical split `ov`
Open current file or tag in horizontal split `oh`
Open current item `RET`
Open current file or tag and close treemacs (no split) `oc`
Open current file or tag, using ace-window `oaa`
Open current file or tag in horizontal split (ace-window) `oah`
Open current file or tag in vertical split, (ace-window) `oav`
Open current file or tag in most recent window `or`
Open current file externally `ox`

Toggle the hiding and displaying of dotfiles `th`
Toggle the hiding and displaying gitignored files `ti`
Toggle whether the treemacs window should have a fixed width. `tw`
Toggle treemacs-follow-mode. `tf`
Toggle treemacs-filewatch-mode. `ta`
Toggle treemacs-fringe-indicator-mode. `tv`
Toggle treemacs-git-commit-diff-mode. `td`

Copy the absolute path of the node at point. `ya`
Copy the path of the node at point relative to the project root. `yr`
Copy the absolute path of the project root for the node at point. `yp`
Copy the file at point. `yf`

Hydra to show you treemacs' most commonly used keybindings `?`
Hydra to show you treemacs' rarely used, advanced keybindings `C-?`

Go to the next same-level neighbour of the current node. `M-j`
Go to the previous same-level neighbour of the current node. `M-k`
Go to parent of node at point, if possible. `u`
Switch positions of project at point and the one above it. `<M-Up>`
Switch positions of project at point and the one below it. `<M-Down>`

page up `C-b`
page down `C-f`
back up 1/2 screen `C-u`
page down 1/2 screen `C-d`

Set a new value for the width of the treemacs window. `w`
Decrease the width of the treemacs window. `<`
Increase the width of the treemacs window. `>`
Refresh the project at point. \* `r`

new file `cf`
new dir `cd`

Delete node at point. \* `d`
Rename node at point. `R`
Create a file `cf`
Create a directory. `cd`

Hide the treemacs window. `q`
Delete the treemacs buffer. `Q`
Peek at the files at point without fully opening them (peek mode). `P`

Copy the absolute path of the node at point `ya`
Copy the relative to the project root. `yr`
Copy the absolute path of the project root at point. `yp`
Copy the file at point. `yf`
Move the file at point. `m`

Set a new value for treemacs-sorting. `s`
Bookmark the currently selected files's, dir's or tag's location. `b`
Run the action defined in treemacs-COLLAPSE-actions-config (usually close). `M-h`
Run the action defined in treemacs-RET-actions-config (usually open content). `M-l`

Move treemacs' root one level upward, into the directory at point. `M-H`
Move treemacs' root one level downwards, into the directory at point. `M-L`

Collapse the parent of the node at point. `H`
Run an asynchronous shell command on the current node. `\!`
Run an asynchronous shell command in the root of the current project. `M-!`
Close all directories matching any of treemacs-litter-directories. `C`
Adjust the width of the treemacs window to that of the longsest line. `=`
Toggle between normal and extra wide display for the treemacs window. `W`

---
---

Dired (directory), alternative is C-x d or SPC . `SPC f d`
going one folder back `-`
creating a new directory `+`
mark the files for deletion, press x to delete. `d`
change permissions `M`
sort by modes. `o`
change the owner. `O`
mark files or directories. `m`
unmark files or directories `u`
unmark all `U`
invert the selection, to switch between files and directories `t`
copy `C`
move (and rename) `R`
simple view `(`
to invoke mark dialog `\*`
to select all directories `\* /`
to select all files `\* ?`
copy to another window `C`
move to another window `R`
to edit file/dir name `i`
### Buffers

---

switch to another buffer (alternative is SPC b b) `SPC ,`
switch to all buffers (alternative is SPC b B) `SPC <`
pop up scratch buffer (alternative is SPC b x) `SPC x`
pop up scratch buffer (alternative is SPC b X) `SPC X`
to save and name it `SPC b s`
kill buffer (^w^ alternative) `SPC b k`
kill all buffer (^+w^ alternative) `SPC b K`
list all buffers `SPC b i`
go to next buffer (alternative is \]b) `SPC b n`
go to previous buffer (alternative is \[b) `SPC b p`
delete a buffer (close a file) `SPC b d`
last buffer `SPC b l`
maximize buffer `SPC w m`
maximize vertically `SPC w m v`
maximize horizontally `SPC w m s`
## Emacs windows

You can use vim motion keys to navigate between open windows, kill
windows, resize windows for example SPC w H moves the window to the
left.

### Workspaces

```
 ------------------------------------- ---------------------------------------------
 create a new workspace `C-t`
 Switch to workspace `SPC TAB .`
 new workspace `SPC TAB n`
 new named workspace `SPC TAB N`
 Previous workspace `SPC TAB [`
 Next workspace `SPC TAB ]`
 Previous workspace as alternative `[w`
 Next workspace as alternative `]w`
 Remove workspace `SPC TAB d`
 Restore last session `SPC TAB R`
 Switch to workspace 1 `M-1`
 Switch to workspace 2 and so forth. `M-2`
 go to N tab `SPC Tab [num]`
 Move Tab Forward/Backward `M-x workspace/swap-left[right]`
 ------------------------------------- ---------------------------------------------
```
## Emacs editing text

```example
C-M-o Split lines (join by J)
SPC i s Insert snippet *
SPC i e|U Insert Emoji, Unicode symbol *
SPC i f|F Current filename, path
SPC i p Evil ex path (insert output of $PATH for example)
SPC i r Insert from evil register
SPC i y Insert from clipboard
```
- [ ] [Org Roam](https://orgroam.com)
- [ ] abbrev-mode

## Emacs files

---

for saving the current file \[customized command\] `C-s`

open project sidebar `SPC o p`
find file in project sidebar (locate) \* `SPC o P`

to open a project (also FAST switch to project) \* `SPC p p`
to open a file in a project `SPC SPC`

search or create new file \* `SPC . [file]`
find file from here `SPC f F`
to delete this file `SPC f D`
recently visited files `SPC f r`
rename file `SPC f R`
Save file \* `C-s`
save file as `SPC f S`
recently visited files in a project `SPC p r`
find file in other project `SPC p f`
locate file `SPC f l`
projectile discover commands `M-x projectile-disco*`

## Other notes

### Treemacs

---

Project Keybinds `C-c C-p`
Collapse project at point. `TAB`
Collapse all projects. `S-TAB`
Remove project at point from the workspace `C-c C-p r`
Select a new project to add to the workspace `C-c C-p a`
Collapse menu `C-c C-p c`
Collapse project `C-c C-p c c`

Workspaces Keybinds `C-c C-w`

Open current file or tag in vertical split `ov`
Open current file or tag in horizontal split `oh`
Open current item `RET`
Open current file or tag and close treemacs (no split) `oc`
Open current file or tag, using ace-window `oaa`
Open current file or tag in horizontal split (ace-window) `oah`
Open current file or tag in vertical split, (ace-window) `oav`
Open current file or tag in most recent window `or`
Open current file externally `ox`

Toggle the hiding and displaying of dotfiles `th`
Toggle the hiding and displaying gitignored files `ti`
Toggle whether the treemacs window should have a fixed width. `tw`
Toggle treemacs-follow-mode. `tf`
Toggle treemacs-filewatch-mode. `ta`
Toggle treemacs-fringe-indicator-mode. `tv`
Toggle treemacs-git-commit-diff-mode. `td`

Copy the absolute path of the node at point. `ya`
Copy the path of the node at point relative to the project root. `yr`
Copy the absolute path of the project root for the node at point. `yp`
Copy the file at point. `yf`

Hydra to show you treemacs' most commonly used keybindings `?`
Hydra to show you treemacs' rarely used, advanced keybindings `C-?`

Go to the next same-level neighbour of the current node. `M-j`
Go to the previous same-level neighbour of the current node. `M-k`
Go to parent of node at point, if possible. `u`
Switch positions of project at point and the one above it. `<M-Up>`
Switch positions of project at point and the one below it. `<M-Down>`

page up `C-b`
page down `C-f`
back up 1/2 screen `C-u`
page down 1/2 screen `C-d`

Set a new value for the width of the treemacs window. `w`
Decrease the width of the treemacs window. `<`
Increase the width of the treemacs window. `>`
Refresh the project at point. \* `r`

new file `cf`
new dir `cd`

Delete node at point. \* `d`
Rename node at point. `R`
Create a file `cf`
Create a directory. `cd`

Hide the treemacs window. `q`
Delete the treemacs buffer. `Q`
Peek at the files at point without fully opening them (peek mode). `P`

Copy the absolute path of the node at point `ya`
Copy the relative to the project root. `yr`
Copy the absolute path of the project root at point. `yp`
Copy the file at point. `yf`
Move the file at point. `m`

Set a new value for treemacs-sorting. `s`
Bookmark the currently selected files's, dir's or tag's location. `b`
Run the action defined in treemacs-COLLAPSE-actions-config (usually close). `M-h`
Run the action defined in treemacs-RET-actions-config (usually open content). `M-l`

Move treemacs' root one level upward, into the directory at point. `M-H`
Move treemacs' root one level downwards, into the directory at point. `M-L`

Collapse the parent of the node at point. `H`
Run an asynchronous shell command on the current node. `\!`
Run an asynchronous shell command in the root of the current project. `M-!`
Close all directories matching any of treemacs-litter-directories. `C`
Adjust the width of the treemacs window to that of the longsest line. `=`
Toggle between normal and extra wide display for the treemacs window. `W`


---

### Dired

---

Dired (directory), alternative is C-x d or SPC . `SPC f d`
going one folder back `-`
creating a new directory `+`
mark the files for deletion, press x to delete. `d`
change permissions `M`
sort by modes. `o`
change the owner. `O`
mark files or directories. `m`
unmark files or directories `u`
unmark all `U`
invert the selection, to switch between files and directories `t`
copy `C`
move (and rename) `R`
simple view `(`
to invoke mark dialog `\*`
to select all directories `\* /`
to select all files `\* ?`
copy to another window `C`
move to another window `R`
to edit file/dir name `i`

---

### Buffers

---

switch to another buffer (alternative is SPC b b) `SPC ,`
switch to all buffers (alternative is SPC b B) `SPC <`
pop up scratch buffer (alternative is SPC b x) `SPC x`
pop up scratch buffer (alternative is SPC b X) `SPC X`
to save and name it `SPC b s`
kill buffer (^w^ alternative) `SPC b k`
kill all buffer (^+w^ alternative) `SPC b K`
list all buffers `SPC b i`
go to next buffer (alternative is \]b) `SPC b n`
go to previous buffer (alternative is \[b) `SPC b p`
delete a buffer (close a file) `SPC b d`
last buffer `SPC b l`
maximize buffer `SPC w m`
maximize vertically `SPC w m v`
maximize horizontally `SPC w m s`
---

# Emacs Build & Run

```example
SPC ; eval
SPC c e evaluate buffer or region
SPC c E evaluate & replace region
SPC c s Send to repl

SPC c lsp code actions
SPC c c compile
SPC c C recompile
SPC c d jump to defention *
SPC c D jump to referencesg *
SPC c f format buffer/region
SPC c i find implementations *
SPC c j jump to symbol in current workspace
SPC c J jump to symbol in any workspace
SPC c k jump to documentation

SPC c l = LSP formatting
SPC c l a LSP code actons (a - code actions, h - higlight symbol, l - lens)
SPC c l F LSP fodlers (a - add, b - unblacklist, r - remove)
SPC c l g LSP goto menu
SPC c l g d LSP goto declaration (alternative - gd)
SPC c l G LSP peek menu
SPC c l h LSP help menu
SPC c l r LSP refactor menu
SPC c l T LSP toggle menu
SPC c l w LSP workspaces menu

SPC c o Organize Imports
SPC c r LSP rename
SPC c t Find type defention
SPC c x List errors

unbinded
lsp-find-declaration
```

# Emacs debug (dap-mode)

You need configure a keys:
https://docs.doomemacs.org/latest/#/usage/keybindings

```example
SPC o d open debug chooser

SPC d s dap-debug
SPC d h dap-hydra (q - quit)
SPC d n dap-next
SPC d i dap-step-in
SPC d o dap-step-out
SPC d c dap-continue
SPC d r dap-debug-restart

SPC d r dap-debug-recent
SPC d l dap-debug-last

SPC e dap-eval
SPC r dap-eval-region
SPC s dap-eval-thing-at-point
SPC a dap-ui-expressions-add
SPC d dap-ui

SPC b dap-breakpoint-toggle
SPC c dap-breakpoint-condition
SPC h dap-breakpoint-hit-condition
SPC l dap-breakpoint-log-message
```
## Emacs search & replace

```example
M-% query replace
C-M-% query replace regex

SPC s b|B search buffer, all buffers (go to line)
SPC s s|S search buffer, search for thing at cursor positon *
SPC s d|D search in current directory, other directory
SPC s f locate file
SPC s i jump to symbol *
SPC s j jump list
SPC s l|L jump to visible links, all links
SPC s r jump to mark

SPC s p|P search in project, other project *

Project-wide Search & Replace (vertico, details https://hungyi.net/posts/doom-emacs-search-replace-project/)
SPC s p foo C-; E C-c C-p :%s/foo/bar/g RET Z Z

SPC ? commands help *
SPC h b show help bindings help menu *
SPC s e search in .emacs.d
SPC s t|T dictonary, thesaurus
SPC s k|K lookup in local docsets, all docsets
SPC s o|O lookup online, online with prompt
C-c z Zeal Documentation
```
## Emacs editing text

```example
C-M-o Split lines (join by J)
SPC i s Insert snippet *
SPC i e|U Insert Emoji, Unicode symbol *
SPC i f|F Current filename, path
SPC i p Evil ex path (insert output of $PATH for example)
SPC i r Insert from evil register
SPC i y Insert from clipboard
```
## Emacs formatting

```example
SPC c f format buffer/region
SPC c w Delete trailing whitespace
SPC c W Delete trailing new lines
SPC c l = LSP formatting
M-s h Higlight menu
```

## Emacs refactor and clean up

```example
C-, flyspell next error
SPC t s toggle flyspell
```

# Emacs & Evil Commands

```example
SPC-u alternative to C-u
M-x Find Any Action (execute extended command)
M-` text-mode emulation of menubar *
C-c C-c run... *
C-g Quit popup/dialog or cancel operation *
C-[ Close popup or Escape key alternative (evil)
C-+ C-- Zoom plus Zoom minus
M-x for entering a command *
SPC q q Quit Emacs
SPC f p to open the config
SPC h v describe variable
SPC o t for opening vterm in a popup window
SPC o T for opening vterm in fullscreen
SPC t varius commands (toggle)
SPC t l toggle line numbers (useful on small screen)

C-SPC company autocomplete (insert mode)
C-S-SPC company autocomplete common (insert mode)

:jumps list jumps
:![command] exec command in active window (generated new shell output buffer)
```

## Emacs clipboard

```example
SPC f y yank file path
SPC f Y yank file path from project
SPC i y insert text from kill-ring (clipboard)
SPC n y org export to clipboard
SPC n Y org export to clipboard as rich text
```

# Emacs Version Control (magit)

```example
SPC g g shows Magit status page, tab to expand/collapse headlines
SPC g magit menu
SPC g l g list gists

Aviable in magit status:
? list of available commands and help, q to close this help page

TAB expand headlines in the status page
s under "Unstaged changes” to stage a change
u undo a stage
c to commit, you can press q to quit the commit screen
b s branch and spinoff to create another branch, rewinding the commits you made to master
b b switch branches

t t to create a tag, default place is the commit you are currently selecting
V to select a change in a diff and x to discard that change (revert).
P to push and then =p= to your remote or =u= to a another remote

@ for forge, configure it with M-x forge-pull
@ c p to create a pull request with forge
 - select the base branch
 - then select the target branch
 - then provide a short description
 - C-c C-c to finish the pull request
 - now there will be a pull requests tab

C-x v vc menu
C-x v = vc diff

```

## Org Mode

### General

```example
TAB a section to fold a subtree (hide it)
S-TAB to cycle through folded states

C-c C-z to insert a note for a heading in org mode.
C-c C-c to insert a tag for a heading in org mode.

SPC m org menu
SPC X to capture
SPC m r r to refile

SPC m i org toggle item, convert to plain-text list or numbered list
SPC m t to change a status of a todo
SPC m o setting a property.
SPC m q add tag a headline
SPC m + org-ctrl-c-minus, insert separator in table or modify bullet state of line

C-S-hjkl org shift left,down,up,

S-left|S-right change the status of a todo as well (loop over statuses).

C-Return to create a headline of the same type
M-up lets you shift the position of the section
M-h|l promotes, demotes a headline to the next level
S-up|down will toggle the priority of tasks

SPC m x org toggle checkbox
SPC o a org agenda menu
 a - agenda, m - tag search, t - todo list
```

### Links, Hyperlinks and more

```example
SPC m l add a link menu
SPC m l l add a link to an org page, :: to specify a heading or a line number
SPC n l stores a link to a particular headline (available when you add a link)
```

Examples: You can paste [http](https://example.com) links as well You
can \"link\" some text with specific code `SPC m l l` elisp:
[(+ 2 2)](elisp:(+ 2 2)), when you click the link, emacs will evaluate
the expression Show [My Agenda](elisp:org-agenda) [List Files](shell:ls)
in directory

Defining custom Link Types - [Whatch the video about custom
links](https://youtube.com/watch?v=Febe4lUK5G4)

### Custom

```example
C-u C-c C-l in an org-buffer insert svg, png images directly from cliboard, save with human-readable name.
```

### [Org Roam](https://orgroam.com)

These keybinding only work after installing org-roam. To install org
roam edit your \`init.el\` file and add \`(org +roam2)\` in its
designated place. Watch https://www.youtube.com/watch?v=AyhPmypHDEw to
understand what org-roam is.

```example
SPC n r f Find an existing node or create a new one.
SPC n r i Insert a link to another node.
SPC n r r Toggle backlinks pane
SPC m m o t Add a roam tag.
SPC m m o a Add a roam alias.
```

### Babel

```example
SPC m ' edit inside the babel in another buffer.
SPC m k org babel remove results
```

1. Python code with mathplotlib graph

```
import matplotlib
import matplotlib.pyplot as plt
fig=plt.figure(figsize=(3,2))
plt.plot([1,3,2])
fig.tight_layout()

fname = 'images/myfig.svg'
plt.savefig(fname)
fname # return this to org-mode
```

2. ob-spice

```
*Virtual Ground Test: opamp gain = 1000
vin in 0 dc 0V sin(0 0.1 100Hz)
r1 in inn 10k
r2 in inn 10k
EOpamp out 0 0 inn 1000
.tran 0.1ms 0.05s
.print tran v(in)
.meas tran vtest find v(in) at=0.04e-3
.end
.control
run
set gnuplot_terminal=png
gnuplot images/spice.png v(in) v(out) v(inn)
.endc
```

## Notmuch

```example
SPC o m open notmuch

# notmuch workspace
SPC m c compose email
SPC m d mark as deleted
SPC m s mark as spam
SPC m u notmuch update
q quick
```

jump to mark `SPC s r`
## ToDo

- `SPC o T` to open the vterm in fullscreen
- `SPC o t` to open the vterm in a popup window
- `SPC f r` recently visited files
- `SPC f R` recently visited files in a project
- `M-x projectile-discover-projects-in-directory` to find projects
  within given folder using Projectile
- `M-x projectile-discover-projects-in-search-path` to find projects in
  the folder defined by the `projectile-project-search-path` variable
  using Projectile
## Emacs formatting

```example
SPC c f format buffer/region
SPC c w Delete trailing whitespace
SPC c W Delete trailing new lines
SPC c l = LSP formatting
M-s h Higlight menu
```
## Emacs refactor and clean up

```example
C-, flyspell next error
SPC t s toggle flyspell
```

## Emacs search & replace

```example
M-% query replace
C-M-% query replace regex

SPC s b|B search buffer, all buffers (go to line)
SPC s s|S search buffer, search for thing at cursor positon *
SPC s d|D search in current directory, other directory
SPC s f locate file
SPC s i jump to symbol *
SPC s j jump list
SPC s l|L jump to visible links, all links
SPC s r jump to mark

SPC s p|P search in project, other project *

Project-wide Search & Replace (vertico, details https://hungyi.net/posts/doom-emacs-search-replace-project/)
SPC s p foo C-; E C-c C-p :%s/foo/bar/g RET Z Z

SPC ? commands help *
SPC h b show help bindings help menu *
SPC s e search in .emacs.d
SPC s t|T dictonary, thesaurus
SPC s k|K lookup in local docsets, all docsets
SPC s o|O lookup online, online with prompt
C-c z Zeal Documentation
```

# MKDX

mkdx italic::<PREFIX>/
mkdx bold::<PREFIX>b
mkdx inline code::<PREFIX>`
mkdx strikethrough::<PREFIX>s
mkdx backticks::<PREFIX>`
mkdx autocomplet heading in link block::#
mkdx insert ` shortcut::<<Tab>
mkdx toggle checkbox forward::<PREFIX>-
mkdx toggle checkbox backward::<PREFIX>=
mkdx wrap text in link::<PREFIX>ln
mkdx increment header level::<PREFIX>[
mkdx decrement header level::<PREFIX>]
mkdx convert CSV to markdown table (toggle)::<PREFIX>,
mkdx toggle quote::<PREFIX>'


## What to learn <code>[0/2]</code>

- [ ] [Org Roam](https://orgroam.com)
- [ ] abbrev-mode

- `C-c C-z` to insert a note for a heading in org mode.
<!--listend-->
- `C-c C-c` to insert a tag for a heading in org mode.

## Capturing

- `SPC X` to capture (the new thing gets caputured to a single file but that's fine since we can easily refile it.)
- `SPC m r r` to refile

## Org Roam

These keybinding only work after installing org-roam. To install org roam edit
your `init.el` file and add `(org +roam2)` in its designated place. Watch [this
video](https://www.youtube.com/watch?v=AyhPmypHDEw) to understand what org-roam
is.

- `SPC n r f` Find an existing node or create a new one.
- `SPC n r i` Insert a link to another node.
- `SPC n r r` Toggle backlinks pane
- `SPC m m o t` Add a roam tag.
- `SPC m m o a` Add a roam alias.


## Org Mode

### Basics

- Org mode gives you structure to your document
- `*` for a h1 `**` for an h2 and so on
- You can `TAB` a section to fold a subtree (hide it)
- You can use `SHIFT TAB` to cycle through folded states
- `C-return` to create a headline of the same type
- `M arrow up` lets you shift the position of the section
- `M h` promotes a headline to the next level
- `M l` demotes
- You can create lists
  1.  onw
  2.  2
  3.  wooo
  4.  3

### Links, Hyperlinks and more

- `SPC m l` to add a link to an org page
- You can add `::` to specify a heading or a line number
- You can paste http links as well

### Defining custoom Link Types

- [Whatch the video about custom links](https://youtube.com/watch?v=Febe4lUK5G4)

### Linking to words &amp; Bookmarks

- `SPC n l` stores a link to a particular headline

### Code Snippets &amp; Babel

- `SPC i s` for inserting code snippets

  - Example:

    ```emacs-lisp
    (+ 2 3 4 5)
    ```

- `C-c C-c` to execute the code.
- `SPC m '` to edit inside the babel in another buffer.
- Results will show up in a `##+RESULTS` header
- This feature is called Babel
- One snippet can consume the output of another snippet
- You can create your own snippets in the following directory: `~/.doom.d/snippets/`

### Task Management

- Create a task by prefixing any heading with `TODO`
- `DONE` means the task is done
- You can create your custom key words by changing this variable: `org-todo-keywords`

  - remember you can get to your variables through `SPC h v` (M-x counsel-describe-variable)
  - These values are already set in Doom:

    ```text
    ((sequence "TODO(t)" "PROJ(p)" "STRT(s)" "WAIT(w)" "HOLD(h)" "|" "DONE(d)" "KILL(k)")
    (sequence "[ ](T)" "[-](S)" "[?](W)" "|" "[X](D)"))
    ```

- `SPC m t` to change a status of a todo
- `SHIFT left` and `SHIFT right` can be used to change the status of a todo as well.
- If you finish a task with a command, org mode will add a date that you "closed" the task.
- `SPC o a t` to open the agenda -&gt; todo list
- `q` to quit
- `org-agenda-files` is a variable you can set to filter which files agenda searches for todos in.

#### Priorities for Tasks

- `SHIFT up` and `SHIFT down` will toggle the priority of tasks
- `org-fancy-priorities` gives you fancy looking priorities

#### Marking Tasks with Tags

- Tags can be attached to any headlines
- `SPC m q` to tag a headline
- Example:
  - TODO play more games :fun:
- Tags are hierarchical so nested headings will be tagged with the
  parent header tag
- `org-tag-sparce-tree` will search for headings that only have a specific
  tag

#### Setting a poperty for a task/headline

- `SPC m o` is used for setting a property.

<!--list-separator-->

- Marking Headlines with Categories

  - You can use [categories](https://orgmode.org/manual/Categories.html) to change the label in agenda view.

<!--list-separator-->

- Org-Habits

  - If you want to [keep track of your habits](https://orgmode.org/manual/Tracking-your-habits.html) using org mode, you can set the `STYLE` property to habit.
    - If you want to set a category (for chani

### Lists

- Two types of lists, ordered and unordered lists
  - `SHIFT right` and `SHIFT left` can be used to change the type of lists.
- You can also change an unorded list by changing the first item to 1. and then typing `C-c C-c` and vice verca.

### Checkboxes

- [ ] This is still todo
- [-] This is in progress
- [x] This is a done task

#### You can see how many are done with a "cookie" <code>[1/2]</code>

- [-] Task 1
- [x] Task 2
- You can do this by adding <code>[/]</code> to the heading and pressing `C-c C-c`
- You can't assign a tag or a priority

## Magit

- Magit is enabled by default in Doom Emacs's init.el
- `SPC g g` shows Magit status page
  - Most commands are done from the status page
  - Use tab to expand headlines in the status page
- `?` in Magit's status page for a nice list of available commands and help, `q` to close this help page
- Open diff view for a file with `TAB`
- Press `s` under "Unstaged changes" to stage a change
  - `u` to undo a change
  - `c` to commit
- `b s` for branch and spinoff to create another branch, rewinding the
  commits you made to master
- `b b` to switch branches

### Git Commit Flow in More Detail

- `t t` to create a tag, default place is the commit you are currently
  selecting
- `V` to select a change in a diff and `x` to discard that change.
- `s` to stage
- `c` to commit, you can `q` to quit the commit screen
- `P` to push and then `p` to your remote or `u` to a another remote

### Magit with Forge for Issuing Pull Requests - Emacs

- Forge is installed in emacs doom
- `@` for forge
- Set up forge with `M x forge-pull`
  - the first time you will get a token from github
- `@ c p` to create a pull request with forge
  - select the base branch
  - then select the target branch
  - then provide a short description
  - `C-c C-c` to finish the pull request
- Now there will be a `pull requests` tab


## Projects with Projectile (tested)

- `SPC p p` to open a project
- `SPC SPC` to open a file in a project
- `SPC o p` to open the file explorer
- `SPC o T` to open the vterm in fullscreen
- `SPC o t` to open the vterm in a popup window
- `SPC f r` recently visited files
- `SPC f R` recently visited files in a project
- `M-x projectile-discover-projects-in-directory` to find projects
  within given folder using Projectile
- `M-x projectile-discover-projects-in-search-path` to find projects in
  the folder defined by the `projectile-project-search-path` variable
  using Projectile

