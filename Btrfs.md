---
date: 2023-03-22
sr-due: 2023-12-21
sr-ease: 270
sr-interval: 218
tags:
- inbox
- software
---

# Btrfs (better F S)

Btrfs includes native optimizations for SSD media. To enable
these features, mount the Btrfs filesystem with the -o SSD mount option. These
optimizations include enhanced SSD write performance by avoiding optimization
such as seek optimizations which do not apply to solid-state media.

Asynchronous discard support is available with mount option `discard=async`, and
is enabled by default as of linux 6.2.

Here list of "safe" commands for btrfs:

```sh
mkfs.btrfs # create a btrfs filesystem

btrfs scrub # pass over all filesystem data and metadata and verifying the
            # checksums, not same as fsck

btrfs balance # spread block groups across all devices so they match constraints
              # defined by the respective profiles, it's NOT a defragmentation

btrfs device stats # show statistics about devices, 0 means no errors

btrfs filesystem df # show disk space usage information for a btrfs filesystem

btrfs filesystem du # show disk usage by files and directories for a btrfs
                    # filesystem
```

Periods for maintenance:
balance - weekly, example: `btrfs balance -dusage=50 -dlimit=2`
scrub - monthly, with full system backup
check `discard=async` is enabled by default as of linux 6.2. TODO: check actual
mount options.

`btrfs check` is not safe, it's experimental and can corrupt data (2021).

Resize filesystem (root volume) to maximum size
```sh
# first check lsblk -f
parted /dev/sdb resizepart 2 100% # 2 here is partition numper
btrfs filesystem resize max /
btrfs fi show / # validate size
```

## Resources

- [ ] [digint/btrbk: Tool for creating snapshots and remote backups of btrfs subvolumes](https://github.com/digint/btrbk)
- [Welcome to BTRFS documentation! — BTRFS documentation](https://btrfs.readthedocs.io/en/latest/index.html)
- [Use the BTRFS storage driver | Docker Docs](https://docs.docker.com/storage/storagedriver/btrfs-driver/)
- [btrfs maintenance on guix system partition : r/GUIX](https://www.reddit.com/r/GUIX/comments/qe7sd8/btrfs_maintenance_on_guix_system_partition/)
