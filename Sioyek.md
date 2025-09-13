---
created: 2023-08-27T00:00+03:00
external:
  - https://sioyek.info/
tags:
  - blog
  - jewelry-clean
sr-due: 2025-07-22
sr-interval: 3
sr-ease: 263
---

# Sioyek

> Sioyek is a [[PDF]] viewer with a focus on technical books and research papers.\
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

## Base Shortcuts

- Open a new document – <wbr class="f"> `o` <!--SR:!2025-09-16,3,257-->
- Open recent documents list – <wbr class="f"> `O` <!--SR:!2025-09-16,3,257-->
- Up/Down navigation – <wbr class="f"> `k`/`j` <!--SR:!2025-09-16,3,257-->
- Next/Previous screen navigation – <wbr class="f"> `<Space>`/`<S-Space>` <!--SR:!2025-09-16,3,257-->
- Zoom in/Zoom out/Reset – <wbr class="f"> `+`/`-`/`=` <!--SR:!2025-09-14,1,237-->
- Full screen – <wbr class="f"> `F11`, but I use full-screen shortcut,`<D-f>` <!--SR:!2025-09-16,3,257-->
- Fit document to screen ignore margins/with margins – <wbr class="f"> `F9`/`F8` <!--SR:!2025-09-16,3,257-->
- Go to first/nth page – <wbr class="f"> `gg`/`<num>gg` <!--SR:!2025-09-16,3,257-->
- Go to last page – <wbr class="f"> `S-g`
- Open table of contents – <wbr class="f"> `t` <!--SR:!2025-10-01,18,263-->
- Back/forward in history – <wbr class="f"> `<BS>`/`S-<BS>`
- Search in Google Scholar and library genesis – <wbr class="f"> Select text and press `ss`/`sl`
- Open command palette, useful to find functional – <wbr class="f"> `:`
- Start search/next/previous – <wbr class="f"> `/`/`[num]n`/`[num]N`

## Marks

Create persistent mark with `u` letter/go to this mark – <wbr class="f"> `mu` / `` `u ``

What different between lowercase and uppercase marks?
<span class="f"></span>
lowercase are local to each file, but upper case marks are global (persistent)

Create visual mark to highlight current line, sort of paper bookmark
<span class="f"></span>
`<RightMouse>`

Transform visual mark to line mark and move to the next/previous line?
<span class="f"></span>
`j`/`k`

Quick go-to visual mark (created by right mouse click) and back – <wbr class="f"> `` ` ``

How to enable visual scroll mode, which automatically move visual scroll mark by wheel mouse?
<span class="f"></span>
`F7`

## Bookmarks and highlights

Create bookmark in current location
<span class="f"></span>
`b<letter>`, to auto-set text as bookmark title, select text and press `b`

Search bookmark in the current file and all the bookmarks – <wbr class="f"> `gb` and `gB`

Delete the closest bookmark – <wbr class="f"> Go to bookmark (search → select), and press `db`

Create highlight – <wbr class="f"> select text and press `h<letter>`

Search highlight in the current file and all the highlights – <wbr class="f"> `gh` and `gH`

Delete the closest highlight
<span class="f"></span>
`<LeftMouse>` on highlight, and press `dh`

## Smart Jump and Portals

Go to figure (even not linked) or cited reference – <wbr class="f"> `<MiddleClick>`

Search line in Google Scholar or in library genesis – <wbr class="f"> `<MiddleClick>`

Open portal helper (it'll load the closest portal) – <wbr class="f"> `F12`

How to create portal?
<span class="f"></span>
`p` to use current location as source (select source), go to destination, and press `p` again. You can even create portals between different files!

How to create portal using mouse and link as destination?
<span class="f"></span>
`p` to select source, then click on link (or middle click using smart jumps).

How to delete the closest portal?
<span class="f"></span>
`dp`, this will delete the closest portal to current location (which displayed in helper window)

How to adjust portal position?
<span class="f"></span>
press `P` while portal active, adjust destination (position) and press `<BCK>`

How to adjust portal position and other parameters, using mouse?
<span class="f"></span>
`wheel` to adjust position, mouse drag to pan and `<C-wheel>` to zoom in/zoom out

## Configuration

To edit and find configuration, use command palette (`:`) and following search keys:

– prefs – prefs_user – keys – keys_user

## External links

- [Official documentation](https://sioyek-documentation.readthedocs.io/en/latest/)
- [GitHub repository](https://github.com/ahrm/sioyek)
- [GitHub extensions repository](https://github.com/ahrm/sioyek-python-extensions)
- [ ] [Implementing text to speech for sioyek PDF viewer | ahrm’s blog](https://ahrm.github.io/jekyll/update/2022/07/05/implementing-a-screen-reader-for-sioyek.html)
- [ ] [Sioyek - Feature Overview](https://www.youtube.com/watch?v=yTmCI0Xp5vI)
- [ ] [Sioyek - Tutorial](https://www.youtube.com/watch?v=RaHRvnb0dY8)
