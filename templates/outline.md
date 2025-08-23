<%*
let title = tp.file.title
if (title.startsWith("Untitled")) {
  title = await tp.system.prompt("Note Header");
  const modTitle = title.replace(/ /g, "-").toLowerCase()
  await tp.file.rename(modTitle);
}
-%>
---
date: <% tp.date.now("yyyy-MM-DD HH:mm") %>
tags:
  - blog
  - outline
---

# <% title %>

