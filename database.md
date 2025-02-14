---
date: 2023-09-21T00:00+03:00
tags:
  - blog
  - DB
sr-due: 2024-02-02
sr-interval: 5
sr-ease: 240
---

# Database

> In [[computing]], a database is an organized collection of data (also known
> as a data store) stored and accessed electronically through the use of a
> database management system. Small databases can be stored on a file system,
> while large databases are hosted on computer clusters or cloud storage. The
> design of databases spans formal techniques and practical considerations,
> including data modeling, efficient data representation and storage, query
> languages, security and privacy of sensitive data, and distributed computing
> issues, including supporting concurrent access and fault tolerance.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Database)</cite>

Database is a container (one or multiple files) which needed to store some
sorted data usually linked to each other.

Databases/DBMS which I use/used:

- [[PostgreSQL]]
- [[MySQL]]
- [[SQLite]]
- [[Redis]]

> [!NOTE]
> Follow-up information mostly added from Ben Forta's SQL book [^1].

A ==relational database== (RDB) is a database based on the relational model of
data.

Many relational database systems are equipped with the option of using
SQL (Structured Query Language) for querying and updating the database.

Structure and properties of a database and their tables are described in
==schema==.

## Database table

Table is a ==structured== data set of specific type. Data stored in a table
should be the same type (orders, customers, etc.), don't mix different types.

Database and table names should be unique.

Tables are consisted of columns, rows and cells, which store some information
fragments, usually with specific type (integer, string, etc.).

Columns like tables should contain only ==one type== of data (strict
requirement). Level of information fragmentation is defined by requirements of
the application.

Row is separate table ==record== (same thing).

## Basic RDBMS specific information

A database management system used to maintain relational databases is a
==relational database management system (RDBMS)==.

Data types and their names are main source of incompatibility between different
RDBMS.

Primary key is a column (or set of columns, composite primary key), whose values are unique and
used to ==identify each record in the table, to access them==.

Is primary keys are strictly required?
<br class="f">
They are not, but highly recommended. Even if today you don't need them, they can
be useful in the future.

Primary keys requirements?
<br class="f">
- Unique, two or more rows can't have the same primary key values.
- Primary key values can't be `NULL`.
- Primary key values usually can't be changed (not recommended).
- Primary key values usually can't be reused, if you removed record, their
primary key value can't be assigned to another record.\
That rules applying to composite primary keys too (unique by combination of
columns, not `NULL`, etc.).

## Database normalisation

