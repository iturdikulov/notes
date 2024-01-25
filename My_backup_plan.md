---
date: 2023-02-22
tags:
  - inbox
---

# My backup plan

1. [x] Raid 1 for all data
2. [ ] Borg + SSH, rclone sync, logs [borgmatic](https://torsion.org/borgmatic/)
3. [ ] DB strategy?
4. [ ] Ignore cache?

## My files structure

Each directory must be backed up.

TODO: `/etc` Host-specific system-wide configuration files. Add into backup.
Clean up.

TODO: `$HOME`. Add into backup.

TODO: `/media` Mount external drive to `/media/backup`

TODO: `/mnt` Temporarily mounted filesystems. Use with rclone?

TODO: move binraries from ~/.local/bin to /opt/bin/inom or find/create package

/usr
Secondary hierarchy for read-only user data; contains the majority of (multi-)user utilities and applications. Should be shareable and read-only.[9][10]

/usr/include
Standard include files.

/usr/local
Tertiary hierarchy for local data, specific to this host. Typically has further subdirectories (e.g., bin, lib, share).[NB 1]

/usr/share
Architecture-independent (shared) data.

/usr/src
Source code (e.g., the kernel source code with its header files).

Lock files. Files keeping track of resources currently in use.
/var/log

Log files. Various logs.
/var/mail
Mailbox files. In some distributions, these files may be located in the deprecated /var/spool/mail.

/var/opt
Variable data from add-on packages that are stored in /opt.


- [ ] [Backup and restore partition table](https://www.cyberciti.biz/faq/linux-backup-restore-a-partition-table-with-sfdisk-command/)
