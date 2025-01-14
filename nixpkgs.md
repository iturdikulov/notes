---
date: 2023-09-14T00:00+03:00
tags:
  - blog
external: https://github.com/NixOS/nixpkgs
directory: ~/Computer/unix/nixpkgs/
sr-due: 2024-02-01
sr-interval: 4
sr-ease: 248
---

# Nixpkgs

Nixpkgs is a collection of over 80,000 software packages that can be installed
with the Nix package manager. It also implements [[NixOS|]], a purely-functional
Linux distribution.

## Searching and installing old versions of Nix packages

### Problem

<!-- TODO: maybe no more actual -->
[There isn a clear canonical way to refer to a specific package version. · Issue
#93327 · NixOS/nixpkgs · GitHub](https://github.com/NixOS/nixpkgs/issues/93327).

## Solution [^1]

TLDR: Search package at [Nix Package
Versions](https://lazamar.co.uk/nix-versions/), and check instructions.

A revision is nothing more than a big Nix expressions that describes all the
packages available and how to build them. Nix revisions are kept at
[NixOS/nixpkgs](https://github.com/NixOS/nixpkgs). If you change anything in a
revision it becomes a different revision. This means that _each commit in the
repository describes a different revision_.

Given that one commit is equal to one revision, to find a revision containing an
older version of Neovim I can look through the git history of that repository
searching for changes in the `version` field of the `neovim` derivation.

Searching for _neovim_ at
[https://search.nixos.org/packages](https://search.nixos.org/packages) I can see
that the nix expression describing it lives at
`pkgs/applications/editors/neovim/default.nix`.

So I started by cloning `NixOS/nixpkgs` and using `git rev-list` to find all
commits that modify that file.

```bash
$ git rev-list nixos-unstable -- pkgs/applications/editors/neovim/default.nix
0f1434cb2adb8bec6678b53510750ce7c1814263
7f137849e8612ffa0de59871ec95956c41c83697
b4c7a0b76252f4c115e36bcb6496c7a5928a9ec7
...
```

I could then use `git grep` to check if the line containing the package version
was changed.

```bash
$ git grep -E '^\s+version\s?=\s?"[^"]+"\s*;\s*$' 0f1434cb2adb8bec6678b53510750ce7c1814263 -- pkgs/applications/editors/neovim/default.nix
0f1434cb:pkgs/applications/editors/neovim/default.nix:    version = "0.4.4";
```

I can use `xargs` perform one `git grep` search per commit in `git rev-list`,
this way I will effectively have a list of all commits where the version of
`neovim` was changed.

```bash
$ git rev-list nixos-unstable -- pkgs/applications/editors/neovim/default.nix\
| xargs -I{} git grep -E '^\s+version\s?=\s?"[^"]+"\s*;\s*$' {} -- pkgs/applications/editors/neovim/default.nix
0f1434cb:pkgs/applications/editors/neovim/default.nix: version = "0.4.4";
7f137849:pkgs/applications/editors/neovim/default.nix: version = "0.4.4";
b4c7a0b7:pkgs/applications/editors/neovim/default.nix: version = "0.4.3";
...
2c95ce90:pkgs/applications/editors/neovim/default.nix: version = "0.2.2";
0f84673f:pkgs/applications/editors/neovim/default.nix: version = "2017-11-05";
0f84673f:pkgs/applications/editors/neovim/default.nix: version = "0.2.1";
...
```

Success! Now I can just choose the version of `neovim` I want and open a shell
with it by specifying the revision’s commit address on GitHub.

```bash
$ nix-shell -p neovim -I nixpkgs=https://github.com/NixOS/nixpkgs/archive/92a047a6c4d46a222e9c323ea85882d0a7a13af8.tar.gz
```

### Automating

Even though this worked, it was not pleasant.

- I had to clone a large repository
- Finding out what commands would give the right answer took time
- Finding out how to install packages from an arbitrary revision took time
- This breaks if the derivation’s version is an expression instead of a string.
- This breaks if there is another version field somewhere else in the derivation
  file
- This breaks if the derivation file changes
- This requires too many steps

I expected a good solution to be similar to the official Nix package search
website. A page with one search box where you enter the package you are
interested in and get a copy-pasteable command to install it. So I started with
that as the goal.

I initially thought of setting up a server with a clone of `nixpkgs` that would
perform this git search every time someone made a package query. It soon became
obvious that this was too error-prone and would not scale.

I discovered that `nix-env -qaP --json` outputs a big json file containing
information about all packages available in your default revision. You can
specify a different revision by using the `-f` flag. Using this I could find out
information about packages in any revision reliably. This command takes some
time to complete, but I can save its result in a cache and query the cache
instead.

But I can’t cache everything. Not only do we have one revision per commit, we
also have multiple channels. Each channel is a branch in the repo. It is not
feasible to store information about every single commit from every channel. To
simplify things I save data for one revision from each channel for every 5 weeks
period. This seemed like a reasonable interval as most packages don’t have new
versions more often than that.

After a few hours gathering data from 2017 until now the database ended up
containing information about 1,993,997 package versions spanning 1,032
revisions. This amounts to 542Mb which I store in an SQLite database to keep
things simple, fast and portable.

With the data in place all that remained was building the UI and setting up a
cron job to update the database every so often.

One can now search for old package versions at:
[Nix Package Versions](https://lazamar.co.uk/nix-versions/)

It shows all old versions you can install for some specific channel. And it
gives `copy-pasteable` installation instructions for using it in the command-line
or in a nix derivation.

The tool is open source and the code is available at:
[Search for old versions of Nix packages](https://github.com/lazamar/nix-package-versions)

### Drawbacks

Nix revisions specify how a package is to be built, but actually building it may
take a very long time, especially if you are also building everything that it
depends on. To avoid that Nix servers keep the pre-compiled binaries of packages
in recent revisions and make those available for download. Your system will
automatically choose to download the binary if it is available instead of
building the whole thing.

When you are installing things from older derivations you lose that benefit and
your **build times may be much longer**.

Additionally, if a package has releases more often than every 5 weeks, **a
version may be missed**.

Given that easily handling package versions is such an important feature of Nix
I hope that in the future this functionality will be built into the package
manager.

## References

[^1]: [Searching and installing old versions of Nix packages – Marcelo Lazaroni – Developing for the Interwebs](https://lazamar.github.io/download-specific-package-version-with-nix/)
