---
title: Syd (2015) GTD with Taskwarrior
description:
tags:
- inbox
- research
created: 2023-07-14
---

A series where author show how to use taskwarrior to implement GTD.

## Intro

Before learning this course author recommended to check what GTD is. Here more
details about GTD system: http://hamberg.no/gtd

Taskwarrior is very efficient list manager.

Taskwarrior usage:
`task <filter> <command-name> <arguments>`

Task command by default run on all your tasks. So filter is used to select
specific tasks.

Command name can be `next`, `add`, `done`, `list`, etc.

Argument is used to pass additional arguments to command. For `add` command it
is task description, `task add <description>` will add new task with given
description.

When you add any new task you can also specify project and tags.

`task add Read chapter 1 of GTD pro:Inbox +read +@home`

Running `task` itself is equivalent to `task next`. It's shows most important of
your tasks, based on pre-configured filter.

Each task had own ID. You can use it to refer to specific task. For example to
mark task as done, you can use `task done <ID>`.

You can specify multiple IDs, separated by comma or a contiguous range of IDs:
`task 1,3,5 done` or `task 1-5 done`.

## Collection

Collection is a capture process. Where you can save all your incoming tasks,
this allows free your mind from remembering all this tasks.
