---
created: 2023-08-05T00:00+03:00
tags:
  - blog
  - linguistic
sr-due: 2025-07-22
sr-interval: 7
sr-ease: 267
---

# Translate Shell

> Translate Shell (formerly Google Translate CLI) is a command-line translator
> powered by Google Translate (default), Bing Translator, Yandex.Translate, and
> Apertium. It gives you easy access to one of these translation engines in your
> terminal.

Main command is `trans`.

TODO: go through documentation/command line switches.

## REPL

To go into REPL mode, type `trans -shell <options>`.

Available REPL modes:

- `-brief`, only the most relevant translation
- `en:ru`, specify source and target language

To exit REPL mode, type `C-d`.

Set the source language and the target language in translate-shell repl?
<br class="f">
Russian → English - `ru:en`
English → Russian - ` en:ru`
