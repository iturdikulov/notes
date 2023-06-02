---
date: 2023-02-20
draft: true
sr-due: 2023-03-22
sr-ease: 210
sr-interval: 1
tags:
- inbox
- definition
- vimtip
sr-due: 2024-02-18
sr-interval: 277
sr-ease: 230
---

## Tips

Generate abbrev using lua:

```lua
vim.cmd.inoreabbrev({
  "<buffer>", -- I think this is optional
  "foo",
  "bar",
})
```

You can skip inserting abbreviation by pressing `ctrl`+`v` `space` after typing abbreviation.

How to add permanent line numbers to a file?
?
`:%s/^/\=line('.').". "`
https://vi.stackexchange.com/questions/688/how-to-add-permanent-line-numbers-to-a-file

# Neovim (text editor)

Hyperextensible Vim-based text editor.

NEXT: issue with very long lines, how to deal with it?

## What I handle by it

- Notes, Weekly calendar - telekasten.nvim together with [[obsidian]]
- File management - netrw
- Code editing (highly customized setup)
- Code blocks running

## Basics

normal mode, for navigation and manipulation of text::`ESC` or `C-[` or `C-c` or `C-S` (custom)

insert mode, for inserting new text.::`iIaAoO`

visual, for navigation and manipulation of text selections::`v` or `V` or `C-v`

command-line, for entering editor commands::`:`

replace mode, replace existing text by directly typing over it.::`R`

mode similar to visual, but with a more MS Windows-like behavior::`select` TODO: check

similar to the command-line mode but optimized for batch processing::`ex-mode` TODO: check

select something::`v[motion]`

copy something::`y[register][num][motion]`

copy something into system clipboard::`"<SPC>y[motion]`

delete something (can be used with black hole register)::`d[register][num][motion]`

change something (can be used with black hole register)::`c[register][num][motion]`

`:`::command mode

How to split line (a/i/r)
?

- `a<cr><esc>`
- `r<cr>`
- `i<cr><esc>`

`!`
?
external filter, used in command mode to execute something (`r!` redirect
output)


## Search & replace

`/`::search mode

`?`::search mode

Find each occurrence of 'foo' (in all lines), and replace it with 'bar'
?
`:%s/foo/bar/g[c]`
`[c]` - confirmations.

The replacement will check each line in the buffer, but will only match within the last visual selection
?
`:%s/\%Vfoo/bar/g[c]`
`[c]` - confirmations.


`:'<,'>s/old/new/g`::replace all old with new throughout visual selection

`&`::repeat substitute, equal to `:s//~/`

`:s/\[foo\]//g`::Escape the square brackets with a backslash, to replace `[foo]`

`:%s/\(^ *\)\@<! \{2,}/ /g`
?
Replace multiple spaces with one, This says find 2 or more spaces (` \{2,}`)
that are NOT preceded by 'the start of the line followed by zero or more
spaces'.

`f[x]|Fx`::search line forward for 'x', backward for 'x'

`t[x]|Tx`::search line forward before 'x', backward before 'x'

`,|;`::backward, forward after that "finds", works for s, f and t

You can also just press f/t/F/T ==again== to continue search

`/ ESC`::clear search highlights or `:noh`

`n|N`::repeat search in same direction, in opposite direction

`*|#`::search forward word under cursor, search backward word under cursor

### Navigation

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

go to line n::`[n]gg`

go To line n::`[n]G`

Puts the current line at the top::`zt`

Puts the current line at the middle::`zz`

Puts the current line at the bottom::`zb`

Scrolling down, cursor staying on the same line::`C-y`

Jump by **s**tart of words (punctuation considered words)::`w`

Jump by **s**tart words (words determined only by spaces, no punctuation)::`W`

Jump to en**d** of words (punctuation considered words)::`e`

Jump to en**d** of words (no punctuation)::`E`

Jump **b**ackward by words (punctuation considered words)::`b`

Jump **b**ackward by words (no punctuation)::`B`

Jump backwar**d** to end of words::`ge`

**J**ump to zero symbol (start of line)::`0`

   **J**ump to first non-blank character of line::`^`

Jump to end of lin**e**::`$`

Jump to the last non-blank character of the lin**e** ::`g_`

Move to the current line (useful for making commands line-based)::`_`

Move line upwards, on the first non blank character::`-`

Move line downwards, on the first non blank character::`+`

Move the cursor forward to the next sentence (or table cell)::`)`

Move backward by a sentence (or table cell)::`(`

Move the cursor a paragraph backwards::`{`

Move the cursor a paragraph forwards::`}`

Move the cursor a section forwards or to the next `{`::`]]`
<!--SR:!2023-06-05,2,230-->

Move the cursor a section backwards or the previous `{`::`]]`

Move the cursor to the top, middle, bottom of the screen.::`HML`

Jump to matching brace, bracket, or parentheses::`%`

Return to the line where the cursor was before the latest jump::`''`

Start typing on the last inserting point you can type. TODO: conflict with lsp key::`gi`

Re-select and jump to the last visual selection with::`gv`

Jump to function/variable definition::`gd`

Goes to the older cursor position on the change list::`g;`

Goes to the newer cursor position on the change list::`g,`

Jump to previous position you were at::`C-o`

Jump to more recent position you were a::`C-i`

### Bookmarks

List all the current marks::`:marks`

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

### Vim Text objects (motions)

outer::`a`

inner::`i`

word::`w`

sentence::`s`

paragraph::`p`

argument (require plugin, works inside brackets)::`a`

single and double quote::`❜` `"`

