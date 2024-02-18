---
date: 2024-01-28
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 1
sr-ease: 223
---

# Neovim-emacs-workflow

## Long distance navigation inside the file

going to a certain word in file, / and ?.
select all occurrences of search query
make-toc
download image from clipboard, save attach...
increment/decrement
inserts the last yanked/typed text
replace selection with register
Move object up/down
Generate row numbers, column number-ranges
Global/local bookmarks
Zoom plus, Zoom minus
Compile/recompile/run/stop workflow
opening term in split
:jumps list jumps
Organize Imports
Describe variable
yank file path
yank file path from project
export to clipboard as rich text
list TODO
toggle TODO status, type
named TODO
:ol[dfiles] '1-9 to open
git create/remove tag
Insert Emoji, Unicode symbol, Arrow, ASCII

Create a pull request
 - select the base branch
 - then select the target branch
 - then provide a short description
 - C-c C-c to finish the pull request
 - now there will be a pull requests tab

SPC c l a LSP code actons (a - code actions, h - higlight symbol, l - lens)
SPC c l r LSP refactor menu
SPC c l w LSP workspaces menu

markdown add headline link/anchor
markdown toggle item, convert to plain-text list or numbered list
markdown selection to link::^k
markdown insert tag
insert svg, png images directly from cliboard, save with human-readable name.
TODO.md capturing?
find file in netrw PV+

### Sniprun

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
telescope marks command
---


for saving the current file \[customized command\] `C-s`


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

 Restore last session `SPC TAB R`
 Move Tab Forward/Backward

## Emacs editing text

```example
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

## Emacs search & replace

```example
SPC s b|B search buffer, all buffers (go to line)
SPC s s|S search buffer, search for thing at cursor positon *
SPC s d|D search in current directory, other directory
SPC s t|T dictonary, thesaurus
```
## Emacs editing text

```example
SPC i e|U
SPC i f|F Current filename, path
SPC i p Evil ex path (insert output of $PATH for example)
```
## Emacs formatting

```example
SPC c w Delete trailing whitespace
SPC c W Delete trailing new lines
Higlight file as...
```

### Custom

```example
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
