---
date: 2023-06-15T00:00+03:00
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 252
---

# Nohup

> nohup - run a command immune to hangups, with output to a non-tty.\
> — <cite>`man nohup`</cite>

Nohup allow running a command immune to hangups, with output to a non-tty. It's
useful when I want to "[[daemon|daemonize]]" a process.

## How I use it

`nohup $COMMAND &` - run a command immune to hangups, with output to a non-tty

If I want leave job in background and close shell session, in my case (`zsh`) I
need to run `setopt nohup` before pressing `C-d`.

If required redirect output to specific file and do it silently, I can use
something like this (inbox.sh script)
`nohup mailsync &>/tmp/mailsync.log & disown; neomutt`
