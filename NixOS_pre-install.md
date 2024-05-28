---
date: 2023-07-16
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 266
---

# Nix OS pre-install guide

NOTE: The following tutorial is for EFI enabled systems.

Entry point:

- [[NixOS]]
- [NixOS manual](https://nixos.org/manual/nixos/stable/index.html#sec-installation-manual)
- [Bootloader - NixOS Wiki](https://nixos.wiki/wiki/Bootloader)

Typical boot process looks like this:
```
Motherboard firmware (UEFI) -> FS with Bootloader -> Kernel -> Init... -> ...
```
And we need to prepare the first 2 steps.

## 0. Prepare

<!-- NEXT: need review [[My_Arch_Linux_enviroment]] iso/pre-install section -->

Boot from the USB stick and setup networking. (optionally setup SSH if you want
to complete the installation from another computer)
```sh
# Configure wifi:
wpa_passphrase SSID 'PASSWORD' > /etc/wpa_supplicant.conf (optional)
systemctl start wpa_supplicant

# Configure sshd:
sudo -i # become root
systemctl start sshd
passwd # So we can login via SSH
```

SSH to installation:
```bash
ssh -o PubkeyAuthentication=no -o PreferredAuthentications=password root@192.168.122.86
```

Identify devices
```sh
# List block devices (physical drives)
lsblk

# in my case disks are: nvme0n1 nvme1n1, which located at:
# /dev/nvme0n1
# /dev/nvme1n1

# Configure disk drives
# You can get the UUIDs by running
# change sda/sdb to your disk
export DD1="/dev/nvme0n1"
export DD2="/dev/nvme1n1"

# Output of 2 commands bellow must OK
test -e "$DD1" && echo OK
test -e "$DD2" && echo OK

# Verify the boot mode, I'm use UEFI
[ -d /sys/firmware/efi/efivars ] && echo "UEFI" || echo "Legacy"
```

## 1. Initialize GPT partitions

```sh
# One pass secure delete all data,
# with entropy from e.g. /dev/urandom,
# and a final overwrite with zeros.
# this can take some time...
shred --verbose --random-source=/dev/urandom -n1 --zero $DD1 &
shred --verbose --random-source=/dev/urandom -n1 --zero $DD2
# less secure methods
# or blkdiscard -s $DD...
# or dd if=/dev/zero of=/dev/sdX bs=100M ... pv /dev/zero > /dev/sdX

# Cleanup old partition information
# if exist!
sgdisk --zap-all $DD1 &
sgdisk --zap-all $DD2


# Create GPT partitons
printf "label: gpt\n,550M,U\n,,L\n" | sfdisk $DD1
printf "label: gpt\n,550M,U\n,,L\n" | sfdisk $DD2
# lsblk
# nvme0n1     259:0    0   1.8T  0 disk
# ├─nvme0n1p1 259:2    0   550M  0 part
# └─nvme0n1p2 259:3    0   1.8T  0 part
# nvme1n1     259:1    0   1.8T  0 disk
# ├─nvme1n1p1 259:4    0   550M  0 part
# └─nvme1n1p2 259:5    0   1.8T  0 part
```

## 2. Create File Systems

```sh
ls -l /dev/nvme0n1* /dev/nvme1n1*

# Check sub-partitons
test -e "${DD1}p1" && echo OK
test -e "${DD1}p2" && echo OK

test -e "${DD2}p1" && echo OK
test -e "${DD2}p2" && echo OK

# Create EFI (FAT32) filesystem:
mkfs.fat -F32 "${DD1}p1" -n NBOOT
mkfs.fat -F32 "${DD2}p1" -n NBOOT_BCK

# Create BTRFS raid 1 filesystem:
mkfs -t btrfs -L NROOT -m raid1 -d raid1 "${DD1}p2" "${DD2}p2"

# Set up mount points variables
ls -lah /dev/disk/by-label
export BOOT="/dev/disk/by-label/NBOOT"
export ROOT="/dev/disk/by-label/NROOT" # this is our root partition
export BOOT_BACKUP="/dev/disk/by-label/NBOOT_BCK" # to copy boot disk

# Validate
test -e "$BOOT" && echo OK
test -e "$ROOT" && echo OK
test -e "$BOOT_BACKUP" && echo OK
ls -lah $BOOT $ROOT $BOOT_BACKUP
```

## 3. Create and Mount sub-volumes

```sh
mkdir -p /mnt
mount $ROOT /mnt
btrfs subvolume create /mnt/root
btrfs subvolume create /mnt/home
btrfs subvolume create /mnt/nix
umount /mnt

# Mount the root partition
mount -o compress=zstd,subvol=root,ssd $ROOT /mnt
mkdir -p /mnt/{home,nix,boot}
mount $BOOT /mnt/boot # mount the boot partition into efi
mount -o compress=zstd,subvol=home,ssd $ROOT /mnt/home
mount -o compress=zstd,noatime,subvol=nix,ssd $ROOT /mnt/nix

mount|grep /mnt/
```


## 4. Install NixOS

### Typical installation

Generate configuration:
```sh
nixos-generate-config --root /mnt
```

Adjust mount paths (if required)
```sh
# /mnt/etc/nixos/hardware-configuration.nix
```


Install NixOS
```sh
nixos-install
```

```sh
# /mnt/etc/nixos/hardware-configuration.nix
# /mnt/etc/nixos/configuration.nix
```

Set user password
```sh
$ passwd username
```

Mount and copy `$BOOT` to `$BOOT_BACKUP`
```sh
mkdir -p /tmp/boot
mount $BOOT_BACKUP /tmp/boot
cp -r /mnt/boot/efi/* /tmp/boot
umount /tmp/boot
```

### My custom installation

Check [this README.md](file:///etc/dotfiles/README.md) file.

## Reinstall bootloader
https://nixos.wiki/wiki/Bootloader

```sh
mount /dev/[root partition] /mnt
mount /dev/[boot partition] /mnt/boot

nixos-enter NIXOS_INSTALL_BOOTLOADER=1 /nix/var/nix/profiles/system/bin/switch-to-configuration boot
```

# TODO

- open ssh port
- sshd daemon
- change hostname
- set timezone
- check DHCP on main network interface
- enable wayland
- integrate dwl
- enable ungoogled-chromium
- set keymap to colemak_dh
- enable pipewire
- enable user account
- enable base packages, nvim, git
- setup gpg-agent with ssh support
- fix hardware-configuration.nix
- swap in ram
- backup boot partition


tmpfs 1618464 415764 1202700 26% /run/user/1000
mount -o remount,size=2G /run/user/0

## References

- [ ] [nix-community/nix-on-droid: Nix-enabled environment for your Android device.](https://github.com/nix-community/nix-on-droid)