Some information from [Simple English Wikipedia, the free encyclopedia](https://simple.wikipedia.org/wiki/Database_normalisation).

## Learning path

- [ ] [Database normalization - Wikipedia](https://en.m.wikipedia.org/wiki/Database_normalization )
- Silberschatz and Henry and Sudarshan - DB system concepts
- [[PostgreSQL]]
- [[MySQL]]
- [[SQLite]]
- [[SQL]], research note
- [Как хранить в БД древовидные структуры](https://github.com/codedokode/pasta/blob/master/db/trees.md)
- [Modified Preorder Tree Traversal](https://gist.github.com/tmilos/f2f999b5839e2d42d751)
- [ ] [Interactive tutorial on SQL | SQL-tutorial.ru search](http://www.sql-tutorial.ru/en/content.html)
- [ ] [SQL exercises](https://sql-ex.ru/)
- [ ] [Try Redis](https://try.redis.io/)
- [ ] [What Is NoSQL? NoSQL Databases Explained | MongoDB](https://www.mongodb.com/nosql-explained)
- [ ] [What Is a Database | Oracle](https://www.oracle.com/database/what-is-database/)
- [ ] [What Are Databases? Definition, Usage, Examples and Types](https://www.prisma.io/dataguide/intro/what-are-databases)
- [ ] [How do NoSQL databases work? Simply Explained! - YouTube](https://www.youtube.com/watch?v=0buKQHokLK8)
- [ ] [Мигрируем БД в продакшене без даунтайма / Habr](https://habr.com/en/articles/664028/)
- [ ] [SQL vs NoSQL Explained - YouTube](https://www.youtube.com/watch?v=ruz-vK8IesE)
- [ ] [GitHub - mikeym88/key-value-database-python-interface: A Key-Value database interface for python using SQLAlchemy.](https://github.com/mikeym88/key-value-database-python-interface)

### Raw SQL

- [ ] [The SQL Murder Mystery: Detailed Walkthrough](https://mystery.knightlab.com/walkthrough.html)
- [ ] [Select Star](https://selectstarsql.com/)
- [ ] [The SQL Murder Mystery](https://mystery.knightlab.com/)
- [ ] [SQL Squid Game](https://datalemur.com/sql-game)
- [ ] [Интерактивный курс по SQL](https://sql-academy.org/)
- [ ] [Практическое владение языком SQL](https://sql-ex.ru/)
- [ ] [smarteist - SQL cheat sheet](https://gist.github.com/smarteist/dc19be1101c0041e5963eba3772c3f67)
- [/] [[Forta_-_SQL_za_10_minut]]
- [ ] Iliev - Introduction to SQL
- [ ] [Оптимизация SQL запросов / Хабр](https://habr.com/ru/articles/861604/)

### RDBMS

- [ ] [SQLite: How it works, by Richard Hipp - YouTube](https://www.youtube.com/watch?v=ZSKLA81tBis)
- [/] [PostgreSQL Tutorial](https://neon.tech/postgresql/tutorial).
- Morgunov - PostgreSQL osnovy iazyka SQL
- [ ] [Learn PostgreSQL Tutorial - Full Course for Beginners - YouTube](https://www.youtube.com/watch?v=qw--VYLpxG4)
- [ ] [PostgreSQL Exercises](https://pgexercises.com/gettingstarted.html)
- [ ] [Postgres: The Graph Database You Didn't Know You Had](https://www.dylanpaulus.com/posts/postgres-is-a-graph-database/)
- [ ] [PostgreSQL Tutorial – Comprehensive Postgresql Tutorial](https://www.postgresqltutorial.com/)
- [ ] [Postgres: The Graph Database You Didn't Know You Had](https://www.dylanpaulus.com/posts/postgres-is-a-graph-database/)
- [ ] [Неочевидные для начинающих тонкости Postgres / Хабр](https://habr.com/ru/companies/ruvds/articles/859422/)
- [ ] [Don't Do This - PostgreSQL wiki](https://wiki.postgresql.org/wiki/Don%27t_Do_This)
- [ ] [What I Wish Someone Told Me About Postgres | ChallahScript](https://challahscript.com/what_i_wish_someone_told_me_about_postgres)
- [ ] [Безумные и забавные факты о SQLite / Хабр](https://habr.com/ru/companies/ruvds/articles/873816/)

### ORM

- [ ] [What's New in SQLAlchemy 2.0? - miguelgrinberg.com](https://blog.miguelgrinberg.com/post/what-s-new-in-sqlalchemy-2-0)
- [ ] [Асинхронный SQLAlchemy 2: простой пошаговый гайд по настройке, моделям, связям и миграциям с использованием Alembic / Хабр](https://habr.com/ru/companies/amvera/articles/849836/)
- [ ] [SQLModel](https://sqlmodel.tiangolo.com/learn/)
- [ ] [python - SQLAlchemy proper session handling in multi-thread applications - Stack Overflow](https://stackoverflow.com/questions/9619789/sqlalchemy-proper-session-handling-in-multi-thread-applications)
- [ ] [Using Python SQLAlchemy session in multithreading](https://copdips.com/2019/05/using-python-sqlalchemy-session-in-multithreading.html#way-2-using-scoped_session-to-create-a-thread-local-variable)
- [ ] [You can use Pydantic in SQLAlchemy fields - Roman Imankulov](https://roman.pt/posts/pydantic-in-sqlalchemy-fields/)

[^1]: [SQL in 10 Minutes a Day](https://www.amazon.com/gp/product/0135182794/)
