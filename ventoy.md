---
date: 2023-05-20
tags:
  - inbox
  - definition
canonicalUrl: https://www.ventoy.net/en/index.html
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
> (Windows/WinPE/Linux/ChromeOS/Unix/VMware/Xen...)
>
> -- [Ventoy](https://www.ventoy.net/en/index.html)

## [Getting started](https://www.ventoy.net/en/doc_start.html)

1. Install ventoy,
   [AUR (en) - ventoy-bin](https://aur.archlinux.org/packages/ventoy-bin),
   [Download Ventoy](https://www.ventoy.net/en/download.html)
2. Find the USB device
   ```bash
   lsblk -o name,mountpoint,label,size,uuid
   ```
2. Run the shell script as root (if used ventoy-bin package, binary is
   `ventoy`)
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
