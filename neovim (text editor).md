---
title: Neovim (text editor)
date: 2023-02-20
tags:
    - inbox
    - definition
draft: true
sr-due: 2023-03-22
sr-interval: 1
sr-ease: 210
---

[@Neovim] - Hyperextensible Vim-based text editor.

## What I handle by it
- Notes, Weekly calendar - telekasten.nvim together with [[obsidian]]
- File management - netrw
- Code editing (highly customized setup)
- Code blocks running

## Scripts
- If you need markdown links, use `url_to_markdown.sh` script.

TODO: describe **core** vim plugins.

TODO: https://www.youtube.com/@teej_dv

## Uncategorized

Right now I use this color-scheme
<https://raw.githubusercontent.com/navarasu/onedark.nvim/master/lua/onedark/highlights.lua>

Instead, touch and edit the file, you can just use
?
`edit` or `e` file command, from vim or terminal!

`M-\` - copilot toggle
`:h shada` - shada, viminfo analog, store various settings
`:mksession` - save session
`:source` - source file, which can be session
`:mkview [N]` - save view, N is a view name (1-9)
`:loadview [N]` - load view, N is a view name (1-9)
`zf` - fold text object
`gx` - open URL under cursor (`netrw-gx`)
`]d` - next diagnostic
`[d` - previous diagnostic

## Customization

<kbd>ctrl</kbd>+<kbd>s</kbd> - save current buffer
<kbd>:</kbd> for entering a command. Type <kbd>tab</kbd> to complete a command. Type <kbd>ctrl</kbd>+<kbd>d</kbd> to see a list of possible commands. Type <kbd>ctrl</kbd>+<kbd>f</kbd> to list previous commands.

## Resources
- [[@DrewNeilPracticalVimEdit2015|Practical Vim: Edit text at the speed of thought]]
- [[@DrewNeilModernVimCraft2018|Modern Vim: Craft your development environment with Vim 8 and Neovim]]
- [Interactive Vim tutorial](http://www.openvim.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [Vim 01 - Основы - YouTube](https://www.youtube.com/watch?v=zNnsNtBF80g)
- [VimGolf](https://www.vimgolf.com/)

## General
- <kbd>:x</kbd> or <kbd>ZZ</kbd> - quit and save
- <kbd>:q</kbd> or <kbd>ZQ</kbd> - quit without saving
- <kbd>meta</kbd>+<kbd>shift</kbd>+<kbd>del</kbd> - delete current file
- <kbd>ctrl</kbd>+<kbd>space</kbd> - switch project using `kitty sessionizer` script TODO: link file
- <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>p</kbd> - open file in project (`Telescope find_files`)
- <kbd>space</kbd> <kbd>space</kbd> - open file in project using `Telescope frecency` (recently used files)
- <kbd>space</kbd> <kbd>pv</kbd> to open the file explorer (`:Explore`)

## ToDo

-   `SPC o T` to open the vterm in fullscreen
-   `SPC o t` to open the vterm in a popup window
-   `SPC f r` recently visited files
-   `SPC f R` recently visited files in a project
-   `M-x projectile-discover-projects-in-directory` to find projects
    within given folder using Projectile
-   `M-x projectile-discover-projects-in-search-path` to find projects in
    the folder defined by the `projectile-project-search-path` variable
    using Projectile


## ToDo :Explore

-   Dired (Directory Editor) is how you interfaces with a directory
-   Press `C-x d` to open dired.
-   Use `RET` to go to a folder or open a file.
-   Use `-` for going one folder back
-   Use `+` for creating a new directory
-   Use `d` to mark the files for deletion, press `x` to delete.
-   Use `M` to change permissions
-   Use `o` to sort by modes.
-   Use `O` to change the owner.
-   Use `m` to mark and `u` to unmark files or directories.
-   `U` to unselect all
-   Use `t` to invert the selection.
-   `t` to switch between files and directories
-   Use `C` to copy.
-   Use `R` to move.
-   Move with `h`, `j`, `k`, `l`
-   Toggle `(` for simple view
-   `SPC .` to create or find a file
-   `*` to invoke mark dialog
-   `* \` to select all directories.
-   `C` copy to another window
-   `R` move to another window
-   `dired-do-what-i-mean-target` set to true
-   `i` to edit file/dir name


### Buffers {#buffers}

-   Buffers are a special concept in emacs they can be terminals, files,
    directories, etc
-   `SPC ,` to open another buffer
    -   workspace buffer
-   `SPC SHIFT ,` to switch to all buffers
-   `SPC b X` You can create a scratch buffer
-   `SPC b s` to save and name it


### Windows {#windows}

-   `CTRL w v` window split vertically
-   `CTRL w s` window split horizonal
-   `CTRL w w` to switch windows
-   `SPC w q` to kill windows
-   `SPC w >` and `SPC w <` to increase and decrease window width
-   `SPC w +` and `SPC w -` to increase and decrease window height
-   You can use vim motion keys to navigate between open windows for example `SPC w H` moves the window to the left.
-   Windows are panes in your screen


### Workspaces {#workspaces}

-   `SPC TAB n` New workspace
-   `SPC TAB N` Newly named workspace
-   `SPC TAB [` Previous workspace
-   `SPC TAB ]` Next workspace
-   `SPC TAB d` Remove workspace
-   `SPC TAB R` Restore last session
-   `M-1` Switch to workspace 1
-   `M-2` Switch to workspace 2 and so forth.


## Installing Packages using org-super-agenda as an example {#installing-packages-using-org-super-agenda-as-an-example}

-   `SPC f p` to open the config.
-   To add a package, add the package to `.doom.d/package.el`
-   Then close and `doom refresh`
-   Then go to `.doom.d/config.el` to configure the package
-   `def-package!` is a macro you can use to configure packages
    -   `space h help` you can look up method man pages
    -   `:init` is used for setting the package up
    -   `:config` to set configuration after the package has been
        initialized
    -   `:after` lets you set which package it should load after
-   You can use `:after!` to configure packages that are already there


## Quick, horizontal movements with evil-snipe {#quick-horizontal-movements-with-evil-snipe}


### Inine navigation {#inine-navigation}

-   `f` and then the letter you want to navigate to.
    -   `,` will go backward
    -   `;` will go forward after that "find"
-   `t` to find and move cursor to the charachter before what you've searched.
-   `v` puts you in vi mode. You can select text by with `v t some-char-you-navigate-to` or `v f some-char-you-navigate-to`
-   `;` to jump to the next find
-   `,` to jump to the previous one
-   `s` to snipe


### Long distance navigation inside the file {#long-distance-navigation-inside-the-file}

-   Evil-snipe lets you go to all the occuranses in your document
-   `g s SPC` to use avy and going to a certain word in file.
-   `t` is the same thing except for a character you want to jump to before the one you insert
-   `s` to do a double character search
-   Evil-snipe will remember your last search so `,` and `;` will navigate
-   `F` or `T` to go backwards
-   `g s SPC` and then select the letter that avy gives you to navigate to that spot
    -   These letters are on your home row so they are easy to click
-   `SPC h v` for variable, to set the avy variable to search all open
    windows
    -   `avy-all-windows` lets you search in all windows open.
-   You can remove a word with
    `g s SPC select-one-letter x select-the-removal-spot`
    -   You can use `X` to stay in your original spot of search
-   You can go `g s space select-one-letter i select-the-correction-spot`
    to correct the spelling of the search
    -   Install ispell on your OS first
-   You can `yank` a word from one place to another with
    `g s SPC select-one-letter y select-the-correction-spot-to-paste`
-   Use `t` to "teleport" the word from one place to another
    `g s SPC select-one-letter t select-the-correction-spot-to-teleport`


## Multiple cursor in Emacs with Evil-multiedit {#multiple-cursor-in-emacs-with-evil-multiedit}

-   Make selections and then edit those selections interactively
-   `M d` will select the current word, and again will find another
    occurance
-   `M D` will find the occurence upward
-   You can use a visual selection to select multiple words.
-   `R` will select all occurances
-   `CTRL n` for next selection `CTRL p` for previous
-   Exclude matches with `RET`
-   You can make an edit and the changes will be reflected in all the
    selection


## Org Mode {#org-mode}


### Basics {#basics}

-   Org mode gives you structure to your document
-   `*` for a h1 `**` for an h2 and so on
-   You can `TAB` a section to fold a subtree (hide it)
-   You can use `SHIFT TAB` to cycle through folded states
-   `CTRL return` to create a headline of the same type
-   `M arrow up` lets you shift the position of the section
-   `M h` promotes a headline to the next level
-   `M l` demotes
-   You can create lists
    1.  onw
    2.  2
    3.  wooo
    4.  3


### Links, Hyperlinks and more {#links-hyperlinks-and-more}

-   `SPC m l` to add a link to an org page
-   You can add `::` to specify a heading or a line number
-   You can paste http links as well


### Defining custoom Link Types {#defining-custoom-link-types}

-   [Whatch the video about custom links](https://youtube.com/watch?v=Febe4lUK5G4)


### Linking to words &amp; Bookmarks {#linking-to-words-and-bookmarks}

-   `SPC n l` stores a link to a particular headline


### Code Snippets &amp; Babel {#code-snippets-and-babel}

-   `SPC i s` for inserting code snippets
    -   Example:

        ```emacs-lisp
        (+ 2 3 4 5)
        ```
-   `C-c C-c` to execute the code.
-   `SPC m '` to edit inside the babel in another buffer.
-   Results will show up in a `##+RESULTS` header
-   This feature is called Babel
-   One snippet can consume the output of another snippet
-   You can create your own snippets in the following directory: `~/.doom.d/snippets/`


### Task Management {#task-management}

-   Create a task by prefixing any heading with `TODO`
-   `DONE` means the task is done
-   You can create your custom key words by changing this variable: `org-todo-keywords`
    -   remember you can get to your variables through `SPC h v` (M-x counsel-describe-variable)
    -   These values are already set in Doom:

        ```text
        ((sequence "TODO(t)" "PROJ(p)" "STRT(s)" "WAIT(w)" "HOLD(h)" "|" "DONE(d)" "KILL(k)")
        (sequence "[ ](T)" "[-](S)" "[?](W)" "|" "[X](D)"))
        ```
-   `SPC m t` to change a status of a todo
-   `SHIFT left` and `SHIFT right` can be used to change the status of a todo as well.
-   If you finish a task with a command, org mode will add a date that you "closed" the task.
-   `SPC o a t` to open the agenda -&gt; todo list
-   `q` to quit
-   `org-agenda-files` is a variable you can set to filter which files agenda searches for todos in.


#### Priorities for Tasks {#priorities-for-tasks}

-   `SHIFT up` and `SHIFT down` will toggle the priority of tasks
-   `org-fancy-priorities` gives you fancy looking priorities


#### Marking Tasks with Tags {#marking-tasks-with-tags}

-   Tags can be attached to any headlines
-   `SPC m q` to tag a headline
-   Example:
    -   TODO play more games :fun:
-   Tags are hierarchical so nested headings will be tagged with the
    parent header tag
-   `org-tag-sparce-tree` will search for headings that only have a specific
    tag


#### Setting a poperty for a task/headline {#setting-a-poperty-for-a-task-headline}

-   `SPC m o` is used for setting a property.

<!--list-separator-->

-  Marking Headlines with Categories

    -   You can use [categories](https://orgmode.org/manual/Categories.html) to change the label in agenda view.

<!--list-separator-->

-  Org-Habits

    -   If you want to [keep track of your habits](https://orgmode.org/manual/Tracking-your-habits.html) using org mode, you can set the `STYLE` property to habit.
        -   If you want to set a category (for chani


### Lists {#lists}

-   Two types of lists, ordered and unordered lists
    -   `SHIFT right` and `SHIFT left` can be used to change the type of lists.
-   You can also change an unorded list by changing the first item to 1. and then typing `C-c C-c` and vice verca.


### Checkboxes {#checkboxes}

-   [ ] This is still todo
-   [-] This is in progress
-   [X] This is a done task


#### You can see how many are done with a "cookie" <code>[1/2]</code> {#you-can-see-how-many-are-done-with-a-cookie}

-   [-] Task 1
-   [X] Task 2
-   You can do this by adding <code>[/]</code> to the heading and pressing `C-c C-c`
-   You can't assign a tag or a priority


## Magit {#magit}

-   Magit is enabled by default in Doom Emacs's init.el
-   `SPC g g` shows Magit status page
    -   Most commands are done from the status page
    -   Use tab to expand headlines in the status page
-   `?` in Magit's status page for a nice list of available commands and help, `q` to close this help page
-   Open diff view for a file with `TAB`
-   Press `s` under "Unstaged changes" to stage a change
    -   `u` to undo a change
    -   `c` to commit
-   `b s` for branch and spinoff to create another branch, rewinding the
    commits you made to master
-   `b b` to switch branches


### Git Commit Flow in More Detail {#git-commit-flow-in-more-detail}

-   `t t` to create a tag, default place is the commit you are currently
    selecting
-   `V` to select a change in a diff and `x` to discard that change.
-   `s` to stage
-   `c` to commit, you can `q` to quit the commit screen
-   `P` to push and then `p` to your remote or `u` to a another remote


### Magit with Forge for Issuing Pull Requests - Emacs {#magit-with-forge-for-issuing-pull-requests-emacs}

-   Forge is installed in emacs doom
-   `@` for forge
-   Set up forge with `M x forge-pull`
    -   the first time you will get a token from github
-   `@ c p` to create a pull request with forge
    -   select the base branch
    -   then select the target branch
    -   then provide a short description
    -   `CTRL c CTRL c` to finish the pull request
-   Now there will be a `pull requests` tab


## Terminal {#terminal}

-   Set up vterm in your init.el file.
-   `SPC o T` for opening vterm
-   `SPC o t` for opening vterm in a popup window


## File Tree {#file-tree}

-   Set up neotree or treemacs in your init.el file.
-   `SPC o p` for opening neotree or treemacs


## Others {#others}

-   `C-c C-z` to insert a note for a heading in org mode.

<!--listend-->

-   `C-c C-c` to insert a tag for a heading in org mode.


## Capturing {#capturing}

-   `SPC X` to capture (the new thing gets caputured to a single file but that's fine since we can easily refile it.)
-   `SPC m r r` to refile


## Org Roam {#org-roam}

These keybinding only work after installing org-roam. To install org roam edit your `init.el` file and add `(org +roam2)` in its designated place. Watch [this video](https://www.youtube.com/watch?v=AyhPmypHDEw) to understand what org-roam is.

-   `SPC n r f` Find an existing node or create a new one.
-   `SPC n r i` Insert a link to another node.
-   `SPC n r r` Toggle backlinks pane
-   `SPC m m o t` Add a roam tag.
-   `SPC m m o a` Add a roam alias.


## Sources {#sources}

-   [Link to youtube video series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)
-   [This org file is mostly from the notes taken from the series above by ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)
-   [Three HUGE Mistakes New Emacs Users Make](https://www.youtube.com/watch?v=s0ed8Da3mjE) (they are included in the tips above)


## What to learn <code>[0/2]</code> {#what-to-learn}

-   [ ] [Org Roam](https://orgroam.com)
-   [ ] abbrev-mode


## Other notes

Find each occurrence of 'foo' (in all lines), and replace it with 'bar'. [c] - confirmations.
?
`:%s/foo/bar/g[c]`

The replacement will check each line in the buffer, but will only match within the last visual selection
?
`:%s/\%Vfoo/bar/g`

How split line
?
- <kbd>a<cr><esc></kbd>
- <kbd>r<cr></kbd>
- <kbd>i<cr><esc></kbd>

Quick Switch between windows
?
<kbd>{number}<C-w><C-w></kbd>

## Paths

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
Hit <kbd><C-r>"</kbd>. If you have literal control characters in what you have yanked, use <kbd><C-r><Ctrl-o>"</kbd>.
Source: https://stackoverflow.com/questions/3997078/how-to-paste-yanked-text-into-the-vim-command-line

How to paste system clipboard into the Vim command line?
?
I use <kbd>C-S-v</kbd>, it's working in my terminal. Or use <kbd><C-r>"</kbd>.

How do you search through Vim's command history?
?
Use <kbd>q:</kbd> or <kbd>q/</kbd> in normal mode and then press <kbd>/</kbd>.
Press <kbd>C-f</kbd> in command mode to open the command history window.
For more about the command history window, see `:h cmdwin`.

How quickly close command history window?
?
<kbd><C-c><C-c></kbd>


## Netrw

Go up a directory::<kbd>-</kbd>
Go back to the previous directory in the history::<kbd>u</kbd>
Jump to the most recent directory saved on the "Bookmarks". To create a bookmark we use <kbd>mb</kbd>::<kbd>gb</kbd>
Open a preview window::<kbd>p</kbd>
Close the preview window::<kbd><C-w>z</kbd>
Toggle hidden files::<kbd>gh</kbd>
Create a new file::<kbd>%</kbd>
Create a new directory::<kbd>d</kbd>
Rename a file::<kbd>R</kbd>
Delete a file::<kbd>D</kbd>

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
mkdx insert <kbd> shortcut::<<Tab>
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
Browse media::`<leader>zm`
Rename note::`<leader>zr`
Paste image and link::`<leader>zi`

# Resources

- [[@DrewNeilPracticalVimEdit2015]]
- [[@DrewNeilModernVimCraft2018]]


# VIM SUPER BASE DRAFT
https://gist.github.com/t-mart/610795fcf7998559ea80

TODO: find/port/use

## Vim base commands

select something::`v[motion]`
copy something::`y[motion]`
delete something (can be used with black hole register)::`d[motion]`
change something (can be used with black hole register)::`c[motion]`

## Vim Text objects (motions)

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

## Vim Modes

normal, for navigation and manipulation of text::`ESC`
insert, for inserting new text.::`iIaAoO`
visual, for navigation and manipulation of text selections::`v`
command-line, for entering editor commands::`:`
replace mode, replace existing text by directly typing over it.::`R`
similar to visual, but with a more MS Windows-like behavior::`select`
similar to the command-line mode but optimized for batch processing::`ex-mode`

## Vim registers

It's sort of space in memory to store text. Every register can be accessed using double quote `"`.
For example `r` register, copy/paste will be like this `"ry` / `"rp`.
You can access register in insert/command mode by `C-r[register name]`.
You can use the `:reg[a|b|c]` command to see all the registers and their content.
If you use `qw` to record a macro, the register `"w` will have all actions which you have done.

The unnamed register (yank, delete) `""`
10 numbered registers (latest yank, newest, ..., oldest) `"0` to `"9`
The last entered text (read only) `".`
Current file path (read only) `"%`
Most recently used command (read only) `":`
The alternate file register (sort of last edited file) `"#`
The black hole register `"_`
The selection (system clipboard) `"*`, `"+`
Last search pattern register `"/`
26 Named registers \"a to \"z (or \"A to\"Z), sort of clipboards `[a-z]`
The small delete register `"-`
The expression register, useful for calculation `C-r =...` `"=`

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

 -------------------------------------------------- --------------------------------------
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
 -------------------------------------------------- --------------------------------------

# Files

## Evil files

 ------------------------------------------------------- -----------------------------------
 edit a file in a new buffer `:e [filename]`
 show buffer whose filename begins with \"vimrc\" `:b vimrc`
 edit the file whose name is under or after the cursor `gf`
 write current file, if modified, and exit `ZZ`
 quit current file and exit, ignoring changes `ZQ`, `:q!`
 quit without saving and exit with error code `:cq`
 exit `:q`
 save without exiting `:w`
 save and exit `:x`
 write the current file and exit `:wq [file]`
 write/force write and exit `:wq! [file]`
 same as above, but only write the lines in \[range\] `:[range]wq[!]`
 ------------------------------------------------------- -----------------------------------

## Emacs files

 ---------------------------------------------------- ------------------------------------
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
 ---------------------------------------------------- ------------------------------------

### Treemacs

 ------------------------------------------------------------------------------- --------------------------
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
 ------------------------------------------------------------------------------- --------------------------

### Dired

 --------------------------------------------------------------- ----------------------
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
 --------------------------------------------------------------- ----------------------

# Windows

## Evil windows

 -------------------------------------- -----------------------
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
 -------------------------------------- -----------------------

## Emacs windows

You can use vim motion keys to navigate between open windows, kill
windows, resize windows for example SPC w H moves the window to the
left.

### Workspaces

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
 go to #N tab `SPC Tab [num]`
 Move Tab Forward/Backward `M-x workspace/swap-left[right]`
 ------------------------------------- ---------------------------------------------

### Buffers

 --------------------------------------------------- ------------------------
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
 --------------------------------------------------- ------------------------

# Navigation (movement)

## Evil navigation

 ------------------------------------------------- ------------------
 puts the current line at the top `zt`
 puts the current line at the middle `zz`
 puts the current line at the bottom `zb`
 Scrolling up, cursor staying on the same line `C-e`
 Scrolling down, cursor staying on the same line `C-y`
 ------------------------------------------------- ------------------

### Cursor Movements

 ------------------------------------------------------------------ ----------------------
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
 ------------------------------------------------------------------ ----------------------

### Bookmarks

 -------------------------------------------------------- -----------------------
 list all the current marks `:marks`
 make a bookmark named a at the current cursor position `m[a]`
 go to position of bookmark a `` `[a] ``
 go to the line with bookmark a `'[a]`
 go to the line that you last edited `` `. ``
 -------------------------------------------------------- -----------------------

## Emacs navigation

### bookmarks

 -------------- ----------------------
 jump to mark `SPC s r`
 -------------- ----------------------

# Search & Replace

## Evil search & replace

``` example
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

``` example
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

 ----------------------------------------------------------------------- --------------------------
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
 ----------------------------------------------------------------------- --------------------------

## Evil deleting text

 ------------------------------------------------------------------------------ ------------------------
 delete current character, previous character `x`
 delete previous character `X`
 delete the current word `dw`
 delete (cut) a line `dd`
 delete until the next \' character on the line (replace \' by any character) `dt'`
 delete from cursor to end of line `D`
 delete \[range\] lines `:[range]d`
 ------------------------------------------------------------------------------ ------------------------

## [TODO]{.todo .TODO} [Evil surround](https://github.com/emacs-evil/evil-surround) {#evil-surround}

``` example
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

 ---------------- ---------------------------
 comment line `gcc`
 comment motion `gc[motion,a]`
 ---------------- ---------------------------

## Emacs editing text

``` example
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

``` example
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

``` example
SPC c f format buffer/region
SPC c w Delete trailing whitespace
SPC c W Delete trailing new lines
SPC c l = LSP formatting
M-s h Higlight menu
```

# Evil Visual Mode

``` example
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

``` example
q[a] start recording macro 'a'
q end recording macro
@a replay macro 'a'
@: replay last command
```

# Refactor and Clean up

## Evil refactor and clean up

``` example
]s next misspelled word
[s previous misspelled word
zg add word to wordlist
z= suggest word
```

## Emacs refactor and clean up

``` example
C-, flyspell next error
SPC t s toggle flyspell
```

# Emacs & Evil Commands

``` example
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

``` example
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

``` example
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

``` example
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

``` example
SPC f y yank file path
SPC f Y yank file path from project
SPC i y insert text from kill-ring (clipboard)
SPC n y org export to clipboard
SPC n Y org export to clipboard as rich text
```

# Emacs Version Control (magit)

``` example
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

``` example
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

``` example
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

``` example
C-u C-c C-l in an org-buffer insert svg, png images directly from cliboard, save with human-readable name.
```

### [Org Roam](https://orgroam.com)

These keybinding only work after installing org-roam. To install org
roam edit your \`init.el\` file and add \`(org +roam2)\` in its
designated place. Watch <https://www.youtube.com/watch?v=AyhPmypHDEw> to
understand what org-roam is.

``` example
SPC n r f Find an existing node or create a new one.
SPC n r i Insert a link to another node.
SPC n r r Toggle backlinks pane
SPC m m o t Add a roam tag.
SPC m m o a Add a roam alias.
```

### Babel

``` example
SPC m ' edit inside the babel in another buffer.
SPC m k org babel remove results
```

1. Python code with mathplotlib graph

 ``` {.python session="yes" results="file"}
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

 ``` {.spice results="drawer" exports="both"}
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

``` example
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

----

You might be looking for the bookmark feature. On vanilla emacs, C-x r m
will bookmark the current file, and C-x r b will let you choose from a
list of bookmarked files. It\'s amazingly useful





-----
VIM TUTOR

## Plugins
- [[sniprun]]

Current mail goal: [[switch to neovim path]]
- [ ] https://stackoverflow.com/questions/509690/how-can-you-list-the-matches-of-vims-search


## Markdown Snippets
`codeblock` - insert code block
`code` - insert inline code
`pyc` - insert python code block
`javac` - insert java code block
`clc` - insert c code block
`cppc` - insert CPP code block
`jsc` - insert JavaScript code block
`phpc` - insert PHP code block
`sqlc` - insert SQL code block
`tsc` - insert typescript code block
`rubyc` - insert ruby code block
`goc` - insert go code block
`rustc` - insert rust code block
`lua` - insert Lua code block
`shc` - insert bash code block

## Resources
- [[@DrewNeilPracticalVimEdit2015|Practical Vim: Edit text at the speed of thought]]
- [[@DrewNeilModernVimCraft2018|Modern Vim: Craft your development environment with Vim 8 and Neovim]]
- [Interactive Vim tutorial](http://www.openvim.com/)
- [Vim Tips Wiki | Fandom](https://vim.fandom.com/wiki/Vim_Tips_Wiki)
- [Vim 01 - Основы - YouTube](https://www.youtube.com/watch?v=zNnsNtBF80g)
- [VimGolf](https://www.vimgolf.com/)
- [Neovim Discourse](https://neovim.discourse.group/categories)
TODO: describe **core** vim plugins.
TODO: https://www.youtube.com/@teej_dv

## What I handle by vim

- File management - netrw
- Notes, Weekly calendar - telekasten.nvim
- Code editing (highly customized setup)
- Code blocks running

## Scripts

`url_to_markdown.sh` - convert URL to markdown snippet

## Tips

#k - up to # line
#j - down to # line

switch to previous file, the best alternative to c-o
c-^

Generate abbrev using lua:
```lua
vim.cmd.inoreabbrev({
  "<buffer>", -- I think this is optional
  "foo",
  "bar",
})
```

You can skip inserting abbreviation by pressing <kbd>ctrl</kbd>+<kbd>v</kbd> <kbd>space</kbd> after typing abbreviation.

How to add permanent line numbers to a file?
?
`:%s/^/\=line('.').". "`
https://vi.stackexchange.com/questions/688/how-to-add-permanent-line-numbers-to-a-file


Instead, touch and edit the file, you can just use
?
<kbd>:edit</kbd> or <kbd>:e</kbd> file command, from vim or terminal (`:e file_name`)!

## Uncategorized

Right now I use this color-scheme
<https://raw.githubusercontent.com/navarasu/onedark.nvim/master/lua/onedark/highlights.lua>


## Custom keybindings

[[copilot]] toggle
?
<kbd>M-\\</kbd>

Save current buffer
?
<kbd>ctrl</kbd>+<kbd>s</kbd>

Delete current file
?
<kbd>meta</kbd>+<kbd>shift</kbd>+<kbd>del</kbd>

## Sessions

Save current session
?
<kbd>:mksession</kbd>, more info: `:h mksession`

Source file, which can be session
?
<kbd>:source</kbd> `file` or <kbd>:so</kbd> `file`

Save view
?
<kbd>:mkview [N]</kbd> - N is a view name (1-9).
This use `shada` file, which is a viminfo analog. Check `:h shada` for more info.

Load view
?
<kbd>:loadview [N]</kbd>, N is a view name (1-9)


## Uncategorized

Fold text object ...<motion>
?
<kbd>zf</kbd>

Open URL under cursor, `:h netrw-gx`
?
<kbd>gx</kbd>
Also <kbd>gX</kbd>, this is my custom mapping

Next/Previous diagnostic item
?
<kbd>]d</kbd>, <kbd>[d</kbd>

## General

Save without exiting
?
<kbd>:w</kbd>

Save and exit
?
<kbd>:x</kbd>

Write current file, if modified, and exit
?
<kbd>ZZ</kbd>

Quit current file and exit, ignoring changes
?
<kbd>ZQ</kbd>, <kbd>:q!</kbd>

Quit without saving and exit with error code
?
<kbd>:cq</kbd>

Exit, without saving, if no changes were made
?
<kbd>:q</kbd>

Write the current `file` and exit
?
<kbd>:wq</kbd> `file`

Write/force write and exit
?
<kbd>:wq!</kbd> `file`

Write/force write and exit, but only write the lines in \[range\]
?
:[range]<kbd>wq[!]</kbd>

## Projects with Projectile (tested) {#projects-with-projectile--tested}

-   <kbd>SPC p p</kbd> to open a project
-   <kbd>SPC SPC</kbd> to open a file in a project
-   <kbd>SPC o p</kbd> to open the file explorer
-   <kbd>SPC o T</kbd> to open the vterm in fullscreen
-   <kbd>SPC o t</kbd> to open the vterm in a popup window
-   <kbd>SPC f r</kbd> recently visited files
-   <kbd>SPC f R</kbd> recently visited files in a project
-   <kbd>M-x projectile-discover-projects-in-directory</kbd> to find projects
    within given folder using Projectile
-   <kbd>M-x projectile-discover-projects-in-search-path</kbd> to find projects in
    the folder defined by the <kbd>projectile-project-search-path</kbd> variable
    using Projectile


## Dired {#dired}

-   Dired (Directory Editor) is how you interfaces with a directory
-   Press <kbd>C-x d</kbd> to open dired.
-   Use <kbd>RET</kbd> to go to a folder or open a file.
-   Use <kbd>-</kbd> for going one folder back
-   Use <kbd>+</kbd> for creating a new directory
-   Use <kbd>d` to mark the files for deletion, press `x</kbd> to delete.
-   Use <kbd>M</kbd> to change permissions
-   Use <kbd>o</kbd> to sort by modes.
-   Use <kbd>O</kbd> to change the owner.
-   Use <kbd>m` to mark and `u</kbd> to unmark files or directories.
-   <kbd>U</kbd> to unselect all
-   Use <kbd>t</kbd> to invert the selection.
-   <kbd>t</kbd> to switch between files and directories
-   Use <kbd>C</kbd> to copy.
-   Use <kbd>R</kbd> to move.
-   Move with <kbd>h`, `j`, `k`, `l</kbd>
-   Toggle <kbd>(</kbd> for simple view
-   <kbd>SPC .</kbd> to create or find a file
-   <kbd>*</kbd> to invoke mark dialog
-   <kbd>* \</kbd> to select all directories.
-   <kbd>C</kbd> copy to another window
-   <kbd>R</kbd> move to another window
-   <kbd>dired-do-what-i-mean-target</kbd> set to true
-   <kbd>i</kbd> to edit file/dir name


## Buffers, Windows and Basic Navigation {#buffers-windows-and-basic-navigation}


### Buffers {#buffers}

-   Buffers are a special concept in emacs they can be terminals, files,
    directories, etc
-   <kbd>SPC ,</kbd> to open another buffer
    -   workspace buffer
-   <kbd>SPC SHIFT ,</kbd> to switch to all buffers
-   <kbd>SPC b X</kbd> You can create a scratch buffer
-   <kbd>SPC b s</kbd> to save and name it


### Windows {#windows}

-   <kbd>CTRL w v</kbd> window split vertically
-   <kbd>CTRL w s</kbd> window split horizonal
-   <kbd>CTRL w w</kbd> to switch windows
-   <kbd>SPC w q</kbd> to kill windows
-   <kbd>SPC w >` and `SPC w <</kbd> to increase and decrease window width
-   <kbd>SPC w +` and `SPC w -</kbd> to increase and decrease window height
-   You can use vim motion keys to navigate between open windows for example <kbd>SPC w H</kbd> moves the window to the left.
-   Windows are panes in your screen


### Workspaces {#workspaces}

-   <kbd>SPC TAB n</kbd> New workspace
-   <kbd>SPC TAB N</kbd> Newly named workspace
-   <kbd>SPC TAB [</kbd> Previous workspace
-   <kbd>SPC TAB ]</kbd> Next workspace
-   <kbd>SPC TAB d</kbd> Remove workspace
-   <kbd>SPC TAB R</kbd> Restore last session
-   <kbd>M-1</kbd> Switch to workspace 1
-   <kbd>M-2</kbd> Switch to workspace 2 and so forth.


## Installing Packages using org-super-agenda as an example {#installing-packages-using-org-super-agenda-as-an-example}

-   <kbd>SPC f p</kbd> to open the config.
-   To add a package, add the package to <kbd>.doom.d/package.el</kbd>
-   Then close and <kbd>doom refresh</kbd>
-   Then go to <kbd>.doom.d/config.el</kbd> to configure the package
-   <kbd>def-package!</kbd> is a macro you can use to configure packages
    -   <kbd>space h help</kbd> you can look up method man pages
    -   <kbd>:init</kbd> is used for setting the package up
    -   <kbd>:config</kbd> to set configuration after the package has been
        initialized
    -   <kbd>:after</kbd> lets you set which package it should load after
-   You can use <kbd>:after!</kbd> to configure packages that are already there


## Quick, horizontal movements with evil-snipe {#quick-horizontal-movements-with-evil-snipe}


### Inine navigation {#inine-navigation}

-   <kbd>f</kbd> and then the letter you want to navigate to.
    -   <kbd>,</kbd> will go backward
    -   <kbd>;</kbd> will go forward after that "find"
-   <kbd>t</kbd> to find and move cursor to the charachter before what you've searched.
-   <kbd>v` puts you in vi mode. You can select text by with `v t some-char-you-navigate-to` or `v f some-char-you-navigate-to</kbd>
-   <kbd>;</kbd> to jump to the next find
-   <kbd>,</kbd> to jump to the previous one
-   <kbd>s</kbd> to snipe


### Long distance navigation inside the file {#long-distance-navigation-inside-the-file}

-   Evil-snipe lets you go to all the occuranses in your document
-   <kbd>g s SPC</kbd> to use avy and going to a certain word in file.
-   <kbd>t</kbd> is the same thing except for a character you want to jump to before the one you insert
-   <kbd>s</kbd> to do a double character search
-   Evil-snipe will remember your last search so <kbd>,` and `;</kbd> will navigate
-   <kbd>F` or `T</kbd> to go backwards
-   <kbd>g s SPC</kbd> and then select the letter that avy gives you to navigate to that spot
    -   These letters are on your home row so they are easy to click
-   <kbd>SPC h v</kbd> for variable, to set the avy variable to search all open
    windows
    -   <kbd>avy-all-windows</kbd> lets you search in all windows open.
-   You can remove a word with
    <kbd>g s SPC select-one-letter x select-the-removal-spot</kbd>
    -   You can use <kbd>X</kbd> to stay in your original spot of search
-   You can go <kbd>g s space select-one-letter i select-the-correction-spot</kbd>
    to correct the spelling of the search
    -   Install ispell on your OS first
-   You can <kbd>yank</kbd> a word from one place to another with
    <kbd>g s SPC select-one-letter y select-the-correction-spot-to-paste</kbd>
-   Use <kbd>t</kbd> to "teleport" the word from one place to another
    <kbd>g s SPC select-one-letter t select-the-correction-spot-to-teleport</kbd>


## Multiple cursor in Emacs with Evil-multiedit {#multiple-cursor-in-emacs-with-evil-multiedit}

-   Make selections and then edit those selections interactively
-   <kbd>M d</kbd> will select the current word, and again will find another
    occurance
-   <kbd>M D</kbd> will find the occurence upward
-   You can use a visual selection to select multiple words.
-   <kbd>R</kbd> will select all occurances
-   <kbd>CTRL n` for next selection `CTRL p</kbd> for previous
-   Exclude matches with <kbd>RET</kbd>
-   You can make an edit and the changes will be reflected in all the
    selection


## Org Mode {#org-mode}


### Basics {#basics}

-   Org mode gives you structure to your document
-   <kbd>*` for a h1 `**</kbd> for an h2 and so on
-   You can <kbd>TAB</kbd> a section to fold a subtree (hide it)
-   You can use <kbd>SHIFT TAB</kbd> to cycle through folded states
-   <kbd>CTRL return</kbd> to create a headline of the same type
-   <kbd>M arrow up</kbd> lets you shift the position of the section
-   <kbd>M h</kbd> promotes a headline to the next level
-   <kbd>M l</kbd> demotes
-   You can create lists
    1.  onw
    2.  2
    3.  wooo
    4.  3


### Links, Hyperlinks and more {#links-hyperlinks-and-more}

-   <kbd>SPC m l</kbd> to add a link to an org page
-   You can add <kbd>::</kbd> to specify a heading or a line number
-   You can paste http links as well


### Defining custoom Link Types {#defining-custoom-link-types}

-   [Whatch the video about custom links](https://youtube.com/watch?v=Febe4lUK5G4)


### Linking to words &amp; Bookmarks {#linking-to-words-and-bookmarks}

-   <kbd>SPC n l</kbd> stores a link to a particular headline


### Code Snippets &amp; Babel {#code-snippets-and-babel}

-   <kbd>SPC i s</kbd> for inserting code snippets
    -   Example:

        <kbd>`</kbd>emacs-lisp
        (+ 2 3 4 5)
        <kbd>`</kbd>
-   <kbd>C-c C-c</kbd> to execute the code.
-   <kbd>SPC m '</kbd> to edit inside the babel in another buffer.
-   Results will show up in a <kbd>##+RESULTS</kbd> header
-   This feature is called Babel
-   One snippet can consume the output of another snippet
-   You can create your own snippets in the following directory: <kbd>~/.doom.d/snippets/</kbd>


### Task Management {#task-management}

-   Create a task by prefixing any heading with <kbd>TODO</kbd>
-   <kbd>DONE</kbd> means the task is done
-   You can create your custom key words by changing this variable: <kbd>org-todo-keywords</kbd>
    -   remember you can get to your variables through <kbd>SPC h v</kbd> (M-x counsel-describe-variable)
    -   These values are already set in Doom:

        <kbd>`</kbd>text
        ((sequence "TODO(t)" "PROJ(p)" "STRT(s)" "WAIT(w)" "HOLD(h)" "|" "DONE(d)" "KILL(k)")
        (sequence "[ ](T)" "[-](S)" "[?](W)" "|" "[X](D)"))
        <kbd>`</kbd>
-   <kbd>SPC m t</kbd> to change a status of a todo
-   <kbd>SHIFT left` and `SHIFT right</kbd> can be used to change the status of a todo as well.
-   If you finish a task with a command, org mode will add a date that you "closed" the task.
-   <kbd>SPC o a t</kbd> to open the agenda -&gt; todo list
-   <kbd>q</kbd> to quit
-   <kbd>org-agenda-files</kbd> is a variable you can set to filter which files agenda searches for todos in.


#### Priorities for Tasks {#priorities-for-tasks}

-   <kbd>SHIFT up` and `SHIFT down</kbd> will toggle the priority of tasks
-   <kbd>org-fancy-priorities</kbd> gives you fancy looking priorities


#### Marking Tasks with Tags {#marking-tasks-with-tags}

-   Tags can be attached to any headlines
-   <kbd>SPC m q</kbd> to tag a headline
-   Example:
    -   TODO play more games :fun:
-   Tags are hierarchical so nested headings will be tagged with the
    parent header tag
-   <kbd>org-tag-sparce-tree</kbd> will search for headings that only have a specific
    tag


#### Setting a poperty for a task/headline {#setting-a-poperty-for-a-task-headline}

-   <kbd>SPC m o</kbd> is used for setting a property.

<!--list-separator-->

-  Marking Headlines with Categories

    -   You can use [categories](https://orgmode.org/manual/Categories.html) to change the label in agenda view.

<!--list-separator-->

-  Org-Habits

    -   If you want to [keep track of your habits](https://orgmode.org/manual/Tracking-your-habits.html) using org mode, you can set the <kbd>STYLE</kbd> property to habit.
        -   If you want to set a category (for chani


### Lists {#lists}

-   Two types of lists, ordered and unordered lists
    -   <kbd>SHIFT right` and `SHIFT left</kbd> can be used to change the type of lists.
-   You can also change an unorded list by changing the first item to 1. and then typing <kbd>C-c C-c</kbd> and vice verca.


### Checkboxes {#checkboxes}

-   [ ] This is still todo
-   [-] This is in progress
-   [X] This is a done task


#### You can see how many are done with a "cookie" <code>[1/2]</code> {#you-can-see-how-many-are-done-with-a-cookie}

-   [-] Task 1
-   [X] Task 2
-   You can do this by adding <code>[/]</code> to the heading and pressing <kbd>C-c C-c</kbd>
-   You can't assign a tag or a priority


## Magit {#magit}

-   Magit is enabled by default in Doom Emacs's init.el
-   <kbd>SPC g g</kbd> shows Magit status page
    -   Most commands are done from the status page
    -   Use tab to expand headlines in the status page
-   <kbd>?` in Magit's status page for a nice list of available commands and help, `q</kbd> to close this help page
-   Open diff view for a file with <kbd>TAB</kbd>
-   Press <kbd>s</kbd> under "Unstaged changes" to stage a change
    -   <kbd>u</kbd> to undo a change
    -   <kbd>c</kbd> to commit
-   <kbd>b s</kbd> for branch and spinoff to create another branch, rewinding the
    commits you made to master
-   <kbd>b b</kbd> to switch branches


### Git Commit Flow in More Detail {#git-commit-flow-in-more-detail}

-   <kbd>t t</kbd> to create a tag, default place is the commit you are currently
    selecting
-   <kbd>V` to select a change in a diff and `x</kbd> to discard that change.
-   <kbd>s</kbd> to stage
-   <kbd>c` to commit, you can `q</kbd> to quit the commit screen
-   <kbd>P` to push and then `p` to your remote or `u</kbd> to a another remote


### Magit with Forge for Issuing Pull Requests - Emacs {#magit-with-forge-for-issuing-pull-requests-emacs}

-   Forge is installed in emacs doom
-   <kbd>@</kbd> for forge
-   Set up forge with <kbd>M x forge-pull</kbd>
    -   the first time you will get a token from github
-   <kbd>@ c p</kbd> to create a pull request with forge
    -   select the base branch
    -   then select the target branch
    -   then provide a short description
    -   <kbd>CTRL c CTRL c</kbd> to finish the pull request
-   Now there will be a <kbd>pull requests</kbd> tab


## Terminal {#terminal}

-   Set up vterm in your init.el file.
-   <kbd>SPC o T</kbd> for opening vterm
-   <kbd>SPC o t</kbd> for opening vterm in a popup window


## File Tree {#file-tree}

-   Set up neotree or treemacs in your init.el file.
-   <kbd>SPC o p</kbd> for opening neotree or treemacs


## Others {#others}

-   <kbd>C-c C-z</kbd> to insert a note for a heading in org mode.

<!--listend-->

-   <kbd>C-c C-c</kbd> to insert a tag for a heading in org mode.


## Capturing {#capturing}

-   <kbd>SPC X</kbd> to capture (the new thing gets caputured to a single file but that's fine since we can easily refile it.)
-   <kbd>SPC m r r</kbd> to refile


## Org Roam {#org-roam}

These keybinding only work after installing org-roam. To install org roam edit your <kbd>init.el` file and add `(org +roam2)</kbd> in its designated place. Watch [this video](https://www.youtube.com/watch?v=AyhPmypHDEw) to understand what org-roam is.

-   <kbd>SPC n r f</kbd> Find an existing node or create a new one.
-   <kbd>SPC n r i</kbd> Insert a link to another node.
-   <kbd>SPC n r r</kbd> Toggle backlinks pane
-   <kbd>SPC m m o t</kbd> Add a roam tag.
-   <kbd>SPC m m o a</kbd> Add a roam alias.


## Sources {#sources}

-   [Link to youtube video series](https://www.youtube.com/watch?v=BRqjaN4-gGQ&list=PLhXZp00uXBk4np17N39WvB80zgxlZfVwj&index=10)
-   [This org file is mostly from the notes taken from the series above by ianjones.us](https://www.ianjones.us/zaiste-programming-doom-emacs-tutorial/#org7ad2452)
-   [Three HUGE Mistakes New Emacs Users Make](https://www.youtube.com/watch?v=s0ed8Da3mjE) (they are included in the tips above)


## What to learn <code>[0/2]</code> {#what-to-learn}

-   [ ] [Org Roam](https://orgroam.com)
-   [ ] abbrev-mode


## Other notes


:%s/foo/bar/g[c]::Find each occurrence of 'foo' (in all lines), and replace it with 'bar'. [c] - confirmations.
:%s/\%Vfoo/bar/g::The replacement will check each line in the buffer, but will only match within the last visual selection

How split line
?
- <kbd>a<cr><esc></kbd>
- <kbd>r<cr></kbd>
- <kbd>i<cr><esc></kbd>

<kbd>{number}<C-w><C-w></kbd>::Quick Switch between windows

## Paths

<kbd>:echo @%</kbd>::directory/name of file

<kbd>:echo expand('%:t')</kbd>::name of file ('tail')

<kbd>:echo expand('%:p')</kbd>::full path

<kbd>:echo expand('%:p:h')</kbd>::directory containing file ('head')

How to paste yanked text into the Vim command line?
?
Hit <kbd><C-r>"</kbd>. If you have literal control characters in what you have yanked, use <kbd><C-r><Ctrl-o>"</kbd>.
Source: https://stackoverflow.com/questions/3997078/how-to-paste-yanked-text-into-the-vim-command-line

How to paste system clipboard into the Vim command line?
?
I use <kbd>C-S-v</kbd>, it's working in my terminal. Or use <kbd><C-r>"</kbd>.

How do you search through Vim's command history?
?
Use <kbd>q:</kbd> or <kbd>q/</kbd> in normal mode and then press <kbd>/</kbd>.
Press <kbd>C-f</kbd> in command mode to open the command history window.
For more about the command history window, see <kbd>:h cmdwin</kbd>.

How quickly close command history window?::<kbd><C-c><C-c></kbd>

## Netrw

Go up a directory::<kbd>-</kbd>
Go back to the previous directory in the history::<kbd>u</kbd>
Jump to the most recent directory saved on the "Bookmarks". To create a bookmark we use <kbd>mb</kbd>::<kbd>gb</kbd>
Open a preview window::<kbd>p</kbd>
Close the preview window::<kbd><C-w>z</kbd>
Toggle hidden files::<kbd>gh</kbd>
Create a new file::<kbd>%</kbd>
Create a new directory::<kbd>d</kbd>
Rename a file::<kbd>R</kbd>
Delete a file::<kbd>D</kbd>

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
mkdx insert <kbd> shortcut::<<Tab>
mkdx toggle checkbox forward::<PREFIX>-
mkdx toggle checkbox backward::<PREFIX>=
mkdx wrap text in link::<PREFIX>ln
mkdx increment header level::<PREFIX>[
mkdx decrement header level::<PREFIX>]
mkdx convert CSV to markdown table (toggle)::<PREFIX>,
mkdx toggle quote::<PREFIX>'

# Telekasten

Find notes::<kbd><leader>zf</kbd>
Find daily notes::<kbd><leader>zd</kbd>
Search notes::<kbd><leader>zg</kbd>
Follow link::<kbd><leader>zz</kbd>
Goto today::<kbd><leader>zT</kbd>
Find weekly notes::<kbd><leader>zw</kbd>
Goto this week::<kbd><leader>zW</kbd>
Create new note::<kbd><leader>zn</kbd>
Create new note from template::<kbd><leader>zN</kbd>
Yank notelink::<kbd><leader>zy</kbd>
Show calendar::<kbd><leader>zc</kbd>
CalendarT::<kbd><leader>zC</kbd>
Paste image and link::<kbd><leader>zI</kbd>
Toggle TODO (including visual)::<kbd><leader>zt</kbd>
Show tags::<kbd><leader>z#</kbd>
Show backlinks::<kbd><leader>zb</kbd>
Find friends::<kbd><leader>zF</kbd>
Preview image::<kbd><leader>zp</kbd>
Browse media::<kbd><leader>zm</kbd>
Rename note::<kbd><leader>zr</kbd>
Paste image and link::<kbd><leader>zi</kbd>

# Resources

- [[@DrewNeilPracticalVimEdit2015]]
- [[@DrewNeilModernVimCraft2018]]


# VIM SUPER BASE DRAFT
https://gist.github.com/t-mart/610795fcf7998559ea80

TODO: find/port/use

## Vim base commands

select something::<kbd>v[motion]</kbd>
copy something::<kbd>y[motion]</kbd>
delete something (can be used with black hole register)::<kbd>d[motion]</kbd>
change something (can be used with black hole register)::<kbd>c[motion]</kbd>

## Vim Text objects (motions)

outer::<kbd>a</kbd>
inner::<kbd>i</kbd>
word::<kbd>w</kbd>
sentence::<kbd>s</kbd>
paragraph::<kbd>p</kbd>
argument (require plugin, works inside brackets)::<kbd>a</kbd>
single and double quote::<kbd>❜` `"</kbd>
back quote::<kbd>` ` `</kbd>
a parenthesized block::<kbd>)` `}</kbd>
a tag::<kbd>t</kbd>
a single tag::<kbd>></kbd>
entire content::<kbd>e</kbd>

## Vim Modes

normal, for navigation and manipulation of text::<kbd>ESC</kbd>
insert, for inserting new text.::<kbd>iIaAoO</kbd>
visual, for navigation and manipulation of text selections::<kbd>v</kbd>
command-line, for entering editor commands::<kbd>:</kbd>
replace mode, replace existing text by directly typing over it.::<kbd>R</kbd>
similar to visual, but with a more MS Windows-like behavior::<kbd>select</kbd>
similar to the command-line mode but optimized for batch processing::<kbd>ex-mode</kbd>

## Vim registers

It's sort of space in memory to store text. Every register can be accessed using double quote <kbd>"</kbd>.
For example <kbd>r` register, copy/paste will be like this `"ry` / `"rp</kbd>.
You can access register in insert/command mode by <kbd>C-r[register name]</kbd>.
You can use the <kbd>:reg[a|b|c]</kbd> command to see all the registers and their content.
If you use <kbd>qw` to record a macro, the register `"w</kbd> will have all actions which you have done.

The unnamed register (yank, delete) <kbd>""</kbd>
10 numbered registers (latest yank, newest, ..., oldest) <kbd>"0` to `"9</kbd>
The last entered text (read only) <kbd>".</kbd>
Current file path (read only) <kbd>"%</kbd>
Most recently used command (read only) <kbd>":</kbd>
The alternate file register (sort of last edited file) <kbd>"#</kbd>
The black hole register <kbd>"_</kbd>
The selection (system clipboard) <kbd>"*`, `"+</kbd>
Last search pattern register <kbd>"/</kbd>
26 Named registers \"a to \"z (or \"A to\"Z), sort of clipboards <kbd>[a-z]</kbd>
The small delete register <kbd>"-</kbd>
The expression register, useful for calculation <kbd>C-r =...` `"=</kbd>

### [TODO]{.todo .TODO} how to change macro registers in evil, how to execute them? {#how-to-change-macro-registers-in-evil-how-to-execute-them}

### [TODO]{.todo .TODO} drop register? {#drop-register}

## Command line usage examples

<kbd>`</kbd>bash
emacs -q # Run emacs and do not load an init file (init.el)
emacs -Q # Dont load site-wide startup file (global init file)

# Open specific workspace from command line
emacsclient --alternate-editor='' --no-wait --eval '(persp-switch "TERM")' --display $DISPLAY
<kbd>`</kbd>

## Base Emacs keybindings, useful in <kbd>M-x</kbd> extend command menu, mini buffers, etc

 -------------------------------------------------- --------------------------------------
 scroll Down <kbd>C-n` or `C-j</kbd>
 scroll Up <kbd>C-p` or `C-k</kbd>
 scroll Left <kbd>C-b</kbd>
 scroll Right <kbd>C-f</kbd>

 scroll to top <kbd>M-<</kbd>
 scroll to bottom <kbd>M-></kbd>
 beginning of line <kbd>C-a</kbd>
 end of line <kbd>C-e</kbd>

 kill next char <kbd>C-d</kbd>
 kill word \* <kbd>C-w</kbd>
 kill whole line \* <kbd>C-S-BSPC</kbd>
 kill to end of sentence (kill-sentence) <kbd>M-k</kbd>
 Delete spaces and tabs around point <kbd>M-\</kbd>

 History (also work in evil command input) \* <kbd>C-s</kbd>
 Go to previous group (like page down) <kbd>C-S-k</kbd>
 Go to next group (like page up) <kbd>C-S-j</kbd>
 Open an embark-act menu to chose a useful action <kbd>C-;`, `SPC a</kbd>
 -------------------------------------------------- --------------------------------------

# Files

## Evil files

 ------------------------------------------------------- -----------------------------------
 edit a file in a new buffer <kbd>:e [filename]</kbd>
 show buffer whose filename begins with \"vimrc\" <kbd>:b vimrc</kbd>
 edit the file whose name is under or after the cursor <kbd>gf</kbd>
 ------------------------------------------------------- -----------------------------------

## Emacs files

 ---------------------------------------------------- ------------------------------------
 for saving the current file \[customized command\] <kbd>C-s</kbd>

 open project sidebar <kbd>SPC o p</kbd>
 find file in project sidebar (locate) \* <kbd>SPC o P</kbd>

 to open a project (also FAST switch to project) \* <kbd>SPC p p</kbd>
 to open a file in a project <kbd>SPC SPC</kbd>

 search or create new file \* <kbd>SPC . [file]</kbd>
 find file from here <kbd>SPC f F</kbd>
 to delete this file <kbd>SPC f D</kbd>
 recently visited files <kbd>SPC f r</kbd>
 rename file <kbd>SPC f R</kbd>
 Save file \* <kbd>C-s</kbd>
 save file as <kbd>SPC f S</kbd>
 recently visited files in a project <kbd>SPC p r</kbd>
 find file in other project <kbd>SPC p f</kbd>
 locate file <kbd>SPC f l</kbd>
 projectile discover commands <kbd>M-x projectile-disco*</kbd>
 ---------------------------------------------------- ------------------------------------

### Treemacs

 ------------------------------------------------------------------------------- --------------------------
 Project Keybinds <kbd>C-c C-p</kbd>
 Collapse project at point. <kbd>TAB</kbd>
 Collapse all projects. <kbd>S-TAB</kbd>
 Remove project at point from the workspace <kbd>C-c C-p r</kbd>
 Select a new project to add to the workspace <kbd>C-c C-p a</kbd>
 Collapse menu <kbd>C-c C-p c</kbd>
 Collapse project <kbd>C-c C-p c c</kbd>

 Workspaces Keybinds <kbd>C-c C-w</kbd>

 Open current file or tag in vertical split <kbd>ov</kbd>
 Open current file or tag in horizontal split <kbd>oh</kbd>
 Open current item <kbd>RET</kbd>
 Open current file or tag and close treemacs (no split) <kbd>oc</kbd>
 Open current file or tag, using ace-window <kbd>oaa</kbd>
 Open current file or tag in horizontal split (ace-window) <kbd>oah</kbd>
 Open current file or tag in vertical split, (ace-window) <kbd>oav</kbd>
 Open current file or tag in most recent window <kbd>or</kbd>
 Open current file externally <kbd>ox</kbd>

 Toggle the hiding and displaying of dotfiles <kbd>th</kbd>
 Toggle the hiding and displaying gitignored files <kbd>ti</kbd>
 Toggle whether the treemacs window should have a fixed width. <kbd>tw</kbd>
 Toggle treemacs-follow-mode. <kbd>tf</kbd>
 Toggle treemacs-filewatch-mode. <kbd>ta</kbd>
 Toggle treemacs-fringe-indicator-mode. <kbd>tv</kbd>
 Toggle treemacs-git-commit-diff-mode. <kbd>td</kbd>

 Copy the absolute path of the node at point. <kbd>ya</kbd>
 Copy the path of the node at point relative to the project root. <kbd>yr</kbd>
 Copy the absolute path of the project root for the node at point. <kbd>yp</kbd>
 Copy the file at point. <kbd>yf</kbd>

 Hydra to show you treemacs' most commonly used keybindings <kbd>?</kbd>
 Hydra to show you treemacs' rarely used, advanced keybindings <kbd>C-?</kbd>

 Go to the next same-level neighbour of the current node. <kbd>M-j</kbd>
 Go to the previous same-level neighbour of the current node. <kbd>M-k</kbd>
 Go to parent of node at point, if possible. <kbd>u</kbd>
 Switch positions of project at point and the one above it. <kbd><M-Up></kbd>
 Switch positions of project at point and the one below it. <kbd><M-Down></kbd>

 page up <kbd>C-b</kbd>
 page down <kbd>C-f</kbd>
 back up 1/2 screen <kbd>C-u</kbd>
 page down 1/2 screen <kbd>C-d</kbd>

 Set a new value for the width of the treemacs window. <kbd>w</kbd>
 Decrease the width of the treemacs window. <kbd><</kbd>
 Increase the width of the treemacs window. <kbd>></kbd>
 Refresh the project at point. \* <kbd>r</kbd>

 new file <kbd>cf</kbd>
 new dir <kbd>cd</kbd>

 Delete node at point. \* <kbd>d</kbd>
 Rename node at point. <kbd>R</kbd>
 Create a file <kbd>cf</kbd>
 Create a directory. <kbd>cd</kbd>

 Hide the treemacs window. <kbd>q</kbd>
 Delete the treemacs buffer. <kbd>Q</kbd>
 Peek at the files at point without fully opening them (peek mode). <kbd>P</kbd>

 Copy the absolute path of the node at point <kbd>ya</kbd>
 Copy the relative to the project root. <kbd>yr</kbd>
 Copy the absolute path of the project root at point. <kbd>yp</kbd>
 Copy the file at point. <kbd>yf</kbd>
 Move the file at point. <kbd>m</kbd>

 Set a new value for treemacs-sorting. <kbd>s</kbd>
 Bookmark the currently selected files's, dir's or tag's location. <kbd>b</kbd>
 Run the action defined in treemacs-COLLAPSE-actions-config (usually close). <kbd>M-h</kbd>
 Run the action defined in treemacs-RET-actions-config (usually open content). <kbd>M-l</kbd>

 Move treemacs' root one level upward, into the directory at point. <kbd>M-H</kbd>
 Move treemacs' root one level downwards, into the directory at point. <kbd>M-L</kbd>

 Collapse the parent of the node at point. <kbd>H</kbd>
 Run an asynchronous shell command on the current node. <kbd>\!</kbd>
 Run an asynchronous shell command in the root of the current project. <kbd>M-!</kbd>
 Close all directories matching any of treemacs-litter-directories. <kbd>C</kbd>
 Adjust the width of the treemacs window to that of the longsest line. <kbd>=</kbd>
 Toggle between normal and extra wide display for the treemacs window. <kbd>W</kbd>
 ------------------------------------------------------------------------------- --------------------------

### Dired

 --------------------------------------------------------------- ----------------------
 Dired (directory), alternative is C-x d or SPC . <kbd>SPC f d</kbd>
 going one folder back <kbd>-</kbd>
 creating a new directory <kbd>+</kbd>
 mark the files for deletion, press x to delete. <kbd>d</kbd>
 change permissions <kbd>M</kbd>
 sort by modes. <kbd>o</kbd>
 change the owner. <kbd>O</kbd>
 mark files or directories. <kbd>m</kbd>
 unmark files or directories <kbd>u</kbd>
 unmark all <kbd>U</kbd>
 invert the selection, to switch between files and directories <kbd>t</kbd>
 copy <kbd>C</kbd>
 move (and rename) <kbd>R</kbd>
 simple view <kbd>(</kbd>
 to invoke mark dialog <kbd>\*</kbd>
 to select all directories <kbd>\* /</kbd>
 to select all files <kbd>\* ?</kbd>
 copy to another window <kbd>C</kbd>
 move to another window <kbd>R</kbd>
 to edit file/dir name <kbd>i</kbd>
 --------------------------------------------------------------- ----------------------

# Windows

## Evil windows

 -------------------------------------- -----------------------
 to close the current window. <kbd>C-x 0</kbd>
 to close every other window. <kbd>C-x 1</kbd>
 split open file <kbd>:sp f</kbd>
 vertical split open file <kbd>:vsp f</kbd>
 split windows horizontal <kbd>C-w s</kbd>
 split windows vertically <kbd>C-w v</kbd>
 switch between windows <kbd>C-w C-w</kbd>
 quit a window <kbd>C-w q</kbd>
 close other windows <kbd>C-w o</kbd>
 swap windows <kbd>C-w x</kbd>
 jumps to the last window you used \* <kbd>C-w C-p</kbd>
 left, down, up, right window <kbd>C-w hjkl</kbd>
 increase window height <kbd>C-w +</kbd>
 decrease window height <kbd>C-w -</kbd>
 increase window width <kbd>C-w <</kbd>
 decrease window width <kbd>C-w ></kbd>
 equal window <kbd>C-w =</kbd>
 next/previous tab <kbd>gt gT</kbd>
 -------------------------------------- -----------------------

## Emacs windows

You can use vim motion keys to navigate between open windows, kill
windows, resize windows for example SPC w H moves the window to the
left.

### Workspaces

 ------------------------------------- ---------------------------------------------
 create a new workspace <kbd>C-t</kbd>
 Switch to workspace <kbd>SPC TAB .</kbd>
 new workspace <kbd>SPC TAB n</kbd>
 new named workspace <kbd>SPC TAB N</kbd>
 Previous workspace <kbd>SPC TAB [</kbd>
 Next workspace <kbd>SPC TAB ]</kbd>
 Previous workspace as alternative <kbd>[w</kbd>
 Next workspace as alternative <kbd>]w</kbd>
 Remove workspace <kbd>SPC TAB d</kbd>
 Restore last session <kbd>SPC TAB R</kbd>
 Switch to workspace 1 <kbd>M-1</kbd>
 Switch to workspace 2 and so forth. <kbd>M-2</kbd>
 go to #N tab <kbd>SPC Tab [num]</kbd>
 Move Tab Forward/Backward <kbd>M-x workspace/swap-left[right]</kbd>
 ------------------------------------- ---------------------------------------------

### Buffers

 --------------------------------------------------- ------------------------
 switch to another buffer (alternative is SPC b b) <kbd>SPC ,</kbd>
 switch to all buffers (alternative is SPC b B) <kbd>SPC <</kbd>
 pop up scratch buffer (alternative is SPC b x) <kbd>SPC x</kbd>
 pop up scratch buffer (alternative is SPC b X) <kbd>SPC X</kbd>
 to save and name it <kbd>SPC b s</kbd>
 kill buffer (^w^ alternative) <kbd>SPC b k</kbd>
 kill all buffer (^+w^ alternative) <kbd>SPC b K</kbd>
 list all buffers <kbd>SPC b i</kbd>
 go to next buffer (alternative is \]b) <kbd>SPC b n</kbd>
 go to previous buffer (alternative is \[b) <kbd>SPC b p</kbd>
 delete a buffer (close a file) <kbd>SPC b d</kbd>
 last buffer <kbd>SPC b l</kbd>
 maximize buffer <kbd>SPC w m</kbd>
 maximize vertically <kbd>SPC w m v</kbd>
 maximize horizontally <kbd>SPC w m s</kbd>
 --------------------------------------------------- ------------------------

# Navigation (movement)

## Evil navigation

 ------------------------------------------------- ------------------
 puts the current line at the top <kbd>zt</kbd>
 puts the current line at the middle <kbd>zz</kbd>
 puts the current line at the bottom <kbd>zb</kbd>
 Scrolling up, cursor staying on the same line <kbd>C-e</kbd>
 Scrolling down, cursor staying on the same line <kbd>C-y</kbd>
 ------------------------------------------------- ------------------

### Cursor Movements

 ------------------------------------------------------------------ ----------------------
 move to char (avy) <kbd>C-'</kbd>
 closure (avy) <kbd>g s SPC</kbd>
 go to character 2 (avy) <kbd>gss</kbd>
 go to char timer <kbd>gs/</kbd>

 move left, down, up, right <kbd>hjkll</kbd>

 jump by start of words (punctuation considered words) <kbd>w</kbd>
 jump by words (spaces separate words) <kbd>W</kbd>
 jump to enD of words (punctuation considered words) <kbd>e</kbd>
 jump to end of words (no punctuation) <kbd>E</kbd>
 jump backward by words (punctuation considered words) <kbd>b</kbd>
 jump backward by words (no punctuation) <kbd>B</kbd>
 jump backward to end of words <kbd>ge</kbd>

 (zero) start of line <kbd>0</kbd>
 first non-blank character of line <kbd>^</kbd>
 end of line <kbd>$</kbd>
 jump to the last non-blank character of the line <kbd>g_</kbd>
 move to the current line (useful for making commands line-based) <kbd>_</kbd>

 move line upwards, on the first non blank character <kbd>-</kbd>
 move line downwards, on the first non blank character <kbd>+</kbd>

 go to first line <kbd>gg</kbd>
 go to last line <kbd>G</kbd>
 go to line n <kbd>ngg</kbd>
 go To line n <kbd>nG</kbd>
 go To line n <kbd>:n</kbd>

 move the cursor forward to the next sentence (or table cell) <kbd>)</kbd>
 backward by a sentence (or table cell) <kbd>(</kbd>
 move the cursor a paragraph backwards <kbd>{</kbd>
 move the cursor a paragraph forwards <kbd>}</kbd>
 move the cursor a section forwards or to the next { <kbd>]]</kbd>
 move the cursor a section backwards or the previous { <kbd>]]</kbd>
 move the cursor to the top, middle, bottom of the screen. <kbd>HML</kbd>

 show matching brace, bracket, or parentheses <kbd>%</kbd>
 return to the line where the cursor was before the latest jump <kbd>''</kbd>
 start typing on the last inserting point you can type <kbd>gi</kbd>
 reselect and jump to the last visual selection with <kbd>gv</kbd>
 jump to function/variable definition <kbd>gd</kbd>
 goes to the older cursor position on the change list <kbd>g;</kbd>
 goes to the newer cursor position on the change list <kbd>g,</kbd>

 jump to previous position you were at <kbd>C-o</kbd>
 jump to more recent position you were a <kbd>C-i</kbd>
 move the cursor forward by a screen of text <kbd>C-f</kbd>
 move the cursor backward by a screen of text <kbd>C-b</kbd>
 move the cursor up by half a screen <kbd>C-u</kbd>
 move the cursor down by half a screen <kbd>C-d</kbd>
 ------------------------------------------------------------------ ----------------------

### Bookmarks

 -------------------------------------------------------- -----------------------
 list all the current marks <kbd>:marks</kbd>
 make a bookmark named a at the current cursor position <kbd>m[a]</kbd>
 go to position of bookmark a <kbd>` `[a] `</kbd>
 go to the line with bookmark a <kbd>'[a]</kbd>
 go to the line that you last edited <kbd>` `. `</kbd>
 -------------------------------------------------------- -----------------------

## Emacs navigation

### bookmarks

 -------------- ----------------------
 jump to mark <kbd>SPC s r</kbd>
 -------------- ----------------------

# Search & Replace

## Evil search & replace

<kbd>`</kbd> example
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
<kbd>`</kbd>

## Emacs search & replace

<kbd>`</kbd> example
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
<kbd>`</kbd>

# Changing Text (editing)

## Evil changing text

 ----------------------------------------------------------------------- --------------------------
 run command in insert mode <kbd>C-o[motion]</kbd>

 read input character and insert it (useful to insert TAB for example) <kbd>C-q</kbd>
 replace a single character (does not use insert mode) <kbd>r</kbd>
 enter Insert mode, but replacing characters rather than inserting <kbd>R</kbd>
 join line below to the current one <kbd>J</kbd>
 change (replace) an entire line <kbd>cc</kbd>
 (replace) to the end of word <kbd>cw</kbd>
 change (replace) to the end of line <kbd>C</kbd>
 \' character (can change \' for any character) <kbd>ct'</kbd>
 delete character at cursor and substitute text <kbd>s</kbd>
 delete line at cursor and substitute text (same as cc) <kbd>S</kbd>
 transpose two letters (delete and paste, technically) <kbd>xp</kbd>
 reverse two letters (delete and paste, technically) <kbd>Xp</kbd>
 undo changes <kbd>u</kbd>
 redo changes <kbd>C-r</kbd>
 insert content of register r (in insert mode!) <kbd>C-rr</kbd>
 repeat last command <kbd>.</kbd>

 switch case <kbd>~</kbd>
 switch case of current word <kbd>g~iw</kbd>
 make current word uppercase <kbd>gUiw</kbd>
 make current word lowercase <kbd>guiw</kbd>
 make uppercase until end of line <kbd>gU$</kbd>
 make lowercase until end of line <kbd>gu$</kbd>
 change line to UPPER <kbd>gUU</kbd>
 fill text <kbd>gw</kbd>

 swap current line with next (line down) <kbd>ddp</kbd>
 swap current line with previous (line up) <kbd>ddkP</kbd>
 duplicate line <kbd>yyP</kbd>

 fix spaces / tabs issues in whole file <kbd>:%retab</kbd>
 execute {cmd} and insert its standard output below the cursor. <kbd>:r !{cmd}</kbd>
 ----------------------------------------------------------------------- --------------------------

## Evil deleting text

 ------------------------------------------------------------------------------ ------------------------
 delete current character, previous character <kbd>x</kbd>
 delete previous character <kbd>X</kbd>
 delete the current word <kbd>dw</kbd>
 delete (cut) a line <kbd>dd</kbd>
 delete until the next \' character on the line (replace \' by any character) <kbd>dt'</kbd>
 delete from cursor to end of line <kbd>D</kbd>
 delete \[range\] lines <kbd>:[range]d</kbd>
 ------------------------------------------------------------------------------ ------------------------

## [TODO]{.todo .TODO} [Evil surround](https://github.com/emacs-evil/evil-surround) {#evil-surround}

<kbd>`</kbd> example
ds[char or t] deletes the surrounding char or html element
cs[char][char or <tag>] change the surrounding char to char or <tag>
ysiw[char] chage the surrounding of inner word

ysWf ysWF functions example, wrap text/word

S[text object] in visual state will surround a text object
<kbd>`</kbd>

## [TODO]{.todo .TODO} Evil exchange {#evil-exchange}

\<kbd>cx\[motion\]\` ... \`cx\[motion\]\` Exchange motion \`cxx\</kbd> Like
\<kbd>cx\`, but use the current line. \`X\` Like \`cx\</kbd>, but for Visual
mode. \<kbd>cxc\` Clear any \`{motion}\</kbd> pending for exchange. If you're
using the same motion again (e.g. exchanging two words using \<kbd>cxiw\</kbd>),
you can use \<kbd>.\</kbd> the second time. If one region is fully contained
within the other, it will replace the containing region.

## Evil commenting

 ---------------- ---------------------------
 comment line <kbd>gcc</kbd>
 comment motion <kbd>gc[motion,a]</kbd>
 ---------------- ---------------------------

## Emacs editing text

<kbd>`</kbd> example
C-M-o Split lines (join by J)
SPC i s Insert snippet *
SPC i e|U Insert Emoji, Unicode symbol *
SPC i f|F Current filename, path
SPC i p Evil ex path (insert output of $PATH for example)
SPC i r Insert from evil register
SPC i y Insert from clipboard
<kbd>`</kbd>

# Formatting Text and Fold

## Evil formatting

<kbd>`</kbd> example
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
<kbd>`</kbd>

## Emacs formatting

<kbd>`</kbd> example
SPC c f format buffer/region
SPC c w Delete trailing whitespace
SPC c W Delete trailing new lines
SPC c l = LSP formatting
M-s h Higlight menu
<kbd>`</kbd>

# Evil Visual Mode

<kbd>`</kbd> example
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
<kbd>`</kbd>

# Evil Record and playback

<kbd>`</kbd> example
q[a] start recording macro 'a'
q end recording macro
@a replay macro 'a'
@: replay last command
<kbd>`</kbd>

# Refactor and Clean up

## Evil refactor and clean up

<kbd>`</kbd> example
]s next misspelled word
[s previous misspelled word
zg add word to wordlist
z= suggest word
<kbd>`</kbd>

## Emacs refactor and clean up

<kbd>`</kbd> example
C-, flyspell next error
SPC t s toggle flyspell
<kbd>`</kbd>

# Emacs & Evil Commands

<kbd>`</kbd> example
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
<kbd>`</kbd>

# Emacs Build & Run

<kbd>`</kbd> example
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
<kbd>`</kbd>

# Emacs debug (dap-mode)

You need configure a keys:
<https://docs.doomemacs.org/latest/#/usage/keybindings>

<kbd>`</kbd> example
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
<kbd>`</kbd>

# Clipboard

## Evil clipboard

<kbd>`</kbd> example
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
<kbd>`</kbd>

## Emacs clipboard

<kbd>`</kbd> example
SPC f y yank file path
SPC f Y yank file path from project
SPC i y insert text from kill-ring (clipboard)
SPC n y org export to clipboard
SPC n Y org export to clipboard as rich text
<kbd>`</kbd>

# Emacs Version Control (magit)

<kbd>`</kbd> example
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

<kbd>`</kbd>

See also - <https://magit.vc/manual/magit-refcard.pdf>

# Additional Emacs Packages

## Org Mode

### General

<kbd>`</kbd> example
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
<kbd>`</kbd>

### Links, Hyperlinks and more

<kbd>`</kbd> example
SPC m l add a link menu
SPC m l l add a link to an org page, :: to specify a heading or a line number
SPC n l stores a link to a particular headline (available when you add a link)
<kbd>`</kbd>

Examples: You can paste [http](https://example.com) links as well You
can \"link\" some text with specific code <kbd>SPC m l l</kbd> elisp:
[(+ 2 2)](elisp:(+ 2 2)), when you click the link, emacs will evaluate
the expression Show [My Agenda](elisp:org-agenda) [List Files](shell:ls)
in directory

Defining custom Link Types - [Whatch the video about custom
links](https://youtube.com/watch?v=Febe4lUK5G4)

### Custom

<kbd>`</kbd> example
C-u C-c C-l in an org-buffer insert svg, png images directly from cliboard, save with human-readable name.
<kbd>`</kbd>

### [Org Roam](https://orgroam.com)

These keybinding only work after installing org-roam. To install org
roam edit your \<kbd>init.el\` file and add \`(org +roam2)\</kbd> in its
designated place. Watch <https://www.youtube.com/watch?v=AyhPmypHDEw> to
understand what org-roam is.

<kbd>`</kbd> example
SPC n r f Find an existing node or create a new one.
SPC n r i Insert a link to another node.
SPC n r r Toggle backlinks pane
SPC m m o t Add a roam tag.
SPC m m o a Add a roam alias.
<kbd>`</kbd>

### Babel

<kbd>`</kbd> example
SPC m ' edit inside the babel in another buffer.
SPC m k org babel remove results
<kbd>`</kbd>

1. Python code with mathplotlib graph

 <kbd>`</kbd> {.python session="yes" results="file"}
 import matplotlib
 import matplotlib.pyplot as plt
 fig=plt.figure(figsize=(3,2))
 plt.plot([1,3,2])
 fig.tight_layout()

 fname = 'images/myfig.svg'
 plt.savefig(fname)
 fname # return this to org-mode
 <kbd>`</kbd>

2. ob-spice

 <kbd>`</kbd> {.spice results="drawer" exports="both"}
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
 <kbd>`</kbd>

## [TODO]{.todo .TODO} Evil Multiedit {#evil-multiedit}

## Evil Lion

## [TODO]{.todo .TODO} Evil Avy & Evil Snipe (not clear, maybe not working?) {#evil-avy-evil-snipe-not-clear-maybe-not-working}

- You can remove a word with \`g s SPC select-one-letter x
 select-the-removal-spot\`
 - You can use \<kbd>X\</kbd> to stay in your original spot of search
- You can go \`g s space select-one-letter i
 select-the-correction-spot\` to correct the spelling of the search
 - Install ispell on your OS first
- You can \<kbd>yank\` a word from one place to another with \</kbd>g s SPC
 select-one-letter y select-the-correction-spot-to-paste\`
- Use \<kbd>t\` to \"teleport\" the word from one place to another \</kbd>g s
 SPC select-one-letter t select-the-correction-spot-to-teleport\`

## Notmuch

<kbd>`</kbd> example
SPC o m open notmuch

# notmuch workspace
SPC m c compose email
SPC m d mark as deleted
SPC m s mark as spam
SPC m u notmuch update
q quick
<kbd>`</kbd>

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

- Replace multiple spaces with one \<kbd>:%s/$^ *$\\@\<! \\{2,}/ /g\</kbd> This
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

\<kbd>C-r+0\</kbd> - in insert mode inserts the last yanked text, working in
command mode \<kbd>C-r+\"\</kbd> - in insert mode inserts clipboard, working in
command mode

\<kbd>gr\[motion\] grr\</kbd> replace with register (yanked) motion / line

\<kbd>\[s \]s\</kbd> - MoveStatementUp MoveStatementDown

M-x +snippets

bookmarks
<https://www.gnu.org/software/emacs/manual/html_node/emacs/Bookmarks.html#>:\~:text=Bookmarks%20are%20somewhat%20like%20registers,were%20reading%20in%20various%20files.

Goto Test FindUsages SelectIn GotoFile GotoClass FileStructurePopup
JumpToLastWindow \<kbd>~yp~ ~yl~\` QuickListPopupAction / Log \`~yd~ ~ya~\</kbd>
Compare.LastVersion / Annotate \<kbd>\[q \]q\</kbd> PreviousOccurence /
NextOccurence \<kbd>\[m \]m\` MethodUp / MethodDown \`\[c \]c\</kbd>
PrevChangeMarker / NextChangeMarker \<kbd>,c ,r\` - CompileDirty / Run \</kbd>,R
,b\<kbd> - RunAnything Debug \`,c ,d\` - RunClass / DebugClass \`,t ,T\</kbd> -
RerunTests / RerunFailedTests add char before link/after link wrap chars
into <kbd>xxx</kbd> make line list item hunspell dictonary with
Computer Science terms... all tabs to spaces (existi somewhere in github
configurations) search in hidden org-mode blocks elfeed read it later or
favorites find in org-roam files org-attch dir function

<https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macro-Counter.html>
generate row, column number-ranges

----

You might be looking for the bookmark feature. On vanilla emacs, C-x r m
will bookmark the current file, and C-x r b will let you choose from a
list of bookmarked files. It\'s amazingly useful
