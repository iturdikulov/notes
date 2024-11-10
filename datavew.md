---
date: 2024-11-10
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 265
---
# Dataview - [[Obsidian]] query engine

> Dataview is a live index and query engine over your personal knowledge base.
> You can add metadata to your notes and query them with the Dataview Query
> Language to list, filter, sort or group your data. Dataview keeps your queries
> always up to date and makes data aggregation a breeze.\
> — <cite>[Dataview](https://blacksmithgu.github.io/obsidian-dataview/)</cite>

I use dataview mainly to maintenance my [[Zettelkasten]] system. Below some
useful queries which help me with that.

## No tags or small files?

```dataview
list where length(file.tags) = 0 or file.size < 512
sort file.name asc
```

## No Inbox tag

```dataview
list where !contains(file.tags, "inbox")
sort file.name asc
```

## Tags List

```dataview
LIST WITHOUT ID tags
SORT file.tags
FLATTEN tags
GROUP BY tags
```

## Directory properties

```dataview
TABLE file.frontmatter.directory
Where file.frontmatter.directory
```
