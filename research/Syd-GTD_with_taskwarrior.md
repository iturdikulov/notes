---
created: 2023-07-14
sr-due: 2023-09-25
sr-interval: 1
sr-ease: 230
external:
  - https://cs-syd.eu/posts/2015-06-14-gtd-with-taskwarrior-part-1-intro
  - https://cs-syd.eu/posts/2015-06-21-gtd-with-taskwarrior-part-2-collection
  - https://cs-syd.eu/posts/2015-06-28-gtd-with-taskwarrior-part-3-tickling
  - https://cs-syd.eu/posts/2015-07-05-gtd-with-taskwarrior-part-4-processing
  - https://cs-syd.eu/posts/2015-07-12-gtd-with-taskwarrior-part-5-doing
tags:
  - inbox
  - research
  - productivity
---

A series where author show how to use taskwarrior to implement GTD. This series
requires some knowledge of [[Getting_things_done_GTD|GTD]].

# Part 1: Intro

[[Taskwarrior]] is very efficient list manager.

Taskwarrior usage:
`task <filter> <command-name> <arguments>`

Task command by default run on all your tasks. So filter is used to select
specific tasks.

Command name can be `next`, `add`, `done`, `list`, etc.

Argument is used to pass additional arguments to command. For `add` command it
is task description, `task add <description>` will add new task with given
description. It's one of the most basic command.

When you add any new task you can also specify project and tags. We use project
because we usually split big tasks into projects of tasks. Also, you can specify
tags by adding `+<tag>` to task description.

`task add Read chapter 1 of GTD pro:read.gtd +read +@home`

Running `task` itself is equivalent to `task next`. It's shows most important of
your tasks, based on pre-configured filter (priority sorting).

Each task had own ID. You can use it to refer to specific task. For example to
mark task as done, you can use `task done <ID>`.

You can specify multiple IDs, separated by comma or a contiguous range of IDs:
`task 1,3,5 done` or `task 1-5 done`.

NOTE: I have alias `t=task` to make it shorter, so I can run commands by `t
...`.

# Part 2: Collection

Collection is a capture process. Where you can save all your incoming tasks,
this allows free your mind from remembering all this tasks. Items in inbox can
be represented as tasks which needs to be processed.

Usual GTD's collection requirements:

- The inbox is where you capture ideas and tasks as they occur to you.
- The transaction cost of putting something in your inbox should be as low as possible.
- If your inbox is not at zero, it has to be immediately visible.
- You should need as few inboxes as possible (1-3).
- You are able periodically review your inboxes (weekly/monthly).

I use default project, "Inbox" (instead aliasing `in` tag like in original article). So
any new task will be added to "Inbox" project.

My `task add` command aliased to `ta`.

## Urgency

To add urgency to a `inbox` task, we modify its urgency coefficient. You can do
this by putting the following line in your `~/.taskrc` file:

`urgency.user.tag.inbox.coefficient=15.0`

But usually it's can be useful with different tags (not inbox).

## Inbox in terminal's prompt

Inbox in terminal's prompt, skipped. I think it's generate a lot of clutter.

## Report

Custom report can be configured through `~/.taskrc` file.

For example.

```sh
report.in.columns           = id,description
report.in.description       = Inbox
report.in.filter            = status:pending limit:page (project:Inbox)
report.in.labels            = ID,Description
```

To see this report, just type `ti` (my alias to `task in`). You can use this ad
mental habit to quickly check your inbox.

# Part 3: Tickling

