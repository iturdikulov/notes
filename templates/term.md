---
date: <% tp.date.now("yyyy-MM-DD HH:mm") %>
tags:
  - inbox
  - term
---
<%*
let title = tp.file.title
if (title.startsWith("Untitled")) {
  title = await tp.system.prompt("Note Header");
}
-%>
# <% title %>
