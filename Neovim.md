---
date: 2023-02-20
sr-due: 2024-02-18
sr-ease: 230
sr-interval: 277
tags:
- inbox
- vim
- software
---

# Neovim (text editor)

> Nvim is based on Vim by Bram Moolenaar.
>
> Nvim is emphatically a fork of Vim, not a clone: compatibility with Vim
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
- File management - netrw
- Code editing (highly customized setup)
- Code blocks running

## Basics

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
Source: https://stackoverflow.com/questions/3997078/how-to-paste-yanked-text-into-the-vim-command-line

How to paste system clipboard into the Vim command line?
?
I use `C-S-v`, it's working in my terminal. Or use `<C-r>"`.

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
`:buffers` - built-in command, `:Telescope buffers` - telescope command

Switch to buffer
?
`:b <buffer name>` or `:b <buffer number>`

### Windows

You can use vim motion keys to navigate between open windows, for example to navigate to left window?
?
`C-w h`

split open file::`:sp f`

vertical split open file::`:vsp f`
<!--SR:!2023-06-05,1,193-->

next/previous tab::`gt gT`

`C-w v`::window split vertically
<!--SR:!2023-06-06,2,213-->

`C-w s`::window split horizontal

`C-w C-w`::to switch windows
<!--SR:!2023-06-07,2,228-->

`C-w q`::to kill windows. Better `bd` replacement
<!--SR:!2023-06-06,3,250-->

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

`M-S-del`::delete current file, warning deleting without confirmation. TODO: use trash-cli
<!--SR:!2023-06-06,2,228-->

Right now I use this color-scheme
<https://raw.githubusercontent.com/navarasu/onedark.nvim/master/lua/onedark/highlights.lua>

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

`C-SPC`::switch project using `kitty sessionizer`
[script](file:///home/inom/.local/bin/kitty-sessionizer.sh)

## Resources

- [x] [@DebuggingInNe] Debugging In Neovim (ft BashBunni and TJ DeVries) - YouTube
- [Vim 01 - Основы - YouTube](https://www.youtube.com/watch?v=zNnsNtBF80g)
- [ ] http://jrmiii.com/attachments/Vim.pdf
- [ ] Current mail goal: [[My_editing_workflow]]
- [ ] https://stackoverflow.com/questions/509690/how-can-you-list-the-matches-of-vims-search
- [ ] https://github.com/tpope/vim-surround
- [[research/2018-Neil_Drew-Modern_Vim]]
- [[research/2015-Neil_Drew-Practical_Vim]]
- [Interactive Vim tutorial](http://www.openvim.com/)
- [VimGolf](https://www.vimgolf.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [Neovim Discourse](https://neovim.discourse.group/categories)
