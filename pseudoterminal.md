---
created: 2024-06-29T00:00+03:00
tags:
  - blog
  - unix
sr-due: 2025-08-26
sr-interval: 47
sr-ease: 210
---

# Pseudoterminal (pseudotty or PTY)

In [[Unix]]-like systems, a pseudoterminal is a pair of pseudo-device endpoints (files) which establish asynchronous, bidirectional communication (IPC) channel (with two ports) between two or more processes.

In the pair master controls slave (like remote login/terminal) and slave acts like serial port for shell programs, enabling two-way communication

To control master through provided means used special terminal emulator applications, like [[foot]].

![[img/termios-script-diagram.excalidraw|Termios script diagram]]
_Termios script diagram_

## External links

- [ ] [Устройство подсистемы TTY](https://wandrien.github.io/articles/tty/)
- [ ] [Pseudoterminal](https://en.wikipedia.org/wiki/Pseudoterminal)
