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

## Configuration

You can use `-I nixosconfig=/path/to/config` flag with `nixos-rebuild switch`
and `-f /path/to/config` with `home-manager switch` to specify configuration
file.

https://github.com/jordanisaacs/dotfiles
https://codeberg.org/anriha/nixos-config/src/branch/main/configuration.nix
https://github.com/Misterio77/nix-starter-configs

Lifesaver, custom DWM!
https://raw.githubusercontent.com/dev-null-undefined/NixOs/master/modules/generated/nixos/de/dwm.nix

https://www.linux.org.ru/news/linux-general/16881424#comments

Я использую только nix, не использую flatpak, snap, appimage и что-либо иное
вообще.

Nix дает все те же возможности что и флатпак (независимость приложений друг от
друга, возможность иметь любые зависимости индивидуально каждому приложению),
плюс - нету ненужной изоляции и контейнеров, все работает как в нормальном
линуксе, плюс - nix дает удобные инструменты разработки. Поэтому смысла при
наличии nix в системе использовать флатпак я не вижу.

Все, включая проприетарщину, установлено из репозитория.

Использую самосборное ядро - ванильное, конфиг под мое железо, накладываю патч
le9ec. Собирается автоматически при помощи Nix, обновляется автоматически.

Среда - Plasma/Wayland. Основной браузер - ungoogled chromium, работающий в
режиме чистого wayland.

Звуковая система pipewire, сконфигурированная под low-latency с использованием
rtkit.

Стандартный набор приложений из реп.

Не из реп ставится - qucs-s (слава его разработчику) и tuxguitar. Последний в
репах есть, но не работает корректно с pipewire.

Из проприетрарщины стоит Viber, Telegram, Android Studio, VS Code, дрова Nvidia.
Ставится путем перепаковки, то есть пакет для nix скачивает официальный deb или
snap, перепаковывает и помещает в /nix/store. То есть ставить в NixOS сторонний
софт, доступный только в виде deb, rpm, snap довольно тривиально.

Наибольшие проблемы со сторонним софтом - если он скачивает, либо порождает,
свои собственные бинарники. Дело в том, что обычные бинарники от нормального
линукса не будут работать в NixOS, потому что все библиотеки в /nix/store по
нестандартным путям.

Когда ставится проприетарное приложение, оно патчится утилитой patchelf, которая
прописывает прямо в бинарник пути к библиотекам в /nix/store. Но если приложение
само скачивает бинарники - (например VS Code скачивает компилятор и пытается
запускать, или Steam скачивает игры и пытается запускать :))) ) - они будут
непропатчены и не будут работать.

Для этого есть такая штука как steam-run. Она делает контейнер, внутри которого
симлинками создана стандартная файловая структура линукса, со всеми библиотеками
по стандартным путям. Чисто симлинками. И внутри этого контейнера может
запускаться любое стороннее бинарное приложение, например игры в Steam.

Я запускаю так Matlab.

/nix/store занимает у меня 30995 Мб. Там сейчас только одна, текущая версия
системы.

Обновление работает не как в обычном линуксе. Все что обновилось ставится в
/nix/store параллельно старым пакетам, поэтому после обновления занимаемое место
может практически удвоиться (!!!!). Такой ценой достигается возможность
параллельно иметь старую и обновленную систему, и не бояться отлома чего-либо
после обновления. Если сломалось - достаточно загрузиться в старую конфигурацию.

Обновления очень жирные. Надо понимать, что в NixOS не поддерживается обновление
библиотеки без обновления всего зависящего от нее. Поэтому на unstable ветке
недельные обновления весят по 30 Гб и это норма.

Время на настройку зависит от того, не столкнешься ли ты с нестандартными
проблемами. Если все ставить как есть, то это очень быстро. А если как у меня,
когда выясняется что legacy nvidia дрова есть но пакеты сломаны и вообще через
задницу написаны - то пришлось повозиться.

В завершение многобукафа всем: в текущем релизе есть и мой скромный вклад. Если
вы подключаете телефон в KDE по MTP и он работает - то вот, это я зафиксил. Не
работало.

## NixOS and [[Filesystem Hierarchy Standard|FHS]]

NixOS doesn't follow the FHS:

- Missing directories or very few files.
- Can't directly modify files in /etc (most thins here read-only).
- Where are all the files?
- Path ($PATH)
  - $HOME/.nix-profile/bin
  - /run/current-system/sw/bin

