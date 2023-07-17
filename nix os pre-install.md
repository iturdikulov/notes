---
date: 2023-07-16
tags:
  - inbox
  - definition
---

# Nix OS

NOTE: The following tutorial is for EFI enabled systems.

Entrypoint:
https://nixos.org/manual/nixos/stable/index.html#sec-installation-manual

## 0. Prepare

Boot from the USB stick and setup networking. (optionally setup SSH if you want
to complete the install from another computer)
```sh
# Configure wifi:
wpa_passphrase SSID 'PASSWORD' > /etc/wpa_supplicant.conf (optional)
systemctl start wpa_supplicant

# Configure sshd:
systemctl start sshd
passwd # So we can login via SSH
```

SSH to installation:
```bash
ssh -o PubkeyAuthentication=no -o PreferredAuthentications=password root@192.168.122.86
```

Identify devices
```sh
fdisk -l
ls -l /dev/disk/by-id

# Configure disk drives
# You can get the UUIDs by running
export DD1="/dev/disk/by-id/..."
export DD2="/dev/disk/by-id/..."

# Output of 2 commands bellow must OK
test -e "$DD1" && echo OK
test -e "$DD2" && echo OK

# Verify the boot mode, I'm use UEFI
[ -d /sys/firmware/efi/efivars ] && echo "UEFI" || echo "Legacy"
```

## 1. Initialize GPT partitions

```sh
# Cleanup old partition information
sgdisk --zap-all $DD1
sgdisk --zap-all $DD2

# One pass secure delete all data,
# with entropy from e.g. /dev/urandom,
# and a final overwrite with zeros.
# this can take some time...
shred --verbose --random-source=/dev/urandom -n1 --zero $DD1 &
shred --verbose --random-source=/dev/urandom -n1 --zero $DD2

# Create GPT partitons
printf "label: gpt\n,550M,U\n,,L\n" | sfdisk $DD1
printf "label: gpt\n,550M,U\n,,L\n" | sfdisk $DD2
```

## 2. Create File Systems

```sh
ls -l /dev/disk/by-id/

export SDA1="/dev/disk/by-id/ata-QEMU_HARDDISK_QM00005-part1"
export SDA2="/dev/disk/by-id/ata-QEMU_HARDDISK_QM00005-part2"
export SDB1="/dev/disk/by-id/ata-QEMU_HARDDISK_QM00003-part1"
export SDB2="/dev/disk/by-id/ata-QEMU_HARDDISK_QM00003-part2"

# Check sub-partitons
test -e "$SDA1" && echo OK
test -e "$SDA2" && echo OK
test -e "$SDB1" && echo OK
test -e "$SDB2" && echo OK

ls -l $SDA1
ls -l $SDA2
ls -l $SDB1
ls -l $SDB2

# Create EFI (FAT32) filesystem:
mkfs.fat -F 32 $SDA1
mkfs.fat -F 32 $SDB1

# Create BTRFS raid 1 filesystem:
mkfs -t btrfs -L ROOT -m raid1 -d raid1 $SDA2 $SDB2
```

## 3. Create and Mount Subvolumes

```sh
mkdir -p /mnt
mount $SDA2 /mnt
btrfs subvolume create /mnt/root
btrfs subvolume create /mnt/home
btrfs subvolume create /mnt/nix
umount /mnt

mount -o compress=zstd,subvol=root,ssd $SDA2 /mnt
mkdir /mnt/{home,nix}
mount -o compress=zstd,subvol=home,ssd $SDA2 /mnt/home
mount -o compress=zstd,noatime,subvol=nix,ssd $SDA2 /mnt/nix

# Mount the EFI partition
mkdir -p /mnt/boot
mount $SDA1 /mnt/boot
```


## 4. Install NixOS

Generate configuration:
```sh
nixos-generate-config --root /mnt
```

Copy boot disk to another disk
```sh
dd if=$SDA1 of=$SDB1
```

Install and reboot
```sh
nixos-install
reboot
```

## Reinstall bootloader
https://nixos.wiki/wiki/Bootloader

```sh
mount /dev/[root partition] /mnt
mount /dev/[boot partition] /mnt/boot

nixos-enter NIXOS_INSTALL_BOOTLOADER=1 /nix/var/nix/profiles/system/bin/switch-to-configuration boot
```


## Configuration
```sh
# /etc/nixos/hardware-configuration.nix
# /etc/nixos/configuration.nix
```
