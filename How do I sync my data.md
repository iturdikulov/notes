---
date: 2023-07-15
tags:
  - inbox
  - definition
---

# How do I sync my data (and use it)

Mainly I have this data:
- TODO: working projects, out of sync. It's very critical to avoid data loss. I
use [[borg]] for daily backup.
- wiki library, synced by syncthing, two-way (data storage ↔ phone and
tablet). To avoid data loss, I am using [[git]] and 1-hours backup using
[[borg]] + 5 versions managed by syncthing. Additionally, my syncthing server
usually always online, to avoid sync conflicts.
Ignored directories: `.obsidian`, `.git`. I also place here
additional data:
  - fiction books (notes synced by kohighlits, files by dir2opds)
  - technical and other books with notes
  - my art
  - research papers
  - saved articles
  NOTE: Notes are placed right next to a book or file: `book.md` and `book.pdf`
- music, synced by syncthing, one way (data storage → phone and tablet), to
download/delete some files, I can ssh into my server and edit it there.
- photos from tablet and phone, synced by syncthing, one way (phone and tablet
→ data storage), to avoid data loss. I import them into library using
[[darktable]] and then delete from phone and tablet manually after processing.

- taskwarrior data ([[getting things done (gtd)]]), managed by taskd server.
sorted photos, journals, etc.
- videos are manged by samba server.
