---
date: 2022-12-29
draft: true
sr-due: 2024-01-14
sr-ease: 288
sr-interval: 242
tags:
- inbox
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
> [[Public-key_cryptography|public-key_cryptography]] for ease of secure key
> exchange, typically by using the recipient's public key to encrypt a session
> key which is used only once. This mode of operation is part of the OpenPGP
> standard and has been part of PGP from its first version.
>
> The GnuPG 1.x series uses an integrated cryptographic library, while the GnuPG
> 1.x series replaces this with Libgcrypt.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/GNU_Privacy_Guard)

## Subkeys Usage

Being able to store the primary key offline or a more secure device. If a
machine with a subkey is harmed, you can easily revoke the subkey without all
the hassles of revoking your primary key (sharing a new key, getting new
signatures, ...).

Having different subkeys on different machines, for example a signing subkey on
a build server. Again, revoking single keys is easy.

Using a larger primary key for long lifetime, and shorter, but faster subkeys
for day-to-day usage.

Some algorithms do not support both encrypting and signing. For example, a DSA
primary key requires another key for encryption, typically paired with ElGamal.

## Basic commands

You can generate GPG key with `gpg --generate-key` command.
Or `gpg --full-generate-key --expert` for more options.

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

First, before we begin, your@id.here represents your GPG key ID. This
could be your email address or the key ID.

Indeed, your private key is critical, but other files are also important.

If you want save your user attributes, signatures (including local signatures),
and ownertrust values use `--export-options backup` on export and
`--import-options restore` on import.

1. Export keys and ownertrust:

These commands are intended to export your keys and trust level. Public and
private keys are used for encryption/decryption, and the trust level determines
how much you trust other keys in your keyring.

Run the following commands in your command line (Command Prompt for Windows,
Terminal for macOS and Linux). Replace "your@id.here" with your GPG key ID:

```sh
# First get your keys list with keygrips
gpg -k

# --armor option to, in order to create an ASCII version of the key that is not
# binary and readable

# In order to save all the Public Keys we have imported to our system, we need to
# backup them. The Public Keys are saved at the ~/.gnupg/pubring.kbx and
# ~/.gnupg/pubring.gpg files. But we do need to backup the files directly, it is
# better to use the --export option.
export KEYGRIP=0X1234567890ABCDEF...
gpg --output "${KEYGRIP}_public.pub" --export --armor $KEYGRIP

# Export private key
# Note: Although the exported Private Key is encrypted with your passphrase, be
# very carefull with this file, as if it gets compromised and brute-forced,
# anyone can impersonate you and read all your encrypted files and emails.
gpg --export-secret-keys --armor --output "${KEYGRIP}_private.asc" $KEYGRIP
gpg --export-secret-subkeys --armor --output "${KEYGRIP}_private_sub.asc" $KEYGRIP

# The GPG Trust Database is used to keep the trust values for each of the Public
# Keys you have.
gpg --export-ownertrust > all_keys_ownertrust.txt

# ~/.gnupg/openpgp-revocs.d/ # This is the directory where gpg stores
# pre-generated revocation certificates. The file name corresponds to the OpenPGP
# fingerprint of the respective key. It is suggested to backup those certificates
# and if the primary private key is not stored on the disk to move them to an
# external storage device. Anyone who can access these files is able to revoke the
# corresponding key. You may want to print them out. You should backup all files
# in this directory and take care to keep this backup closed away.

# Generate revoke key
gpg --gen-revoke --armor --output "${KEYGRIP}_revoke.asc" $KEYGRIP
```

2. Import keys and ownertrust:

If you need to restore your keys and trust level (e.g., after reinstalling the
system or on a new computer), use the following commands:

```sh
gpg --import ..._public.pub
gpg --import ..._private.asc
gpg --import ..._private_sub.asc

# NOTE: To import the Trust Database, we need to first delete the current one:
# rm ~/.gnupg/trustdb.gpg
gpg --import-ownertrust ownertrust.txt
```

3. Ultimately trust the imported key (optional if ownertrust is not imported):

This step is needed to set the ultimate trust level for your keys. Run the
following command, then type trust, then 5 (which means "ultimate trust") and
hit Enter:

```sh
gpg --edit-key your@id.here gpg> trust Your decision? 5 Note: If you're
```

4. Import revocation certificate (optional, if you need revoke key):

```sh
echo -n "-----BEGIN PGP PUBLIC KEY BLOCK-----
Comment: This is a revocation certificate

....
-----END PGP PUBLIC KEY BLOCK-----" | gpg --import -
```

5. Delete keys (optional!)

```sh
gpg -k
gpg --delete-keys ...
gpg --delete-secret-keys ...
gpg -k
```

If you want to delete the Private Key file you created, you can use the
[[Shred_(software)|Shred]] utility to delete the file permanently and make it harder to be
recovered by overwriting it:

```sh
# The shred options, do the following:
#
# z: add a final overwrite with zeros to hide shredding
# u: de-allocate and remove file after overwriting
# v: show progress

shred -zuv privatekey.asc
```

## GnuPG to SSH

1. Find fingerprint of your RSA key:
   `gpg --list-secret-keys --keyid-format short` or `gpg -K`
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

## Test GnuPG

A useful gpg option to experiment is `--homedir`:

```sh
gpg --homedir ~/tmp --list-keys
# Or alternatively use GNUPGHOME
export GNUPGHOME=~/tmp
gpg --list-keys
```
This way your default keyring, trust database, etc. get ignored, and you have a
fresh keyring with which you can test if the conversion/import was successful.

## Fix permissions

To fix the " gpg: WARNING: unsafe permissions on homedir '/home/path/to/user/.gnupg' " error

```sh
chown -R $(whoami) ~/.gnupg/

# Also correct the permissions and access rights on the directory
chmod 600 ~/.gnupg/*
chmod 700 ~/.gnupg
```

### Key servers list:

- https://keyserver.ubuntu.com/. Ubuntu keyserver: federated, no verification,
keys cannot be deleted.
- https://keys.mailvelope.com/. Mailvelope keyserver: central, verification of
email IDs, keys can be deleted.
- https://keys.openpgp.org/. central, verification of email IDs, keys can be
deleted, no third-party signatures (i.e. no Web of Trust support).
- keybase.io

More: https://en.wikipedia.org/wiki/Key_server_(cryptographic)#Keyserver_examples


## Resources

- https://wiki.archlinux.org/title/GnuPG