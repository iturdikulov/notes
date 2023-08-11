---
date: 2022-12-29
draft: true
sr-due: 2023-03-15
sr-ease: 248
sr-interval: 2
tags:
- inbox
- definition
sr-due: 2023-12-30
sr-interval: 227
sr-ease: 268
---

# dm-crypt

> dm-crypt is a transparent block device encryption subsystem in [[Linux]]
> kernel versions 2.6 and later and in DragonFly BSD. It is part of the device
> mapper (dm) infrastructure, and uses cryptographic routines from the kernel's
> Crypto API. Unlike its predecessor cryptoloop, dm-crypt was designed to
> support advanced modes of operation, such as XTS, LRW and ESSIV (see disk
> encryption theory for further information), in order to avoid watermarking
> attacks. In addition to that, dm-crypt addresses some reliability problems of
> cryptoloop.
> —&thinsp;<cite>[Wikipedia](https://en.wikipedia.org/wiki/Dm-crypt)</cite>


## Create encrypted file container

```sh
# Redirect output of /dev/zero to initialize container file
dd if=/dev/zero bs=1M count=100 of=encrypted_change_name.img

# Initialize luks partition inside container
sudo cryptsetup luksFormat encrypted_change_name.img  # set passpharse and conifm it

# Open luks partition
sudo cryptsetup luksOpen encrypted_change_name.img

# Because we just created container, need create filesystem on it (one-time)
sudo mkfs.ext4
```

## Mount and unmount file container

```sh
# Open luks partition
sudo cryptsetup luksOpen encrypted_change_name.img
sudo mount  ~/tmp/my-mount-point
...
sudo umount ~/tmp/my-mount-point
sudo cryptsetup luksClose
```
