---
external: https://syncthing.net/
date: 2023-04-09
draft: true
sr-due: 2023-05-21
sr-ease: 270
sr-interval: 4
tags:
- inbox
- software
---

# Syncthing

> Peer-to-peer file synchronization application. It can sync files between
> devices on a local network, or between remote devices over the Internet.
>
> — <cite>[Wikipeida](https://en.wikipedia.org/wiki/Syncthing)</cite>

## Resolve conflicts

I widely use it to sync my notes, books, photos, etc. between my devices.

To resolve conflicts I use
[syncthing-conflict-resolver](https://github.com/dschrempf/syncthing-resolve-conflicts).

Usage in my case very simple. I go into directory with conflicted files and run
`syncthing-resolve-conflicts -d . -f`. It will show me conflicted files and ask
me what to do with them.


## Setup Syncthing on Kindle Touch

1. You need jailbreak and [KULA](http://www.mobileread.com/forums/showthread.php?t=203326) first.
2. Download this [repository](https://github.com/gutenye/syncthing-kindle/archive/master.zip)
3. Download [syncthing-linux-arm](https://github.com/syncthing/syncthing/releases) and copy `syncthing` binary to `syncthing/bin/`
4. Connect Kindle Touch to Your PC
5. Copy `syncthing/` to `KINDLE-ROOT/extensions/syncthing/`
6. Select "Open Firewall for Kindle" from KUAL
7. Select "Start Syncthing INSECURE Admin" from KUAL
8. Find out your Kindle IP address by type `;711` in search, then open `http://IP-ADDRESS:8080` in your browser. <br>
9. Configure all peers and folders
10. Ignore kindle auto generated index files: `*.sdr`
11. Select "Close INSECURE Admin port" from KUAL (Optional, for security reason)
12. Select "Stop Syncthing" and then "Start Syncthing" from KUAL
13. Note: connect kindle to computer or restart kindle will terminate syncthing process and firewall.
