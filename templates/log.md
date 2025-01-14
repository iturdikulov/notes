---
date: <% tp.date.now("yyyy-MM-DD HH:mm") %>
tags:
  - blog
  - log
---
<%*
let title = tp.file.title
if (title.startsWith("Untitled")) {
  title = await tp.system.prompt("Note Header");
}
-%>
# Log: <% title %>

## <% tp.date.now("yyyy-MM-DD HH:mm") %>

