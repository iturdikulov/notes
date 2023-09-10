---
date: 2022-12-29
sr-due: 2024-01-12
sr-ease: 273
sr-interval: 240
tags:
- inbox
---

# suckless.org

```sh
cd ~/Projects/suckless
git clone git://git.suckless.org/slock
cd slock
# pam.d patch  and install
curl -O https://tools.suckless.org/slock/patches/pam_auth/slock-pam_auth-20190207-35633d4.diff
patch -i slock-pam_auth-20190207-35633d4.diff


cp config.def.h config.h
# changer user and group in config.h
make
sudo make install
```

TODO: add xst
- [[DWM]]
