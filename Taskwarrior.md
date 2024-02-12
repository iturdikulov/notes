---
date: 2023-06-25
tags:
  - inbox
  - SR_productivity
directory: ~/.task
sr-due: 2024-01-31
sr-interval: 3
sr-ease: 150
---

# Taskwarrior

> Taskwarrior is Free and Open Source Software that manages your TODO list from
> the command line. It is flexible, fast, and unobtrusive. It does its job then
> gets out of your way.\
> — <cite>[Taskwarrior](https://taskwarrior.org/)</cite>

Generally Taskwarrior is CLI To-Do list manager.

Features:
- plain text format (avoid proprietary formats)
- cross-platform
- [[Open-source]]
- [[Command-line_interface_CLI]]
- many extensions and integrations, like Taskwarrior Server and Taskwarrior TUI
- integrations, most popular Timewarrior and Taskserver, TODO: add note/use it

Some general notes available in @DiveIntoTaskwarriorTomasBabej.

NixOS task service provide good command to generate script, which can be used to
import required credentials [^1]:

```
nixos-taskserver user export organization user > user_config.sh
# import this somewhere
sh user_config.sh

# adjust server settings
taskd.server=your-server.com:53589

# initialize sync and sync
task init sync
task sync
```

## References

- [ ] `man task`
- [ ] [[research/Babej-A_dive_into_taskwarrior_ecosystem]]
- [x] [[research/Syd-GTD_with_taskwarrior]]
- [ ] [poor man's recurrence Discussion #2846 · GitHub](https://github.com/GothenburgBitFactory/taskwarrior/discussions/2846)
- [ ] [Taskwarrior - 30-Second Tutorial](https://taskwarrior.org/docs/30second.html)
- [ ] [Taskwarrior - Usage Examples](https://taskwarrior.org/docs/examples/)
- [ ] [Taskwarrior - Best Practices](https://taskwarrior.org/docs/best-practices/)

[^1]: [Taskwarrior - Kunzelma Wiki](https://wiki.kunzelma.de/taskwarrior/)

