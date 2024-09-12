---
date: 2023-03-22
tags:
  - inbox
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 232
---

# Borg


## Verifying backup

Mount backup:

```bash
# Lists all archives in a repository
borg list /path/to/repo

# Mount an archive to a directory, look around, unmount
borg mount /path/to/repo::archive-name /path/to/mountpoint
ls /path/to/mountpoint
umount /path/to/mountpoint
```

Verify critical files with rsync [^1]:

```bash
cp -r /path/to/critical-files /path/to/comparison
SOURCE=/path/to/mountpoint/critical-files
DEST=/path/to/comparison

# `-r` : recurse into directories ;
# `-v` : list the files )
# `-n` : most important bit -- do *not* change anything ;
# `-c` : compare the contents via checksum not not mod-time & size (use `-a` otherwise) ;
# `--delete` : look for a symmetrical, not a uni-directional difference.
# Finally, `/` means "look inside the directory, and compare its *contents* to the destination".
#
# It will print a usual `rsync` output,
# - with one *<filename>* on a line for every "new" file in `${SOURCE}`
# - and one *"deleting <filename>"* line for each "new" file in `${DEST}`.
# - It may also print a few warnings, like *"skipping non-regular file <filename>"* for symlinks.
rsync -rvnc --delete ${SOURCE}/ ${DEST}
```

Verify the integrity/consistency of an archive:

```bash
# Check the consistency of an archive
borg check /path/to/repo

# Additionaly verify the data integrity of an archive (takes a long time)
borg check --verify-data /path/to/repo
```

## References

- [ ] [Borg backup - NixOS Wiki](https://nixos.wiki/wiki/Borg_backup)

[^1]: [rsync compare directories?](https://unix.stackexchange.com/questions/57305/rsync-compare-directories)
