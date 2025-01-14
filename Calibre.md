---
date: 2023-09-15T00:00+03:00
tags:
  - inbox
external: https://calibre-ebook.com/
sr-due: 2024-01-29
sr-interval: 4
sr-ease: 277
---

# Calibre (software)

> Calibre is a cross-platform free and [[open-source]] suite of e-book software.
> Calibre supports organizing existing e-books into virtual libraries,
> displaying, editing, creating and converting e-books, as well as syncing
> e-books with a variety of e-readers.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Calibre_\(software\))</cite>

I use Calibre to convert books into required formats, and manage my
[[book|books]].

I also use custom [web app](https://github.com/janeczku/calibre-web) for
accessing my books across different devices.

Calibre providing special ebook converting tool, you can for example convert
EPUB files into [[PDF]] file:

```sh
# ebook-convert also have recipes (news, websites, etc.), which can be used to
# convert websites into ebooks.
ebook-convert input.epub output.pdf
ebook-convert --list-recipes
ebook-convert "NASA.recipe" "NASA.epub"
```
