---
author: Matt Sicker
external: https://musigma.blog/2021/05/09/gpg-ssh-ed25519.html
date: '2023-08-15'
tags:
- research
- inbox
---

# An abridged guide to using ed25519 PGP keys with GnuPG and SSH

I came across a great guide to using a YubiKey with SSH and GPG a couple years ago which helped push me over the fence and acquire my own YubiKey. Following that setup guide, I set up my keys offline using a Tails Linux boot USB with a OneRNG hardware random number generator. While a fun exercise, I must note that it’s not for the faint of heart, especially if done on a recent MacBook Pro (with a touchbar) or incompatible hardware. However, it did help explain some of the features available in GnuPG, and this came in handy recently while exploring the new support for elliptic curve cryptography in YubiKey firmware 5.2.3, the version installed in my later YubiKey 5Ci purchase. While I originally created PGP keys using the same guide last year with RSA keys, since those keys were expiring soon, it seemed like a good idea to look in to switching to Curve25519 keys. GnuPG has added some improved support for this algorithm along with supporting this updated YubiKey firmware to transfer these keys to a YubiKey. In this brief guide, I’ll go over how to generate an appropriate PGP key that can be used both in a YubiKey and for use with SSH. For more general info about using smartcards with GnuPG, see this guide from GnuPG.
