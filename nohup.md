---
date: 2023-06-15
tags:
  - inbox
  - definition
---

# Nohup

> nohup - run a command immune to hangups, with output to a non-tty
> -- man nohup

Nohup allow to run a command immune to hangups, with output to a non-tty.
It's useful when I want to "daemonize" a process.

## How I use it

`nohup $COMMAND &` - run a command immune to hangups, with output to a non-tty

If I want leave job in background and close shell session, in my case (`zsh`) I
need to run `setopt nohup` before pressing `C-d`.

If required redirect output to specific file and do it silently,
I can use something like this (inbox.sh script) `nohup mailsync &>/tmp/mailsync.log & disown; neomutt`
