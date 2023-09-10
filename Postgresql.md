---
date: 2023-04-03
sr-due: 2023-05-21
sr-ease: 270
sr-interval: 4
tags:
- inbox
- software
---

# PostgreSQL

[PostgreSQL: The world's most advanced open source database](https://www.postgresql.org/),
contains documentation, downloads, support, development, and community
information.

## Quickstart

1. Install postgresql package
2. Create DB and user with

```sh
sudo -iu postgres
psql
CREATE USER teamname WITH ENCRYPTED PASSWORD 'password';
CREATE DATABASE yourdb OWNER teamname;
```

## TODO

- [ ] https://www.dylanpaulus.com/posts/postgres-is-a-graph-database/
