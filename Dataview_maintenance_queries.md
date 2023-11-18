---
date: 2023-09-22
tags:
  - inbox
sr-due: 2023-10-07
sr-interval: 4
sr-ease: 270
---

# No tags or empty files?

```dataview
list where length(file.tags) = 0

sort file.name asc
```

# Incorrect tags

```dataview
list where length(file.tags) = 2 and contains(file.tags, "research") and contains(file.tags, "inbox")

sort file.name asc
```

# Research directory but no reseach tag

```dataview
list where contains(file.path, "research") and !contains(file.tags, "research")

sort file.name asc
```