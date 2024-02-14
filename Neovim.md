---
date: 2023-02-20
tags:
  - inbox
  - SR_vim
  - SR_poductivity
external:
  - https://neovim.io/
directory:
  - ~/Computer/software/nvim/
sr-due: 2024-01-26
sr-interval: 1
sr-ease: 130
---

TODO: import solutions from [[neovim-emacs-workflow]]
TODO: global cleanup and organize resources
TODO: keybindings in command mode using plugin

# Neovim (text editor)

> Neovim is based on Vim by Bram Moolenaar.
>
> Neovim is emphatically a fork of Vim, not a clone: compatibility with Vim
> (especially editor and Vimscript features) is maintained where possible.\
> — <cite>`:help nvim`</cite>

Hyperextensible Vim-based text editor. Your personal Editor Development
Environment.

I keep my learning resources and learning plan in
[[How_I_learn_neovim|this]] note.

## What I handle by Neovim

- Notes, Calendar, Tracking - [[Telekasten.nvim]] together with [[Obsidian]]
- File management - [[Netrw]] and [[Command-line_interface_CLI|CLI]]
- Code editing - (highly customized setup)
- Code blocks, projects running and debugging
- Video notes with timestamps using MPV's IPC integration

## Command line

Enable logs - `nvim -V10nvim.log`.

To start with different config use ==`$NVIM_APPNAME`== env variable. For
example, setting it to "neovim" before running Neovim will result in Neovim
looking for configuration files in `$XDG_CONFIG_HOME/neovim` instead of
`$XDG_CONFIG_HOME/nvim`.

## Useful commands

Hide line numbers::`:set nonu nornu` or `:set nonumber norelativenumber`.
Get variable value - `:set nonu?`.
Find keybinding by using `what-key`::`<leader>fk`, TODO: need to change, conflict with auto-format

## Basics

Up, Down, Left, Right::`k`,`j`,`h`,`l`, but prefer other navigation keys

Normal mode, for navigation and manipulation of text::`ESC` or `C-[` or `C-c`

Insert mode, for inserting new text.::`iIaAoO`

Visual, for navigation and manipulation of text selections::`v` or `V` or `C-v`
<!--SR:!2023-06-06,2,228-->

Command-line mode, for entering editor commands (Ex commands)::`:`

Replace mode, replace existing text by directly typing over it::`R`

Mode similar to visual, but with a more MS Windows-like behavior::select mode, `gh`, `gH`

Similar to the command-line mode but optimized for batch processing::ex-mode, `gQ`

Select something::`v[motion]`

Copy something::`y[register][num][motion]`

Copy something into system clipboard::`"<SPC>y[motion]`, I have own mapping - `<leader>y`

Delete something (can be used with black hole register)::`d[register][num][motion]`

Change something (can be used with black hole register)::`c[register][num][motion]`

`:`::command mode


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

## Search & replace

`/`::search mode

`?`::backward search mode

`//`::repeat last search

`/search\c`::case-insensitive search

`/search\C`::case-sensitive search

`set ignorecase`::case-insensitive search

`set smartcase`
?
Case-insensitive search, unless there is a capital letter in the search, but `ignorecase` needs to be on

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

Replace single quotes to double::`:s/\'\(.*\)\'/\"\1\"`

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
   motion that selects the next match of the last used search pattern. Of course,
   you can use `cgN` and `dgn` to delete, etc.
3. Find next `n/N` and repeat `.`

Find and Replace in Multiple Files using `argslist`
?
1. Initialize the `argslist` with `:args *.ext` from CWD.
2. Optionally add more files with `:argadd *.ext`. You can also use `**/*.ext`
   to search recursively.
3. Optionally remove some files with `:argdelete *.ext`, to delete all use `*`
4. Do search and replace: `:argdo %s/foo/bar/[g][e][c] | update`. `e` here
   prevents error messages when there is no match, `c` is for confirmation.
\
You can also use `:bufdo` to do the same thing in all open buffers.
To use `argslist` in `vimgrep` use `:vimgrep // ##`. `//` is last search pattern.
Use `:cdo` to do something with the quickfix list.

Search with telescope and quickfix
?
1. `<leader>fs` to grep results
2. `<C-q>` to add all results to the quickfix list
3. `:cdo s/StringOne/StringTwo/g | update` to make the change and save all the files.

## Navigation

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

Goes to the older cursor position on the change list::`g;`

Goes to the newer cursor position on the change list::`g,`

Jump to previous position you were at::`C-o`

Jump to more recent position you were a::`C-i`

### Code navigation

Jump to function/variable definition::`gd`

Jump to function/variable declaration::`gD`

Find symbol, find symbol based on grep:`<leader>vws[S]`

Find usages/references::`gr`

Go to previous/current file::`C-^`

### Help

Hover help::`K`

Dashit related documentation / ... in all docsets
`<leader>dk`, `<leader>dK`

Dashit related documentation for visual selection / ... in all docsets
?
`<leader>ds`, `<leader>dS`

Dashit related documentation under cursor / ... in all docsets
?
`<leader>ds`, `<leader>dW`

### Custom keybindings and commands

