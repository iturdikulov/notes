---
date: 2023-03-13
sr-due: 2024-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- outline
---

# My Arch Linux environment

[Improving performance - ArchWiki](https://wiki.archlinux.org/title/improving_performance)

> Arch Linux is an independently developed, x86-64 general-purpose GNU/Linux
> distribution that strives to provide the latest stable versions of most
> software by following a rolling-release model. The default installation is a
> minimal base system, configured by the user to only add what is purposely
> required.

For me Arch Linux is feature-complete Linux distribution, with small
dependencies, rich documentation and a good community.

I use it a lot, and know how to work with it.

## Fix problems
- [[Magic_sysrq_key]]

## Update packages
- [[Pacman]]

## Before start
- check [hostnames](file:///home/inom/Computer/data/word_list/etc-hosts) and
network settings.

## Principles

-   simplicity, fewer problems for users, minimal changes.
-   modernity, since it\'s rolling-release distribution used latest
    stable releases of software.
-   pragmatism, no ideological, political or popular opinion\'s.
-   user centrality, fill the needs of arch community users - proficient
    GNU/Linux users, or anyone who is willing to read documentation, and
    solve their own problems.
-   versatility, arch is general-purpose distribution, it provide
    ability to build custom system (do-it-yourself), by choosing of
    thousands packages from official repository or AUR. Arch also
    provide tools like simple and fast package manager, arch build
    system, custom repositories, etc.

# 0. Prepare environment

## Download distributive and verify checksum

<https://archlinux.org/download/>

``` {.bash org-language="sh"}
curl -O "..." # I recommed download iso directli into USB drive (ventoy)
b2sum archlinux-2022.08.05-x86_64.iso
# compare it (simplest method) copy / C-f,C-v on download page
```

After downloading and checking, copy it to flash drive, I use ventoy.

## Setup installation via SSH, recommended way

1.  Set a root password `passwd`{.verbatim}

2.  Confirm that `PermitRootLogin`{.verbatim} yes is set in
    `/etc/ssh/sshd_config`{.verbatim}. If it is not, set it and reload
    the OpenSSH daemon `sshd.service`{.verbatim}

3.  On the local machine, connect to the target machine via SSH with the
    following commands:

    ``` {.bash org-language="sh"}
    ip a                # find machine IP, need run inside remote machine
    ssh root@address    # need run from client machine
    ping archlinux.org  # check internet connection
    ```

## Prepare

``` {.bash org-language="sh"}
pacman -Syy # update mirrors

# identify devices
fdisk -l
ls -l /dev/disk/by-id

# Configure disk drives
export DISK_DRIVE_1="/dev/disk/by-id/..."
export DISK_DRIVE_2="/dev/disk/by-id/..."

# Output of 2 commands bellow must be yes!
test -e "$DISK_DRIVE_1" &&\
    echo OK - disk "$DISK_DRIVE_1" exist ||\
    echo FAIL - disk "$DISK_DRIVE_1" NOT EXIST

test -e "$DISK_DRIVE_2" &&\
    echo OK - disk "$DISK_DRIVE_2" exist ||\
    echo FAIL - disk "$DISK_DRIVE_2" NOT EXIST

# Verify the boot mode
# If the command shows the directory without error,
# then the system is booted in UEFI mode
ls /sys/firmware/efi/efivars

# Update the system clock
timedatectl set-ntp true
timedatectl status
```

# 1. Btrfs (better FS) disk layout

## Features

-   self-healing in some configurations (nature of COW)
-   online defragmentation
-   online volume grow and shrinking
-   online block device addition and removal
-   RAID0, RAID1 and RAID10
-   Atomic writable (via copy-on-write)
-   Checksums
-   Incremental backup
-   ...

# 1. Wipe existing disks

``` {.bash org-language="sh"}
# cleanup partition information
sgdisk --zap-all $DISK_DRIVE_1
sgdisk --zap-all $DISK_DRIVE_2

# one pass secure delete all data,
# with entropy from e.g. /dev/urandom,
# and a final overwrite with zeros.
# this can take some time...
shred --verbose --random-source=/dev/urandom -n1 --zero $DISK_DRIVE_1 &
shred --verbose --random-source=/dev/urandom -n1 --zero $DISK_DRIVE_2 &
```

# 2. Partitioning

Since we use cgdisk, it use 1 MiB alignment automatically (useful for
performance). Here example how to do partitioning on 1 disk drive, you
need repeat this steps on drive 2.

## Start partitioning from free space, usually last line in TUI.

``` {.bash org-language="sh"}
cgdisk $DISK_DRIVE_1
# Create an EFI (EF00) partition with this commands
n       # create new partiton
[Enter] # we use default first sector, usually 2048
+64M    # size of EFI partition - 64 MB
EF00    # hex code for partition type, EFI
efi     # partiton name

# Create a BOOT partition:
n       # create new partiton, start from bottom free space
[Enter] # we use default first sector, usually 2048
500M    # size of BOOT partition - 500 MB
[Enter] # hex code for partition type, use default linux 8300
boot    # partiton name

# Create a ROOT partition:
n       # create new partiton, start from bottom free space
[Enter] # we use default first sector, usually 2048
[Enter] # size of ROOT partition - full free space
[Enter] # hex code for partition type, use default linux 8300
root     # partiton name

# Write changes
w
yes # confirm

```

```{=org}
#+RESULTS:
```
## Backup GPT scheme and import GPT scheme to different disk, for RAID1 setup

``` {.bash org-language="sh"}
sgdisk --backup=partiton_table $DISK_DRIVE_1 # backup GPT first
sgdisk --load-backup=partition_table $DISK_DRIVE_2
# Randomize the GUID
sgdisk -G $DISK_DRIVE_2

# alternative direct transfer gpt scheme
# sgdisk $DISK_DRIVE_1 -R $DISK_DRIVE_2
```

## Create environment variables for each partitons

``` {.bash org-language="sh"}
export DISK_PARTITON_A1=$DISK_DRIVE_1'1'
export DISK_PARTITON_A2=$DISK_DRIVE_1'2'
export DISK_PARTITON_A3=$DISK_DRIVE_1'3'

export DISK_PARTITON_B1=$DISK_DRIVE_2'1'
export DISK_PARTITON_B2=$DISK_DRIVE_2'2'
export DISK_PARTITON_B3=$DISK_DRIVE_2'3'

 # Output of 6 commands bellow must be yes!
test -e "$DISK_PARTITON_A1" && echo "$DISK_PARTITON_A1" OK || echo fail
test -e "$DISK_PARTITON_A2" && echo "$DISK_PARTITON_A2" OK || echo fail
test -e "$DISK_PARTITON_A3" && echo "$DISK_PARTITON_A3" OK || echo fail
test -e "$DISK_PARTITON_B1" && echo "$DISK_PARTITON_B1" OK || echo fail
test -e "$DISK_PARTITON_B2" && echo "$DISK_PARTITON_B2" OK || echo fail
test -e "$DISK_PARTITON_B3" && echo "$DISK_PARTITON_B3" OK || echo fail

```

## 3. File systems creation

``` {.bash org-language="sh"}
# Create EFI (FAT32) filesystem:
mkfs.fat -F 32 $DISK_PARTITON_A1

# Create boot raid1 fs
# Since this is a two disk simple mirror,
# we specify raid1 for both metadata and data when making the two filesystems.
# https://btrfs.wiki.kernel.org/index.php/UseCases#How_do_I_create_a_RAID1_mirror_in_Btrfs.3F
mkfs -t btrfs -L BOOT -m raid1 -d raid1 $DISK_PARTITON_A2 $DISK_PARTITON_B2
mkfs -t btrfs -L ROOT -m raid1 -d raid1 $DISK_PARTITON_A3 $DISK_PARTITON_B3
```

## Step 4 - Create and Mount Subvolumes

``` {.bash org-language="sh"}
# Create subvolumes
mount $DISK_PARTITON_A3 /mnt/
btrfs sub create /mnt/@ && \           # root
btrfs sub create /mnt/@home && \       # home
btrfs sub create /mnt/@abs && \        # /var/abs, preventing slowdowns, ignore in snapshots
btrfs sub create /mnt/@tmp && \        # /var/tmp, preventing slowdowns, ignore in snapshots
btrfs sub create /mnt/@srv && \        # /srv, preventing slowdowns, ignore in snapshots
btrfs sub create /mnt/@snapshots && \  # snapshots
btrfs sub create /mnt/@btrfs && \      # top level subvolume, sort of root of the filesystem
btrfs sub create /mnt/@log && \        # system logs
btrfs sub create /mnt/@cache           # /var/cache, preventing slowdowns, ignore in snapshots
umount /mnt

# Create mount paths
mkdir -p /mnt/{boot,home,var/cache,var/log,.snapshots,var/tmp,var/abs,srv,btrfs}

# Mount volumes
# noatime - The noatime option is known to improve performance of the filesystem. It also disables disk writes when a file is read, prolongin the lifespan of SSDs.
# compress-force=zstd - empirical testing on multiple mixed-use systems showed a significant improvement of about 10% disk compression from using compress-force=zstd over just compress=zstd (which also had 10% disk compression), resulting in a total effective disk space saving of 20%.
# commit - The resolution at which data are written to the filesystem is dictated by Btrfs itself and by system-wide settings. This means less writes (prolongs SSD lifespan) and better performance (multiple writes are combined into one single larger write, updates to previous writes within the commit time frame are cancelled out).
# space_cache - Btrfs stores the free space data ondisk to make the caching of a block group much quicker.
# ssd - tells btrfs to use SSD Specific options
# discard=async - Freed extents are not discarded immediately, but grouped together and trimmed later by a separate worker thread, improving commit latency
# autodefrag – will detect random writes into existing files and kick off background defragging. It is well suited to bdb or sqlite databases, but not virtualization images or big databases (yet). Once the developers make sure it doesn’t defrag files over and over again, they’ll move this toward the default
# nodev  - Do not interpret character or block special devices on the file system
# nosuid - Do not allow set-user-identifier or set-group-identifier bits to take effect
# noexec - Do not allow direct execution of any binaries on the mounted file system
export BASE_MOUNT_OPTIONS="noatime,compress-force=zstd,commit=120,space_cache=v2,ssd,discard=async,autodefrag"
mount -o "$BASE_MOUNT_OPTIONS,subvol=@"                          $DISK_PARTITON_A3 /mnt
mount -o "$BASE_MOUNT_OPTIONS,subvol=@home"                      $DISK_PARTITON_A3 /mnt/home  && \
mount -o "$BASE_MOUNT_OPTIONS,subvol=@srv"                       $DISK_PARTITON_A3 /mnt/srv && \
mount -o "nodev,nosuid,noexec,$BASE_MOUNT_OPTIONS,subvol=@abs"   $DISK_PARTITON_A3 /mnt/var/abs && \
mount -o "nodev,nosuid,noexec,$BASE_MOUNT_OPTIONS,subvol=@tmp"   $DISK_PARTITON_A3 /mnt/var/tmp && \
mount -o "nodev,nosuid,noexec,$BASE_MOUNT_OPTIONS,subvol=@log"   $DISK_PARTITON_A3 /mnt/var/log && \
mount -o "nodev,nosuid,noexec,$BASE_MOUNT_OPTIONS,subvol=@cache" $DISK_PARTITON_A3 /mnt/var/cache && \
mount -o "$BASE_MOUNT_OPTIONS,subvol=@snapshots"                 $DISK_PARTITON_A3 /mnt/.snapshots && \
mount -o "$BASE_MOUNT_OPTIONS,subvolid=5"                        $DISK_PARTITON_A3 /mnt/btrfs && \
echo "MOUNT SUCCESS"

# It's recommended if we have VMs or databases, to disable copy-on-write (COW).
mkdir -p /mnt/var/lib/{docker,vms,mysql,postgres} && \
chattr +C /mnt/var/lib/{docker,vms,mysql,postgres}

# Validate subvolumes and mountpoints
btrfs subvolume list /mnt
df -hT

# Mount the boot partiton
mount -o defaults,noatime $DISK_PARTITON_A2 /mnt/boot

# Mount the EFI partition
mkdir -p /mnt/boot/efi && mount $DISK_PARTITON_A1 /mnt/boot/efi
```

## Step 5 - Base System and /etc/fstab

``` {.bash org-language="sh"}
# Select the HTTPS mirrors 100 up-to-date, and located in either Russia, Netherlands, Sweden  or Germany, sort them by download speed, and overwrite the file /etc/pacman.d/mirrorlist with the results:
reflector --country Russia,Netherlands,Sweden,Germany  --latest 100 --protocol https --sort rate --save /etc/pacman.d/mirrorlist
cat /etc/pacman.d/mirrorlist

# Install essential packages
pacstrap /mnt base               # Minimal package set to define a basic Arch Linux installation
pacstrap /mnt linux              # The Linux kernel and module
pacstrap /mnt linux-firmware     # Firmware files for Linux, also exist other firmware packages
pacstrap /mnt base-devel         # Group of base development packages, like gcc, binutils, make, sudo, etc
pacstrap /mnt btrfs-progs        # Btrfs filesystem utilities
pacstrap /mnt git                # the fast distributed version control system
pacstrap /mnt mesa               # An open-source implementation of the OpenGL specification
pacstrap /mnt vulkan-radeon      # Radeon's Vulkan mesa driver
pacstrap /mnt amd-ucode          # Microcode update image for AMD CPUs, for intel check intel-ucode
pacstrap /mnt xf86-video-amdgpu  # X.org amdgpu video driver
pacstrap /mnt libva-mesa-driver  # VA-API implementation for gallium
pacstrap /mnt openssh            # Premier connectivity tool for remote login with the SSH protocol
pacstrap /mnt zsh                # A very advanced and programmable command interpreter (shell) for UNIX
pacstrap /mnt xdg-user-dirs      # Manage user directories like ~/Desktop and ~/Music
pacstrap /mnt snapper            # A tool for managing BTRFS and LVM snapshots
pacstrap /mnt nftables           # Netfilter tables userspace tools
pacstrap /mnt flac               # Free Lossless Audio Codec
pacstrap /mnt p7zip              # Command-line file archiver with high compression ratio
pacstrap /mnt mpv                # A free, open source, and cross-platform media player
pacstrap /mnt udiskie            # Removable disk automounter using udisks
pacstrap /mnt libva-utils        # Intel VA-API Media Applications and Scripts for libva
pacstrap /mnt man                # Display the user manual of any command that we can run on the terminal
pacstrap /mnt firejail           # Linux namespaces sandbox program
pacstrap /mnt efibootmgr         # Linux user-space application to modify the EFI Boot Manager
pacstrap /mnt grub               # GNU GRand Unified Bootloader (2)
pacstrap /mnt trash-cli          # Command line trashcan (recycle bin) interface

# Generating fstab
genfstab -U /mnt >> /mnt/etc/fstab

# Validate fstab
less /mnt/etc/fstab
```

## Step 6 - System Configuration

``` {.bash org-language="sh"}
# Add some zsh configs for a nicer experience
cp /etc/zsh/zprofile /mnt/root/.zprofile && \
cp /etc/zsh/zshrc /mnt/root/.zshrc

# Copy partiton table (backup)
cp partition_table /mnt/

# Change root into the new system:
arch-chroot /mnt

# Set the timezone & generate /etc/adjtime
ln -sf /usr/share/zoneinfo/Europe/Moscow /etc/localtime && hwclock --systohc

# Set root password & shell
passwd && chsh -s /bin/zsh

# Localization
# 1. Edit /etc/locale.gen and uncomment en_US.UTF-8 UTF-8, ru_RU.UTF-8 UTF-8 and other needed locales
locale -a  # list locales
locale-gen  # generate

# 2. Create the /etc/locale.conf file, and set the LANG variable accordingly:
echo 'LANG=en_US.UTF-8' > /etc/locale.conf

# Create the hostname file and hosts file
export HOST=baikal
echo $HOST > /etc/hostname

cat << EOF >> /etc/hosts
#<ip-address>  <hostname.domain.org>  <hostname>
127.0.0.1      localhost
::1            localhost
127.0.1.1      $HOST.local            $HOST
EOF

# Add user & users groups
# input - Access to input devices.
# storage - Used to gain access to removable drives such as USB hard drives, flash/jump drives, MP3 players; enables the user to mount storage devices.
# video - Access to video capture devices, 2D/3D hardware acceleration, framebuffer
# wheel - Administration group, commonly used to give privileges to perform administrative actions. It has full read access to journal files and the right to administer printers in CUPS. Can also be used to give access to the sudo and su utilities (neither uses it by default).

# 1. Generate users
export USER=inom
useradd -m -G  input,storage,video,wheel -s /bin/zsh $USER && \
passwd $USER

# 2. Edit /etc/sudoers
# Uncomment to allow members of group wheel to execute any command
# %wheel ALL=(ALL) ALL
```

## Step 7 - Configure initramfs

``` {.bash org-language="sh"}
cp /etc/mkinitcpio.conf /tmp/mkinitcpio.conf.bak

# Corruption recovery
# btrfs-check cannot be used on a mounted file system. To be able to use btrfs-check without booting from a live USB, add it to the initial ramdisk
sed -i 's/BINARIES=()/BINARIES=(btrfs)/' /etc/mkinitcpio.conf

# add amdgpu module
sed -i 's/MODULES=()/MODULES=(amdgpu)/' /etc/mkinitcpio.conf

# compare changes
diff /etc/mkinitcpio.conf /tmp/mkinitcpio.conf.bak

# recreate initramfs
mkinitcpio -p linux
```

## Step 8 - Bootloader installation

``` {.bash org-language="sh"}
# https://wiki.archlinux.org/title/GRUB#Installation
# need run this command in chrooted /mnt
grub-install --target=x86_64-efi --efi-directory=/boot/efi --bootloader-id=arch_grub --recheck --debug

# Generated grub.cfg
grub-mkconfig -o /boot/grub/grub.cfg

# Validate
less /boot/grub/grub.cfg

# Copy grub data from one partiton to another (EFI partiton)
# From physical disk /dev/sda, partition 1, to physical disk /dev/sdb, partition 1
# WARNING YOU NEED CHECK valid disk names first: fdisk -l
dd if=/dev/sda1 of=/dev/sdb1 bs=64K conv=noerror,sync status=progress

# Validate data
mkdir /tmp/efi2
mount /dev/sdb1 /tmp/efi2
ls -lR /tmp/efi2
umount /tmp/efi2
```

## Step 9 - Optimizations

``` {.bash org-language="sh"}
# Install pipewire & pavucontrol
pacman -S pipewire pavucontrol

# Preventing snapshot slowdowns, not be scanned by updatedb
echo 'PRUNENAMES = ".snapshots"' >> /etc/updatedb.conf

# Configure reflector (arch mirrors update, you can also enable reflector.timer)
cat << EOF > /etc/xdg/reflector/reflector.conf
# Set Countries
--country Russia,Netherlands,Sweden
# Set the output path where the mirrorlist will be saved (--save).
--save /etc/pacman.d/mirrorlist
# Select the transfer protocol (--protocol).
--protocol https
# Use only the  most recently synchronized mirrors (--latest).
--latest 200
# Sort the mirrors by rate
--sort rate
# Use 10 threads for rating mirrors
--threads 10
# Increase download timeout
--download-timeout 50
EOF

# Better IO Scheduler
cat << EOF > /etc/udev/rules.d/60-ioschedulers.rules
# set scheduler for NVMe
ACTION=="add|change", KERNEL=="nvme[0-9]n[0-9]", ATTR{queue/scheduler}="none"
# set scheduler for SSD and eMMC
ACTION=="add|change", KERNEL=="sd[a-z]*|mmcblk[0-9]*", ATTR{queue/rotational}=="0", ATTR{queue/scheduler}="mq-deadline"
# set scheduler for rotating disks
ACTION=="add|change", KERNEL=="sd[a-z]*", ATTR{queue/rotational}=="1", ATTR{queue/scheduler}="bfq"
EOF

# Speed-up AppArmor start by caching profiles
echo "write-cache" > /etc/apparmor/parser.conf

# Perfomance tweaks
cat << EOF >/etc/sysctl.d/99-sysctl-performance-tweaks.conf
# The swappiness sysctl parameter represents the kernel's preference (or avoidance) of swap space. Swappiness can have a value between 0 and 100, the default value is 60.
# A low value causes the kernel to avoid swapping, a higher value causes the kernel to try to use swap space. Using a low value on sufficient memory is known to improve responsiveness on many systems.
vm.swappiness=10

# The value controls the tendency of the kernel to reclaim the memory which is used for caching of directory and inode objects (VFS cache).
# Lowering it from the default value of 100 makes the kernel less inclined to reclaim VFS cache (do not set it to 0, this may produce out-of-memory conditions)
vm.vfs_cache_pressure=50

# Contains, as a percentage of total available memory that contains free pages and reclaimable
# pages, the number of pages at which a process which is generating disk writes will itself start
# writing out dirty data (Default is 20).
vm.dirty_ratio = 5

# Contains, as a percentage of total available memory that contains free pages and reclaimable
# pages, the number of pages at which the background kernel flusher threads will start writing out
# dirty data (Default is 10).
vm.dirty_background_ratio = 5

# The kernel flusher threads will periodically wake up and write old data out to disk.  This
# tunable expresses the interval between those wakeups, in 100'ths of a second (Default is 500).
vm.dirty_writeback_centisecs = 1500

# Increase the maximum connections
# The upper limit on how many connections the kernel will accept (default 128):
net.core.somaxconn = 8192
EOF

# Install AUR helper
export USER=inom
pacman -S --needed git base-devel
su $USER

cd ~ && git clone https://aur.archlinux.org/pikaur.git && \
cd pikaur && makepkg -fsri && cd .. && sudo rm -dR pikaur && exit
```

## Step 11 - Exit chroot unmount and reboot

``` {.bash org-language="sh"}
exit

umount -R /mnt
reboot
```

## Step 12 - Post install

``` {.bash org-language="sh"}
# Validate btrfs state
sudo btrfs device stats /
sudo btrfs fi show
sudo btrfs filesystem df /
df

```

# Useful Links

-   <https://wiki.archlinux.org/title/System_maintenance>
-   <https://wiki.archlinux.org/title/improving_performance>
-   <https://wiki.archlinux.org/title/General_recommendations>

# Sources

-   <https://wiki.archlinux.org/title/Frequently_asked_questions>
-   <https://wiki.archlinux.org/title/installation_guide>
-   <https://wiki.archlinux.org/title/Install_Arch_Linux_via_SSH>
-   <https://wiki.gentoo.org/wiki/Btrfs/Native_System_Root_Guide#Partitioning>
-   <https://wiki.archlinux.org/title/btrfs#Compression>
-   <https://gist.github.com/Th3Whit3Wolf/2f24b29183be7f8e9c0b05115aefb693>
-   <https://gist.github.com/broedli/5604637d5855bef68f3e#72-bootloader-grub2-install>

yadm anaconda
<https://wiki.archlinux.org/index.php/Uniform_look_for_Qt_and_GTK_applications>
<https://wiki.archlinux.org/index.php/GTK+#Themes>
<https://wiki.archlinux.org/index.php/qt#Appearance>

<https://lukesmith.xyz/programs/ock> surf, ungoogled-chrome core & tools

1.  Network

    ``` {.bash org-language="sh"}
    # Up network device if needed
    sudo ip link set dev enp10s0 up
    ```

2.  Custom Font install

    ``` {.bash org-language="sh"}
    # -LJ to download from github
    curl -LJ -o ~/.local/share/fonts/Meslo.zip --create-dirs https://github.com/ryanoasis/nerd-fonts/releases/download/v2.2.1/MPlus.zip
    trash ~/.local/share/fonts/MPlus.zip
    fc-cache -v
    ```

3.  Ansible install <https://github.com/inomoz/inomoz-quickstart>

# What to do on a failed disk (btrfs)

<https://superuser.com/questions/1087787/linux-btrfs-convert-to-single-with-failed-drive#>:\~:text=Begin%20a%20rebalancing%20operation%20with,and%20size%20of%20your%20array.
Do this in arch live-iso.

Convert Btrfs raid1 to single Btrfs

``` {.bash org-language="sh"}
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

<https://btrfs.wiki.kernel.org/index.php/Using_Btrfs_with_Multiple_Devices>

We then shut down the system, plugged the replacement disk in (actually
the disk we had earlier ruined by double degraded booting, after wiping
the BTRFS partition), booted and then did the usual dance to turn the
now-single BTRFS into a RAID1 again.

Restore gpt partiton from backup to new drive first (partition~table~),
and recommended restore EFI partition too. Instructions above.

``` {.bash org-language="sh"}
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
<https://btrfs.wiki.kernel.org/index.php/Using_Btrfs_with_Multiple_Devices#Using_btrfs_replace>

# Enable SSH access (sshd) after installation

``` {.bash org-language="sh"}
# edit /etc/ssh/sshd_config
# AllowUsers  username

# validate and start sshd daemon
systemctl status sshd
sudo systemctl enable --now sshd

# check ip and then you can connect
ip a|grep enp
```

TODO:
<https://www.cyberciti.biz/faq/linux-backup-restore-a-partition-table-with-sfdisk-command/>
<https://wiki.archlinux.org/title/System_time#Time_synchronization>

# systemd-timesyncd

<https://blog.programs74.ru/how-to-use-systemd-timesyncd/>

# xdg project dir

# [TODO]{.todo .TODO} zram-generator {#zram-generator}

<https://aur.archlinux.org/cgit/aur.git/tree/zram-generator.conf?h=zram-generator-defaults>
<https://github.com/systemd/zram-generator>

Install zram-generator using one of the methods listed above. Create a
zram-generator.conf config file. Run systemctl daemon-reload to create
new device units. Run systemctl start /dev/zram0 (adjust the name as
appropriate to match the config). Call zramctl or swapon to confirm that
the device has been created and is in use. Once installed and
configured, the generator will be invoked by systemd early at boot,
there is no need to do anything else.

## Additional resources

- https://github.com/systemd/zram-generator

- TODO: check ansible scrips?
