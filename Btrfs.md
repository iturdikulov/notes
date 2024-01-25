---
date: 2023-03-22
tags:
  - inbox
  - SR_software
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

# What to do on a failed disk (btrfs) / TODO: NEED review and test...

https://superuser.com/questions/1087787/linux-btrfs-convert-to-single-with-failed-drive#:\~:text=Begin%20a%20rebalancing%20operation%20with,and%20size%20of%20your%20array.
Do this in arch live-iso.

Convert Btrfs raid1 to single Btrfs

```sh
# Disable auto-mounting btrfs array in /etc/fstab, reboot
DISK_DEVICE=/dev/sd[x]  # change to your disk name
MOUNT_POINT=/mountpoint # don't use spaces here

# Make disk inaccessible to the kernel
# echo 1 | sudo tee /sys/block/sd[x]/device/delete

# Mount your array, with -o degraded mode.
mount -o degraded "$DISK_DEVICE"2 "$MOUNTPOINT"2  # 2 is disk & mountpoint postfix /dev/sdb2 /mnt/sdb2
mount -o degraded "$DISK_DEVICE"3 "$MOUNTPOINT"3  # 3 is disk & mountpoint postfix /dev/sdb3 /mnt/sdb3

# if you have mount issues, try this
btrfs rescue zero-log /dev/<devicename>

# Begin a rebalancing operation
btrfs balance start -f -mconvert=single -dconvert=single "$MOUNTPOINT"2
btrfs balance start -f -mconvert=single -dconvert=single "$MOUNTPOINT"3

# Remove the 'missing' faulty device.
btrfs device remove missing "$MOUNTPOINT"2
btrfs device remove missing "$MOUNTPOINT"3

# Restore metadata redundancy
btrfs balance start -mconvert=dup "$MOUNTPOINT"2
btrfs balance start -mconvert=dup "$MOUNTPOINT"3

# Now check that it has worked
btrfs fi show
btrfs fi usage
```

https://btrfs.wiki.kernel.org/index.php/Using_Btrfs_with_Multiple_Devices

We then shut down the system, plugged the replacement disk in (actually
the disk we had earlier ruined by double degraded booting, after wiping
the BTRFS partition), booted and then did the usual dance to turn the
now-single BTRFS into a RAID1 again.

Restore gpt partiton from backup to new drive first (partition~table~),
and recommended restore EFI partition too. Instructions above.

```sh
# add multiple devices
btrfs device add /dev/sd[x] /boot
btrfs device add /dev/sd[x] /

# convert to raid1
btrfs balance start -dconvert=raid1 -mconvert=raid1 /boot
btrfs balance start -dconvert=raid1 -mconvert=raid1 /

# Now check that it has worked
btrfs fi show
btrfs filesystem df /
```

As a result, we had a RAID1 again. If you wonder why we did not use
Btrfs replace: We would have to connect the new disk before the second
reboot, which is not always practical. With the method above, once we
have rebalanced the file system to a single one, we can reboot as often
as we like to get the new drive online.

Alternative
https://btrfs.wiki.kernel.org/index.php/Using_Btrfs_with_Multiple_Devices#Using_btrfs_replace


## Resources

- [Welcome to BTRFS documentation! — BTRFS documentation](https://btrfs.readthedocs.io/en/latest/index.html)
- [Use the BTRFS storage driver | Docker Docs](https://docs.docker.com/storage/storagedriver/btrfs-driver/)
- [btrfs maintenance on guix system partition : r/GUIX](https://www.reddit.com/r/GUIX/comments/qe7sd8/btrfs_maintenance_on_guix_system_partition/)

- [ ] [Btrfs partitioning](https://wiki.gentoo.org/wiki/Btrfs/Native_System_Root_Guide#Partitioning)
- [ ] [Btrfs compression](https://wiki.archlinux.org/title/btrfs#Compression)
- [ ] [digint/btrbk: Tool for creating snapshots and remote backups of btrfs subvolumes](https://github.com/digint/btrbk)
