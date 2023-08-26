---
canonicalUrl: https://en.wikipedia.org/w/index.php?title=Daemon_(computing)&oldid=1167005554
date: '2023-08-25'
tags:
- research
- inbox
---

# Daemon (computing)

In multitasking computer operating systems, a daemon ( or ) is a computer program that runs as a background process, rather than being under the direct control of an interactive user. Traditionally, the process names of a daemon end with the letter d, for clarification that the process is in fact a daemon, and for differentiation between a daemon and a normal computer program. For example, syslogd is a daemon that implements system logging facility, and sshd is a daemon that serves incoming SSH connections.
In a Unix environment, the parent process of a daemon is often, but not always, the init process. A daemon is usually created either by a process forking a child process and then immediately exiting, thus causing init to adopt the child process, or by the init process directly launching the daemon. In addition, a daemon launched by forking and exiting typically must perform other operations, such as dissociating the process from any controlling terminal (tty). Such procedures are often implemented in various convenience routines such as daemon(3) in Unix.
Systems often start daemons at boot time that will respond to network requests, hardware activity, or other programs by performing some task. Daemons such as cron may also perform defined tasks at scheduled times.