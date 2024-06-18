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

## Features

- plain text format (avoid proprietary formats)
- cross-platform
- [[open-source]]
- [[command-line_interface_CLI]]
- many extensions and integrations, like Taskwarrior Server and Taskwarrior TUI
- integrations, most popular Timewarrior and Taskserver, TODO: add note/use it

## Quickstart

NEXT: convert into flashcards

You can run `task diagnostics` to check if everything is set up correctly.

Add task, need to finish tomorrow, which recurs each 10 days:
`task add test_description due:tomorrow recur:10d`

Update a task's priority:
`task task_id modify priority:H|M|L`

Complete or delete a task:
`task task_id done`, `task task_id delete`

List open tasks due before the end of the week with tag `next`:
`task list due.before:eow +next`

List all reports: `task reports`

List all projects: `task projects`

Some general notes available in Babej taskwarrior tutorial [^2].

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
- [ ] [poor man's recurrence Discussion #2846 · GitHub](https://github.com/GothenburgBitFactory/taskwarrior/discussions/2846)
- [ ] [Taskwarrior - 30-Second Tutorial](https://taskwarrior.org/docs/30second.html)
- [ ] [Taskwarrior - Usage Examples](https://taskwarrior.org/docs/examples/)
- [ ] [Taskwarrior - Best Practices](https://taskwarrior.org/docs/best-practices/)

[^1]: [Taskwarrior - Kunzelma Wiki](https://wiki.kunzelma.de/taskwarrior/)
[^2]: [[research/Babej-A_dive_into_taskwarrior_ecosystem]]
