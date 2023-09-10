---
external: https://github.com/renerocksai/telekasten.nvim
date: 2023-04-06
archive: true
sr-due: 2023-05-21
sr-ease: 272
sr-interval: 4
tags:
- inbox
- software
---

# Telekasten.nvim - working with a markdown zettelkasten / wiki and mixing it with a journal

> A Neovim (lua) plugin for working with a text-based, markdown zettelkasten /
> wiki and mixing it with a journal, based on [[Telescope.nvim|Telescope]]

Current prefix for all mappings is `<leader>t`.

# Features

In `(...)` are keys to use listed feature, need press prefix key and then key in
parentheses.
^xxxblkxx

- Find notes by name (`f`), #tag (`#`) or by searching within note text (`g`)
- Find daily, weekly notes by date. I not use it, handled by [[Taskwarrior]].
- **Vaults**: Support for multiple separate note collections.
- Place and follow links to your notes (`f`) or create new ones (`n`), with templates (`N`)
- Find notes that link back to your notes (`b`)
- Find other notes that link to the same note as the link under the cursor (`B`)
- Support for links to headings or specific paragraphs within specific notes
or globally (`:h telekasten.link_notation`). Examples:
  * [[Telekasten.nvim#TODO]] - links to the heading to the note named
  'Telekasten.nvim'
  * [[Telekasten.nvim#^xxxblkxx]] links to the paragraph with id ^xxxxxxxx within
  the note named 'A cool title'
  * [[Telekasten.nvim|A cool title]] links to the note named `201705061300` but shows
  the link as `A cool title` if `conceallevel=2`
  * [[#To-Do]] links to the heading 'TODO' within all notes
  * [[#^xxxblkxxx]] links to the paragraph with id ^xxxxxxxx within all notes
- Alias link names to keep everything clean and tidy ([[Telekasten.nvim|alias to current note]])
- Toggle `[ ]/[x]` to-do status (`T`)
- Paste images from clipboard (`L`), but I prefer insert links
- Insert links to images (`I`)
- Image previews, via `catimg`, `viu`, or extension
- Calendar support (`c`), but I prefer to use [[Taskwarrior]] and [[Khal]]

## TODO

- [ ] https://github.com/epwalsh/obsidian.nvim#navigate-to-the-current-line-when-using-obsidianopen