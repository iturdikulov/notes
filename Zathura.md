---
created: 2022-12-29T00:00+03:00
tags:
  - blog
  - archive
sr-due: 2025-07-22
sr-interval: 4
sr-ease: 273
---

# Zathura document viewer

Zathura is my favorite [[document|documents']] viewer. It's support many formats (for example [[PDF]]), lightweight and fast.

I use custom configuration to adjust colors/fonts and paddings.

## General keybindings

Navigation, zooming, control UI, open links, etc.

Go to next/previous page:<wbr class="f"> `J` / `K`

Scroll to the left, down, up or right direction:<wbr class="f"> `h` / `j` / `k` / `l`

Scroll to half page up or down:<wbr class="f"> `C-u` / `C-d`

Scroll to full page up or down:<wbr class="f"> `C-f` / `C-b` or `Space` / `S-space`

Scroll to half page left or right (useful for wide documents):<wbr class="f"> `C-t` / `C-y`

Scroll to full page left or right (useful for wide documents):<wbr class="f"> `t` / `y`

Go to the first/last page:<wbr class="f"> `gg` / `G`

Go to nth page:<wbr class="f"> `nG`

Snaps to the current page (sort of centering current page):<wbr class="f"> `P`

Go to bottom / top of current page:<wbr class="f"> `H` / `L`

Move backward and forward through the jump list:<wbr class="f"> `C-o` / `i`

Bisect forward and backward between the last two jump points. Generate new jump point and go to it.
<br class="f">
`C-j` / `^k`

Abort (for example from command-line mode):<wbr class="f"> `Esc` / `C-c`

Fit content in window to width / best-fit (full page):<wbr class="f"> `s` / `a`

Search text forward / backward:<wbr class="f"> `/` / `?`

Search for next / previous occurrence of search pattern:<wbr class="f"> `n` / `N`

Open document / open document in current directory:<wbr class="f"> `o` / `O`

Follow links (like in vimium):<wbr class="f"> `f`

Display link target (page number):<wbr class="f"> `F`

Copy link target to clipboard (page number):<wbr class="f"> `c`

Enter command-line mode:<wbr class="f"> `:`

Rotate by 90 degrees clockwise:<wbr class="f"> `r` <!--SR:!2024-09-24,3,273-->

Recolor (grayscale and invert colors, sort of night mode):<wbr class="f"> `C-r`

Reload document:<wbr class="f"> `R`

Toggle dual page view:<wbr class="f"> `d`

Switch to presentation mode (full-screen without UI):<wbr class="f"> `F5`

Switch to full-screen mode (like presentation but with UI):<wbr class="f"> `F11`

Toggle statusbar/inputbar:<wbr class="f"> `C-n` / `^m`

Zoom in / reset, zoom out:<wbr class="f"> `+` / `=`, `-` or `zI` / `z0` or `zO` / `zz`

Zoom to size n:<wbr class="f"> `n=`

Set a quickmark:<wbr class="f"> `m<letter>`

Go to quickmark:<wbr class="f"> `'<letter>`

Quit (like in vim):<wbr class="f"> `q`

## Index mode

Special mode for navigating the document's index (table of contents).

Show index (table of contents) and switch to `Index mode`:<wbr class="f"> `Tab`

Move up / down and expand / collapse current entry:<wbr class="f"> `h` / `j` / `k` / `l`

Expand/collapse all entries:<wbr class="f"> `L` / `H`

Select and open entry:<wbr class="f"> `space` / `Return`

## Mouse bindings

Wheel up / Wheel down:<wbr class="f"> `ScrollWheelUp` / `ScrollWheelDown`

Zoom in / out:<wbr class="f"> `C-ScrollWheelUp` / `C-ScrollWheelDown`

Pan the document:<wbr class="f"> Hold `RightMouse`

Follow link:<wbr class="f"> `LeftMouse`

## Commands

List bookmarks (stored in `~/.local/share/zathura/bookmarks`):<wbr class="f"> `:blist`

Save a bookmark:<wbr class="f"> `:bmark <name>`

Delete a bookmark:<wbr class="f"> `:bdelete <name>`

Close document (but not Zathura):<wbr class="f"> `:close`

Open a document (support tab completion):<wbr class="f"> `:open`

Show document information:<wbr class="f"> `info`

Execute an external command. $FILE expands to the current document path, and $PAGE to the current page number ? `:exec <command>`

Print document:<wbr class="f"> `:print`

Save document (and force overwriting) with optional path:<wbr class="f"> `:write[!] [<path>]`

Write values, descriptions, etc. of all current settings to a file:<wbr class="f"> `dump`

Export attachments ? For "export", there are two possibilities:

`export attachment-{name} {file_name}`

`export image-p{page_number}-{image_number} {file_name}`

Set page offset ? `:offset <offset>` The command `:offset <number>` will make Zathura take into account an offset when jumping to a page number (by typing
<number>G, the command :<number> will not mind the offset). For example, a given book begins counting its pages on the PDF's 17th page (so on page 17, the index is 1; on 18 it is 2, and so on). On setting :offset 16, 245G will jump to the 261st page of the PDF rather than the 245th.

## External links

- `man zathura`
- [Zathura - ArchWiki](https://wiki.archlinux.org/title/zathura)
- [pwmt.org](https://pwmt.org/projects/zathura/)