Recent locations::`<leader>o`, `<leader>i`. TODO: which plugin is used?

## Clipboard

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

## Changing text (editing)

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

### Code editing

How to check file was changed
?
In neovim it's `[+]` in the status line (after filename)

Code formatting (using LSP), custom binding::`<leader>f`

Code actions (inline action)::`<leader>vaa`

### Custom keybindings and commands

Insert new line above/below::`[<space>`, `]<space>`

## Deleting text

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

## Formatting

TODO: Markdown plugin

`>>`::indent line one column to right

`<<'::indent line one column to left
<!--SR:!2023-06-06,2,228-->

`==`::auto-indent current line
<!--SR:!2023-06-07,2,208-->

`=`::indent text, works with visual selection

`>`::shift right in visual mode (v)

`<`::shift left in visual mode (v)
<!--SR:!2023-06-06,1,208-->

### Markdown

Go to previous/next heading::`[[` / `]]`

Go to link::`gx`

TODO toggle, search, mark (plugin?)

TODO: [Automatic list continuation and formatting for neovim, powered by lua](https://github.com/gaoDean/autolist.nvim), renumber automatically?

TODO: broken, bullet promote::`<C-d>` or `<<` or `<` in visual mode

TODO: HTML to markdown > clipboard > paste

Toggle checkbox::`<leader>tT`

Bullet demote::`<C-t>` or `>>` or `>` in visual mode

URL to markdown > clipboard > paste::`<S-v>`

### [markdowny.nvim](https://github.com/antonk52/markdowny.nvim)

Make visual selection bold::`<C-b>`
Make visual selection italic::`<C-i>`
Make visual selection code::`<C-e>`
Make visual selection link::`<C-k>`

## Visual Mode

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

## Fold

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

## Bookmarks

List all the current marks::`:marks`
<!--SR:!2023-06-06,3,250-->

Make a bookmark named `a` at the current cursor position::`m[a]`

Go to position of bookmark `a`::`` `[a] ``

Go to the line with bookmark `a`::`'[a]`

Go to the line that you last edited::`` `. ``

## Files

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

## Custom keybindings and commands

- Close all buffers except current and stay on original cursor position
?
`<leader>bD`, command - `:%bd\|e#\|bd#<cr>\|'"`

## Macro

record macro / stop recording macro::`q<register>`

play macro::`@<register>`

replay last command::`@:`

## Vim Text objects (motions)

outer::`a`

inner::`i`

word::`w`

sentence::`s`
<!--SR:!2023-06-06,1,208-->

paragraph::`p`

TODO: need check
argument (require plugin, works inside brackets)::`a`

single and double quote::`❜` `"`

