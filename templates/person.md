---
date: <% tp.date.now("yyyy-MM-DD HH:mm") %>
tags:
  - inbox
  - person
---
<%*
let title = tp.file.title
if (title.startsWith("Untitled")) {
  title = await tp.system.prompt("Note Header");
}
-%>
# Person: <% title %>

place_public_photo_or_2dd

| Field       | Details |
| ----------- | ------- |
| Born        |         |
| Other names |         |
| Education   |         |
| Occupations |         |
| Known for   |         |
| Awards      |         |
| Website     |         |
