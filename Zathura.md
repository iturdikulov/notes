---
date: 2022-12-29T00:00+03:00
tags:
  - inbox
  - doc
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 273
---

# Zathura document viewer

Zathura is my favorite [[document|documents']] viewer. It's support many
formats (for example [[PDF]]), lightweight and fast.

I use custom configuration to adjust colors/fonts and paddings.

## General keybindings

Navigation, zooming, control UI, open links, etc.

Go to next/previous page::`J` / `K`

Scroll to the left, down, up or right direction::`h` / `j` / `k` / `l`

Scroll to half page up or down::`C-u` / `C-d`

Scroll to full page up or down::`C-f` / `C-b` or `Space` / `S-space`

Scroll to half page left or right (useful for wide documents)::`C-t` / `C-y`

Scroll to full page left or right (useful for wide documents)::`t` / `y`

Go to the first/last page::`gg` / `G`

Go to nth page::`nG`

Snaps to the current page (sort of centering current page)::`P`

Go to bottom / top of current page::`H` / `L`

Move backward and forward through the jump list::`C-o` / `i`

Bisect forward and backward between the last two jump points. Generate new
jump point and go to it.
&#10;<br>
`C-j` / `^k`

Abort (for example from command-line mode)::`Esc` / `C-c`

Fit content in window to width / best-fit (full page)::`s` / `a`

Search text forward / backward::`/` / `?`

Search for next / previous occurrence of search pattern::`n` / `N`

Open document / open document in current directory::`o` / `O`

Follow links (like in vimium)::`f`

Display link target (page number)::`F`

Copy link target to clipboard (page number)::`c`

Enter command-line mode::`:`

Rotate by 90 degrees clockwise::`r` <!--SR:!2024-09-24,3,273-->

Recolor (grayscale and invert colors, sort of night mode)::`C-r`

Reload document::`R`

Toggle dual page view::`d`

Switch to presentation mode (full-screen without UI)::`F5`

Switch to full-screen mode (like presentation but with UI)::`F11`

Toggle statusbar/inputbar::`C-n` / `^m`

Zoom in / reset, zoom out::`+` / `=`, `-` or `zI` / `z0` or `zO` / `zz`

Zoom to size n::`n=`

Set a quickmark::`m<letter>`

Go to quickmark::`'<letter>`

Quit (like in vim)::`q`

## Index mode

Special mode for navigating the document's index (table of contents).

Show index (table of contents) and switch to `Index mode`::`Tab`

Move up / down and expand / collapse current entry::`h` / `j` / `k` / `l`

Expand/collapse all entries::`L` / `H`

Select and open entry::`space` / `Return`

## Mouse bindings

Wheel up / Wheel down::`ScrollWheelUp` / `ScrollWheelDown`

Zoom in / out::`C-ScrollWheelUp` / `C-ScrollWheelDown`

Pan the document::Hold `RightMouse`

Follow link::`LeftMouse`

## Commands

List bookmarks (stored in `~/.local/share/zathura/bookmarks`)::`:blist`

Save a bookmark::`:bmark <name>`

Delete a bookmark::`:bdelete <name>`

Close document (but not Zathura)::`:close`

Open a document (support tab completion)::`:open`

Show document information::`info`

Execute an external command.
$FILE expands to the current document path, and
$PAGE to the current page number
? `:exec <command>`

Print document::`:print`

Save document (and force overwriting) with optional path::`:write[!] [<path>]`

Write values, descriptions, etc. of all current settings to a file::`dump`

Export attachments ? For "export", there are two possibilities:

`export attachment-{name} {file_name}`

`export image-p{page_number}-{image_number} {file_name}`

Set page offset ? `:offset <offset>` The command `:offset <number>` will make
Zathura take into account an offset when jumping to a page number (by typing
<number>G, the command :<number> will not mind the offset). For example, a given
book begins counting its pages on the PDF's 17th page (so on page 17, the index
is 1; on 18 it is 2, and so on). On setting :offset 16, 245G will jump to the
261st page of the PDF rather than the 245th.

## External links

- `man zathura`
- [Zathura - ArchWiki](https://wiki.archlinux.org/title/zathura)
- [pwmt.org](https://pwmt.org/projects/zathura/)
