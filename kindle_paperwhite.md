---
created: 2024-12-08T22:41+03:00
tags:
  - blog
sr-due: 2025-07-13
sr-interval: 3
sr-ease: 250
---

# Kindle paperwhite

## Syncting

[Setup Syncthing on Kindle Touch](https://github.com/gutenye/syncthing-kindle).

Below some information how to start syncthing on startup.

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

## Boot koreader on kindle startup

Need to copy below config into `/etc/upstart`, like in tutorial above.

```
start on framework_ready and started kb and started pillow

stop on (stopping system or ota-update)

script
    source /etc/upstart/env
    [ -f /mnt/us/koreader/koreader.sh ] && exec /bin/bash /mnt/us/koreader/koreader.sh --kual --asap
end script
```
