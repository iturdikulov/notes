---
title: T Will T series on NixOS
description:
tags:
- inbox
- research
created: 2023-07-17
---

What is nix?
- package build system
- reproducible builds
- build isolation
- nix store
- nix pkgs

What is nixos?
- Linux distribution built on top of nix
- Nix Modules
- Profiles and Genertaions

Why nixos?
- infrastructure as code
- easily tinker and recover
- modify packages and add your own
- development shells

## How to install NixOS

NixOS main website is [https://nixos.org/](https://nixos.org/).

I download minimal image and copy it into USB drive with [[ventoy]].

My guide to install NixOS described in own note: [[Nix OS pre-install]].

# Home manager

https://nix-community.github.io/home-manager/index.html#ch-installation
I use latest standalone with specific Nixpkgs version. Example:
```sh
$ nix-channel --add https://github.com/nix-community/home-manager/archive/release-23.05.tar.gz home-manager
$ nix-channel --update
# you propably want to restart shell or relogin here
$ nix-shell '<home-manager>' -A install
```

Use `$ home-manager switch` to apply changes using home manager.

Use `sudo nixos-rebuild switch` to apply NixOS changes.
https://nixos.wiki/wiki/Nixos-rebuild

You can run test build with `nixos-rebuild test`. More info on `nixos-rebuild
--help`.

You can roll back to previous generation with `nixos-rebuild --rollback switch`.

You can update channel with `nix-channel --update` and then rebuild.

`man configuration.nix` configuration options.

`man home-configuration.nix` home manager options.

Useful links:
  weekly beginner-oriented improvised QA-style lecture on Nix
- search for packages: https://search.nixos.org/packages
- search for options: https://search.nixos.org/options
- learn manuals (on bottom): https://nixos.org/learn.html

- The Nix Hour: https://www.youtube.com/playlist?list=PLyzwHTVJlRc8yjlx4VR4LU5A5O44og9in
- NixOS Wiki: https://nixos.wiki/
- Nix Pills: https://nixos.org/nixos/nix-pills/index.html
  A low-level tutorial on building software packages with Nix, showing in detail
  how Nixpkgs is constructed.
- Community: https://nixos.org/community.html
