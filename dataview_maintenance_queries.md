---
date: 2023-09-22
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 265
---
# No tags or empty files?

```dataview
list where length(file.tags) = 0

sort file.name asc
```

# No Inbox tag

```dataview
list where !contains(file.tags, "inbox")

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

# Tags List

```dataview
LIST WITHOUT ID tags
SORT file.tags
FLATTEN tags
GROUP BY tags
```

# Directory properties

```dataview
TABLE file.frontmatter.directory
Where file.frontmatter.directory
```
