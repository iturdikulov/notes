---
date: 2023-05-20
tags:
  - inbox
  - definition
---

# Windows Setup Script

I have own quick-start script for [[Microsoft Windows]]. I tried to make it very
simple and straightforward. To install Windows, I usually just use [[ventoy]].

You can check last version here: [win_setup.ps1](./win/win-setup.ps1)

To execute it, you need to run PowerShell as Administrator and execute this
command:

```sh
iex ((New-Object System.Net.WebClient).DownloadString(''))
```

Currently, I use this Windows version:

- ISO file: `en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso`
- SHA-256: `c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d`
- SHA is from this URL
  [MSDN Files Info by WZT](https://msdn.rg-adguard.net/public.php?seach=us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96)

To validate SHA-256 from command line, need to use this command:

```sh
sha256sum en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso \
| grep c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d
```

If validated successfully, I copy it to my ventoy USB drive.

```sh
udiskie-mount -a
cp en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso /media/Ventoy
sha256sum /media/Ventoy/en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso \
| grep c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d
```
