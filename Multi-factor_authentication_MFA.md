---
date: 2022-12-29
tags:
  - inbox
---

# Multi-factor authentication (MFA)

You can configure pamu2f Example ([[Onlykey|onlykey]] working config)

[Universal 2nd Factor - ArchWiki](https://wiki.archlinux.org/title/Universal_2nd_Factor)

```sh
auth required pam_u2f.so cue [prompt=Please touch your FIDO2 device now] nodetect
```
