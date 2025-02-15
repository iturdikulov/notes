---
date: 2023-04-02T00:00+03:00
tags:
  - blog
sr-due: 2024-02-10
sr-interval: 16
sr-ease: 291
---

# Android (operating system)

> Android is an operating system for mobile devices. It is mostly used for
> smartphones, like Google's own Google Pixel, as well as by other phone
> manufacturers like **OnePlus**, HTC and Samsung. It has also been used for
> tablets such as the **Samsung**, Motorola, etc. A modified [[Linux]]
> kernel is used as Android's kernel.
>
> Programs for Android, also called "apps" (short for applications), usually
> come from the Google Play Store. The Android programs have a file extension of
> .APK.\
> — <cite>[Simple English Wikipedia](https://simple.wikipedia.org/wiki/Android_(operating_system))</cite>

I use android on daily-basis with smartphone and tablet. But I'm trying to keep
it simple and minimalistic.

I store list of useful software in [[my_awesome_software_list#Mobile & Tablet]].

I also need sync data between my working machine and android devices. There 2
ways to sync data which I usually use:

1. Mount android device using `mounter` script, which assigned to `<MOD-C-m>` in
   [[DWM]]. And rsync data: `rsync -r <source> <destination>`. It's rare case.
2. Complex setup, using [[Syncthing]].

## Backup strategy

1. List installed apps and save this list:

```sh
# Connect smartphone & tablet and run this commands (you might need to enable
# USB debugging)
adb shell cmd package list packages -e > private/smartphone_installed_apps.txt
adb she shell cmd package list packages -e > private/tablet_installed_apps.txt
```

## External links

- [Android Debug Bridge (adb)](https://developer.android.com/tools/adb)
- [XDA Portal & Forums](https://www.xda-developers.com/)
- [4PDA](https://4pda.to/forum/index.php)
