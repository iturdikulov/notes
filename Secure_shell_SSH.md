---
date: 2023-08-16
tags:
  - inbox
  - software
---

# Secure Shell (SSH)

> The Secure Shell Protocol (SSH) is a
> [[Cryptographic_protocol|cryptographic network protocol]] for operating
> network services securely over an unsecured network. Its most notable
> applications are remote login and command-line execution.
>
> SSH applications are based on a **client–server architecture**,
> connecting an SSH client instance with an SSH server. SSH operates as a
> layered protocol suite comprising three principal hierarchical
> components: the transport layer provides server authentication,
> confidentiality, and integrity; the user authentication protocol
> validates the user to the server; and the connection protocol multiplexes
> the encrypted tunnel into multiple logical communication channels.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Secure_Shell_Protocol)</cite>

## X11 forwarding on Android

- Start XSDL.
- Open [[Termux]] and type: `export DISPLAY=127.0.0.1:0`
- SSH to remote host: `ssh -Y user@hostname`

## Generate ed25519 ssh key

```sh
# -t type, -f file, -C comment
ssh-keygen -t ed25519 -f ~/.ssh/id_ed25519 -C "Full Name <email>"
```

## Upload an SSH Public Key
```sh
ssh-copy-id -i path_to_file.pub user@host
```
