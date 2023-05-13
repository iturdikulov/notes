---
canonicalUrl: https://syncthing.net/
date: 2023-04-09
draft: true
tags:
- inbox
- definition
---

# Syncthing

> Peer-to-peer file synchronization application. It can sync files between
> devices on a local network, or between remote devices over the Internet. --
> [Wikipeida](https://en.wikipedia.org/wiki/Syncthing)

## Resolve conflicts

I widely use it to sync my notes, books, photos, etc. between my devices.

To resolve conflicts I use
[syncthing-conflict-resolver](https://github.com/dschrempf/syncthing-resolve-conflicts).

Usage in my case very simple. I go into directory with conflicted files and run
`syncthing-resolve-conflicts -d . -f`. It will show me conflicted files and ask
me what to do with them.