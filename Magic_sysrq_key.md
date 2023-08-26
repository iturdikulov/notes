---
date: 2022-12-29
draft: true
sr-due: 2024-01-27
sr-ease: 290
sr-interval: 255
tags:
- inbox
---

# Magic SysRq key

The magic SysRq key is a key combination understood by the Linux kernel, which
allows the user to perform various low-level commands regardless of the system's
state. It is often used to recover from freezes, or to reboot a computer without
corrupting the filesystem. Its effect is similar to the computer's hardware
reset button (or power switch) but with many more options and much more control.

The key combination consists of Alt+SysRq (PrntScr) and another key, which
controls the command issued. SysRq may be released before pressing the command
key, as long as Alt remains held down.

A common use of the magic SysRq key is to perform a safe reboot of a Linux
computer which has otherwise locked up (abbr. REISUB). This can prevent a fsck
being required on reboot and gives some programs a chance to save emergency
backups of unsaved work. The QWERTY (or AZERTY) mnemonics: "Raising Elephants Is
So Utterly Boring", "Reboot Even If System Utterly Broken" or simply the word
"BUSIER" read backwards, are often used to remember the following SysRq-keys
sequence: