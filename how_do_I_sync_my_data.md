---
date: 2023-07-15T00:00+03:00
tags:
  - inbox
  - productivity
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 244
---

# How do I sync my data (and use it)

Mainly I have this data:
- working projects, out of sync. It's very critical to avoid data loss. I
use [[Borg]] for daily backup.
- wiki library, synced by syncthing, two-way (data storage ↔ phone and
tablet). To avoid data loss, I am using [[Git]] and 1-hours backup using
[[Borg]] + 5 versions managed by syncthing. Additionally, my syncthing server
usually always online, to avoid sync conflicts.
Ignored directories: `.obsidian`, `.git`. I also place here
additional data:
  - fiction books (notes synced by kohighlits, files by dir2opds), placed in
  `papis/fiction` directory
  - technical books, research papers and other documents with notes, placed in
  `papis` directory
  - my art, placed in `scketch` directory
  - saved articles
  NOTE: Notes are placed right next to a book or file: `book.md` and `book.pdf`
- music, synced by syncthing, one way (data storage → phone and tablet), to
download/delete some files, I can ssh into my server and edit it there. I use it
mostly to listen music offline.
- photos from tablet and phone, synced by syncthing, one way (phone and tablet
→ data storage), to avoid data loss. I import them into library using
[[darktable]] and then delete from phone and tablet manually after processing.
- taskwarrior data ([[GTD]]), managed by taskd server.
sorted photos, journals, etc.
- videos are manged by samba server.

Check also [[maintenance]].
