---
author: Tomas Babej
date: 2020
external:
  - https://www.youtube.com/watch?v=tijnc65soEI
tags:
  - inbox
  - productivity
sr-due: 2025-06-04
sr-interval: 496
sr-ease: 248
---

#  A Dive into Taskwarrior Ecosystem

## Typical Workflow

1. Add a simple task::`task add <description separated by spaces>`
   Creating a task with due dates, recurrences, and tags
   `task add Mow the lawn project:Lawnwork due:tomorrow recur:biweekly +home`
2. List tasks::`task list`
3. Complete a task::`task <task number> done`

## Commands

- show all tasks::`task all`
- add task with tag::`task add +tag +tag2 <description>` <!--SR:!2024-09-22,1,228-->
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

## Dates

- `due date` specify the exact date by which a task must be completed.
- `scheduled date` represents the earliest opportunity to work on task
- `wait date` represent the earliest opportunity the task should show up on the
task list
- `until date` represent a date after which the task self-destructs.

Relative dates to specify:
```sh
task ... due:now
task ... due:today
task ... due:yesterday
task ... due:tomorrow
task ... due:friday

task ... due:23rd
task ... due:3wks # now +3 weeks
task ... due:1day
task ... due:9hrs

# Start of next (work) week (Monday), calendar week (Sunday or Monday), month\
# quarter and year.
task ... due:sow
task ... due:eow
task ... due:socw
task ... due:som
task ... due:soq
task ... due:soy

# Predictable holidays
task ... due:goodfriday
task ... due:easter

# Date arithmetic
task ... wait:due-3d
task ... due:today+3d
task ... due:sow+2d
```

## Modify tasks

List of modification commands:
- `task edit`
- `task annotate`
- `task undo`
- `task purge <ID> or <UUID>`

## Urgency

Taskwarrior has a next report, which is sorted by decreasing urgency.

Urgency is a numeric score, Taskwarrior use a weighted linear expression to
calculate urgency, which can be tweaked by user.

```sh
urgency.user.tag.next.coefficient    15.0 # +next tag
urgency.due.coefficient              12.0 # overdue or near due date
urgency.uda.priority.H.coefficient   6.0 # high Priority
urgency.uda.priority.M.coefficient   3.9 # medium Priority
urgency.udа.priority.L.coefficient   1.8 # low Priority, negative?
urgency.scheduled.coefficient        5.0 # scheduled tasks
urgency.active.coefficient           4.0 # already started tasks
urgency.age.coefficient              2.0 # coefficient for age
urgency.annotations.coefficient      1.0 # has annotations
urgency.tags.coefficient             1.0 # has tags
urgency.project.coefficient          1.0 # assigned to any project
urgency.waiting.coefficient         -3.0 # waiting task
urgency.blocked.coefficient         -5.0 # blocked by other tasks
```

## Filters and reports

Taskwarrior has a set of pre-defined reports:
- `task next` (default)
- `task completed` ...

These can be further narrowed down using filters:
`$ task <FILTER> <REPORT | COMMAND>`

```sh
task project:Home
task project:Work completed
```

### Filters - attribute modifiers

Attribute modifiers improve filters
```sh
task due.before:eom priority.not:L list
```

Supported attribute modifiers are 1

```sh
before (synonyms under, below)
after (synonyms over, above)
none
any
is (synonym equals)
isnt (synonym not)
has (synonym contains)
hasnt
startswith (synonym left)
endswith (synonym right)
word
noword
```

### Filter - expressions

You can use the following operators in filter expressions

```sh
and or xor ! # logical operators
< <= = == != !== >= > # relational operators
( ) # precedence
```

The `=` operator is not strict equality (approximate equality), sort of
 ranges, to use strict equality, use `==`

For example:
```sh
task due.before:eom priority.not:L list
task '( due < eom or priorioty != L)' list
task '! ( project:Home or project:Garden )' list
```

## Reports

Each report has a default filter

```sh
task show report.list.filter
status:pending
```

Hence, a query like this:

```sh
task project:Home list
```

is actually `task status:pending project:Home list`. This can cause problems!

## Configuration

Configuration resides in the `~/.taskrc` file

It gets auto-generated the first time you run the task command

Pretty useful settings are:

- color schemes
- dateformat
- holidays
- turning certain features on and off

## Taskwarrior under the hood

is all about plaintext (generally JSON file) - look into the ~/.task/
- completed.data
- pending.data
- backlog.data
- undo.data

## Garbage collection

When a task is marked as deleted, it gets a new status, and an end attribute.
The task is written back into the `pending.data` file, but it doesn't belong
there - it belongs in the `completed.data` file.

Garbage Collection ([[garbage_collection|garbage collection]]) is operation
automatically run by Taskwarrior to move tasks into the correct files.

When moving tasks between the files, ID numbers are affected, because they are
simply line numbers in the `pending.data` file.

## Intermediate topics

— Custom reports
  This configurable in settings file.
— Recurrence (and specifying frequencies)
  ```sh
  task add Throw out the trash due:eow recur:weekly
  ```
- Timetracking
- Virtual tags
  `task +TODAY`, `task +LATEST`, check more in `man task`

## Taskserver

Docker images available. Main command is `task sync`.

## Context

You can switch between context using this command:
`task @ <context>`

## UDA (user defined attributes)

## DOM (useful for queries)

## Hooks (run on added, modified, deleted tasks)

Basically its executable scripts.

## Python integration

Wrapper for Taskwarrior.

```python
import tasklib
tw = tasklib.TaskWarrior()
tw.tasks.all()
```
