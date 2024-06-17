---
date: 2023-03-09
tags:
  - inbox
  - SR_software
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 277
---

# Pandoc

Pandoc is a [[Haskell]] library and command-line tool to convert markup files
(Markdown, LaTeX, HTML), it's also can produce PDF output.
TODO: add source

It supports a dozen input/output formats, you can check this by running
`pandoc --list-input-formats` and `pandoc --list-output-formats` commands, or
use the `--from` and `--to` options to select formats interactively.

Pandoc supports Markdown with various features like: syntax for tables,
definition lists, metadata blocks, footnotes, citations, math, and much more.

Program has modular design and use [[Abstract_syntax_tree_AST|AST]] to represent
documents. Reader modules - parse text in a given format and produce a native
representation of the document (AST). Writer modules convert this AST into a
target format. Using this design adding an input or output format requires only
adding a reader or writer. Users also can run custom pandoc filters to modify
the intermediate AST.

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

Generally I use shell script (check `pandoc-convert-example.sh`) to convert my
notes from [[markdown]] to something, to support [[bibtex]] [[citation]], like
`@JohnMacFarlanePandocUserGuide2023`.

In results pandoc using various flags (BibTeX file, citation style, etc.)
generate markdown file with integrated citations, and [[bibliography]]. Later I
use this to generate my static site, using [[Hugo]].

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

- `-t` - input format [[markdown#gfm]] TODO: add this heading/note
- `-f` - output format (markdown+raw_html)
- `--wrap=preserve` - preserve line breaks
- `--csl=books/research-institute-for-nature-and-forest.csl` - citation style
- `--bibliography=books/library.bib` - BibTeX file (exported from Zotero)
- `-M reference-section-title=References` - title of the bibliography section
- `--mathjax` - use [[Mathjax]] to render math

## Tools

- [Try pandoc!](https://pandoc.org/try/)

## References

- [ ] [How to make a scientific looking PDF from markdown (with bibliography) · GitHub](https://gist.github.com/maxogden/97190db73ac19fc6c1d9beee1a6e4fc8)
