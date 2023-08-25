---
date: 2023-05-20
tags:
  - inbox
  - definition
sr-due: 2023-06-09
sr-interval: 4
sr-ease: 279
---

# Windows Setup Script

I have own quick-start script for [[Microsoft_Windows]]. I tried to make it very
simple and straightforward. To install Windows, I usually just use [[Ventoy_(software)|ventoy]].

To execute it, you need to run PowerShell as Administrator and execute this
command:

```sh
iex ((New-Object System.Net.WebClient).DownloadString('https://raw.githubusercontent.com/Inom-Turdikulov/notes/main/win/win-setup.ps1'))
```

Currently, I use this Windows version:

- ISO file: `en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso`
- SHA-256: `c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d`
- SHA is from this URL
  [MSDN Files Info by WZT](https://msdn.rg-adguard.net/public.php?seach=us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96)
