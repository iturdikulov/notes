# TODO

Here I collect various inbox directories and services, which I need to check
regularly. Main goal is get rid of entropy and [[GTD|getting things done]].

Algorithm of daily review and daily plan generator:

Tasks processing:

- Check your mood and energy level, think about 3 MIT's (most important tasks),
add MIT's to [[#Today]] task list.
- Check generated task list, ask yourself what you can do today and re-schedule
items if needed, I use `tm <numbers> wait:+days` custom [[Taskwarrior]] command.
- Go through today tasks list, and schedule them too: `tm <number> wait:+hours`.

In next sections I have
[auto-generated](https://github.com/echo-bravo-yahoo/ego-rock) reports of my
tasks.

## Today

```task-table
command: task status:pending -BLOCKED -WAITING +ACTIVE or +OVERDUE or due:today or scheduled:today or pri:H list
```

## Learn

```task-table
command: task project:learn list
```

## IRL

```task-table
command: task project:IRL list
```

## [[OS]] and [[PDE]]

```task-table
command: task project:sys list
```


## Collect tasks and sync

Best method is adding task ASAP into Taskwarrior. But sometimes I need to
collect and sync inboxes. Here is list of inboxes:

- [[web_browser|Browser]] bookmarks and tabs (mobile/desktop), including reading
list.
