---
created: 2023-04-03T00:00+03:00
tags:
  - blog
  - work-tool
external:
  - https://www.postgresql.org/
sr-due: 2025-07-22
sr-interval: 3
sr-ease: 252
---

# PostgreSQL

PostgreSQL: The world's most advanced open source database

## Quickstart

1. Install postgresql package
2. Create DB and user with

```sh
sudo -iu postgres
psql
CREATE USER teamname WITH ENCRYPTED PASSWORD 'password';
CREATE DATABASE yourdb OWNER teamname;
```
