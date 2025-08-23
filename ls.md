---
date: 2025-07-14T09:27:57+03:00
created: 2024-11-04T08:42:00+03:00
tags:
  - blog
  - ends
sr-due: 2025-07-27
sr-interval: 13
sr-ease: 261
---

# ls

Ls used to display everything in some directory, by default `ls` doesn't show hidden (started with `.`) files and directories.

`ls` is one of most popular [[GNU_Utilities]] tool.

List of common commands:

- List files in directory:<wbr class="f"> `ls <dir>`
- Display everything in `<dir>`, including hidden files:<wbr class="f"> `ls -a <dir>`
- Display all files, along with the size and timestamp:<wbr class="f"> `ls -lh <dir>`
- Display files, sorted by size:<wbr class="f"> `ls -S <dir>`
- Display directories only:<wbr class="f"> `ls -d */ <dir>`
- Display directories only, include hidden:<wbr class="f"> `ls -d .*/ */ <dir>`
- Display files sorted by create time:<wbr class="f"> `ls -lt`
- To display files in a single column, without details:<wbr class="f"> `ls -1`
- Show all the subtree files (Recursive Mode):<wbr class="f"> `ls -R

I also use "modern" replacement - [eza](https://eza.rocks/), with dynamic aliases in my [[Zsh]] config (`~/.zshrc` file):

```bash
if (( $+commands[eza] )); then
  IGNORE_GLOB="UnrealEngine"
  alias eza="eza --group-directories-first --git";
  alias l="eza -bl -I $IGNORE_GLOB";
  alias ll="eza -abghilmu -I $IGNORE_GLOB";
  alias la="LC_COLLATE=C eza -ablF -I $IGNORE_GLOB";
  alias lm='ll --sort=modified'
  alias tree='eza --tree'
  alias treel='eza --color=always --tree|less'
else
  alias l='ls'
  alias ll='ls -la'          # long listing format
  alias la='ls -d .* --color=auto' # hidden files
  alias lm='ls -lt'          # by modification date, newest first
fi
```

## `ls` aliases flashcards

- Standard listing alias: <wbr class="f"> `l`
- Detailed listing alias: <wbr class="f"> `ll`
- Alias to list hidden files: <wbr class="f"> `la`
- Alias to list with sorting by modification date: <wbr class="f"> `lm`
