---
date: 2023-07-23
tags:
  - inbox
  - definition
---

# NixOS

> NixOS is a [[Linux]] distribution based on the Nix package manager and build
> system. It supports reproducible and declarative system-wide configuration
> management as well as atomic upgrades and rollbacks, although it can
> additionally support imperative package and user management. In NixOS, all
> components of the distribution — including the kernel, installed packages and
> system configuration files — are built by Nix from pure functions called Nix
> expressions.\
> —&thinsp;<cite>[NixOS Wiki](https://nixos.wiki/wiki/Overview_of_the_NixOS_Linux_distribution)</cite>

## Cleanup old generations

Native nix commands:

```sh
nix-env --list-generations

nix-collect-garbage --delete-older-than 30d
# or nix-collect-garbage --delete-old

# recommeneded to sometimes run as sudo to collect additional garbage
# in my case it's very actual, since I use a lot system packages
sudo nix-collect-garbage --delete-older-than 30d
# or sudo nix-collect-garbage --delete-old

# After the garbage collection, you can run the following command to remove
# boot entries that are no longer valid:
sudo nixos-rebuild switch
```

[[hey]] utility

```sh
hey gc; sudo hey gc
```


