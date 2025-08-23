---
created: 2023-07-23T00:00+03:00
external:
  - https://nixos.org/
tags:
  - blog
  - ends
sr-due: 2025-07-29
sr-interval: 12
sr-ease: 230
---

# NixOS

> NixOS is a [[Linux]] distribution based on the Nix package manager and build system. It supports reproducible and declarative system-wide configuration management as well as atomic upgrades and rollbacks, although it can additionally support imperative package and user management. In NixOS, all components of the distribution — including the kernel, installed packages and system configuration files — are built by Nix from pure functions called Nix expressions.\
> — <cite>[NixOS Wiki](https://nixos.wiki/wiki/Overview_of_the_NixOS_Linux_distribution)</cite>

NixOS is my current favorite Linux distribution. I like their features and trying to use it everywhere where it's possible. [[archlinux|Arch Linux]] is also good (minimal), but I like the NixOS approach more.

## Features

- Declarative configuration model (Nix language, global configuration file).
- Reliable and atomic upgrades (same result on different machines, atomic. upgrades which are resistant to power failures).
- Rollbacks (boot menu with previous configurations).
- Reproducible system configurations (easily clone system across many machines).
- Source-based model with binary cache (flexible build configuration, change package options)
- Consistency (rebuild all dependencies when core packages are updated).
- Multi-user package management (users can install packages without root).
- 80,000 official packages (Nixpkgs), special packages with easily configurable
  > options (NixOS options, > 10000 options).
- Documentation and community (Guides and Tutorials, NixOS wiki, Discourse, Matrix, GitHub).

## Cleanup old generations

Native nix commands:

```bash
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

- [ ] own hey utility?

```bash
hey gc; sudo hey gc
sudo /run/current-system/bin/switch-to-configuration boot
```

## Get revision/hash for fetchFromGitHub/fetchit

For example this repo: [https://github.com/cli/cli](https://github.com/cli/cli)

```bash
# SHA256
nix-shell -p nix-prefetch-git jq --run \
  "nix hash to-sri sha256:\$(nix-prefetch-git --url https://github.com/cli/cli --quiet --rev v2.20.2 | jq -r '.sha256')"

# sha256
nix-shell -p nix-prefetch-git jq --run \
  "nix hash to-sri sha256:\$(nix-prefetch-git --url https://github.com/iturdikulov/dwm-flexipatch --quiet | jq -r '.sha256')"

# REV
nix-shell -p nix-prefetch-git jq --run "nix-prefetch-git --url https://github.com/cli/cli --quiet --rev v2.20.2 | jq -r '.rev'"

# HASH
nix-shell -p nix-prefetch-git jq --run "nix-prefetch-git --url https://github.com/iturdikulov/dwm-flexipatch --quiet | jq -r '.hash'"
```

## LD_LIBRARY_PATH issues

This can happen when importing python libraries: Solution: add ${stdenv.cc.cc.lib}/lib/libstdc++.so.6 to the LD_LIBRARY_PATH.

A sample shell.nix:

```
{ pkgs ? (import <nixpkgs> {}).pkgs }:
with pkgs;
mkShell {
  buildInputs = [
    python3Packages.virtualenv # run virtualenv .
    python3Packages.pyqt5 # avoid installing via pip
    python3Packages.pyusb # fixes the pyusb 'No backend available' when installed directly via pip
  ];
  shellHook = ''
    # fixes libstdc++ issues and libgl.so issues
    LD_LIBRARY_PATH=${stdenv.cc.cc.lib}/lib/:/run/opengl-driver/lib/
    # fixes xcb issues :
    QT_PLUGIN_PATH=${qt5.qtbase}/${qt5.qtbase.qtPluginPrefix}
  '';
}
```

## PCI passthrough

- [Notes on PCI passthrough on NixOS using QEMU and VFIO](https://alexbakker.me/post/nixos-pci-passthrough-qemu-vfio.html)
- Review and add notes [Virtiofs: Shared file system](https://github.com/virtio-win/kvm-guest-drivers-windows/wiki/Virtiofs:-Shared-file-system)
- [NixOS: PCI passthrough · GitHub](https://gist.github.com/techhazard/1be07805081a4d7a51c527e452b87b26)
- [PCI passthrough via OVMF - ArchWiki](https://wiki.archlinux.org/title/PCI_passthrough_via_OVMF)

## nix-index and nix-locate

`nix-locate` from `nix-index` package allow to locate libraries in nix store. This is useful for debugging, adding required libraries to `LD_LIBRARY_PATH`.

```sh
$ nix-index # to generate database
$ nix-locate --top-level libstdc++.so.6 | grep gcc
libgccjit.out                                         0 s /nix/store/76vxcz4qm3v22li7dxcvpyn4hl4ivnki-libgccjit-10.3.0/lib/libstdc++.so.6
libgccjit.out                                 1,903,088 x /nix/store/76vxcz4qm3v22li7dxcvpyn4hl4ivnki-libgccjit-10.3.0/lib/libstdc++.so.6.0.28
libgccjit.out                                     2,498 r /nix/store/76vxcz4qm3v22li7dxcvpyn4hl4ivnki-libgccjit-10.3.0/lib/libstdc++.so.6.0.28-gdb.py
gcc-unwrapped.lib                                     0 s /nix/store/x17b1wq871r4ycrxyy1n85ja09dxq3ih-gcc-10.3.0-lib/lib/libstdc++.so.6
gcc-unwrapped.lib                             1,903,088 x /nix/store/x17b1wq871r4ycrxyy1n85ja09dxq3ih-gcc-10.3.0-lib/lib/libstdc++.so.6.0.28
gcc-unwrapped.lib                                 2,494 r /nix/store/x17b1wq871r4ycrxyy1n85ja09dxq3ih-gcc-10.3.0-lib/lib/libstdc++.so.6.0.28-gdb.py
```

## - [ ]

- linux kernel flake + le9ec
- pipewire low-latency + rtkit

## Configurations

- [rake5k/nixcfg](https://github.com/rake5k/nixcfg)
- [hlissner/dotfiles](https://github.com/hlissner/dotfiles)
