---
date: 2023-06-17
sr-due: 2023-08-25
sr-ease: 230
sr-interval: 1
tags:
- inbox
- software
---

# ripgrep

> ripgrep is a line-oriented search tool that **recursively** searches the
> current directory for a regex pattern. By default, ripgrep will respect
> `.gitignore` rules and automatically skip hidden files/directories and binary
> files. (To disable all automatic filtering by default, use rg -uuu.) ripgrep
> has first class support on Windows, macOS and **Linux**, with binary downloads
> available for every release. ripgrep is similar to other popular search tools
> like The Silver Searcher, ack and grep. --
> [ripgrep](https://github.com/BurntSushi/ripgrep)

TODO: https://github.com/BurntSushi/ripgrep/blob/master/GUIDE.md

## Commands

```sh
# Recursively search the current directory for a regular expression:
rg regular_expression

# Search for regular expressions recursively in the current directory, including hidden files and files listed in `.gitignore`:
rg --no-ignore --hidden regular_expression
rg -uuu -. regular_expression

# Search for a regular expression only in a subset of directories:
rg regular_expression set_of_subdirs

# Search for a regular expression in files matching a glob (e.g. `README.*`):
rg regular_expression --glob glob
rg regular_expression -g glob

# Search for a regular expression from the given file
rg regular_expression -f pattern_file

# Search for filenames that match a regular expression:
rg --files | rg regular_expression

# Only list matched files (useful when piping to other commands):
rg --files-with-matches regular_expression

# Show lines that do not match the given regular expression:
rg --invert-match regular_expression

# Search a literal string pattern:
rg --fixed-strings -- string
```