back quote::`` ` ``

a parenthesized block::`)` `}`

a tag::`t`

a single tag::`>`

entire content::`e`

#### Advanced text objects (`nvim-treesitter-textobjects`)

TODO: add more examples

`B`::code block

## Advanced

`zf`::fold text object

Find link under cursor::`gx` - open URL under cursor (`netrw-gx`)

Type ==`tab`== to complete a command

Open list of possible commands in command mode::`C-d`

List previous commands in command mode::`C-f`

`]d`:::next diagnostic

`[d`:::previous diagnostic

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

The selection (system clipboard)::`"*`, `"+`

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

How do you search through Vim's command history?
?
Use `q:` or `q/` in normal mode and then press `/`.
Press `C-f` in command mode to open the command history window.
For more about the command history window, see `:h cmdwin`.

How quickly close command history window?
?
`<C-c><C-c>`

### Windows

You can use vim motion keys to navigate between open windows for example?
?
`C-w h` moves the window to the left. Windows are panes in your screen

split open file::`:sp f`

vertical split open file::`:vsp f`

next/previous tab::`gt gT`

`C-w v`::window split vertically

`C-w s`::window split horizontal

`C-w C-w`::to switch windows

`C-w q`::to kill windows. Better `bd` replacement

`C-w >` and `C-w <`:::Increase and decrease window width

`C-w +` and `C-w -`:::Increase and decrease window height

Equal window::`C-w =`
<!--SR:!2023-06-05,2,230-->

Close other windows::`C-w o`

Swap windows::`C-w x`

jumps to the last window you used \*::`C-w C-p`

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

### Netrw

Go up a directory::`-`

Go back to the previous directory in the history::`u`

Jump to the most recent directory saved on the "Bookmarks". To create a bookmark we use `mb`::`gb`

Open a preview window::`p`

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

Right now I use this color-scheme
<https://raw.githubusercontent.com/navarasu/onedark.nvim/master/lua/onedark/highlights.lua>

## Plugins

`SPC v p p`::open the packer config

`C-p`::open file in project (`Telescope find_files`)

`SPC SPC`::open file in project using `Telescope frecency` (recently used files). TODO: I'm not using this need review.

`<SPC>pv`::to open the file browser plugin in CWD

`:Explore`::open file browser (native) in CWD

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
`sqlc`::insert SQL code block
`tsc`::insert typescript code block
`rubyc`::insert ruby code block
`goc`::insert go code block
<!--SR:!2023-06-04,1,210-->
`rustc`::insert rust code block
`lua`::insert Lua code block
`shc`::insert bash code block

### Telekasten

TODO: need review

Find notes::`<leader>zf`

Search notes::`<leader>zg`

Follow link::`<leader>zz`

Find weekly notes::`<leader>zw`

List weeks::`<leader>zW`

Create new note::`<leader>zn`

Create new note from template::`<leader>zN`

Yank note link::`<leader>zy`

Show calendar::`<leader>zc`

CalendarT::`<leader>zC`

Paste link::`<leader>zi`

Paste image and link::`<leader>zI`

Toggle TODO (including visual)::`<leader>zt`

Show tags::`<leader>z#`

Show backlinks::`<leader>zb`

Find friends::`<leader>zF`

Preview image::`<leader>zp`
<!--SR:!2023-06-04,1,210-->

Browse media::`<leader>zm`

Rename note::`<leader>zr`

## Scripts

If you need markdown links, use ==`url_to_markdown.sh`== script. TODO: automate
this.

`C-SPC`::switch project using `kitty sessionizer` [script](~/.local/bin/kitty-sessionizer.sh)

<!-- IDEAS -->


### Changing text

run command in insert mode `C-o[motion]`

read input character and insert it (useful to insert TAB for example) `C-q`
replace a single character (does not use insert mode) `r`
enter Insert mode, but replacing characters rather than inserting `R`
join line below to the current one `J`
change (replace) an entire line `cc`
(replace) to the end of word `cw`
change (replace) to the end of line `C`
\' character (can change \' for any character) `ct'`
delete character at cursor and substitute text `s`
delete line at cursor and substitute text (same as cc) `S`
transpose two letters (delete and paste, technically) `xp`
reverse two letters (delete and paste, technically) `Xp`
undo changes `u`
redo changes `C-r`
insert content of register r (in insert mode!) `C-rr`
repeat last command `.`

switch case `~`
switch case of current word `g~iw`
make current word uppercase `gUiw`
make current word lowercase `guiw`
make uppercase until end of line `gU$`
make lowercase until end of line `gu$`
change line to UPPER `gUU`
fill text `gw`

swap current line with next (line down) `ddp`
swap current line with previous (line up) `ddkP`
duplicate line `yyP`

fix spaces / tabs issues in whole file `:%retab`
execute {cmd} and insert its standard output below the cursor. `:r !{cmd}`

### Deleting text

delete current character, previous character `x`
delete previous character `X`
delete the current word `dw`
delete (cut) a line `dd`
delete until the next \' character on the line (replace \' by any character) `dt'`
delete from cursor to end of line `D`
delete \[range\] lines `:[range]d`

### Formatting

```example
>> indent line one column to right *
<< indent line one column to left *
== auto-indent current line *
= indent text, works with visual selection
> shift right in visual mode (v)
< shift left in visual mode (v)

zf#j creates a fold from the cursor down # lines.
zf/ string creates a fold from the cursor to string.
zj moves the cursor to the next fold.
zk moves the cursor to the previous fold.
zo opens a fold at the cursor.
zO opens all folds at the cursor.
zm increases the foldlevel by one.
zM closes all open folds.
zr decreases the foldlevel by one.
zR decreases the foldlevel to zero — all folds will be open.
zd deletes the fold at the cursor.
zE deletes all folds.
[z move to start of open fold.
]z move to end of open fold.

za toggle fold *
zo|zc Fold/Unfold
zO|zC open all nested folds, close all nested folds
```

---

## [TODO]{.todo .TODO} [Evil surround](https://github.com/emacs-evil/evil-surround) {#evil-surround}

```example
ds[char or t] deletes the surrounding char or html element
cs[char][char or <tag>] change the surrounding char to char or <tag>
ysiw[char] chage the surrounding of inner word

ysWf ysWF functions example, wrap text/word

S[text object] in visual state will surround a text object
```

## [TODO]{.todo .TODO} Evil exchange {#evil-exchange}

\`cx\[motion\]\` ... \`cx\[motion\]\` Exchange motion \`cxx\` Like
\`cx\`, but use the current line. \`X\` Like \`cx\`, but for Visual
mode. \`cxc\` Clear any \`{motion}\` pending for exchange. If you're
using the same motion again (e.g. exchanging two words using \`cxiw\`),
you can use \`.\` the second time. If one region is fully contained
within the other, it will replace the containing region.

## Commenting

comment line `gcc`
comment motion `gc[motion,a]`

### Visual Mode

```example
v start visual mode, mark lines, then do command (such as y-yank)
V start linewise visual mode
o move to other end of marked area
O move to other corner of block
U upper case of marked area

C-v start visual block mode
aw mark a word
ab a () block (with braces)
ib inner () block
ggVG Select All

vc change (replace) marked text
vy yank (copy) marked text
vd delete marked text
v~ switch case

v% selects matching parenthesis
vi{ selects matching curly brace
vi" selects text between double quotes
vi' selects text between single quotes

viW|vis|vip|viB select word, sentence, paragraph, innermost brackets
vt|vT|vf|VF select and search
```

# Evil Record and playback

```example
q[a] start recording macro 'a'
q end recording macro
@a replay macro 'a'
@: replay last command
```

## Evil refactor and clean up

```example
]s next misspelled word
[s previous misspelled word
zg add word to wordlist
z= suggest word
```

# Clipboard

## Evil clipboard

```example
yw yank word
yy yank (copy) a line
2yy yank 2 lines
y$ yank to end of line
p put (paste) the clipboard after cursor/current line
P put (paste) before cursor/current line
:set paste avoid unexpected effects in pasting
:registers display the contents of all registers
"xyw yank word into register x
"xyy yank line into register x
:[range]y x yank [range] lines into register x
"xp put the text from register x after the cursor
"xP put the text from register x before the cursor
"xgp just like "p", but leave the cursor just after the new text
"xgP just like "P", but leave the cursor just after the new text
:[line]put x put the text from register x after [line]
```

## [TODO]{.todo .TODO} Evil Multiedit {#evil-multiedit}

## Evil Lion

## [TODO]{.todo .TODO} Evil Avy & Evil Snipe (not clear, maybe not working?) {#evil-avy-evil-snipe-not-clear-maybe-not-working}

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

## Uncategorized

Right now I use this color-scheme
<https://raw.githubusercontent.com/navarasu/onedark.nvim/master/lua/onedark/highlights.lua>

## Custom keybindings

[[copilot]] toggle
?
`M-\\`

Save current buffer
?
`ctrl`+`s`

Delete current file
?
`meta`+`shift`+`del`

## Uncategorized

Fold text object ...<motion>
?
`zf`

Open URL under cursor, `:h netrw-gx`
?
`gx`
Also `gX`, this is my custom mapping

Next/Previous diagnostic item
?
`]d`, `[d`

## General

Save without exiting
?
`:w`

Save and exit
?
`:x`

Write current file, if modified, and exit
?
`ZZ`

Quit current file and exit, ignoring changes
?
`ZQ`, `:q!`

Quit without saving and exit with error code
?
`:cq`

Exit, without saving, if no changes were made
?
`:q`

Write the current `file` and exit
?
`:wq` `file`

Write/force write and exit
?
`:wq!` `file`

Write/force write and exit, but only write the lines in \[range\]
?
:[range]`wq[!]`


## Other notes

:%s/foo/bar/g[c]::Find each occurrence of 'foo' (in all lines), and replace it with 'bar'. [c] - confirmations.
:%s/\%Vfoo/bar/g::The replacement will check each line in the buffer, but will only match within the last visual selection

How split line
?

- `a<cr><esc>`
- `r<cr>`
- `i<cr><esc>`

`{number}<C-w><C-w>`::Quick Switch between windows

## Paths

`:echo @%`::directory/name of file

`:echo expand('%:t')`::name of file ('tail')

`:echo expand('%:p')`::full path

`:echo expand('%:p:h')`::directory containing file ('head')

How to paste yanked text into the Vim command line?
?
Hit `<C-r>"`. If you have literal control characters in what you have yanked, use `<C-r><Ctrl-o>"`.
Source: https://stackoverflow.com/questions/3997078/how-to-paste-yanked-text-into-the-vim-command-line

How to paste system clipboard into the Vim command line?
?
I use `C-S-v`, it's working in my terminal. Or use `<C-r>"`.

How do you search through Vim's command history?
?
Use `q:` or `q/` in normal mode and then press `/`.
Press `C-f` in command mode to open the command history window.
For more about the command history window, see `:h cmdwin`.

How quickly close command history window?::`<C-c><C-c>`
<!--SR:!2023-06-05,2,230-->

## Netrw

Go up a directory::`-`
Go back to the previous directory in the history::`u`
Jump to the most recent directory saved on the "Bookmarks". To create a bookmark we use `mb`::`gb`
Open a preview window::`p`
Close the preview window::`<C-w>z`
Toggle hidden files::`gh`
Create a new file::`%`
Create a new directory::`d`
Rename a file::`R`
Delete a file::`D`

record macro / stop recording macro::q<register>
q<register>:::record macro / stop recording macro
play macro::@<register>
@<register>:::play macro

!::external filter
external filter:::!

d::<register><num>del<motion>
<register><num>del<motion>:::d

c::<register><num>change<motion>
<register><num>change<motion>:::c

y::<register><num>yank<motion>
<register><num>yank<motion>:::y

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

# Telekasten

Find notes::`<leader>zf`
Find daily notes::`<leader>zd`
Search notes::`<leader>zg`
Follow link::`<leader>zz`
Goto today::`<leader>zT`
Find weekly notes::`<leader>zw`
Goto this week::`<leader>zW`
Create new note::`<leader>zn`
Create new note from template::`<leader>zN`
Yank notelink::`<leader>zy`
Show calendar::`<leader>zc`
CalendarT::`<leader>zC`
Paste image and link::`<leader>zI`
Toggle TODO (including visual)::`<leader>zt`
Show tags::`<leader>z#`
Show backlinks::`<leader>zb`
Find friends::`<leader>zF`
Preview image::`<leader>zp`
<!--SR:!2023-06-04,1,210-->
Browse media::`<leader>zm`
Rename note::`<leader>zr`
Paste image and link::`<leader>zi`

# Resources

- [[papis/1ae149d1c843b867b0b254a20df34b4f-neil-drew/notes]]
- [[papis/82951c75090ce154272484448309812b-neil-drew/notes]]


### [TODO]{.todo .TODO} how to change macro registers in evil, how to execute them? {#how-to-change-macro-registers-in-evil-how-to-execute-them}

### [TODO]{.todo .TODO} drop register? {#drop-register}

## Command line usage examples

```bash
emacs -q # Run emacs and do not load an init file (init.el)
emacs -Q # Dont load site-wide startup file (global init file)

# Open specific workspace from command line
emacsclient --alternate-editor='' --no-wait --eval '(persp-switch "TERM")' --display $DISPLAY
```

## Base Emacs keybindings, useful in `M-x` extend command menu, mini buffers, etc

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

# Files

## Evil files

---

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

# Windows

## Evil windows

---

to close the current window. `C-x 0`
to close every other window. `C-x 1`
split open file `:sp f`
vertical split open file `:vsp f`
split windows horizontal `C-w s`
split windows vertically `C-w v`
switch between windows `C-w C-w`
quit a window `C-w q`
close other windows `C-w o`
swap windows `C-w x`
jumps to the last window you used \* `C-w C-p`
left, down, up, right window `C-w hjkl`
increase window height `C-w +`
decrease window height `C-w -`
increase window width `C-w <`
decrease window width `C-w >`
equal window `C-w =`
next/previous tab `gt gT`

---

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

# Navigation (movement)

## Evil navigation

---

puts the current line at the top `zt`
puts the current line at the middle `zz`
puts the current line at the bottom `zb`
Scrolling up, cursor staying on the same line `C-e`
Scrolling down, cursor staying on the same line `C-y`

---

### Cursor Movements

---

move to char (avy) `C-'`
closure (avy) `g s SPC`
go to character 2 (avy) `gss`
go to char timer `gs/`

move left, down, up, right `hjkll`

jump by start of words (punctuation considered words) `w`
jump by words (spaces separate words) `W`
jump to enD of words (punctuation considered words) `e`
jump to end of words (no punctuation) `E`
jump backward by words (punctuation considered words) `b`
jump backward by words (no punctuation) `B`
jump backward to end of words `ge`

(zero) start of line `0`
first non-blank character of line `^`
end of line `$`
jump to the last non-blank character of the line `g_`
move to the current line (useful for making commands line-based) `_`

move line upwards, on the first non blank character `-`
move line downwards, on the first non blank character `+`

go to first line `gg`
go to last line `G`
go to line n `ngg`
go To line n `nG`
go To line n `:n`

move the cursor forward to the next sentence (or table cell) `)`
backward by a sentence (or table cell) `(`
move the cursor a paragraph backwards `{`
move the cursor a paragraph forwards `}`
move the cursor a section forwards or to the next { `]]`
move the cursor a section backwards or the previous { `]]`
move the cursor to the top, middle, bottom of the screen. `HML`

show matching brace, bracket, or parentheses `%`
return to the line where the cursor was before the latest jump `''`
start typing on the last inserting point you can type `gi`
reselect and jump to the last visual selection with `gv`
jump to function/variable definition `gd`
goes to the older cursor position on the change list `g;`
goes to the newer cursor position on the change list `g,`

jump to previous position you were at `C-o`
jump to more recent position you were a `C-i`
move the cursor forward by a screen of text `C-f`
move the cursor backward by a screen of text `C-b`
move the cursor up by half a screen `C-u`
move the cursor down by half a screen `C-d`

---

### Bookmarks

---

list all the current marks `:marks`
make a bookmark named a at the current cursor position `m[a]`
go to position of bookmark a `` `[a] ``
go to the line with bookmark a `'[a]`
go to the line that you last edited `` `. ``

---

## Emacs navigation

### bookmarks

---

jump to mark `SPC s r`

---

# Search & Replace

## Evil search & replace

```example
s evil snipe forward
S evil snipe backward
f[x]|Fx search line forward for 'x', backward for 'x'
t[x]|Tx search line forward before 'x', backward before 'x'
 all this 3 modes, has addditional keybindings:
 ,|; backward, forward after that "finds", works for s, f and t
 you can also just press f/t/F/T again to continue search

/ ESC clear search highlights

/pattern search for pattern, use \C escape charater for case sensitive
?pattern search backward for pattern
n|N repeat search in same direction, in opposite direction
*|# search forward word under cursor, search backward word under cursor
:%s/old/new/g replace all old with new throughout file
:%s/old/new/gc replace all old with new throughout file with confirmation
:'<,'>s/old/new/g replace all old with new throughout visual selection
& repeat substitute, equal to :s//~/

:s/\[foo\]//g Escape the square brackets with a backslash, to replace [foo]

:%s/\(^ *\)\@<! \{2,}/ /g Replace multiple spaces with one, This says "find 2 or more spaces (' \{2,}') that are NOT preceded by 'the start of the line followed by zero or more spaces'.
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

# Changing Text (editing)

## Evil changing text

---

run command in insert mode `C-o[motion]`

read input character and insert it (useful to insert TAB for example) `C-q`
replace a single character (does not use insert mode) `r`
enter Insert mode, but replacing characters rather than inserting `R`
join line below to the current one `J`
change (replace) an entire line `cc`
(replace) to the end of word `cw`
change (replace) to the end of line `C`
\' character (can change \' for any character) `ct'`
delete character at cursor and substitute text `s`
delete line at cursor and substitute text (same as cc) `S`
transpose two letters (delete and paste, technically) `xp`
reverse two letters (delete and paste, technically) `Xp`
undo changes `u`
redo changes `C-r`
insert content of register r (in insert mode!) `C-rr`
repeat last command `.`

switch case `~`
switch case of current word `g~iw`
make current word uppercase `gUiw`
make current word lowercase `guiw`
make uppercase until end of line `gU$`
make lowercase until end of line `gu$`
change line to UPPER `gUU`
fill text `gw`

swap current line with next (line down) `ddp`
swap current line with previous (line up) `ddkP`
duplicate line `yyP`

fix spaces / tabs issues in whole file `:%retab`
execute {cmd} and insert its standard output below the cursor. `:r !{cmd}`

---

## Evil deleting text

---

delete current character, previous character `x`
delete previous character `X`
delete the current word `dw`
delete (cut) a line `dd`
delete until the next \' character on the line (replace \' by any character) `dt'`
delete from cursor to end of line `D`
delete \[range\] lines `:[range]d`

---

## [TODO]{.todo .TODO} [Evil surround](https://github.com/emacs-evil/evil-surround) {#evil-surround}

```example
ds[char or t] deletes the surrounding char or html element
cs[char][char or <tag>] change the surrounding char to char or <tag>
ysiw[char] chage the surrounding of inner word

ysWf ysWF functions example, wrap text/word

S[text object] in visual state will surround a text object
```

## [TODO]{.todo .TODO} Evil exchange {#evil-exchange}

\`cx\[motion\]\` ... \`cx\[motion\]\` Exchange motion \`cxx\` Like
\`cx\`, but use the current line. \`X\` Like \`cx\`, but for Visual
mode. \`cxc\` Clear any \`{motion}\` pending for exchange. If you're
using the same motion again (e.g. exchanging two words using \`cxiw\`),
you can use \`.\` the second time. If one region is fully contained
within the other, it will replace the containing region.

## Evil commenting

---

comment line `gcc`
comment motion `gc[motion,a]`

---

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

# Formatting Text and Fold

## Evil formatting

```example
>> indent line one column to right *
<< indent line one column to left *
== auto-indent current line *
= indent text, works with visual selection
> shift right in visual mode (v)
< shift left in visual mode (v)

zf#j creates a fold from the cursor down # lines.
zf/ string creates a fold from the cursor to string.
zj moves the cursor to the next fold.
zk moves the cursor to the previous fold.
zo opens a fold at the cursor.
zO opens all folds at the cursor.
zm increases the foldlevel by one.
zM closes all open folds.
zr decreases the foldlevel by one.
zR decreases the foldlevel to zero — all folds will be open.
zd deletes the fold at the cursor.
zE deletes all folds.
[z move to start of open fold.
]z move to end of open fold.

za toggle fold *
zo|zc Fold/Unfold
zO|zC open all nested folds, close all nested folds
```

## Emacs formatting

```example
SPC c f format buffer/region
SPC c w Delete trailing whitespace
SPC c W Delete trailing new lines
SPC c l = LSP formatting
M-s h Higlight menu
```

# Evil Visual Mode

```example
v start visual mode, mark lines, then do command (such as y-yank)
V start linewise visual mode
o move to other end of marked area
O move to other corner of block
U upper case of marked area

C-v start visual block mode
aw mark a word
ab a () block (with braces)
ib inner () block
ggVG Select All

vc change (replace) marked text
vy yank (copy) marked text
vd delete marked text
v~ switch case

v% selects matching parenthesis
vi{ selects matching curly brace
vi" selects text between double quotes
vi' selects text between single quotes

viW|vis|vip|viB select word, sentence, paragraph, innermost brackets
vt|vT|vf|VF select and search
```

# Evil Record and playback

```example
q[a] start recording macro 'a'
q end recording macro
@a replay macro 'a'
@: replay last command
```

# Refactor and Clean up

## Evil refactor and clean up

```example
]s next misspelled word
[s previous misspelled word
zg add word to wordlist
z= suggest word
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
<https://docs.doomemacs.org/latest/#/usage/keybindings>

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

# Clipboard

## Evil clipboard

```example
yw yank word
yy yank (copy) a line
2yy yank 2 lines
y$ yank to end of line
p put (paste) the clipboard after cursor/current line
P put (paste) before cursor/current line
:set paste avoid unexpected effects in pasting
:registers display the contents of all registers
"xyw yank word into register x
"xyy yank line into register x
:[range]y x yank [range] lines into register x
"xp put the text from register x after the cursor
"xP put the text from register x before the cursor
"xgp just like "p", but leave the cursor just after the new text
"xgP just like "P", but leave the cursor just after the new text
:[line]put x put the text from register x after [line]
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

See also - <https://magit.vc/manual/magit-refcard.pdf>

# Additional Emacs Packages

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
designated place. Watch <https://www.youtube.com/watch?v=AyhPmypHDEw> to
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

```{.python session="yes" results="file"}
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

```{.spice results="drawer" exports="both"}
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

## [TODO]{.todo .TODO} Evil Multiedit {#evil-multiedit}

## Evil Lion

## [TODO]{.todo .TODO} Evil Avy & Evil Snipe (not clear, maybe not working?) {#evil-avy-evil-snipe-not-clear-maybe-not-working}

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

- <https://docs.doomemacs.org/latest/> \*

- <https://emacs-lsp.github.io/lsp-mode/page/main-features/> (LSP
  starting point) \*

- <https://github.com/niyumard/Doom-Emacs-Cheat-Sheet> \*

- <https://raw.githubusercontent.com/hackjutsu/vim-cheatsheet/master/README.md>

- <https://raw.githubusercontent.com/LeCoupa/awesome-cheatsheets/master/tools/vim.txt>

- <https://thingsfittogether.com/wp-content/uploads/2021/03/Vim-Cheatsheet-2-Final-Draft.png>

- <https://github.com/rstacruz/cheatsheets/blob/master/vim.md>

- <https://imgur.com/gallery/YLInLlY>

- <https://emacs-lsp.github.io/lsp-mode/page/keybindings/>

- <https://resources.jetbrains.com/storage/products/pycharm/docs/PyCharm_ReferenceCard.pdf>

- <https://vimsheet.com/>

- <https://vim.fandom.com/>

- <https://vim.fandom.com/wiki/Best_Vim_Tips#Really_useful>

- <https://vimhelp.org/vim_faq.txt.html>

- [Link to youtube video
  series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)

- <http://vimcasts.org/>

- <https://vim.fandom.com>

- <https://www.vimgolf.com/>

- <https://www.emacswiki.org/emacs/SiteMap> \*

- <https://hungyi.net/>

- <https://www.emacswiki.org/emacs/PythonProgrammingInEmacs>

- <https://wikemacs.org/wiki/Python>

# [TODO]{.todo .TODO} - need check {#need-check}

- Replace multiple spaces with one \`:%s/$^ *$\\@\<! \\{2,}/ /g\` This
  says \"find 2 or more spaces (\' \\\\{2,}\') that are NOT preceded
  by \'the start of the line followed by zero or more spaces\'\"

<https://github.com/tpope/vim-surround/blob/master/doc/surround.txt>

# [TODO]{.todo .TODO} vim move inside camelCased words (pascal?) {#vim-move-inside-camelcased-words-pascal}

# [TODO]{.todo .TODO} unknown functional {#unknown-functional}

- org-make-toc

- download image from clipboard, save attach...

- make line headline

- quickly add sub-headline

- org-roam subnode find

- increment in emacs (org-shift... can handle this in org-mode)

- splitted text to autofill

- autoindent, based on previous line (as I remember exists specific
  plugin)

- <https://www.reddit.com/r/emacs/comments/a3rajh/chrome_bookmarks_sync_to_org/>

- <https://noonker.github.io/posts/2020-04-22-elfeed/>

\`C-r+0\` - in insert mode inserts the last yanked text, working in
command mode \`C-r+\"\` - in insert mode inserts clipboard, working in
command mode

\`gr\[motion\] grr\` replace with register (yanked) motion / line

\`\[s \]s\` - MoveStatementUp MoveStatementDown

M-x +snippets

bookmarks
<https://www.gnu.org/software/emacs/manual/html_node/emacs/Bookmarks.html#>:\~:text=Bookmarks%20are%20somewhat%20like%20registers,were%20reading%20in%20various%20files.

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

<https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macro-Counter.html>
generate row, column number-ranges

---

You might be looking for the bookmark feature. On vanilla emacs, C-x r m
will bookmark the current file, and C-x r b will let you choose from a
list of bookmarked files. It\'s amazingly useful

## Resources

- [[papis/1ae149d1c843b867b0b254a20df34b4f-neil-drew/notes|Practical Vim: Edit text at the speed of thought]]
- [[papis/82951c75090ce154272484448309812b-neil-drew/notes|Modern Vim: Craft your development environment with Vim 8 and Neovim]]
- [Interactive Vim tutorial](http://www.openvim.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [Vim 01 - Основы - YouTube](https://www.youtube.com/watch?v=zNnsNtBF80g)
- [VimGolf](https://www.vimgolf.com/)

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

## ToDo :Explore

- Dired (Directory Editor) is how you interfaces with a directory
- Press `C-x d` to open dired.
- Use `RET` to go to a folder or open a file.
- Use `-` for going one folder back
- Use `+` for creating a new directory
- Use `d` to mark the files for deletion, press `x` to delete.
- Use `M` to change permissions
- Use `o` to sort by modes.
- Use `O` to change the owner.
- Use `m` to mark and `u` to unmark files or directories.
- `U` to unselect all
- Use `t` to invert the selection.
- `t` to switch between files and directories
- Use `C` to copy.
- Use `R` to move.
- Move with `h`, `j`, `k`, `l`
- Toggle `(` for simple view
- `SPC .` to create or find a file
- `*` to invoke mark dialog
- `* \` to select all directories.
- `C` copy to another window
- `R` move to another window
- `dired-do-what-i-mean-target` set to true
- `i` to edit file/dir name

### Inline navigation {#inine-navigation}

- `f` and then the letter you want to navigate to.
  - `,` will go backward
  - `;` will go forward after that "find"
- `t` to find and move cursor to the charachter before what you've searched.
- `v` puts you in vi mode. You can select text by with `v t some-char-you-navigate-to` or `v f some-char-you-navigate-to`
- `;` to jump to the next find
- `,` to jump to the previous one
- `s` to snipe

### Long distance navigation inside the file {#long-distance-navigation-inside-the-file}

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

## Multiple cursor in Emacs with Evil-multiedit {#multiple-cursor-in-emacs-with-evil-multiedit}

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

## Org Mode {#org-mode}

### Basics {#basics}

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

### Links, Hyperlinks and more {#links-hyperlinks-and-more}

- `SPC m l` to add a link to an org page
- You can add `::` to specify a heading or a line number
- You can paste http links as well

### Defining custoom Link Types {#defining-custoom-link-types}

- [Whatch the video about custom links](https://youtube.com/watch?v=Febe4lUK5G4)

### Linking to words &amp; Bookmarks {#linking-to-words-and-bookmarks}

- `SPC n l` stores a link to a particular headline

### Code Snippets &amp; Babel {#code-snippets-and-babel}

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

### Task Management {#task-management}

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

#### Priorities for Tasks {#priorities-for-tasks}

- `SHIFT up` and `SHIFT down` will toggle the priority of tasks
- `org-fancy-priorities` gives you fancy looking priorities

#### Marking Tasks with Tags {#marking-tasks-with-tags}

- Tags can be attached to any headlines
- `SPC m q` to tag a headline
- Example:
  - TODO play more games :fun:
- Tags are hierarchical so nested headings will be tagged with the
  parent header tag
- `org-tag-sparce-tree` will search for headings that only have a specific
  tag

#### Setting a poperty for a task/headline {#setting-a-poperty-for-a-task-headline}

- `SPC m o` is used for setting a property.

<!--list-separator-->

- Marking Headlines with Categories

  - You can use [categories](https://orgmode.org/manual/Categories.html) to change the label in agenda view.

<!--list-separator-->

- Org-Habits

  - If you want to [keep track of your habits](https://orgmode.org/manual/Tracking-your-habits.html) using org mode, you can set the `STYLE` property to habit.
    - If you want to set a category (for chani

### Lists {#lists}

- Two types of lists, ordered and unordered lists
  - `SHIFT right` and `SHIFT left` can be used to change the type of lists.
- You can also change an unorded list by changing the first item to 1. and then typing `C-c C-c` and vice verca.

### Checkboxes {#checkboxes}

- [ ] This is still todo
- [-] This is in progress
- [x] This is a done task

#### You can see how many are done with a "cookie" <code>[1/2]</code> {#you-can-see-how-many-are-done-with-a-cookie}

- [-] Task 1
- [x] Task 2
- You can do this by adding <code>[/]</code> to the heading and pressing `C-c C-c`
- You can't assign a tag or a priority

## Magit {#magit}

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

### Git Commit Flow in More Detail {#git-commit-flow-in-more-detail}

- `t t` to create a tag, default place is the commit you are currently
  selecting
- `V` to select a change in a diff and `x` to discard that change.
- `s` to stage
- `c` to commit, you can `q` to quit the commit screen
- `P` to push and then `p` to your remote or `u` to a another remote

### Magit with Forge for Issuing Pull Requests - Emacs {#magit-with-forge-for-issuing-pull-requests-emacs}

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

## Terminal {#terminal}

- Set up vterm in your init.el file.
- `SPC o T` for opening vterm
- `SPC o t` for opening vterm in a popup window

## File Tree {#file-tree}

- Set up neotree or treemacs in your init.el file.
- `SPC o p` for opening neotree or treemacs

## Others {#others}

- `C-c C-z` to insert a note for a heading in org mode.

<!--listend-->

- `C-c C-c` to insert a tag for a heading in org mode.

## Capturing {#capturing}

- `SPC X` to capture (the new thing gets caputured to a single file but that's fine since we can easily refile it.)
- `SPC m r r` to refile

## Org Roam {#org-roam}

These keybinding only work after installing org-roam. To install org roam edit your `init.el` file and add `(org +roam2)` in its designated place. Watch [this video](https://www.youtube.com/watch?v=AyhPmypHDEw) to understand what org-roam is.

- `SPC n r f` Find an existing node or create a new one.
- `SPC n r i` Insert a link to another node.
- `SPC n r r` Toggle backlinks pane
- `SPC m m o t` Add a roam tag.
- `SPC m m o a` Add a roam alias.

## Sources {#sources}

- [Link to youtube video series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)
- [This org file is mostly from the notes taken from the series above by ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)
- [Three HUGE Mistakes New Emacs Users Make](https://www.youtube.com/watch?v=s0ed8Da3mjE) (they are included in the tips above)

## What to learn <code>[0/2]</code> {#what-to-learn}

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
<https://docs.doomemacs.org/latest/#/usage/keybindings>

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

See also - <https://magit.vc/manual/magit-refcard.pdf>

# Additional Emacs Packages

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
designated place. Watch <https://www.youtube.com/watch?v=AyhPmypHDEw> to
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

```{.python session="yes" results="file"}
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

```{.spice results="drawer" exports="both"}
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

## Elfeed

## Abbrev-mode

## Ropemacs

## tree-sitter

## TRAMP

## ReBuilder

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

- <https://docs.doomemacs.org/latest/> \*

- <https://emacs-lsp.github.io/lsp-mode/page/main-features/> (LSP
  starting point) \*

- <https://github.com/niyumard/Doom-Emacs-Cheat-Sheet> \*

- <https://raw.githubusercontent.com/hackjutsu/vim-cheatsheet/master/README.md>

- <https://raw.githubusercontent.com/LeCoupa/awesome-cheatsheets/master/tools/vim.txt>

- <https://thingsfittogether.com/wp-content/uploads/2021/03/Vim-Cheatsheet-2-Final-Draft.png>

- <https://github.com/rstacruz/cheatsheets/blob/master/vim.md>

- <https://imgur.com/gallery/YLInLlY>

- <https://emacs-lsp.github.io/lsp-mode/page/keybindings/>

- <https://resources.jetbrains.com/storage/products/pycharm/docs/PyCharm_ReferenceCard.pdf>

- <https://vimsheet.com/>

- <https://vim.fandom.com/>

- <https://vim.fandom.com/wiki/Best_Vim_Tips#Really_useful>

- <https://vimhelp.org/vim_faq.txt.html>

- [Link to youtube video
  series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)

- <http://vimcasts.org/>

- <https://vim.fandom.com>

- <https://www.vimgolf.com/>

- <https://www.emacswiki.org/emacs/SiteMap> \*

- <https://hungyi.net/>

- <https://www.emacswiki.org/emacs/PythonProgrammingInEmacs>

- <https://wikemacs.org/wiki/Python>

# [TODO]{.todo .TODO} - need check {#need-check}

- Replace multiple spaces with one \`:%s/$^ *$\\@\<! \\{2,}/ /g\` This
  says \"find 2 or more spaces (\' \\\\{2,}\') that are NOT preceded
  by \'the start of the line followed by zero or more spaces\'\"

<https://github.com/tpope/vim-surround/blob/master/doc/surround.txt>

# [TODO]{.todo .TODO} vim move inside camelCased words (pascal?) {#vim-move-inside-camelcased-words-pascal}

# [TODO]{.todo .TODO} unknown functional {#unknown-functional}

- org-make-toc

- download image from clipboard, save attach...

- make line headline

- quickly add sub-headline

- org-roam subnode find

- increment in emacs (org-shift... can handle this in org-mode)

- splitted text to autofill

- autoindent, based on previous line (as I remember exists specific
  plugin)

- <https://www.reddit.com/r/emacs/comments/a3rajh/chrome_bookmarks_sync_to_org/>

- <https://noonker.github.io/posts/2020-04-22-elfeed/>

\`C-r+0\` - in insert mode inserts the last yanked text, working in
command mode \`C-r+\"\` - in insert mode inserts clipboard, working in
command mode

\`gr\[motion\] grr\` replace with register (yanked) motion / line

\`\[s \]s\` - MoveStatementUp MoveStatementDown

M-x +snippets

bookmarks
<https://www.gnu.org/software/emacs/manual/html_node/emacs/Bookmarks.html#>:\~:text=Bookmarks%20are%20somewhat%20like%20registers,were%20reading%20in%20various%20files.

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

<https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macro-Counter.html>
generate row, column number-ranges

---

You might be looking for the bookmark feature. On vanilla emacs, C-x r m
will bookmark the current file, and C-x r b will let you choose from a
list of bookmarked files. It\'s amazingly useful

---

VIM TUTOR

## Plugins

- [[sniprun]]

Current mail goal: [[my editing workflow]]

- [ ] https://stackoverflow.com/questions/509690/how-can-you-list-the-matches-of-vims-search

## Resources

- [[papis/1ae149d1c843b867b0b254a20df34b4f-neil-drew/notes|Practical Vim: Edit text at the speed of thought]]
- [[papis/82951c75090ce154272484448309812b-neil-drew/notes|Modern Vim: Craft your development environment with Vim 8 and Neovim]]
- [Interactive Vim tutorial](http://www.openvim.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [Vim 01 - Основы - YouTube](https://www.youtube.com/watch?v=zNnsNtBF80g)
- [VimGolf](https://www.vimgolf.com/)
- [Neovim Discourse](https://neovim.discourse.group/categories)
  TODO: describe **core** vim plugins.
  TODO: https://www.youtube.com/@teej_dv

## Emacs navigation

### bookmarks

---

jump to mark `SPC s r`

---
# Resources

- [[papis/1ae149d1c843b867b0b254a20df34b4f-neil-drew/notes]]
- [[papis/82951c75090ce154272484448309812b-neil-drew/notes]]

### [TODO]{.todo .TODO} how to change macro registers in evil, how to execute them? {#how-to-change-macro-registers-in-evil-how-to-execute-them}

### [TODO]{.todo .TODO} drop register? {#drop-register}

### Command line usage examples

---

### Cursor Movements

---

---


## Projects with Projectile (tested) {#projects-with-projectile--tested}

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

## Dired {#dired}

- Dired (Directory Editor) is how you interfaces with a directory
- Press `C-x d` to open dired.
- Use `RET` to go to a folder or open a file.
- Use `-` for going one folder back
- Use `+` for creating a new directory
- Use `d` to mark the files for deletion, press `x` to delete.
- Use `M` to change permissions
- Use `o` to sort by modes.
- Use `O` to change the owner.
- Use `m` to mark and `u` to unmark files or directories.
- `U` to unselect all
- Use `t` to invert the selection.
- `t` to switch between files and directories
- Use `C` to copy.
- Use `R` to move.
- Move with `h`, `j`, `k`, `l`
- Toggle `(` for simple view
- `SPC .` to create or find a file
- `*` to invoke mark dialog
- `* \` to select all directories.
- `C` copy to another window
- `R` move to another window
- `dired-do-what-i-mean-target` set to true
- `i` to edit file/dir name

## Buffers, Windows and Basic Navigation {#buffers-windows-and-basic-navigation}

### Buffers {#buffers}

- Buffers are a special concept in emacs they can be terminals, files,
  directories, etc
- `SPC ,` to open another buffer
  - workspace buffer
- `SPC SHIFT ,` to switch to all buffers
- `SPC b X` You can create a scratch buffer
- `SPC b s` to save and name it

### Windows {#windows}

- `C-w v` window split vertically
- `C-w s` window split horizonal
- `C-w w` to switch windows
- `SPC w q` to kill windows
- `SPC w >` and `SPC w <` to increase and decrease window width
- `SPC w +` and `SPC w -` to increase and decrease window height
- You can use vim motion keys to navigate between open windows for example `SPC w H` moves the window to the left.
- Windows are panes in your screen

### Workspaces {#workspaces}

- `SPC TAB n` New workspace
- `SPC TAB N` Newly named workspace
- `SPC TAB [` Previous workspace
- `SPC TAB ]` Next workspace
- `SPC TAB d` Remove workspace
- `SPC TAB R` Restore last session
- `M-1` Switch to workspace 1
- `M-2` Switch to workspace 2 and so forth.

## Installing Packages using org-super-agenda as an example {#installing-packages-using-org-super-agenda-as-an-example}

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

## Quick, horizontal movements with evil-snipe {#quick-horizontal-movements-with-evil-snipe}

### Inine navigation {#inine-navigation}

- `f` and then the letter you want to navigate to.
  - `,` will go backward
  - `;` will go forward after that "find"
- `t` to find and move cursor to the charachter before what you've searched.
- `v` puts you in vi mode. You can select text by with `v t some-char-you-navigate-to` or `v f some-char-you-navigate-to`
- `;` to jump to the next find
- `,` to jump to the previous one
- `s` to snipe

### Long distance navigation inside the file {#long-distance-navigation-inside-the-file}

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

## Multiple cursor in Emacs with Evil-multiedit {#multiple-cursor-in-emacs-with-evil-multiedit}

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

## Org Mode {#org-mode}

### Basics {#basics}

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

### Links, Hyperlinks and more {#links-hyperlinks-and-more}

- `SPC m l` to add a link to an org page
- You can add `::` to specify a heading or a line number
- You can paste http links as well

### Defining custoom Link Types {#defining-custoom-link-types}

- [Whatch the video about custom links](https://youtube.com/watch?v=Febe4lUK5G4)

### Linking to words &amp; Bookmarks {#linking-to-words-and-bookmarks}

- `SPC n l` stores a link to a particular headline

### Code Snippets &amp; Babel {#code-snippets-and-babel}

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

### Task Management {#task-management}

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

#### Priorities for Tasks {#priorities-for-tasks}

- `SHIFT up` and `SHIFT down` will toggle the priority of tasks
- `org-fancy-priorities` gives you fancy looking priorities

#### Marking Tasks with Tags {#marking-tasks-with-tags}

- Tags can be attached to any headlines
- `SPC m q` to tag a headline
- Example:
  - TODO play more games :fun:
- Tags are hierarchical so nested headings will be tagged with the
  parent header tag
- `org-tag-sparce-tree` will search for headings that only have a specific
  tag

#### Setting a poperty for a task/headline {#setting-a-poperty-for-a-task-headline}

- `SPC m o` is used for setting a property.

<!--list-separator-->

- Marking Headlines with Categories

  - You can use [categories](https://orgmode.org/manual/Categories.html) to change the label in agenda view.

<!--list-separator-->

- Org-Habits

  - If you want to [keep track of your habits](https://orgmode.org/manual/Tracking-your-habits.html) using org mode, you can set the `STYLE` property to habit.
    - If you want to set a category (for chani

### Lists {#lists}

- Two types of lists, ordered and unordered lists
  - `SHIFT right` and `SHIFT left` can be used to change the type of lists.
- You can also change an unorded list by changing the first item to 1. and then typing `C-c C-c` and vice verca.

### Checkboxes {#checkboxes}

- [ ] This is still todo
- [-] This is in progress
- [x] This is a done task

#### You can see how many are done with a "cookie" <code>[1/2]</code> {#you-can-see-how-many-are-done-with-a-cookie}

- [-] Task 1
- [x] Task 2
- You can do this by adding <code>[/]</code> to the heading and pressing `C-c C-c`
- You can't assign a tag or a priority

## Magit {#magit}

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

### Git Commit Flow in More Detail {#git-commit-flow-in-more-detail}

- `t t` to create a tag, default place is the commit you are currently
  selecting
- `V` to select a change in a diff and `x` to discard that change.
- `s` to stage
- `c` to commit, you can `q` to quit the commit screen
- `P` to push and then `p` to your remote or `u` to a another remote

### Magit with Forge for Issuing Pull Requests - Emacs {#magit-with-forge-for-issuing-pull-requests-emacs}

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

## Terminal {#terminal}

- Set up vterm in your init.el file.
- `SPC o T` for opening vterm
- `SPC o t` for opening vterm in a popup window

## File Tree {#file-tree}

- Set up neotree or treemacs in your init.el file.
- `SPC o p` for opening neotree or treemacs

## Others {#others}

- `C-c C-z` to insert a note for a heading in org mode.

<!--listend-->

- `C-c C-c` to insert a tag for a heading in org mode.

## Capturing {#capturing}

- `SPC X` to capture (the new thing gets caputured to a single file but that's fine since we can easily refile it.)
- `SPC m r r` to refile

## Org Roam {#org-roam}

These keybinding only work after installing org-roam. To install org roam edit your `init.el` file and add `(org +roam2)` in its designated place. Watch [this video](https://www.youtube.com/watch?v=AyhPmypHDEw) to understand what org-roam is.

- `SPC n r f` Find an existing node or create a new one.
- `SPC n r i` Insert a link to another node.
- `SPC n r r` Toggle backlinks pane
- `SPC m m o t` Add a roam tag.
- `SPC m m o a` Add a roam alias.

## Sources {#sources}

- [Link to youtube video series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)
- [This org file is mostly from the notes taken from the series above by ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)
- [Three HUGE Mistakes New Emacs Users Make](https://www.youtube.com/watch?v=s0ed8Da3mjE) (they are included in the tips above)

## What to learn <code>[0/2]</code> {#what-to-learn}

- [ ] [Org Roam](https://orgroam.com)
- [ ] abbrev-mode
