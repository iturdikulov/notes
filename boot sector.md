---
date: 2023-06-17
tags:
  - inbox
  - definition
---

# Boot sector

> A boot sector is the sector of a persistent data storage device (e.g., hard
> disk, floppy disk, optical disc, etc.) which contains machine code to be
> loaded into random-access memory (RAM) and then executed by a computer
> system's built-in firmware (e.g., the BIOS).
> -- [Wikipedia](https://en.wikipedia.org/wiki/Boot_sector)

Usualy it's very first sector of the disk.

## Unified Extensible Firmware Interface (UEFI)

Does not rely on boot sectors, instead it uses bootloaders (EFI application file
from EFI partition or even USB device).

UEFI support code signing, so it's possible to verify that bootloader is not
modified.

## Partition tables

Disk usuly must be partitioned and there are two defenitions how to store
partition information.

1. MBR (Master Boot Record) - is the **first sector** of a data storage device
   that has been partitioned. The MBR sector may contain code to locate the active
   partition and invoke its volume boot record.
2. VBR (Volume Boot Record) - is the **first sector** of a data storage device
   that has *not* been partitioned, or the first sector of an individual partition
   on a data storage device that has been partitioned. It may contain code to
   load an operating system (or other standalone program) installed on that device
   or within that partition.

The maximum capacity of MBR partition tables is only about 2 terabytes.

MBR partition tables can have a maximum of 4 separate partitions, but one of
those partitions can be configured to be an extended partition, which is a
partition that can be split up into an 23 additional partitions. In total MBR
can have 23 + 3 = 26 partitions.

To boot from an MBR disk, the boot mode should be Legacy BIOS instead of UEFI
and the boot mode is UEFI.

> GUID Partition Table (GPT) is a standard for the layout of partition tables of
> a physical computer storage device, such as a hard disk drive or solid-state
> drive, using universally **unique identifiers**, which are also known as
> globally unique identifiers (GUIDs). Forming a **part** of the Unified
> Extensible Firmware Interface (UEFI) standard Unified EFI Forum-proposed
> replacement for the PC BIOS), it is nevertheless also used for some BIOSs,
> because of the limitations of master boot record (MBR) partition tables, which
> use 32 bits for logical block addressing (LBA) of traditional 512-byte disk
> sectors.
> -- [Wikipedia](https://en.wikipedia.org/wiki/GUID_Partition_Table)

GPT partition tables offer a maximum capacity of 9.7 zetabytes. 1 zetabyte is
about 1 billion terabytes.

GPT partition tables allow for up to 128 separate partitions.

I use GUIDs in my `fstab`, so I can easily identify partitions.
