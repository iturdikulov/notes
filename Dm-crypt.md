---
date: 2022-12-29
tags:
  - inbox
  - SR_software
sr-due: 2024-02-07
sr-interval: 13
sr-ease: 248
---

# dm-crypt

> dm-crypt is a transparent block device encryption subsystem in [[GNU_Linux]]
> kernel versions 2.6 and later and in DragonFly BSD. It is part of the device
> mapper (dm) infrastructure, and uses cryptographic routines from the kernel's
> Crypto API. Unlike its predecessor cryptoloop, dm-crypt was designed to
> support advanced modes of operation, such as XTS, LRW and ESSIV (see disk
> encryption theory for further information), in order to avoid watermarking
> attacks. In addition to that, dm-crypt addresses some reliability problems of
> cryptoloop.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Dm-crypt)</cite>

## Create/mount encrypted file container

```sh
# Redirect output of /dev/zero to initialize container file, optional step
dd if=/dev/zero bs=1M count=100 of=encrypted_change_name.img

# Initialize luks partition inside container
cryptsetup luksFormat encrypted_change_name.img  # set passpharse and conifm it

# Next commands require root access

# Open luks partition
cryptsetup open --type luks /path/to/dump desired-name

# Make filesystem on it, optional step
mkfs.ext4 /dev/mapper/encrypted_change_name

mount /dev/mapper/encrypted_change_name my-mount-point

# Umount and luksClose
umount my-mount-point
cryptsetup luksClose /dev/mapper/encrypted_change_name
```
