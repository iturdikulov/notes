# Install WinGet
# Based on this gist: https://gist.github.com/crutkas/6c2096eae387e544bd05cde246f23901
# To run gist from powershell:
# iex ((New-Object System.Net.WebClient).DownloadString('https://gist.githubusercontent.com/Inom-Turdikulov/6c0b3b2e40f54fe8ad5cee8d1dd83317/raw'))
#
# ISO file
#
# FILE: en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso
# MD5: b5a7be560dbd73619945129e52be1b5f
# SHA-1: 2fb2897373c4f71b06f4490943b3d564b0f0fd6d
# SHA-256: c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d
# https://msdn.rg-adguard.net/public.php?seach=us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96&str=25#60680
#
# sha256sum en-us_windows_10_enterprise_ltsc_2021_x64_dvd_d289cf96.iso | grep c90a6df8997bf49e56b9673982f3e80745058723a707aef8f22998ae6479597d
#
# LTSC release require additioanl steps to install winget
#
# VC++ v14 Desktop Framework Package
#
# https://docs.microsoft.com/en-gb/troubleshoot/cpp/c-runtime-packages-desktop-bridge#how-to-install-and-update-desktop-framework-packages
#
# Download the correct VC++ v14 Desktop Framework Package for your architecture.
# Install with: Add-AppxPackage -Path "PATH TO FILE"
#
# Installing Winget
# Make sure all dependencies are installed before doing this!
# From the latest release download the .msixbundle install- and .xml license file: https://github.com/microsoft/winget-cli/releases
# Install with: Add-AppxProvisionedPackage -Online -PackagePath "PATH TO MSIXBUNDLE" -LicensePath "PATH TO XML" -Verbose
# Wait for the install to finish and you're done. You may need to restart the terminal, or reboot your pc.
# Verify that the installation succeeded by running winget in PowerShell. If no errors occur then you're done!

$hasPackageManager = Get-AppPackage -name 'Microsoft.DesktopAppInstaller'
if (!$hasPackageManager -or [version]$hasPackageManager.Version -lt [version]"1.10.0.0") {
    "Installing winget Dependencies"
    Add-AppxPackage -Path 'https://aka.ms/Microsoft.VCLibs.x64.14.00.Desktop.appx'

    $releases_url = 'https://api.github.com/repos/microsoft/winget-cli/releases/latest'

    [Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12
    $releases = Invoke-RestMethod -uri $releases_url
    $latestRelease = $releases.assets | Where { $_.browser_download_url.EndsWith('msixbundle') } | Select -First 1

    "Installing winget from $($latestRelease.browser_download_url)"
    Add-AppxPackage -Path $latestRelease.browser_download_url
}
else {
    "winget already installed"
}

#Configure WinGet
Write-Output "Configuring winget"

#winget config path from: https://github.com/microsoft/winget-cli/blob/master/doc/Settings.md#file-location
$settingsPath = "$env:LOCALAPPDATA\Packages\Microsoft.DesktopAppInstaller_8wekyb3d8bbwe\LocalState\settings.json";
$settingsJson =
@"
    {
        // For documentation on these settings, see: https://aka.ms/winget-settings
        "experimentalFeatures": {
          "experimentalMSStore": true,
        }
    }
"@;
$settingsJson | Out-File $settingsPath -Encoding utf8

#Install New apps
#    @{name = "Microsoft.WindowsTerminal"; source = "msstore" },
Write-Output "Installing Apps"
$apps = @(
    @{name = "Git.Git" },
    @{name = "Neovim.Neovim" },
    @{name = "Valve.Steam" },
    @{name = "Microsoft.PowerShell" },
    @{name = "Microsoft.WindowsTerminal" },
    @{name = "SlackTechnologies.Slack" },
    @{name = "BraveSoftware.BraveBrowser" },
    @{name = "7zip.7zip" }
);
Foreach ($app in $apps) {
    $listApp = winget list --exact -q $app.name --accept-source-agreements
    if (![String]::Join("", $listApp).Contains($app.name)) {
        Write-host "Installing:" $app.name
        if ($app.source -ne $null) {
            winget install --exact --silent $app.name --source $app.source --accept-package-agreements --accept-source-agreements
        }
        else {
            winget install --exact --silent $app.name --accept-package-agreements --accept-source-agreements
        }
    }
    else {
        Write-host "Skipping Install of " $app.name
    }
}

#Remove Apps
Write-Output "Removing Apps"

$apps = "*3DPrint*",
        "Microsoft.MixedReality.Portal",
        "Microsoft.Bing*",
        "Microsoft.GamingApp",
        "Microsoft.WindowsFeedbackHub",
        "Microsoft.549981C3F5F10",
        "Microsoft.MicrosoftStickyNotes",
        "Microsoft.MicrosoftSolitaireCollection",
        "Microsoft.WindowsMaps",
        "Microsoft.WindowsSoundRecorder",
        "Microsoft.YourPhone",
        "Microsoft.ZuneMusic",
        "Microsoft.ZuneVideo",
        "microsoft.windowscommunicationsapps",
        "Microsoft.Windows.Photos"

Foreach ($app in $apps)
{
    Write-host "Uninstalling:" $app
    Get-AppxPackage -allusers $app  | Remove-AppxPackage
}

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

echo "Enable dark mode"
echo "New-ItemProperty -Path HKCU:\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize -Name AppsUseLightTheme -Value 0"
