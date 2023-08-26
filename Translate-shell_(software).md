---
date: 2023-08-05
sr-due: 2023-08-25
sr-ease: 232
sr-interval: 1
tags:
- inbox
- dev-tip
---

# Translate-shell

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
?
Russian → English - `ru:en`
English → Russian - ` en:ru`