---
date: 2023-09-22
tags:
  - inbox
sr-due: 2023-10-07
sr-interval: 4
sr-ease: 270
---

# No tags

```dataview
list where length(file.tags) = 2 and contains(file.tags, "research") and contains(file.tags, "inbox")

sort file.name asc
```
