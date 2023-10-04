---
date: 2023-07-23
sr-due: 2023-08-25
sr-ease: 232
sr-interval: 1
external: https://nixos.org/
tags:
  - inbox
  - software
sr-due: 2024-02-15
sr-interval: 134
sr-ease: 252
---

# NixOS

> NixOS is a [[GNU_Linux]] distribution based on the Nix package manager and
> build system. It supports reproducible and declarative system-wide
> configuration management as well as atomic upgrades and rollbacks, although it
> can additionally support imperative package and user management. In NixOS, all
> components of the distribution — including the kernel, installed packages and
> system configuration files — are built by Nix from pure functions called Nix
> expressions.\
> — <cite>[NixOS Wiki](https://nixos.wiki/wiki/Overview_of_the_NixOS_Linux_distribution)</cite>

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

[[Hey]] utility

```sh
hey gc; sudo hey gc
```

## Get revision/hash for fetchFromGitHub/fetchit

For example this repo: [https://github.com/cli/cli](https://github.com/cli/cli)

```sh
# SHA256
nix-shell -p nix-prefetch-git jq --run \
  "nix hash to-sri sha256:\$(nix-prefetch-git --url https://github.com/cli/cli --quiet --rev v2.20.2 | jq -r '.sha256')"

# sha256
nix-shell -p nix-prefetch-git jq --run \
  "nix hash to-sri sha256:\$(nix-prefetch-git --url https://github.com/Inom-Turdikulov/dwm-flexipatch --quiet | jq -r '.sha256')"

# REV
nix-shell -p nix-prefetch-git jq --run "nix-prefetch-git --url https://github.com/cli/cli --quiet --rev v2.20.2 | jq -r '.rev'"

# HASH
nix-shell -p nix-prefetch-git jq --run "nix-prefetch-git --url https://github.com/Inom-Turdikulov/dwm-flexipatch --quiet | jq -r '.hash'"
```

## TODO:
 - linux kernel flake + le9ec
 - test Plasma/Wayland
 - pipewire low-latency + rtkit