This chapter explaining how to use
[[Getting_things_done_GTD#Tickler file|tickler file]] with Taskwarrior.

Adding `wait:` metadata to a task ensures that the task won't be visible until
the date that you set this metadata to. For example, when you enter the
following command, the task doesn't show up until the following Sunday:

`tat monday Remind mind, did I completed Syd-GTD note?`

This task use special `tat` function, to easily add tickle items.
```sh
tat () {
    local deadline=$1; shift
    task add +tickle wait:$deadline $@
}
```

This way the task will only show up in your inbox the following Monday. Of
course, you can also use full dates like `2023-09-24`.

To review this task use this command: `t +tickle all`

## Thinking it over

> Personally, I often encounter a situation where I need to think something over
> and decide what to do with it later. This really doesn't have to end up on a
> task list because then there's the possibility that I'll see it before I'm ready
> to think about it. For precisely that situation, I made the `think` alias:

> It is important that you don't ever `think` something over twice. You don't
> want to create a snooze button! A good practical tip is to make sure that
> every `think` item is a simple yes/no question.

I think it's useful, so I have this alias too.

    alias think='tat +1d'

# Part 4: Processing

You usually process items following
[[Getting_things_done_GTD#Processing|GTD processing]] workflow.

Processing requirements:

- Processing your inbox should be very easy to start with.
- Processing is about making decisions, not about starting or finishing tasks.

To start processing your inbox, type `ti` (alias to `task inbox`).
You should now see your inbox items if you've followed this series up to this
point. For every task you see there, go over the following questionnaire.

1. Item is actionable?
  - It's not: Decide whether to keep note of it in your
  [[Telekasten.nvim|reference system]], whether you want `think` it over of just
  delete it. (Remember, when using `think`, you should enter a simple yes/no
  question.) Then check off the task.
  - It is: go on.
2. Is there more than one action required?
  - Yes: Start up a new project with first task (at least one have `+next` tag).
    `ta +next pro:new.project "Set up a new git repository for the fancy new project"`
    Add as many tasks as you can possibly think of for this project. Then check off the task.
  - No: Decide what action the `+inbox` task represents and just create it with
    `+next` tag. `ta +next "Call Jamie to schedule a meeting."`
3. How long the action is going to take?
  - It will take no longer than _two minutes_: _Do it right now_. Then check off the task `t 1 done`.
  - It will take longer than two minutes: Estimate how long it would take to complete the action and go on.
4. Are you going to delegate the task?
  - Yes: Modify the task to be a `waiting` task and annotate it with
    instructions on how to check whether the task is done yet. Then _delegate the
    task_. Let's say the task has ID `n`.

    task n modify project:wait
    task n annotate "Check: Call Dave and ask about the car tires." due:+1w wait:+1d

  - No: Go on.
5. Defer the task

    task n done
    task pro:gtd add Call Jamie to schedule a meeting.

Make sure the action is really an _action_ when you use `+next` tag. It must be
something that you can start doing immediately without thinking about "how?",
"where?" or "why?" thanks to the thought you put into it at this moment.

When you get into the habit of asking yourself all these questions, there should
come a point where you don't need the flowchart anymore.

## Contexts

Later, when you finally get around to _doing_, it will be **very important** for
your mental health to keep in mind the _context_ in which you are working.
Luckily, Taskwarrior makes it very easy to allow you to use your context to your
advantage. For now, all you need to remember is to always add at least one
context tag to a tag. Common context tags are `+@office`, `+@phone`,
`+@computer`, `@shop`, ... Check more contexts variants in
[[Getting_things_done_GTD#Contexts|GTD contexts]].

## Research

Often the very next task for a project is just a lot of 'looking into
something'. For that reason, here is the `rnd` alias:

    # rnd - Research and development
    alias rnd='ta +rnd +@computer'

    # Usage
    rnd +next read first parst of XXX
    rnd check xxx book
    t +rnd

## Read and review

Reading something later, when you know very well what it is you want to read is
called 'read and review'. Ideally, you know exactly what you need to do, which
drawer you need to open, which file to open, which link to point your browser
to. Taskwarrior allows you to keep this info in annotation with `task
annotate`.

Usually read and review happens on the internet. Enter the `rnr` alias:

To grab web page title I use complex
[[external/url2text|url2text]] script, which utilize
[[Brave|brave]] browser (to support dynamic rendered web-pages, and avoid some
false-positive web-sites protection issues).

And here `rnr` function:

```sh
# Usage: rnr <url>
rnr (){
    local text=$(url2text text "$1")
    local descr="\"Read and review: $text\""
    local id=$(task add +next +rnr "$descr" | sed -n 's/Created task \(.*\)./\1/p')
    task $id|grep Description
}
```

# Part 5: Doing

## Context

> The most important step in choosing what task to work on is to realize that
> there are tasks you don't even need to consider. If you're on an airplane, and
> you have some time to work, there's absolutely no way that you're going to be
> able to water your office plants. Ideally, tasks that lie out of your current
> context should not even present themselves in the range of opportunities.

You can merge contexts into big one, or use custom parameters, example (need
place into `~/.taskrc`):

    context.work=+@computer or +@phone or +@online
    context.home=+@home -@online

To enable contexts filtering (show only context-specific tasks), use `context`
command:

    task context home # At home
    task context work # At work

## Brain power

Currently, I don't use this feature, but it's interesting.

Here's another example. You've just done an exam and your brain feels like its
toast. There's no use in seeing a task like `Write a review of Marc's paper on
monoids in the category of endofunctors` (wink). A task like `Water the office
plants` would ideally present itself at the top of your task list.

You can use Taskwarrior's used defined attributes (UDA) to accomplish this.

Start by defining a UDA for brainpower:

```sh
uda.brainpower.type=string
uda.brainpower.label=Brainpower
uda.brainpower.values=H,M,L
uda.brainpower.default=M  # recommended to set defualt, to not forget to add it
```

You can then add the `brainpower` consideration to your next report:

```sh
report.next.description     = Most urgent tasks
report.next.columns         = id, start.age, entry.age, urgency, depends, priority, project,tags, recur, scheduled.countdown, due.remaining, until.remaining, description, brainpower
report.next.filter          = status:pending and +next
report.next.labels          = ID,Active,Age,Urgency,Deps,P,Project,Tag,Recur,S,Due,Until,Description,Brainpower
report.next.sort            = brainpower-,priority-,urgency-
```

This will sort the tasks on your list in a decreasing order by brainpower first.

## Estimate

Estimate useful to soft limit time on given task.

Similar to the way we define the `brainpower` UDA, you can also define a UDA for
the time estimated to complete the task:

```sh
uda.estimate.type=numeric
uda.estimate.label=Estimate
```

## Using your UDA's

To create a new task or list them, you now specify a custom UDA:

    ta es:5 "Call Jamie and ask him why my office plants were dead after my holiday weekend."
    task next estimate:5

The next report should now show you a significantly smaller amount of tasks to
choose from. Even better, you are sure that you only see tasks that you can
actually make progress on within the next ten minutes.
