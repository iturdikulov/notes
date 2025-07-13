---
created: 2023-04-02T00:00+03:00
tags:
  - blog
  - cheat-sheets
external:
  - https://github.com/jarun/nnn
sr-due: 2025-07-22
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
<br class="f">
<kbd>k</kbd><kbd>j</kbd>

Parent
<br class="f">
<kbd>h</kbd>

Open
<br class="f">
<kbd>l</kbd>

Top
<br class="f">
<kbd>g</kbd>

End
<br class="f">
<kbd>G</kbd>

Book(mark)
<br class="f">
<kbd>B</kbd>

Switch Context
<br class="f">
<kbd>1</kbd>-<kbd>4</kbd>

Quit
<br class="f">
<kbd>2</kbd><kbd>Esc</kbd> or <kbd>ctrl</kbd>+<kbd>q</kbd>

QuitCD, preffered
<br class="f">
<kbd>ctrl</kbd>+<kbd>g</kbd>

page up/page down
<br class="f">
<kbd>ctrl</kbd>+<kbd>u</kbd> / <kbd>ctrl</kbd>+<kbd>d</kbd>

~, /, start, prev
<br class="f">
<kbd>\~</kbd> <kbd>`</kbd> <kbd>@</kbd> <kbd>-</kbd>

First file/match
<br class="f">
<kbd>'</kbd>

Jump to entry/offset
<br class="f">
<kbd>J</kbd>

Toggle auto-advance on open
<br class="f">
<kbd>ctrl</kbd>+<kbd>j</kbd>

Select bookmark
<br class="f">
<kbd>b</kbd>

Cycle/new context
<br class="f">
<kbd>tab</kbd> or <kbd>shift</kbd>+<kbd>tab</kbd>

Quit context
<br class="f">
<kbd>q</kbd>

Pick/err, quit
<br class="f">
<kbd>Q</kbd>

## Filter and prompt shortcuts

Filter
<br class="f">
<kbd>/</kbd>

Exit prompt
<br class="f">
<kbd>Esc</kbd>

Toggle hidden
<br class="f">
<kbd>.</kbd>

Toggle type-to-nav
<br class="f">
<kbd>ctrl</kbd>+<kbd>n</kbd>

Toggle last filter
<br class="f">
<kbd>ctrl</kbd>+<kbd>l</kbd>

Unfilter, quit context
<br class="f">
<kbd>Alt</kbd>+<kbd>Esc</kbd>

## Files shortcuts

Open with
<br class="f">
<kbd>o</kbd>

File stats
<br class="f">
<kbd>ctrl</kbd>+<kbd>f</kbd>

Rename/dup
<br class="f">
<kbd>ctrl</kbd>+<kbd>r</kbd>

Archive
<br class="f">
<kbd>z</kbd>

Toggle exe
<br class="f">
<kbd>*</kbd>

(Un)select
<br class="f">
<kbd>Space</kbd>

Select all
<br class="f">
<kbd>a</kbd>

Copy here
<br class="f">
<kbd>p</kbd>

Move here
<br class="f">
<kbd>v</kbd>

Delete
<br class="f">
<kbd>x</kbd>

Create new/link
<br class="f">
<kbd>n</kbd>

Detail mode toggle
<br class="f">
<kbd>d</kbd>

Batch rename
<br class="f">
<kbd>r</kbd>

Edit file
<br class="f">
<kbd>e</kbd>

Export list
<br class="f">
<kbd>></kbd>

Select range/clear
<br class="f">
<kbd>m</kbd>+<kbd>m</kbd>

Invert sel
<br class="f">
<kbd>A</kbd>

Cp/mv sel as
<br class="f">
<kbd>w</kbd>

Edit sel list
<br class="f">
<kbd>E</kbd>

Send to FIFO
<br class="f">
<kbd>Esc</kbd>

## Misc shortcuts

Select plugin, ???
<br class="f">
<kbd>;</kbd>

Shell
<br class="f">
<kbd>!</kbd>

Connect remote
<br class="f">
<kbd>c</kbd>

Sort toggles
<br class="f">
<kbd>t</kbd>

Set time type
<br class="f">
<kbd>T</kbd>

Redraw
<br class="f">
<kbd>ctrl</kbd>+<kbd>l</kbd>

Launch app
<br class="f">
<kbd>=</kbd>

Cmd prompt
<br class="f">
<kbd>]</kbd>

Unmount remote/archive
<br class="f">
<kbd>u</kbd>

Manage session
<br class="f">
<kbd>s</kbd>

Lock
<br class="f">
<kbd>0</kbd>

Help, conf
<br class="f">
<kbd>?</kbd>

<!--SR:!2023-06-08,4,210-->

## type-to-nav mode shortcuts

Go to first file/match
<br class="f">
<kbd>'</kbd>

Toggle file selection
<br class="f">
<kbd>+</kbd>

Mark CWD
<br class="f">
<kbd>,</kbd>

Go to last visited dir
<br class="f">
<kbd>-</kbd>

Show hidden files
<br class="f">
<kbd>.</kbd>

Run a plugin by its key
<br class="f">
<kbd>;</kbd>

Launch a GUI application
<br class="f">
<kbd>=</kbd>

Export file list
<br class="f">
<kbd>></kbd>

Visit start dir
<br class="f">
<kbd>@</kbd>

Show command prompt
<br class="f">
<kbd>]</kbd>

Visit /
<br class="f">
<kbd>`</kbd>

Go HOME
<br class="f">
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
