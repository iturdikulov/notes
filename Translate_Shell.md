---
date: 2023-08-05
tags:
  - inbox
  - linguistic
sr-due: 2024-02-02
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
&#10;
Russian → English - `ru:en`
English → Russian - ` en:ru`
