---
date: 2022-12-29
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 4
sr-ease: 274
---

# Microsoft Windows

> Microsoft Windows is a group of several proprietary graphical operating system
> families developed and marketed by Microsoft. Each family caters to a certain
> sector of the computing industry. For example, Windows NT for consumers,
> Windows Server for servers, and Windows IoT for embedded systems.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Microsoft_Windows)</cite>

## Windows LTSC Edition

Windows from Enterprise Long-Term Servicing Channel (LTSC), long-term support
variant of Windows Enterprise released every 2 to 3 years. Each release is
supported with security updates for either 5 or 10 years after its release, and
intentionally receive no feature updates. **Some features**, including the
Microsoft Store and bundled apps, are **not included** in this edition. However,
Windows Store can be installed using a command prompt. This edition was first
released as Windows 10 Enterprise LTSB (Long-Term Servicing Branch). There are
currently 4 releases of LTSC: one in 2015 (version 1507), one in 2016 (version
1607), one in 2018 (labeled as 2019, version 1809), and one in 2021 (version
21H2). In 2024 planned next release.

Check post-installation steps for Windows, in this note
[[windows_setup_script]], her some info which LTSC edition I use.

## Windows Setup Script

I have own quick-start script for [[MS_Windows]]. I tried to make it
very simple and straightforward. To install Windows, I usually just use
[[Ventoy]].

Script:

```powershell
# Install Scoop
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser # Optional: Needed to run a remote script the first time
irm get.scoop.sh | iex

# Install packages
scoop install main/git
scoop bucket add main
scoop bucket add extras
scoop install main/neovim
scoop install extras/windows-terminal
scoop install extras/slack
scoop install extras/brave
scoop install extras/vcredist2015
scoop install extras/windirstat
scoop install extras/cru

# Create directories
New-Item -ItemType Directory -Path "C:\bin"
New-Item -ItemType Directory -Path "C:\tmp"

# Download Colemak-DH installer
$url = "https://github.com/ColemakMods/mod-dh/blob/master/klc/colemak_dh_ansi_us.zip?raw=true"
$outputDir = "C:\tmp"
$outputPath = Join-Path $outputDir (Split-Path $url -Leaf)
Invoke-WebRequest $url -OutFile $outputPath

echo "Installing WSL"
echo "wsl --install"

echo "---"
echo "Enable dark mode"
echo "New-ItemProperty -Path HKCU:\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize -Name AppsUseLightTheme -Value 0"
echo "Set-ItemProperty -Path HKCU:\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize -Name SystemUsesLightTheme -Value 0"

echo "---"
echo "TO disable antivirus, run the following commands in PowerShell:"
echo "Set-MpPreference -DisableRealtimeMonitoring $true"
echo "Set-MpPreference -SubmitSamplesConsent NeverSend"
echo "Set-MpPreference -MAPSReporting Disable"

echo "Fully Disable defneder. Don't use it on important machines, it can be gone forever."
echo "https://github.com/jbara2002/windows-defender-remover/releases"

echo "Also need disable anti-virus notifications in the Action Center, right-click in tray on defender icon, view notifications options"

echo "---"
echo "To remove crapware, disable autostart items in Windows tasks manager, and uninstall apps from the start menu"

echo "---"
echo "Possible useful commands: Install-Module -Name DisplaySettings;Set-DisplayResolution -Width 1920 -Height 1024"

echo "---"
echo "Disable wallpaper"
echo "Set-ItemProperty -path 'HKCU:\Control Panel\Desktop\' -name wallpaper -value '' rundll32.exe user32.dll, UpdatePerUserSystemParameters"

echo "---"
echo "Make taskbar icons small"
echo "Set-ItemProperty -path 'HKCU:\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced\' -name TaskbarSmallIcons -value 1"
echo "Stop-Process -name explorer  # explorer.exe restarts automatically after stopping"
```

To execute it, you need to run PowerShell as Administrator, save script as file
and execute this command:

```powershell
Set-ExecutionPolicy unrestricted
.\script_name.ps1
```

Currently, I use this Windows version:

- ISO file: `en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso`
- SHA-256: `c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d`
- SHA is from this URL
  [MSDN Files Info by WZT](https://msdn.rg-adguard.net/public.php?seach=us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96)

NOTE: It's containing driver issues or Microsoft store issues, so it's better to
use it only if you know what you are doing.

NOTE: [winutil](https://github.com/ChrisTitusTech/winutil) can be used as
post-installation tool.

## External links

- [Microsoft Software Download Listing](https://msdl.gravesoft.dev/)
- [Chris Titus Tech's Windows Utility - Install Programs, Tweaks, Fixes, and Updates](https://github.com/ChrisTitusTech/winutil)

