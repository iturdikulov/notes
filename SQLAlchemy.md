---
created: 2024-09-18T00:00+03:00
tags:
  - blog
  - now
  - DB
sr-due: 2025-07-27
sr-interval: 6
sr-ease: 249
---

# SQLAlchemy

The SQLAlchemy ORM provides an additional configuration layer allowing user-defined ==Python classes== to be mapped to database tables and other constructs, as well as an object persistence mechanism known as the Session. It then extends the Core-level SQL Expression Language to allow SQL queries to be composed and invoked in terms of user-defined objects. <!--SR:!2024-11-10,1,230-->

The start of any SQLAlchemy application is an object called the ==`Engine`==.

Creating in-memory database using SQLite:

```python
from sqlalchemy import create_engine
# engine not actually tried to connect to the database yet, lazy initialization
engine = create_engine("sqlite+pysqlite:///:memory:", echo=True)
                     # dialect DBAPI       in-memory-only-db_sqlite3-module
```

```python
from sqlalchemy import text

with engine.connect() as conn:  # auto-close connection opened resource
    result = conn.execute(text("select 'hello world'"))
    print(result.all())
```

```
BEGIN (implicit) # start of transaction
select 'hello world'
[...] ()
[('hello world',)] # Result
ROLLBACK # end of transaction, alternatively can be used COMMIT
```

Committing:

```python
with engine.connect() as conn:
    conn.execute(text("CREATE TABLE some_table (x int, y int)"))
    conn.execute(
        text("INSERT INTO some_table (x, y) VALUES (:x, :y)"),
        [{"x": 1, "y": 1}, {"x": 2, "y": 4}],
    )
    conn.commit()
```

```
BEGIN (implicit)
CREATE TABLE some_table (x int, y int)
[...] ()
<sqlalchemy.engine.cursor.CursorResult object at 0x...>
INSERT INTO some_table (x, y) VALUES (?, ?)
[...] [(1, 1), (2, 4)]
<sqlalchemy.engine.cursor.CursorResult object at 0x...>
COMMIT
```

How to use "begin once"?
<br class="f">
```python
with engine.begin() as conn:
    conn.execute(
        text("INSERT INTO some_table (x, y) VALUES (:x, :y)"),
        [{"x": 6, "y": 8}, {"x": 9, "y": 10}],
    )
```

fetching rows:

```python
with engine.connect() as conn:
    result = conn.execute(text("SELECT x, y FROM some_table"))
    for row in result:
        print(f"x: {row.x}  y: {row.y}")
```

SQLAlchemy `Result` has lots of methods for fetching and transforming rows, such as the ==Result.all()== method illustrated previously, which returns an iterable list of all Row objects.

The `Row` objects themselves are intended to act like Python ==named tuples==.

Mapping Access - To receive rows as Python mapping objects, which is essentially a read-only version of Python’s interface to the common ==dict object==, the Result may be transformed into a `MappingResult` object using the `Result.mappings()` modifier; this is a result object that yields dictionary-like `RowMapping` objects rather than Row objects:
```python
with engine.connect() as conn:
    result = conn.execute(text("select x, y from some_table"))

    for dict_row in result.mappings():
        print(dir(dict_row))
        x = dict_row["x"]
        y = dict_row["y"]
```

The `Connection.execute()` accepts parameters, which are known as ==bound parameters== (extremely recommended to use). A rudimentary example might be if we wanted to limit our `SELECT` statement only to rows that meet a certain criteria, such as rows where the “y” value were greater than a certain value that is passed into a function.
```python
with engine.connect() as conn:
    result = conn.execute(
      text("SELECT x, y FROM some_table WHERE y > :y"), {"y": 2}
    )
    for row in result:
        print(f"x: {row.x}  y: {row.y}")
```

Are we able to execute multiple statements in a single `execute()` call?
<br class="f">
Yes, this style of execution is known as execute many.
```python
# A key behavioral difference between “execute” and “executemany” is that the
# latter doesn’t support returning of result rows, even if the statement includes
# the RETURNING clause.
# The one exception to this is when using a Core insert().
with engine.connect() as conn:
    conn.execute(
        text("INSERT INTO some_table (x, y) VALUES (:x, :y)"),
        [{"x": 11, "y": 12}, {"x": 13, "y": 14}],
    )
    conn.commit()
```

The fundamental transactional / database interactive object when using the ORM is called the ==`Session`==. In modern SQLAlchemy, this object is used in a manner very similar to that of the `Connection`.

When the Session is used with non-ORM constructs, it passes through the SQL statements we give it and does not generally do things much differently from how the Connection does directly.
How to use Session:
<br class="f">
```python
from sqlalchemy.orm import Session

stmt = text("SELECT x, y FROM some_table WHERE y > :y ORDER BY x, y")
with Session(engine) as session:
    result = session.execute(stmt, {"y": 6})
    for row in result:
        print(f"x: {row.x}  y: {row.y}")

with Session(engine) as session:
    result = session.execute(
        text("UPDATE some_table SET y=:y WHERE x=:x"),
        [{"x": 9, "y": 11}, {"x": 13, "y": 15}],
    )
    session.commit()
```

Does the Session object hold onto the Connection object?
<br class="f">
The `Session` doesn’t actually hold onto the Connection object after it ends the transaction. It gets a new Connection from the Engine the next time it needs to execute SQL against the database.

The foundation for SQL queries in SQLAlchemy are Python objects that represent database concepts like tables and columns. These objects are known collectively as database ==metadata==.

The most common foundational objects for database metadata in SQLAlchemy are ==MetaData, Table, and Column==.

In SQLAlchemy, ==reflection== term refers to the feature of querying a database’s schema catalogs in order to load information about existing tables, columns, constraints, and other constructs.

==MetaData==, a collection of `Table` objects and their associated schema constructs.

MetaData is a thread-safe object for ==read== operations. Construction of new tables within a single MetaData object, either explicitly or via reflection, may not be completely thread-safe.

TODO: https://docs.sqlalchemy.org/en/20/orm/session_basics.html#id1
