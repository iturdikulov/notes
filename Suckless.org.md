---
date: 2022-12-29
draft: true
sr-due: 2023-03-16
sr-ease: 253
sr-interval: 3
tags:
- inbox
- definition
sr-due: 2024-01-12
sr-interval: 240
sr-ease: 273
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
- [[DWM_(software)|DWM]]
