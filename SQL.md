---
created: 2024-09-10T00:00+03:00
tags:
  - blog
  - work-tool
sr-due: 2025-07-18
sr-interval: 10
sr-ease: 257
---

# Structured Query Language (SQL)

> Structured Query Language (SQL) is a domain-specific language used to manage data, especially in a relational database management system (RDBMS). It is particularly useful in handling structured data, i.e., data incorporating relations among entities and variables.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/SQL)</cite> <!--SR:!2024-11-26,17,250-->

SQL is a language of structured queries, created to interaction with databases. Query language used to manage data in a **relational** RDBMS ([[database]]). SQL designed to using technical and non-technical users.

A relational database represents a collection of related (two-dimensional) tables.

All in SQL rule:
<br class="f">
Everything what you can do in SQL, you must do in SQL.

SQL is almost universal language, mostly all database's support it (with some dialect specific differences for non `ANSI SQL` features).

SQL is relatively simple but powerful language, it's consist of limited set of English keywords, but it's possible to make very complex operations on databases with it.

Never use SQL reserved keywords as table or column name.

CRUD term is short name of ==Create, Read, Update, Delete== operations (queries) of data, based on specific criteria.

High-level overview of SQL language:

![[img/SQL_overview.excalidraw|SQL components diagram]]
_SQL component's diagram_

[[DDL]] is short name of ==Data Definition Language==, which deals with database **schemas and descriptions**, of how the data should reside in the database. Think of DDL as an architect, which able to create and modify databases and tables.

[[DML]] is short name of ==Data Manipulation Language== which deals with data manipulation, and includes most common SQL statements such INSERT, UPDATE, DELETE etc., and it is used to store, modify, delete and update data in database. <!--SR:!2025-08-04,8,253-->

[[DQL]] is short name of ==Data Query Language== which used for performing queries on the data within schema objects. The purpose of the DQL Command is to get some schema relation based on the query passed to it. SELECT statement is used to retrieve data from the database.

[[DCL]] is short name of ==Data Control Language== which includes commands such as GRANT, and mostly concerned with rights, permissions and other controls of the database system. - [ ] add more info <!--SR:!2025-08-05,9,253-->

The Transaction Control Language ([[TCL]]) is used in conjunction with the Data's Manipulation Language to control the processing and exposure of changes, in other words control the ==transactions==. <!--SR:!2025-08-04,8,253-->

[[SELECT]] is used to extract data from one or multiple tables, usually with specific conditions.

In different databases, SQL [[data_type|datatypes]] may have the same names, but their properties will ==differ==, reefer to documentation for additional information.

To visualize relations used an ==Entity Relationship (ER)== Diagram, a type of flowchart that illustrates how “entities” such as people, objects or concepts relate to each other within a system. 

ER Diagrams are most often used to design or debug relational databases in the fields of software engineering, business information systems, education, and research.

## Logical operators

| A           | B           | WHERE A AND B | WHERE A OR B | WHERE NOT A |
|-------------|-------------|---------------|--------------|-------------|
| TRUE        | TRUE        | ==TRUE==      | TRUE         | FALSE       |
| TRUE        | FALSE       | FALSE         | ==TRUE==     | FALSE       |
| FALSE       | TRUE        | FALSE         | TRUE         | ==TRUE==    |
| FALSE       | FALSE       | ==FALSE==     | FALSE        | TRUE        |

Logical operators priority in SQL, no quotes used?
<br class="f">
The first condition is always fulfilled with the NOT operator, followed by AND, and last of all by the condition with OR.

## Security

Methods to avoid SQL injection?
<br class="f">
1. First refer to language/library documentation, how to use placeholder for user's input. [Avoiding SQL injection risk - The Go Programming Language](https://go.dev/doc/database/sql-injection)
2. Filter query elements from user's input (or need just avoid this) with elements allow-list. <!--SR:!2025-08-15,15,230-->

## Learning path

- [ ] [SQL walkthrough](https://mystery.knightlab.com/walkthrough.html)
- [ ] [SQL select star](https://selectstarsql.com/)
- [ ] SQL book
- [ ] [SQL game](https://mystery.knightlab.com/)

[^1]: [SQL in 10 Minutes a Day](https://www.amazon.com/gp/product/0135182794/)

[^2]: [enochtangg/quick-SQL-cheatsheet](https://github.com/enochtangg/quick-SQL-cheatsheet)
