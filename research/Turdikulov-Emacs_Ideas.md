---
date: 2023-06-03
tags:
  - inbox
sr-due: 2024-02-17
sr-interval: 136
sr-ease: 250
---

# Emacs-ideas

Some stuff from Doom emacs, which I want to port or find ways to do in
[[Neovim]].

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

## Dired

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

## Buffers, Windows and Basic Navigation

### Buffers

- Buffers are a special concept in emacs they can be terminals, files,
  directories, etc
- `SPC ,` to open another buffer
  - workspace buffer
- `SPC SHIFT ,` to switch to all buffers
- `SPC b X` You can create a scratch buffer
- `SPC b s` to save and name it

### Windows

- `C-w v` window split vertically
- `C-w s` window split horizonal
- `C-w w` to switch windows
- `SPC w q` to kill windows
- `SPC w >` and `SPC w <` to increase and decrease window width
- `SPC w +` and `SPC w -` to increase and decrease window height
- You can use vim motion keys to navigate between open windows for example `SPC w H` moves the window to the left.
- Windows are panes in your screen

### Workspaces

- `SPC TAB n` New workspace
- `SPC TAB N` Newly named workspace
- `SPC TAB [` Previous workspace
- `SPC TAB ]` Next workspace
- `SPC TAB d` Remove workspace
- `SPC TAB R` Restore last session
- `M-1` Switch to workspace 1
- `M-2` Switch to workspace 2 and so forth.

## Installing Packages using org-super-agenda as an example

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

## Quick, horizontal movements with evil-snipe

### Inine navigation

- `f` and then the letter you want to navigate to.
  - `,` will go backward
  - `;` will go forward after that "find"
- `t` to find and move cursor to the charachter before what you've searched.
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

# [TODO]

- Replace multiple spaces with one \`:%s/$^ *$\\@\<! \\/ /g\` This
  says \"find 2 or more spaces (\' \\\\\') that are NOT preceded
  by \'the start of the line followed by zero or more spaces\'\"

<https://github.com/tpope/vim-surround/blob/master/doc/surround.txt>

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

# [TODO]

- Replace multiple spaces with one \`:%s/$^ *$\\@\<! \\/ /g\` This
  says \"find 2 or more spaces (\' \\\\\') that are NOT preceded
  by \'the start of the line followed by zero or more spaces\'\"

<https://github.com/tpope/vim-surround/blob/master/doc/surround.txt>

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
