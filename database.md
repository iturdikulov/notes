---
date: 2023-09-21
tags:
  - inbox
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
&#10;<br>
They are not, but highly recommended. Even if today you don't need them, they can
be useful in the future.

Primary keys requirements?
&#10;<br>
- Unique, two or more rows can't have the same primary key values.
- Primary key values can't be `NULL`.
- Primary key values usually can't be changed (not recommended).
- Primary key values usually can't be reused, if you removed record, their
primary key value can't be assigned to another record.\
That rules applying to composite primary keys too (unique by combination of
columns, not `NULL`, etc.).

## External links

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

[^1]: [SQL in 10 Minutes a Day](https://www.amazon.com/gp/product/0135182794/)
