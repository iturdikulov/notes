---
created: 2023-06-25T00:00+03:00
tags:
  - blog
  - archive
external:
  - https://taskwarrior.org/
directory: ~/.task
sr-due: 2025-07-22
sr-interval: 3
sr-ease: 150
---

# Taskwarrior

Generally Taskwarrior is CLI To-Do list manager. I'm using small subset of its task managing features, mainly to not lose some tasks and able to track what I need and will do. If I'll not do it, someone or something will do it for me (this is usually bad).

Some good introductin into Taskwarrior available in [[Babej-A_dive_into_taskwarrior_ecosystem|Babej taskwarrior tutorial]].

Features:

- plain text format (avoid proprietary formats)
- cross-platform
- [[open-source]]
- [[CLI]]
- many extensions and integrations, like Taskwarrior Server and Taskwarrior TUI
- integrations, most popular Timewarrior and Taskserver, TODO: add note/use it.

## Quickstart

Algorithm of daily review and daily plan generator:

- Check your mood and energy level, think about 3 MIT's (most important tasks). Don't overload, select N amount of tasks which you can REALLY do;
- Check generated task list (`t`), ask yourself what you can do today and re-schedule items if needed (with Eisenhower matrix), I use `tm <numbers>
  wait:+days` custom [[Taskwarrior]] command.
- Set task ETA (`tm <numbers> due:date`).
- Set priorities if needed (`tm <numbers> priority:H|M|L`).
- Pick task, work on it and complete it (`fin <numbers>`).
- Set project for task (`tm <numbers> project:project_name`).
- Review your tasks, anything can be changed;

You can execute ==`task diagnostics`== command to check if everything is set up correctly.

Add task, need to finish tomorrow, which recurs each 10 days:
<br class="f">
`task add test_description due:tomorrow recur:10d`.

Update a task's priority:
<br class="f">
`task task_id modify priority:H|M|L`.

Complete or delete a task:
<br class="f">
`task task_id done`, `task task_id delete`.

List open tasks due before the end of the week with tag `inbox`:
<br class="f">
`task list due.before:eow +inbox`.

List all reports:<wbr class="f"> `task reports`.

List all projects:<wbr class="f"> `task projects`.

Create blocked task (depends on)
<br class="f">
`... depends:id`. To list task which blocking everything use this command: `... +BLOCKING -BLOCKED`.

NixOS task service provide good command to generate script, which can be used to import required credentials [^1]:

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

## How do I use and make sense of recurrence

Great information about managing recurring tasks in taskwarrior from Stack Exchange [^2].

TODO: test.

```bash
task add recur:<duration> due:<first task due date> until:<delete first task by date> wait:<date when task will appear> "my task"

task add recur:daily \  # Create a new occurrence everyday
         due:9:00    \  # Required attribute for recurring task, eat breakfast at 9:00 AM
         until:12:00 \  # Automatically remove task by lunch time 12:00 PM
         wait:5:00   \  # Wait until 5:00 AM to show the task
         eat breakfast
```

Examples (we automatcally remove the tasks if they no more relevant, e.g. `until`):

```
task add recur:daily due:... until:... wait:... +next \
"Process INBOX tasks lists"

task add recur:daily due:... until:... wait:... +next \
"Complete today\'s workout routine."

task add recur:daily due:... until:... wait:... +next \
"Review and practice new English vocabulary words."

task add recur:daily due:... until:... wait:... +next \
"Engage in focused learning session for personal development."
```

Recurrence can also use `until` and `wait` attributes, if they exist. Recurrence does not use `scheduled`. And there is a `mask` attribute, that tracks which instance of the reoccurence the task is.

When a new recurring instance is created:

- `new task due` = `parent due` + `recur` \* `mask`
- identical math for both `until` and `wait`
- `scheduled` is copied wholesale from the parent task. In practice, this unexpected behaviour won't break your workflow, just affects filters and skews urgency. I call this out because it took me a very long time to discover this was not working as expected.

Every time `taskwarrior` runs, it checks to see if it's time to create the next occurrence. The psuedo-equation is:

```
now >= due + recur * (mask + 1)`
```

Note, there is a config value, `rc.recurrence.limit`, that can be used to tell taskwarrior to create even more occurrences further out.

You can expect the next occurrence to be created at the due date of the previous.

## External links

- [ ] `man task`
- [ ] [poor man's recurrence Discussion #2846 · GitHub](https://github.com/GothenburgBitFactory/taskwarrior/discussions/2846)
- [ ] [Taskwarrior - 30-Second Tutorial](https://taskwarrior.org/docs/30second.html)
- [ ] [Taskwarrior - Usage Examples](https://taskwarrior.org/docs/examples/)
- [ ] [Taskwarrior - Best Practices](https://taskwarrior.org/docs/best-practices/)
- [ ] [Reddit - Dive into anything](https://www.reddit.com/r/commandline/comments/ssyuzj/my_taskwarrior_workflow_the_captains_log/)

[^1]: [Taskwarrior - Kunzelma Wiki](https://wiki.kunzelma.de/taskwarrior/)

[^2]: [How to manage recurring tasks in taskwarrior? - Unix & Linux Stack Exchange](https://unix.stackexchange.com/a/636312)
