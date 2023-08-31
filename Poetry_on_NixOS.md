---
date: 2023-09-01
tags:
  - inbox
---

# Poetry on [[NixOS]]

Basically I use `nix-shell` with some minimal configuration.

First I create `shell.nix` file:

```nix
{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.python3
    pkgs.poetry
  ];
}
```

Then I activate it and start my editor

```sh
cd project_where_shell_nix_is_located
nix-shell
# optional initialize poetry configuration:
# poetry new .
# optional install poetry dependencies:
# poetry install
nvim  # or (pycharm-community . &) to start pycharm and allow close terminal
```

## Resources

- https://o.librepush.net/solutions/nix/developing-python-rust-projects-on-nixos/
