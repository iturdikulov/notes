---
external: https://www.ventoy.net/en/index.html
date: 2023-05-20
sr-due: 2023-06-09
sr-ease: 276
sr-interval: 4
tags:
- inbox
- software
---

# Ventoy

> Ventoy is an open source tool to create bootable USB drive for
> ISO/WIM/IMG/VHD(x)/EFI files. With ventoy, you don't need to format the disk
> over and over, you just need to copy the ISO/WIM/IMG/VHD(x)/EFI files to the
> USB drive and boot them directly. You can copy many files at a time and ventoy
> will give you a boot menu to select them (screenshot). You can also browse
> ISO/WIM/IMG/VHD(x)/EFI files in local disks and boot them. x86 Legacy BIOS,
> IA32 UEFI, x86_64 UEFI, ARM64 UEFI and MIPS64EL UEFI are supported in the same
> way. Most types of OS supported
> (Windows/WinPE/Linux/ChromeOS/Unix/VMware/Xen...)\
> — <cite>[Ventoy](https://www.ventoy.net/en/index.html)</cite>

## [Getting started](https://www.ventoy.net/en/doc_start.html)

1. Install ventoy,
   [AUR (en) - ventoy-bin](https://aur.archlinux.org/packages/ventoy-bin),
   [Download Ventoy](https://www.ventoy.net/en/download.html)
2. Find the USB device
   ```bash
   lsblk -o name,mountpoint,label,size,uuid
   ```
3. Run the shell script as root (if used ventoy-bin package, binary is `ventoy`)

   ```bash
   # XXX is the USB device, for example /dev/sdb.
   sh Ventoy2Disk.sh { -i | -u } /dev/XXX
   ```

   ```bash
   Usage:  Ventoy2Disk.sh CMD [ OPTION ] /dev/sdX
     CMD:
      -i  install Ventoy to sdX (fails if disk already installed with Ventoy)
      -u  update Ventoy in sdX

      -I  force install Ventoy to sdX (no matter if installed or not)
      -l  list Ventoy information in sdX

     OPTION: (optional)
      -r SIZE_MB  preserve some space at the bottom of the disk (only for install)
      -s/-S       enable/disable secure boot support (default is enabled)
      -g          use GPT partition style, default is MBR (only for install)
      -L          Label of the 1st exfat partition (default is Ventoy)
      -n          try non-destructive installation (only for install)
   ```

## How to copy ISO file to Ventoy USB drive and validate it

### Windows

Checksums are verified, check this note [[Windows_setup_script|Windows setup script]]

```sh
export VENTOY_PATH="/media/Ventoy"
export WIN_ISO_CHECKSUM="c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d"
export ISO_FILE="en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso"

# Mount USB drive
udiskie-mount -a

# Check ventoy USB drive is mounted
[ -d $VENTOY_PATH ] || exit 1

# Update ventoy path
VENTOY_PATH="$VENTOY_PATH/_win"

# Create _win directory
mkdir -p "$VENTOY_PATH"

cp "$ISO_FILE" "$VENTOY_PATH"

# Create SHA-256 file and validate it
echo "$WIN_ISO_CHECKSUM  $ISO_FILE" > "$VENTOY_PATH/$ISO_FILE.sha256.txt"
sha256sum -c "$VENTOY_PATH/$ISO_FILE.sha256.txt"
```

### Arch Linux

To download, I use this URL: <https://geo.mirror.pkgbuild.com/iso/latest/>

```sh
## Step 1 prepare

export ISO_FILE="archlinux-x86_64.iso"
export SIGNER_FILE="$ISO_FILE.sig"
export ARCH_ISO_URL="https://geo.mirror.pkgbuild.com/iso/latest/$ISO_FILE"
export ARCH_SIG_URL="https://geo.mirror.pkgbuild.com/iso/latest/$SIGNER_FILE"
export VENTOY_PATH="/media/Ventoy"

## Verify requiremets installed
sudo pacman -S --needed aria2 gnupg udiskie

# Mount USB drive
udiskie-mount -a

# Check ventoy USB drive is mounted
[ -d $VENTOY_PATH ] || exit 1

# Update ventoy path
VENTOY_PATH="$VENTOY_PATH/_linux"

# Create _linux directory
mkdir -p "$VENTOY_PATH"

## Step 2 download and verify
cd "$VENTOY_PATH"
aria2c --max-connection-per-server 8 "$ARCH_ISO_URL"
aria2c "$ARCH_SIG_URL"
gpg --keyserver-options auto-key-retrieve --verify "$SIGNER_FILE"
```