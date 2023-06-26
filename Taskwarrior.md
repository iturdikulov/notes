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
2. List tasks::`task list`
3. Complete a task::`task <task number> done`

## Commands

- show all tasks::`task all`
- add task with tag::`task add +tag +tag2 <description>`
- remove tag from task::`task <task number> mod -tag`
- add task with project::`task add project:name.sub_project <description>`
- add task with priority::`task add pri:H <description>`. H, M, L are supported.
- annotate task::`task <task number> annotate <annotation>`

TODO: default project, like inbox

## Attributes

You can use some specific task attributes, such as:
- tags
- project
- priority
- annotations
- dates (due date, until date, schedule date, etc.)
