---
date: 2023-06-25
tags:
  - inbox
  - research
  - dev-tip
---

# Taskwarrior

> Taskwarrior is Free and Open Source Software that manages your TODO list from
> the command line. It is flexible, fast, and unobtrusive. It does its job then
> gets out of your way.\
> —&thinsp;<cite>[Taskwarrior](https://taskwarrior.org/)</cite>

Generally Taskwarrior is CLI To-Do list manager.

Features:
- plain text format (avoid proprietary formats)
- cross-platform
- [[open-source]]
- [[command-line interface]], TUI with vit
- integrations, most popular Timewarrior and Taskserver, TODO: add note/use it

## Typical Workflow

1. Add a simple task::`task add <description separated by spaces>`
   Creating a task with due dates, recurrences, and tags
   `task add Mow the lawn project:Lawnwork due:tomorrow recur:biweekly +home`
3. List tasks::`task list`
4. Complete a task::`task <task number> done`
