---
date: 2023-03-03
draft: true
sr-due: 2023-03-17
sr-ease: 270
sr-interval: 4
tags:
- inbox
- definition
sr-due: 2024-01-22
sr-interval: 250
sr-ease: 290
---

# fzf

It's a general purpose fuzzy finder written in Golang that can be used with any
list of things: files, processes, command history, git branches, etc.

## For zsh, it provides the following key bindings

{#C-T} - Paste the selected file path(s) into the command line {#C-R} - Paste
the selected command from history into the command line {#M-C} - cd into the
selected directory

## Fuzzy completion mode

You can select multiple items with TAB key::vim \*\*<TAB> Select Files under
parent directory::vim ../\*\*<TAB> Select Files under parent directory that
match `fzf`::vim ../fzf\*\*<TAB> `#AOSR/6lqgq/s/5ufe` Select Files under your
home directory::vim \~/\*\*<TAB> Select Directories under current directory
(single-selection)::cd \*\*<TAB> Select Directories under \~/github that match
`fzf`::cd \~/github/fzf\*\*<TAB> Select Process IDs. Can select multiple
processes with TAB or Shift-TAB::kill -9 <TAB>

Select Host names::ssh \*\*<TAB> Select Telent::telnet \*\*<TAB>

Select Environment variables / aliases ? unset \*\*<TAB> export \*\*<TAB>
unalias \*\*<TAB> ``
