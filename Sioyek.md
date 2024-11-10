---
date: 2023-08-27
external:
  - https://sioyek.info/
tags:
  - inbox
  - doc
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 263
---
# Sioyek

> Sioyek is a [[PDF]] viewer with a focus on technical books and research
> papers.\
> — <cite>[Sioyek](https://sioyek.info/)</cite>

Key features for me:

- Just good [[PDF]] viewer
- [[Neovim|Vim]] like keybindings
- Support highlighting and bookmarks
- Anchor links support (marks)
- Command palette menu
- [[SyncTeX]] support
- Extensible
- Portals (preview multiple places of document in same time)

## Shortcuts

Open a new document::`o`

Open recent documents list::`O`

Up/Down navigation::`j`/`k`

Next/Previous screen navigation::`<Space>`/`<S-Space>`

Zoom in/Zoom out/Reset::`+`/`-`/`=`

Full screen::`F11`, but I use [[DWM#Keyboard shortcuts]] full-screen,`<D-y>`

Fit document to screen ignore margins/with margins::`F9`/`F8`

Go to first/nth page::`gg`/`<num>gg`

Go to last page::`S-g`

Open table of contents::`t` <!--SR:!2024-09-06,7,263-->

Back/forward in history::`<BS>`/`S-<BS>`

Search in Google Scholar and library genesis::Select text and press `ss`/`sl`

Open command palette, useful to find functional::`:`

Start search/next/previous::`/`/`[num]n`/`[num]N`

## Marks

Create persistent mark with `u` letter/go to this mark::`mu` / `` `u``

What different between lowercase and uppercase marks?
&#10;<br>
lowercase are local to each file, but upper case marks are global (persistent)

Create visual mark to highlight current line, sort of paper bookmark
&#10;<br>
`<RightMouse>`

Transform visual mark to line mark and move to the next/previous line?
&#10;<br>
`j`/`k`

Quick go-to visual mark (created by right mouse click) and back::`` ` ``

How to enable visual scroll mode, which automatically move visual scroll mark by
wheel mouse?
&#10;<br>
`F7`

## Bookmarks and highlights

Create bookmark in current location
&#10;<br>
`b<letter>`, to auto-set text as bookmark title, select text and press `b`

Search bookmark in the current file and all the bookmarks::`gb` and `gB`

Delete the closest bookmark::Go to bookmark (search → select), and press `db`

Create highlight::select text and press `h<letter>`

Search highlight in the current file and all the highlights::`gh` and `gH`

Delete the closest highlight
&#10;<br>
`<LeftMouse>` on highlight, and press `dh`

## Smart Jump and Portals

Go to figure (even not linked) or cited reference::`<MiddleClick>`

Search line in Google Scholar or in library genesis::`<MiddleClick>`

Open portal helper (it'll load the closest portal)::`F12`

How to create portal?
&#10;<br>
`p` to use current location as source (select source), go to destination, and
press `p` again. You can even create portals between different files!

How to create portal using mouse and link as destination?
&#10;<br>
`p` to select source, then click on link (or middle click using smart jumps).

How to delete the closest portal?
&#10;<br>
`dp`, this will delete the closest portal to current location (which displayed
in helper window)

How to adjust portal position?
&#10;<br>
press `P` while portal active, adjust destination (position) and press `<BCK>`

How to adjust portal position and other parameters, using mouse?
&#10;<br>
`wheel` to adjust position, mouse drag to pan and `<C-wheel>` to zoom in/zoom
out

## Configuration

To edit and find configuration, use command pallet (`:`) and following search
keys:

– prefs
– prefs_user
– keys
– keys_user

## TODO

- Synctex
- Extensions

## References

- [Official documentation](https://sioyek-documentation.readthedocs.io/en/latest/)
- [GitHub repository](https://github.com/ahrm/sioyek)
- [GitHub extensions repository](https://github.com/ahrm/sioyek-python-extensions)
- [ ] [Implementing text to speech for sioyek PDF viewer | ahrm’s blog](https://ahrm.github.io/jekyll/update/2022/07/05/implementing-a-screen-reader-for-sioyek.html)
- [ ] [Sioyek - Feature Overview](https://www.youtube.com/watch?v=yTmCI0Xp5vI)
- [ ] [Sioyek - Tutorial](https://www.youtube.com/watch?v=RaHRvnb0dY8)
