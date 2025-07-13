---
created: 2022-12-29T00:00+03:00
tags:
  - blog
sr-due: 2025-07-29
sr-interval: 11
sr-ease: 249
---

# Multi-factor authentication (MFA)

You can configure pamu2f Example ([[OnlyKey]] working config)

[Universal 2nd Factor - ArchWiki](https://wiki.archlinux.org/title/Universal_2nd_Factor)

```sh
auth required pam_u2f.so cue [prompt=Please touch your FIDO2 device now] nodetect
```
