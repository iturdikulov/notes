---
date: 2023-04-29
external: https://onlykey.io/
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 250
---

# Onlykey

> OnlyKey was developed by a team of [[computer_security|security]] experts and
> white hat hackers to stop malicious hackers. One thing hackers and malware on
> a computer cannot do is physically touch something.
>
> In order to use OnlyKey to log in, physical touch is required. In order to
> read a secure message, physical touch is required.
>
> Our design is open source and reviewed by the community to verify that there
> are no backdoors. This just isn't possible with other closed source products.
>
> PIN PROTECTED When you first receive your OnlyKey the first step to set it up
> is to set a PIN. The PIN is entered directly on the OnlyKey PIN pad to
> activate OnlyKey. This provides the following advantages:
>
> Physical Security - If you lose your OnlyKey it is unusable without knowing
> the PIN. Protected on Untrusted Computer - The PIN is entered on OnlyKey
> instead of on a computer. Entering a PIN on a compromised computer would
> result in compromise of the PIN. Only One PIN to Remember - Protect all of
> your accounts with only one PIN to remember.\
> — <cite>[Onlykey](https://onlykey.io/)</cite>

## Onlykey setup (pam.d) in archlinux

Be careful, pam rules applied immediately If you have issues, boot using
live-iso usb drive, mount system (`mount /dev/.. /mnt`) and fix
_etc/pam.d_ files.

```bash
# Install pam-u2f
sudo pacman -S pam-u2f

# Test u2f
sudo pamu2fcfg -u inom
# user>:ovvoovoaskdjalskdj....

# Prepare key
mkdir -p ~/.config/Yubico && pamu2fcfg -u inom >> ~/.config/Yubico/u2f_keys

# Prepare pam config
cd /tmp
echo "auth required pam_u2f.so nodetect origin=pam://hostname appid=pam://hostname" | sudo tee -a /etc/pam.d/u2f-required
echo "auth sufficient pam_u2f.so nodetect origin=pam://hostname appid=pam://hostname" | sudo tee -a /etc/pam.d/u2f-sufficient

# Edit and add
# /etc/pam.d/sudo
auth include u2f-sufficient
# validate sudo ls

# /etc/pam.d/system-auth
# add this in the end of first section
auth include u2f-required
reboot
```

TODO: need to ingerate with NixOS, 2 keys (backup).

## References

- [ ] [GitHub - drduh/YubiKey-Guide: Guide to using YubiKey for GPG and SSH](https://github.com/drduh/YubiKey-Guide)
- [OnlyKey User's Guide | Docs](https://docs.onlykey.io/usersguide.html)
- [Universal 2nd Factor - ArchWiki](https://wiki.archlinux.org/title/Universal_2nd_Factor)
- [Unlocking LUKS2 volumes with TPM2, FIDO2, PKCS#11 Security Hardware on systemd 248](https://0pointer.net/blog/unlocking-luks2-volumes-with-tpm2-fido2-pkcs11-security-hardware-on-systemd-248.html)
- [Yubico/pam-u2f: Pluggable Authentication Module (PAM) for U2F and FIDO2](https://github.com/Yubico/pam-u2f)
- [Yubikey - NixOS Wiki](https://nixos.wiki/wiki/Yubikey)
- [Ubuntu Linux Login Guide - U2F – Yubico](https://support.yubico.com/hc/en-us/articles/360016649099-Ubuntu-Linux-Login-Guide-U2F)
- [U2F setup for sudo by Brendan Horan](https://www.horan.hk/blog/u2f-pam-sudo/)
- [U2F setup for lightdm login/screensaver by Brendan Horan](https://www.horan.hk/blog/u2f-pam-login/)