back quote::`` ` ``

a parenthesized block::`)` `}`

a tag::`t`
<!--SR:!2023-06-06,2,231-->

a single tag::`>`

entire content::`e`

### [nvim-treesitter/nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects) plugin

TODO: add more examples

`B`::code block
`iB`::inner code block

## Advanced

`zf`::fold text object
<!--SR:!2023-06-06,2,228--> (can create fold)

Find link under cursor::`gx` - open URL under cursor (`netrw-gx`)
<!--SR:!2023-06-05,1,211-->

Type ==`tab`== to complete a command

Open list of possible commands in command mode::`C-d`

List previous commands in command mode::`C-f`

### Spell checking

`]d`::next diagnostic

`[d`::previous diagnostic

`z=`::suggest word

TODO: not working with ltex
`]s` next misspelled word
`[s` previous misspelled word
`zg` add word to wordlists

## Vim registers

What is vim register?
?
It's sort of space in memory to store text. Every register can be accessed using
double quote `"`. For example `r` register, copy/paste will be like this `"ry` /
`"rp`. You can access register in insert/command mode by `C-r[register name]`.
You can use the `:reg[a|b|c]` command to see all the registers and their
content. If you use `qw` to record a macro, the register `"w` will have all
actions which you have done.

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

## Paths and history

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

## Buffers

List buffers
?
`:buffers` - built-in command
`:Telescope buffers` - telescope command, or `M-b` hotkey.

Switch to buffer
?
`:b <buffer name>` or `:b <buffer number>`

Create new scratch buffer::`:enew`

## Windows

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

Maximize buffer height::`C-w _`

Maximize buffer width::`C-w |`

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

## Workspaces

Workspaces: Neovim doesn't have native workspace support like Emacs. However,
you can achieve similar functionality using tabs or different instances of
Neovim. Personally I use [[Tmux]] with sessionizer script (bind to `Tmux prefix
+ f`).

TODO: tab commands and hotkeys?

## Sessions

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

## Netrw and file management

I described all netrw related stuff in [[Netrw]] note.

`cd` to parent directory (2 levels)::`:cd ../..`

`cd` to current file directory::`:cd %:h`

`cd` to home directory::`:cd`

`cd` to previous directory::`:cd -`

### Custom keybinding and commands

`cd` to current file path::`<leader>z%`

grep content in current project and open find toolbar::`<leader>fs`

### Telescope and telescope plugins

Locate file in telescope file manager::`<leader>pV`

Recent files (telescope old files)::`<M-e>`

- [x] find file, with history and fuzzy search::`M-p`
- [x] telescope resume::`<m-P>` n\*


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

TODO: comment plugin describe

comment line::`gcc`

comment motion::`gc[motion,a]`

### Markdown Snippets

TODO: which plugin used?

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

`:lua =vim.lsp.buf_get_clients()`::list LSP clients

## Scripts

If you need markdown links, use ==`url_to_markdown.sh`== script. TODO: automate
this better! (Mapped to `S-v`).
<!--SR:!2023-06-06,2,228-->


----

### Harpoon n\*

- [ ] quick switch to terminal
      Ctrl-Z while editing in vim to send it to background, do your thing on the terminal and use fg at any time to bring up vim again.
      C-\ switch to terminal

- [x] add file into harpoon list::`leader-a`

- [x] show harpoon menu::`c-e`

- [x] close harpoon menu::`q`, `Esc`

- [x] switch harpoon items::`c-t`, `c-n c-m-t c-m-n`\*


## Vim surround

- [x] `surr*ound_words ysiw)` (surround_words)
- [x] `*make strings ys$"` "make strings"
- [x] `[delete ar*ound me!] ds]` delete around me!
- [x] remove `<b>HTML t*ags</b> dst` remove HTML tags
- [x] change `quot*es' cs'"` "change quotes"
- [x] `<b>or tag* types</b> csth1<CR>` `<h1>or tag types</h1>` n\*
- [x] `delete(functi*on calls) dsf` function calls n\*

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

## Code autocompletion

- confirm autocomplete::`RET`
- snippets in autocomplete by using [GitHub - [L3MON4D3/LuaSnip](https://github.com/L3MON4D3/LuaSnip)

## Code run/debugging/testing

- auto-import with LSP

- telescope-dap.nvim prefix::`<leader>dl?`

- view breakpoints::`<leader>dlb`

- run debugger configuration/continue::`<F5>`

- run last debug configuration::`<leader>dr`

- toggle breakpoint::`<leader>db[B]`

- stop debugger::`<leader>dx`

- step back::`<F1>`

- step into::`<F2>`

- step over::`<F3>`

- step out::`<F4>`

- jump to cursor::`<S-F1>` \*

- run to cursor::`<leader>dC`

- evaluate expression

- run current test file::`<leader>dnf`

- run current test::`<leader>dnn`

- [ ] coverage test, [andythigpen/nvim-coverage](https://github.com/andythigpen/nvim-coverage)?

- [ ] generate test, AI-test generate? [jackMort/ChatGPT.nvim](https://github.com/jackMort/ChatGPT.nvim)

- `<leader>zee`::run current file using [[Sniprun]]

- [ ] run group of tests (directory), pytest cwd?

- [ ] CI/Reporting workflow

- `<leader>dnl`::rerun the last test

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

`:Gdiffsplit` or `<leader>gd`::vimdiff against the index version of the file, quit from this mode by `:q`

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

## SQL

- [x] toggle DB UI::`<leader>qt`
- [x] toggle last query info::`<leader>qi` n\*
- [x] execute query::`<leader>S`
- [ ] [GitHub - kristijanhusak/vim-dadbod-completion: Database autocompletion powered by https://github.com/tpope/vim-dadbod](https://github.com/kristijanhusak/vim-dadbod-completion)
- [x] connect and open database console
- [x] copy all results/row/column::`y[motion]`, `yic` n\*

- [ ] [vim-dadbod-ui/doc/dadbod-ui.txt at master · kristijanhusak/vim-dadbod-ui · GitHub](https://github.com/kristijanhusak/vim-dadbod-ui/blob/master/doc/dadbod-ui.txt)
- [ ] vim-dadbod-ui [GitHub - kristijanhusak/vim-dadbod-ui: Simple UI for https://github.com/tpope/vim-dadbod](https://github.com/kristijanhusak/vim-dadbod-ui#mappings) full-featured database client, possible set values, load values from files, query, work with multiple databases

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


- [ ] vim-shell output actions... `:h redir`, `!...|grep`, `r!...`, etc.
- [ ] [GitHub - tpope/vim-unimpaired: unimpaired.vim: Pairs of handy bracket mappings](https://github.com/tpope/vim-unimpaired)
- [ ] new scratch file `:enew`
- [ ] execute scratch file
- [ ] execute current file (open externally) leader o or leader O (run using xdg-open)
- [ ] [GitHub - stevearc/aerial.nvim: Neovim plugin for a code outline window](https://github.com/stevearc/aerial.nvim)
- [ ] [Fold](https://learnvim.irian.to/basics/fold)

## Custom

map specific insert key in specific terminal: CTRL-K CTRL-F1 to get key code,
then map it...

## TODO

- [ ] Commit style
- [ ] Code style
- [ ] CLI tools
- [ ] [[research/Irianto-Learn_Vim]]
- [ ] [[research/Neil-Modern_Vim]]
- [ ] [[research/Neil-Practical_Vim]]
- [ ] [[research/Osipov-Mastering_Vim]]
- [-] [Как подружить Neovim c русской раскладкой](https://habr.com/ru/articles/726400/)

## References
