---
date: 2023-04-02T00:00+03:00
tags:
  - blog
  - productivity
external:
  - https://github.com/jarun/nnn
sr-due: 2024-02-03
sr-interval: 6
sr-ease: 249
---

# NNN file manager

Enable deleting into trash with `NNN_TRASH` [[environment_variable]].
```bash
NNN_TRASH=1  # enable trash
```
## Shortcuts

`q` quit
`/` search filter
`tab` creates and/or cycles contexts
`?` list shortcuts

## Navigation shortcuts

up/down
&#10;<br>
<kbd>k</kbd><kbd>j</kbd>

Parent
&#10;<br>
<kbd>h</kbd>

Open
&#10;<br>
<kbd>l</kbd>

Top
&#10;<br>
<kbd>g</kbd>

End
&#10;<br>
<kbd>G</kbd>

Book(mark)
&#10;<br>
<kbd>B</kbd>

Switch Context
&#10;<br>
<kbd>1</kbd>-<kbd>4</kbd>

Quit
&#10;<br>
<kbd>2</kbd><kbd>Esc</kbd> or <kbd>ctrl</kbd>+<kbd>q</kbd>

QuitCD, preffered
&#10;<br>
<kbd>ctrl</kbd>+<kbd>g</kbd>

page up/page down
&#10;<br>
<kbd>ctrl</kbd>+<kbd>u</kbd> / <kbd>ctrl</kbd>+<kbd>d</kbd>

~, /, start, prev
&#10;<br>
<kbd>\~</kbd> <kbd>`</kbd> <kbd>@</kbd> <kbd>-</kbd>

First file/match
&#10;<br>
<kbd>'</kbd>

Jump to entry/offset
&#10;<br>
<kbd>J</kbd>

Toggle auto-advance on open
&#10;<br>
<kbd>ctrl</kbd>+<kbd>j</kbd>

Select bookmark
&#10;<br>
<kbd>b</kbd>

Cycle/new context
&#10;<br>
<kbd>tab</kbd> or <kbd>shift</kbd>+<kbd>tab</kbd>

Quit context
&#10;<br>
<kbd>q</kbd>

Pick/err, quit
&#10;<br>
<kbd>Q</kbd>

## Filter and prompt shortcuts
Filter
&#10;<br>
<kbd>/</kbd>

Exit prompt
&#10;<br>
<kbd>Esc</kbd>

Toggle hidden
&#10;<br>
<kbd>.</kbd>

Toggle type-to-nav
&#10;<br>
<kbd>ctrl</kbd>+<kbd>n</kbd>

Toggle last filter
&#10;<br>
<kbd>ctrl</kbd>+<kbd>l</kbd>

Unfilter, quit context
&#10;<br>
<kbd>Alt</kbd>+<kbd>Esc</kbd>

## Files shortcuts

Open with
&#10;<br>
<kbd>o</kbd>

File stats
&#10;<br>
<kbd>ctrl</kbd>+<kbd>f</kbd>

Rename/dup
&#10;<br>
<kbd>ctrl</kbd>+<kbd>r</kbd>

Archive
&#10;<br>
<kbd>z</kbd>

Toggle exe
&#10;<br>
<kbd>*</kbd>

(Un)select
&#10;<br>
<kbd>Space</kbd>

Select all
&#10;<br>
<kbd>a</kbd>

Copy here
&#10;<br>
<kbd>p</kbd>

Move here
&#10;<br>
<kbd>v</kbd>

Delete
&#10;<br>
<kbd>x</kbd>

Create new/link
&#10;<br>
<kbd>n</kbd>

Detail mode toggle
&#10;<br>
<kbd>d</kbd>

Batch rename
&#10;<br>
<kbd>r</kbd>

Edit file
&#10;<br>
<kbd>e</kbd>

Export list
&#10;<br>
<kbd>></kbd>

Select range/clear
&#10;<br>
<kbd>m</kbd>+<kbd>m</kbd>

Invert sel
&#10;<br>
<kbd>A</kbd>

Cp/mv sel as
&#10;<br>
<kbd>w</kbd>

Edit sel list
&#10;<br>
<kbd>E</kbd>

Send to FIFO
&#10;<br>
<kbd>Esc</kbd>

## Misc shortcuts
Select plugin, ???
&#10;<br>
<kbd>;</kbd>

Shell
&#10;<br>
<kbd>!</kbd>

Connect remote
&#10;<br>
<kbd>c</kbd>

Sort toggles
&#10;<br>
<kbd>t</kbd>

Set time type
&#10;<br>
<kbd>T</kbd>

Redraw
&#10;<br>
<kbd>ctrl</kbd>+<kbd>l</kbd>

Launch app
&#10;<br>
<kbd>=</kbd>

Cmd prompt
&#10;<br>
<kbd>]</kbd>

Unmount remote/archive
&#10;<br>
<kbd>u</kbd>

Manage session
&#10;<br>
<kbd>s</kbd>

Lock
&#10;<br>
<kbd>0</kbd>

Help, conf
&#10;<br>
<kbd>?</kbd>
<!--SR:!2023-06-08,4,210-->

## type-to-nav mode shortcuts
Go to first file/match
&#10;<br>
<kbd>'</kbd>

Toggle file selection
&#10;<br>
<kbd>+</kbd>

Mark CWD
&#10;<br>
<kbd>,</kbd>

Go to last visited dir
&#10;<br>
<kbd>-</kbd>

Show hidden files
&#10;<br>
<kbd>.</kbd>

Run a plugin by its key
&#10;<br>
<kbd>;</kbd>

Launch a GUI application
&#10;<br>
<kbd>=</kbd>

Export file list
&#10;<br>
<kbd>></kbd>

Visit start dir
&#10;<br>
<kbd>@</kbd>

Show command prompt
&#10;<br>
<kbd>]</kbd>

Visit /
&#10;<br>
<kbd>`</kbd>

Go HOME
&#10;<br>
<kbd>~</kbd>

TODO:
- bookmarks
- Hot-plugged drives
- Live Previews
- imgview
- Browse, rename images
- Read pdf as text
- Run commands
- dragdrop
