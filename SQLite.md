---
created: 2023-09-21T00:00+03:00
tags:
  - blog
  - WEAPON
external:
  - https://www.sqlite.org/
sr-due: 2025-07-22
sr-interval: 4
sr-ease: 270
---

# SQLite

> SQLite (/ˌɛsˌkjuːˌɛlˈaɪt/, /ˈsiːkwəˌlaɪt/) is a database engine written in the C programming language. It is not a standalone app; rather, it is a library that software developers embed in their apps. As such, it belongs to the family of embedded databases. It is the most widely deployed database engine, as it is used by several of the top web browsers, operating systems, mobile phones, and other embedded systems.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/SQLite)</cite>

Is there strict typing in SQLite?
<br class="f">
SQLite has a loose type system, you can store any type of data in any field, regardless of how you defined it. Remember: just because you can do something, doesn't mean you should! <!--SR:!2025-08-06,5,250-->

How import data from SQL, which is main command at least?
<br class="f">
```bash
sqlite3 ./my_db.sqlite
.read ./backup.sql  # CORE command
.exit
```

How to dump data from SQLite to SQL, which is main command at least?
<br class="f">
```bash
sqlite3 ./my_db.sqlite
.mode csv     # set mode, optional
.out dump.csv # main command

# or as alternative use cli export
sqlite3 my_db.sqlite .dump >dump.sql # main command
sqlite3 my_db.sqlite .schema >schema.sql
```