1. ~/.nix-profile/bin
   It's directory for user-specific binaries. It's added to $PATH by default.
2. /run/current-system
   It's system files (system profile), with generated files and symlinks
3. /run/current-system/sw
   Very similar to standard FHS. But it's mostly contain symbolic
   links to packages files.
4. /nix/store. Everything is here.
   Read only, contains derivations and packages files. NixOS can do garbage
   collection over this directory and do other specific tasks.
   You can optimize NixOS storage by 2 commands:
    - `nix-store --optimise`
    - `nix-store --gc`. Garbage collection recommended doing after deleting old
    generations (`nix-env --delete-generations <14d|old>`).
5. Profiles, sort of collections of packages.
   /etc/nix/profiles
   /run/current-system, current system profile
   ~/.nix-profile - current user profile
   /nix/var/nix/profiles, contains list of generations of system configurations
   /nix/var/nix/profiles/per-user, contains list of generations of user
6. Nix configuration
   /etc/nix/nix.conf
   NixOS configures in configuration.nix!
   Non NixOS systems you can modify it.
   /nix/nixos you config files for NixOS, but I manage them in dotfiles.
7. Nix log files
   /nix/var/log, better to use specific tools to work with them
   nix log, nix log /nix/store/<path>
   on failed build, nix give you command to check logs


## Get hashes for packages

https://github.com/NixOS/nixpkgs/issues/191128
I think the preferred way to do it now (as of Nix 2.2) is using an SRI hash.

$ git clone --depth 1 https://github.com/owner/repo path/to/clone
```
# blah blah
$ git -C path/to/clone rev-parse HEAD
65bb66d364e0d10d00bd848a3d35e2755654655b
$ rm -r path/to/clone/.git
$ nix hash-path path/to/clone
sha256-8EUDsWeTeZwJNrtjEsUNLMt9I9mjabPRBZG83u7xtPw=
fetchFromGitHub {
  owner = "owner";
  repo = "repo";
  rev = "65bb66d364e0d10d00bd848a3d35e2755654655b";
  hash = "sha256-8EUDsWeTeZwJNrtjEsUNLMt9I9mjabPRBZG83u7xtPw=";
}
```
As a new Nix user, this took me a really long time to figure out as I didn't
realise the sha256 hash outputted in the error message with the trick of using a
garbage hash was not the same as the part after the sha256- in these new
hashes.*

Hopefully this can help some other people coming from Google.

*EDIT: I'm not sure when this changed, but I'm now using Nix v2.5.1 and the error message is like this:

specified: sha256-AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=
   got:    sha256-8EUDsWeTeZwJNrtjEsUNLMt9I9mjabPRBZG83u7xtPw=
This is different from the old version:

wanted: sha256:0000000000000000000000000000000000000000000000000000
got:    sha256:1z5ly7pdxg4i0p8v6sd3v4ipvjrc1p2i4qxv6q4rqyckcyqh6igh
The old version uses base32, and the new version uses base64.

$ nix hash to-base32 sha256-8EUDsWeTeZwJNrtjEsUNLMt9I9mjabPRBZG83u7xtPw=
1z5ly7pdxg4i0p8v6sd3v4ipvjrc1p2i4qxv6q4rqyckcyqh6igh
$ nix hash to-base64 sha256:1z5ly7pdxg4i0p8v6sd3v4ipvjrc1p2i4qxv6q4rqyckcyqh6igh
8EUDsWeTeZwJNrtjEsUNLMt9I9mjabPRBZG83u7xtPw=
$ nix hash to-sri sha256:1z5ly7pdxg4i0p8v6sd3v4ipvjrc1p2i4qxv6q4rqyckcyqh6igh
sha256-8EUDsWeTeZwJNrtjEsUNLMt9I9mjabPRBZG83u7xtPw=
In short:

old hash: sha256:base32encoding
new (SRI) hash: sha256-base64encoding

Alternatively, if you already know the revision hash:

nix-prefetch fetchFromGitHub --owner owner --repo repo --rev 65bb66d364e0d10d00bd848a3d35e2755654655b
The fetcher will be called as follows:
> fetchFromGitHub {
>   owner = "owner";
>   repo = "repo";
>   rev = "65bb66d364e0d10d00bd848a3d35e2755654655b";
>   sha256 = "sha256:0000000000000000000000000000000000000000000000000000";
> }
