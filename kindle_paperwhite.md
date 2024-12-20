---
date: 2024-12-08T22:41+03:00
tags:
  - inbox
---

# Kindle paperwhite

## Syncting

[Setup Syncthing on Kindle Touch](https://github.com/gutenye/syncthing-kindle)

## Autostart

[From https://github.com/gutenye/syncthing-kindle/issues/3](https://github.com/gutenye/syncthing-kindle/issues/3)

Copy script somewhere, source is from first post (into Kindle), for example into `/mnt/us/documents/syncthing.conf`
```
# syncthing daemon

start on mounted_userstore and framework_ready
stop on (stopping system or ota-update)

export LANG LC_ALL
env STDERR=/tmp/syncthing.err

respawn

script
    source /etc/upstart/env
    exec /mnt/us/extensions/syncthing/bin/syncthing -home=/mnt/us/extensions/syncthing/config 2>> $STDERR
end script
```

Open terminal in KOReader: `Tools -> Page 2 -> More tools Terminal emulator` and copy script:
```
mntroot rw
cp /mnt/us/documents/syncthing.conf /etc/upstart
mntroot ro
```

Exit from Koreader, Reboot Kindle, Verify, remove `/mnt/us/extensions/syncthing/config`
