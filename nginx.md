---
date: 2023-03-21
tags:
  - inbox
  - network
external:
  - https://nginx.org/
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 250
---

# Nginx

Example of nginx configuration file:

```nginx
server {
    listen 80;
    server_name example.com;
    root /path/to/quartz/public;
    index index.html;
    error_page 404 /404.html;

    location / {
        try_files $uri $uri.html $uri/ =404;
    }
}
```
