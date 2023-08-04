---
date: 2022-12-29
draft: true
sr-due: 2023-03-16
sr-ease: 268
sr-interval: 3
tags:
- inbox
- definition
sr-due: 2024-01-14
sr-interval: 242
sr-ease: 288
---

# GNU Privacy Guard (GPG or GnuPG)

> Free-software replacement for Symantec's PGP cryptographic software suite. The
> software is compliant with RFC 4880, the IETF standards-track specification of
> OpenPGP. Modern versions of PGP are interoperable with GnuPG and other
> OpenPGP-compliant systems.
>
> GnuPG is part of the GNU Project and received major funding from the German
> government in 1999.
>
> GnuPG is a hybrid-encryption software program because it uses a combination of
> conventional symmetric-key cryptography for speed, and
> [[public-key cryptography|public-key cryptography]] for ease of secure key
> exchange, typically by using the recipient's public key to encrypt a session
> key which is used only once. This mode of operation is part of the OpenPGP
> standard and has been part of PGP from its first version.
>
> The GnuPG 1.x series uses an integrated cryptographic library, while the GnuPG
> 1.x series replaces this with Libgcrypt.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/GNU_Privacy_Guard)

You can generate GPG key with `gpg --generate-key` command.
Or `gpg --full-generate-key` for more options.

To check GPG keys, installed on your system run `gpg --list-key`.

To export public key with specific email,
run `gpg --output <path/key_name.gpg> --export --armor <email>`.

To export private key with specific email,
run `gpg --output <path/key_name.gpg> --export-secret-key --armor <email>`.

If required backup, recommended using this command:
`gpg --output <path/key_name.gpg> --armor --export-secret-keys --export-options export-backup <email>`

If required, you can trust your own key with this algorithm:
1. `gpg --edit-key <email>`
2. `trust`
3. `5` (ultimate trust, in our case)
4. `y` (yes)
5. `quit`

## GnuPG backup steps

First of all, before we begin, your@id.here represents your GPG key ID. This
could be your email address or the key ID.

Indeed, your private key is critical, but other files are also important.

1. Export keys and ownertrust:

These commands are intended to export your keys and trust level. Public and
private keys are used for encryption/decryption, and the trust level determines
how much you trust other keys in your keyring.

Run the following commands in your command line (Command Prompt for Windows,
Terminal for macOS and Linux). Replace "your@id.here" with your GPG key ID:

```sh
gpg --export --armor your@id.here > your@id.here.pub.asc
gpg --export-secret-keys --armor your@id.here > your@id.here.priv.asc
gpg --export-secret-subkeys --armor your@id.here > your@id.here.sub_priv.asc
gpg --export-ownertrust > ownertrust.txt
```

2. Import keys and ownertrust:

If you need to restore your keys and trust level (e.g., after reinstalling the
system or on a new computer), use the following commands:

```sh
gpg --import your@id.here.pub.asc
gpg --import your@id.here.priv.asc
gpg --import your@id.here.sub_priv.asc
gpg --import-ownertrust ownertrust.txt
```

3. Ultimately trust the imported key:

This step is needed to set the ultimate trust level for your keys. Run the
following command, then type trust, then 5 (which means "ultimate trust") and
hit Enter:

```sh
gpg --edit-key your@id.here gpg> trust Your decision? 5 Note: If you're
```

1. Export/import revocation certificate:

Export:
```sh
gpg --gen-revoke --armor --output revcert.asc user-id
```

Import:
```sh
echo -n "-----BEGIN PGP PUBLIC KEY BLOCK-----
Comment: This is a revocation certificate

....
-----END PGP PUBLIC KEY BLOCK-----" | gpg --import -
```

operating on Windows, you might need to install GPG4Win first. If you're on
macOS, you may need to install GPG Suite.

## GnuPG to SSH

You must have at least one subkey, with authentication capability.
To generate you can use somthing like this:
`gpg --expert --edit-key, RSA, 4096, -ENCRYPT, -DECRYPT, AUTH, save`.

1. Find fingerprint of your RSA key: `gpg --list-secret-keys --keyid-format short`
2. Next, you can use openpgp2ssh tool distributed in with monkeyshpere project:
```sh
# 01234567 must be fingerprint of a RSA key (or subkey)
# gpg --export-secret-keys also accept finger print of global key  (in this
# case, it exports all sub-keys). # However, openpgp2ssh only accept finger
# print of an RSA key If no arguments are provided, openpgp2ssh export RSA
# keys it find
gpg --export-secret-keys (or --export-secret-subkeys) 01234567! | openpgp2ssh 01234567 > id_rsa
```
3. You can now extract ssh public key using: `ssh-keygen -y -f id_rsa > id_rsa.pub`


## Uploading the key to keyserver

This section explains how to upload your public key to a keyserver so that
anyone can download it. Once you have uploaded it to one keyserver, it will
propagate to the other keyservers. Eventually most of the keyservers will have a
copy of your key. You can accelerate the process by uploading your key to
several keyservers.

To upload the key, enter:

```sh
# get key id
gpg --list-keys --keyid-format short
export GPGKEY=01234567
gpg --send-keys --keyserver keyserver.ubuntu.com $GPGKEY
```


Note that keyserver.ubuntu.com is only reachable via IPv4.

### Keyservers list:

- https://keyserver.ubuntu.com/. Ubuntu Keyserver: federated, no verification,
keys cannot be deleted.
- https://keys.mailvelope.com/. Mailvelope Keyserver: central, verification of
email IDs, keys can be deleted.
- https://keys.openpgp.org/. central, verification of email IDs, keys can be
deleted, no third-party signatures (i.e. no Web of Trust support).
- keybase.io

More: https://en.wikipedia.org/wiki/Key_server_(cryptographic)#Keyserver_examples


## Resources

- https://wiki.archlinux.org/title/GnuPG
