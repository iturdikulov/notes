---
title: Pandoc
date: 2023-03-09
tags:
  - inbox
  - definition
sr-due: 2023-04-14
sr-interval: 1
sr-ease: 230
---

Pandoc [@JohnMacFarlanePandocUserGuide2023] is a [[haskell]]
library and command-line tool to convert markup files (Markdown, LaTeX, HTML),
it's also can produce PDF output.

It supports a dozen input/output formats, you can check this by running
`pandoc --list-input-formats` and `pandoc --list-output-formats` commands, or
use the `--from` and `--to` options to select formats interactively.

Pandoc supports Markdown with various features like: syntax for tables,
definition lists, metadata blocks, footnotes, citations, math, and much more.

Program has modular design and use [[abstract syntax tree|ast]] to
represent documents. Reader modules - parse text in a given format and produce a
native representation of the document (AST). Writer modules convert this AST
into a target format. Using this design adding an input or output format
requires only adding a reader or writer. Users also can run custom pandoc
filters to modify the intermediate AST.

Pandoc limitations are happens because intermediate representation of a document
is less expressive than many of the formats it converts between, and you can
lose specific data. Pandoc give more attention to structural elements of a
document, but not formatting details like margin size. One of the best
conversion results can be received from pandoc Markdown to other formats, less
expressive formats conversions can be lossy.

## Basic pandoc usage

- Convert file to PDF (the output format is determined by file extension):

```bash
pandoc input.md -o output.pdf
```

- Force conversion to use a specific format (format is GFM, but file format is
  markdown):

```bash
pandoc input.docx --to gfm -o output.md
```

- Convert to a standalone file with the appropriate headers/footers (valid HTML
  file including <head> and <body>):

```bash
pandoc input.md -s -o output.html
```

## How I use pandoc

Generally I use [shell script](./convert.sh) to convert my notes from
[[markdown]] to Markdown, to support [[bibtex]]
[[citation]], like `@JohnMacFarlanePandocUserGuide2023`.

In results pandoc using various flags (BibTeX file, citation style, etc.)
generate markdown file with integrated citations, and
[[bibliography]]. Later I use this to generate my static site,
using [[hugo]].

Here is the core part of the script:

```bash
pandoc -C \
       -t gfm  \
       -f markdown+raw_html \
       --bibliography=books/library.bib \
       --wrap=preserve --reference-links \
       --csl=books/research-institute-for-nature-and-forest.csl \
       -M reference-section-title=References \
       --mathjax \
       -o $out_file \
       "$file" && \
```

- `-t` - input format [[markdown#gfm]] ::TODO: add this
  heading/note ::
- `-f` - output format (markdown+raw_html)
- `--wrap=preserve` - preserve line breaks
- `--csl=books/research-institute-for-nature-and-forest.csl` - citation style
- `--bibliography=books/library.bib` - BibTeX file (exported from Zotero)
- `-M reference-section-title=References` - title of the bibliography section
- `--mathjax` - use [[mathjax]] to render math
