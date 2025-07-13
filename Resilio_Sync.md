---
created: 2025-01-18T23:07+03:00
tags:
  - blog
external:
  - https://www.resilio.com/sync/
sr-due: 2025-07-13
sr-interval: 3
sr-ease: 249
---

# Resilo Sync

I was long time [[Syncthing]] user, but I have some problems with it in my
[[Android]] smartphone. So I switched to [[Resilio_Sync]].

Resilo sync allow to synchronize data between my mobile and desktop devices, and
it's intuitive and easy to use. I'm no need paid plan for selective sync, in my
case `.sync/IgnoreList` and sharing few directories is enough.

There is non-intuitive setup on [[Linux]] if I want to share directory from
somewhere from my home directory in [[NixOS]], here are some tips to make it
work for my Wiki directory.

```bash
setfacl -d -m group:rslsync:rwx /home/inom
setfacl -m group:rslsync:rwx /home/inom

# Warning, this is recursive, so it will apply to all sub directories.
sudo setfacl -R -d -m group:rslsync:rwx /home/inom/Wiki
sudo setfacl -R -m group:rslsync:rwx /home/inom/Wiki

sudo setfacl -R -d -m group:rslsync:rwx /home/inom/Music
sudo setfacl -R -m group:rslsync:rwx /home/inom/Music

# Any sub directories created will also belong to the rslsync group
chmod g+s /home/inom/Wiki
```

[$HOME facl is always reset in NixOS](https://discourse.nixos.org/t/home-facl-is-always-reset-in-21-05/13408).
I have same issue, as workaround I use this `activationScripts` configuration:

```nix
system.activationScripts."resilio" = ''
  ${getExe' pkgs.acl "setfacl"} -d -m group:rslsync:rwx ${config.user.home}
  ${getExe' pkgs.acl "setfacl"} -m group:rslsync:rwx ${config.user.home}
'';
```

## Directories which I sync

- Root directory from smartphone and tablet, 1 way sync to avoid possibility
  loss of files, all file operatons are done on smartphone. I have configured
  ignore list `.sync/IgnoreList` to avoid syncing some files/directories.
- Zettelkasten, two-way sync, with extra sub-directores not related to
  zettelkasten, ths simplify resilo sync setup.
