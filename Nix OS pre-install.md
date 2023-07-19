---
date: 2023-07-16
tags:
  - inbox
  - definition
---

# Nix OS

NOTE: The following tutorial is for EFI enabled systems.

Entry point:
https://nixos.org/manual/nixos/stable/index.html#sec-installation-manual
https://nixos.wiki/wiki/Bootloader

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
sgdisk --zap-all $DD1 &
sgdisk --zap-all $DD2

# One pass secure delete all data,
# with entropy from e.g. /dev/urandom,
# and a final overwrite with zeros.
# this can take some time...
shred --verbose --random-source=/dev/urandom -n1 --zero $DD1 &
shred --verbose --random-source=/dev/urandom -n1 --zero $DD2

# Create GPT partitons
printf "label: gpt\n,100M,U\n,,L\n" | sfdisk $DD1
printf "label: gpt\n,100M,U\n,,L\n" | sfdisk $DD2
```

## 2. Create File Systems

```sh
ls -l /dev/disk/by-id/

# Check sub-partitons
test -e "$DD1-part1" && echo OK
test -e "$DD1-part2" && echo OK

test -e "$DD2-part1" && echo OK
test -e "$DD2-part2" && echo OK

# Create EFI (FAT32) filesystem:
mkfs.fat -F 32 "$DD1-part1" -n BOOT
mkfs.fat -F 32 "$DD2-part1" -n BOOT_BACKUP

# Create BTRFS raid 1 filesystem:
mkfs -t btrfs -L ROOT -m raid1 -d raid1 "$DD1-part2" "$DD2-part2"

# Set up mount points variables
ls -lah /dev/disk/by-label/
export BOOT="/dev/disk/by-label/BOOT"
export ROOT="/dev/disk/by-label/ROOT" # this is our root partition
export BOOT_BACKUP="/dev/disk/by-label/BOOT_BACKUP" # to copy boot disk

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
mkdir -p /mnt/{home,nix,boot/efi}
mount $BOOT /mnt/boot/efi # mount the boot partition into efi
mount -o compress=zstd,subvol=home,ssd $ROOT /mnt/home
mount -o compress=zstd,noatime,subvol=nix,ssd $ROOT /mnt/nix

mount|grep /mnt/
```


## 4. Install NixOS

Generate configuration:
```sh
nixos-generate-config --root /mnt
```

Adjust bootloader, already done in my case:
```sh
# /etc/nixos/configuration.nix
boot.loader = {
  efi = {
    canTouchEfiVariables = true;
    efiSysMountPoint = "/boot/efi"; # ← use the same mount point here.
  };
  grub = {
     efiSupport = true;
     #efiInstallAsRemovable = true; # in case canTouchEfiVariables doesn't work for your system
     device = "nodev";
  };
};
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
$ passwd
```

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
