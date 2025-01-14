---
date: 2023-03-21T00:00+03:00
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

> nginx ("engine x") is an HTTP web server, reverse proxy, content cache, load
> balancer, TCP/UDP proxy server, and mail proxy server.\
> — <cite>[nginx](https://nginx.org/)</cite>

Example of basic nginx configuration file:

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

    # Proxy specific requests to the web application, more info:
    # https://docs.nginx.com/nginx/admin-guide/web-server/reverse-proxy/
    location /admin {
        proxy_set_header   Host $http_host;
        proxy_set_header   X-Forwarded-For $remote_addr;
        proxy_pass         "http://web.local:8080";
    }
}
```

Example of unprivileged nginx configuration file:

```nginx
# Don't use this on production server and even on test server
# run with `nginx -c /tmp/conf.conf -e stderr` command

pid        /tmp/nginx.pid;
events {
    worker_connections  4096;  # Default: 1024
}

http {
    client_body_temp_path /tmp/client_temp;
    proxy_temp_path       /tmp/proxy_temp_path;
    fastcgi_temp_path     /tmp/fastcgi_temp;
    uwsgi_temp_path       /tmp/uwsgi_temp;
    scgi_temp_path        /tmp/scgi_temp;
    access_log  off;

    server {
        listen 3000;

        error_page 404 = @defaultErrorPage;
        location @defaultErrorPage {
            return 301 https://$host/not-found;

        }
        location /apps {
            index  index.html index.htm;
        }
    }
}
```

To test/run nginx with custom config, we can use this command:
```sh
ngnix -t /path/to/config.conf
nginx -c /path/to/config.conf
```
