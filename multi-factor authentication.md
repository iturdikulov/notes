---
date: 2022-12-29
draft: true
sr-due: 2023-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- definition
sr-due: 2023-12-29
sr-interval: 226
sr-ease: 270
---

# Multi-factor authentication

You can configure pamu2f Example (onlykey working config)

<https://wiki.archlinux.org/title/Universal_2nd_Factor>

\`\`\` auth required pam~u2f~.so cue \[cue~prompt~=Please touch your FIDO2
device now.\] nodetect \`\`\`

You can export ssh key from gpg: setup gpg with ssh agent -
<https://habr.com/ru/post/479540/>

export ssh key \`\`\` gpg2 --list-secret-keys --keyid-format LONG gpg2
--export-ssh-key 0xxxxxxxxxxxxxxxxx! \`\`\`

export public gpg key \`\`\` gpg --export --armor \`\`\`

[Сервис СМС активаций и аренды виртуальных номеров](https://sms-reg.com/)