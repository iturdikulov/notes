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

To check GPG keys, installed on your system run `gpg --list-key`.

To export public key with specific email,
run `gpg --output <path/key_name.gpg> --export --armor <email>`.

To export private key with specific email,
run `gpg --output <path/key_name.gpg> --export-secret-key --armor <email>`.

If required, you can trust your own key with this algorithm:
1. `gpg --edit-key <email>`
2. `trust`
3. `5` (ultimate trust, in our case)
4. `y` (yes)
5. `quit`

To export ssh key from GPG key, run `gpg --export-ssh-key <email>`.
You must have at least one subkey, with authentication capability.
To generate you can use somthing like this:
`gpg --expert --edit-key, RSA, 4096, -ENCRYPT, -DECRYPT, AUTH, save`.

## Resources

- https://wiki.archlinux.org/title/GnuPG
