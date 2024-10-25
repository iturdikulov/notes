---
date: 2023-09-01
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 266
---
# [[Poetry]] on [[NixOS]]

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

```bash
cd project_where_shell_nix_is_located
nix-shell
# optional initialize poetry configuration:
# poetry new .
# optional install poetry dependencies:
# poetry install
nvim  # or (pycharm-community . &) to start pycharm and allow close terminal
```

## References

- [x] [Developing Python and Rust projects on NixOS using IntelliJ IDEA and PyCharm — Olivier 'reivilibre'](https://o.librepush.net/solutions/nix/developing-python-rust-projects-on-nixos/)
