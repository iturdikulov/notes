---
date: 2023-09-25T00:00+03:00
tags:
  - blog
  - unix
  - article_annotation
author:
  - korfuri
external:
  - https://blog.korfuri.fr/posts/2022/08/nixos-on-an-oracle-free-tier-ampere-machine/
sr-due: 2024-03-21
sr-interval: 56
sr-ease: 168
---

# NixOS on an Oracle Free Tier Ampere machine. Success!

Oracle does not offer a [[NixOS]] image, so it's little complex to set up
instance here.

## Create your machine

1. [x] Register for Oracle Cloud always-free tier. To avoid instance creation
   limits, need to add payment method (charge $100 temporary) and enable pay-as-go plan.

2. [x] Create an instance. I’m using image Ubuntu 22.04. Settings (this utilizes
   all free tier resources):
  - Image: Ubuntu 22.04
  - Shape: VM.Standard.A1.Flex, 4 OCPU, 24GB RAM
  - Boot volume: 200GB, up to 20 VPU
  - SSH key: add your public key

3. Prepare ubuntu machine, install nix and kexec:
```bash
sudo apt update; sudo apt upgrade -y; reboot; sudo reboot
# ... wait until reboot and reconnect again ssh ...
sh <(curl -L https://nixos.org/nix/install) --daemon # details -> n, sudo -> y
# Logout and SSH again to get a fresh Nix-enabled shell.
```

## Prepare an in-memory NixOS system to perform the installation from

We’re now following [https://nixos.wiki/wiki/Install\_NixOS\_on\_a\_Server\_With\_a\_Different\_Filesystem](https://nixos.wiki/wiki/Install_NixOS_on_a_Server_With_a_Different_Filesystem) and it’s a little more advanced:

    git clone https://github.com/iturdikulov/nix-tests
    cd nix-tests/kexec
    # edit configuration.nix to add your pub ssh key into authorizedKeys.keys
    vi configuration.nix
    # validate key
    cat configuration.nix | grep authorizedKeys.keys
    # build tarball with nixos installatioon, can take 5-10+ minutes
    nix-build '<nixpkgs/nixos>' -A config.system.build.kexec_tarball -I nixos-config=./configuration.nix
    # untar and run kexec_nixos
    tar -xf ./result/tarball/nixos-system-aarch64-linux.tar.xz
    sudo ./kexec_nixos

Once you’ve seen that **`+ kexec -e`** line, you can terminate your SSH
connection (the server won’t reply, just hit `enter`, `~`, `.` to tell the
client to close everything. The server will come back (can take 5-10+ minutes)
with a different host key, so you’ll want to clean up your known_hosts before
sshing again:

    ip=...
    ssh-keygen -R ${ip?}
    ssh root@${ip?} # use -i if you need specify key

## Installing NixOS to the disk

Now we’re root on an im-memory NixOS system. If we rebooted the machine at this
point, it would boot back into Ubuntu. We don’t want that, we need to install
NixOS on disk, so we’ll immediately start deleting the existing partitions and
mold the disk to our liking.

I have own guide to install NixOS, don't forget to enable SSH with your key!

NOTE: if you see some message, like reboot scheduled, you can cancel it with
this command `shutdown -c`.

Guide: [GitHub - Inom-Turdikulov/dotfiles: And I say hey, what's going on?](https://github.com/iturdikulov/dotfiles)

## Alternative way (not tested)

- [ ] [nixos-anywhere: install nixos everywhere via ssh](https://github.com/nix-community/nixos-anywhere)

