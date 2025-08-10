---
date: <% tp.date.now("yyyy-MM-DD HH:mm") %>
tags:
  - fleeting
---

# <% tp.date.now("dddd Do MMMM YYYY HH:mm:ss") %>

- [[Index]]
- [[../TODO|TODO]]
- [Starred Articles](http://rss.home.arpa/starred)
- [[<% tp.date.now("yyyy-MM-DD", -1) %>|Yesterday]]

## Weapon

## Head

## Full-body

## Ends

## Jewelry

## Tasks

```tasks
# Only tasks that are not done, that is, which begin like this (but without the quotes):
#   '- [ ] ' or
#   '* [ ] ' or
#   '1. [ ] '
# Indented tasks are supported, but only single-line tasks.
not done

# Tasks due today or earlier:
due before tomorrow

# Restrict to at most 100 tasks.
# If you ask Tasks to display many hundreds or thousands of tasks,
# Obsidian's editing performance really slows down.
limit 100

# Group and sort the output:
group by filename
sort by due reverse
sort by description
```