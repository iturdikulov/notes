---
date: 2023-08-16
tags:
  - inbox
  - definition
---

# SSH (Secure Shell)

> The Secure Shell Protocol (SSH) is a cryptographic network protocol for
> operating network services securely over an unsecured network. Its most
> notable applications are remote login and command-line execution.
>
> SSH applications are based on a client–server architecture, connecting an SSH
> client instance with an SSH server. SSH operates as a layered protocol suite
> comprising three principal hierarchical components: the transport layer
> provides server authentication, confidentiality, and integrity; the user
> authentication protocol validates the user to the server; and the connection
> protocol multiplexes the encrypted tunnel into multiple logical communication
> channels.\
> —&thinsp;<cite>[Wikipedia](https://en.wikipedia.org/wiki/Secure_Shell_Protocol)</cite>


## X11 forwarding on Android

1. Start XSDL.

2. Open [[Termux]] and type: `export DISPLAY=127.0.0.1:0`

3. SSH to remote host: `ssh -Y user@hostname`
