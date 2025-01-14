---
date: 2023-08-16T00:00+03:00
tags:
  - blog
  - network
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 228
---

# Secure Shell (SSH)

> The Secure Shell Protocol (SSH) is a
> [[cryptographic_protocol|cryptographic network protocol]] for operating
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

## Examples

X11 forwarding on Android:

- Start XSDL.
- Open [[termux]] and type: `export DISPLAY=127.0.0.1:0`
- SSH to remote host: `ssh -Y user@hostname`

Generate ed25519 ssh key:

```sh
# -t type, -f file, -C comment
ssh-keygen -t ed25519 -f ~/.ssh/id_ed25519 -C "Full Name <email>"
```

Upload an SSH Public Key:

```sh
ssh-copy-id -i path_to_file.pub user@host
```

Use SSH as a secure Proxy (tunnel traffic):

```
# Run proxy server at 1080 port and tunnel all trafic through remote server
#   -D - bind port
#   -N - don't execute any command
#   -f - add this to run in background
ssh -D 1080 -N user@remoteserver

# Verify and test proxy
netstat -pan | grep 1080
brave --proxy-server="socks5://localhost:1080"
```
