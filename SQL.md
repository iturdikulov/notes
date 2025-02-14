---
date: 2024-09-10T00:00+03:00
tags:
  - blog
  - DB
---

# Structured Query Language (SQL)

> Structured Query Language (SQL) is a domain-specific language used to
> ==manage data==, especially in a relational database management
> system (RDBMS). It is particularly useful in handling structured data, i.e.,
> data incorporating relations among entities and variables.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/SQL)</cite> <!--SR:!2024-11-26,17,250-->

> [!NOTE]
> Follow-up information mostly added from Ben Forta's SQL book [^1] and
quick-SQL-cheatsheet [^2]. In examples, I use [[sqlite]] databases from [w3school
DB](https://www.w3schools.com/sql/trysql.asp?filename=trysql_select_all) and Ben
Forta's book.

SQL is a language of structured queries, created to interaction with databases.

SQL is almost universal language, mostly all databases support it (with some
dialect specific differences for non `ANSI SQL` features).

SQL is relatively simple but powerful language, it's consist of limited set of
==English keywords==. It's possible to make very complex operations on databases
with it.

Never use SQL reserved keywords as table or column name.

Query language used to manage data in a **relational** RDBMS ([[database]]).

CRUD term is short name of ==Create, Read, Update, Delete== operations (queries)
of data, based on specific criteria.

High-level overview of SQL language:

![[img/SQL_overview.excalidraw|SQL components diagram]]
_SQL components diagram_

## DDL, DQL, DML, DCL and TCL Commands

DDL is short name of ==Data Definition Language==, which deals with database
schemas and descriptions, of how the data should reside in the database. DDL
example:
```sql
CREATE TABLE users (
    search_id INT NULL,
    about_profile TEXT NULL,
    courses TEXT NULL,
);
```

DQL is short name of ==Data Query Language== which used for performing queries on
the data within schema objects. The purpose of the DQL Command is to get some
schema relation based on the query passed to it. SELECT statement is used to
retrieve data from the database.

DML is short name of ==Data Manipulation Language== which deals with data
manipulation, and includes most common SQL statements such INSERT, UPDATE,
DELETE etc., and it is used to store, modify, delete and update data in database.
Example:
```sql
INSERT INTO employees (first_name, last_name, fname) VALUES (
    'John', 'Capita', 'xcapit00'
);
```

DCL is short name of ==Data Control Language== which includes commands such as
GRANT, and mostly concerned with rights, permissions and other controls of the
database system. DCL example:
```sql
REVOKE INSERT ON *.* FROM 'jeffrey'@'localhost';
REVOKE 'role1', 'role2' FROM 'user1'@'localhost', 'user2'@'localhost';
REVOKE SELECT ON world.* FROM 'role3';
GRANT ALL ON db1.* TO 'jeffrey'@'localhost';
GRANT 'role1', 'role2' TO 'user1'@'localhost', 'user2'@'localhost';
GRANT SELECT ON world.* TO 'role3';
```

The Transaction Control Language (TCL) is used in conjunction with the Data
Manipulation Language to control the processing and exposure of changes, in
other words control the ==transactions==.

How to create the people table with the following fields (sqlite):
```sql
id - Integer
handle - Text
name - Text
age - Integer
balance - Integer
is_admin - boolean
```
<br class="f">
```sql
create table people (
  id INTEGER,
  handle TEXT,
  name TEXT,
  age INTEGER,
  balance INTEGER,
  is_admin BOOLEAN
);
```
<!--SR:!2024-11-27,18,250-->

## The SQL SELECT Statement

`SELECT` is used to extract data from one or multiple tables, usually with
specific conditions.

Select `CustomerName`, `CategoryName` from customers and categories (no extra
filtering and join).
<br class="f">
```sql
SELECT CustomerName, CategoryName FROM customers, categories;
```
```
CustomerName                          CategoryName
------------------------------------  --------------
Alfreds Futterkiste                   Beverages
Alfreds Futterkiste                   Condiments
Alfreds Futterkiste                   Confections
```

Select unique `CustomerName` from `customers` (filters away duplicate values and
returns rows of specified column).
<br class="f">
```sql
SELECT DISTINCT CustomerName FROM customers;
```
```
CustomerName
------------------------------------
Alfreds Futterkiste
Ana Trujillo Emparedados y helados
Antonio Moreno Taquería
```

For operators that occur at the same precedence level within an expression,
evaluation proceeds ==left to right==, with the exception that assignments
evaluate right to left.

Select `CustomerID`, `CustomerName` from users where `CustomerId` != 3 and 1 < `id` < 10
<br class="f">
`AND` has precedence over `OR`
```sql
SELECT
    CustomerID,
    CustomerName
FROM `customers`
WHERE CustomerId != 3 AND CustomerId > 1 AND CustomerId < 10;
```
```
CustomerID  CustomerName
----------  ----------------------------------
2           Ana Trujillo Emparedados y helados
4           Around the Horn
5           Berglunds snabbköp
```

Lists the `suppliers` with a `product` price less than 20, use `EXISTS` clause.
```
ProductID	ProductName	SupplierID	CategoryID	Unit	Price
1	Chais	1	1	10 boxes x 20 bags	18

SupplierID	SupplierName	ContactName	Address	City	PostalCode	Country
1	Exotic Liquid	Charlotte Cooper	49 Gilbert St.	London	EC1 4SD	UK
```
<br class="f">
```sql
SELECT SupplierName
FROM Suppliers
WHERE EXISTS (
    SELECT ProductName FROM Products
    WHERE Products.SupplierID = Suppliers.supplierID
          AND Price < 20
);
```
```
SupplierName
---------------------------------
Exotic Liquid
New Orleans Cajun Delights
Tokyo Traders
```
The EXISTS operator is used to test for the existence of any record in a
subquery. The EXISTS operator returns TRUE if the subquery returns one or more
records.

ORDER BY: used to sort the result-set in ascending or descending order.
Select `OrderDetailID`, `OrderID`, from `order_details`, sort by `OrderID` in
ascending order and `ProductID` in descending order.
<br class="f">
```sql
SELECT OrderDetailID, OrderID
FROM order_details
ORDER BY OrderID ASC, ProductID DESC;
```
```
OrderDetailID  OrderID
-------------  -------
3              10248
2              10248
1              10248
```
<!--SR:!2024-11-12,3,250-->

The LIMIT clause is used to place an upper bound on the number of rows returned
by the entire SELECT statement.
How to select the `10-20` rows from `orders`?
<br class="f">
Some databases support `SELECT TOP` clause, but not all.
I'll use `LIMIT` clause instead.
```sql
SELECT * FROM orders LIMIT 10, 20;
```
```
OrderID  CustomerID  EmployeeID  OrderDate   ShipperID
-------  ----------  ----------  ----------  ---------
10258    20          1           1996-07-17  1
10259    13          4           1996-07-18  3
10260    55          4           1996-07-19  1
```

`LIKE` operator used in a WHERE clause to search for a specific pattern in a
column.
How to find all `customers`, where `CustomerName` contains `an` and
their address start with “a” and are at least 3 characters in length, and
address starting have `a` in second position.
<br class="f">
```sql
SELECT * FROM customers
WHERE CustomerName LIKE '%an%' AND Address LIKE '_a%';
```
```
CustomerName             City
-----------------------  --------------
Antonio Moreno Taquería  México D.F.
Island Trading           Cowes
Lehmanns Marktstand      Frankfurt a.M.
```
`%` (percent sign) is a wildcard character that represents zero, one, or
multiple characters. `_` (underscore) is a wildcard character that represents a
single character.
- `LIKE` ‘a%’ (find any values that start with “a”)
- `LIKE` ‘%a’ (find any values that end with “a”)
- `LIKE` ‘%or%’ (find any values that have “or” in any position)
- `LIKE` ‘_r%’ (find any values that have “r” in the second position)
- `LIKE` ‘a_%_%’ (find any values that start with “a” and are at least 3
characters in length)
- `LIKE` ‘[a-c]%’ (find any values starting with “a”, “b”, or “c”

`IN` operator allows you to specify multiple values in a `WHERE` clause
essentially the IN operator is shorthand for multiple OR conditions.
Search for all `customers` where their country is one of the following:
- Germany
- France
- UK
<br class="f">
```sql
SELECT * FROM Customers
WHERE Country IN ('Germany', 'France', 'UK');
```
- `SELECT` column_names `FROM` table_name `WHERE` column_name `IN` (value1, value2, …);
- `SELECT` column_names `FROM` table_name `WHERE` column_name `IN` (`SELECT STATEMENT`);

BETWEEN operator selects values within a given range inclusive (begin and end
values are included).
Selects all orders with an `OrderDate` between `'1996-07-04'` and
`'1996-07-31'`:
<br class="f">
```sql
SELECT * FROM Orders
WHERE OrderDate BETWEEN '1996-07-04' AND '1996-07-31';
```
```
OrderID  CustomerID  EmployeeID  OrderDate   ShipperID
-------  ----------  ----------  ----------  ---------
10248    90          5           1996-07-04  3
10249    81          6           1996-07-05  1
10250    34          4           1996-07-08  2
```
- `SELECT` * `FROM` Products `WHERE` (column_name `BETWEEN` value1 `AND` value2) `AND NOT` column_name2 `IN` (value3, value4);

If a field in a table is optional, it is possible to insert a new record or
update a record without adding a value to this field. Then, the field will be
saved with a `NULL` value.
How to list all `customers` with a `NULL` value in the `Address` field:
<br class="f">
```sql
SELECT *
FROM Customers
WHERE Address IS NULL;
```
```
no rows in result set
```
- `SELECT` * `FROM` table_name `WHERE` column_name `IS NULL`;
- `SELECT` * `FROM` table_name `WHERE` column_name `IS NOT NULL`;

`AS` aliases are used to assign a alias (temporary name) to a table or column.
An alias only exists for the duration of the query.
Create an alias named "Address" that combine four columns (Address, PostalCode,
City and Country):
<br class="f">
```
SELECT CustomerName, Address + ', ' + PostalCode + ' ' + City + ', ' + Country AS Address
FROM Customers;
```
To get the SQL statement above to work in MySQL use `CONCAT()`
- `SELECT` column_name `AS` alias_name `FROM` table_name;
- `SELECT` column_name `FROM` table_name `AS` alias_name;
- `SELECT` column_name `AS` alias_name1, column_name2 `AS` alias_name2;
- `SELECT` column_name1, column_name2 + ‘, ‘ + column_name3 `AS` alias_name;

`UNION` set operator used to combine the result-set of two or more `SELECT`
statements. Each `SELECT` statement within `UNION` must have the same number of
columns. The columns must have similar data types. The columns in each SELECT
statement must also be in the same order. `UNION` operator only selects distinct
values, `UNION ALL` will allow duplicates.
Return the cities (duplicate values also) from both the `"Customers"` and the
`"Suppliers"` table:
<br class="f">
```sql
SELECT City FROM Customers
UNION ALL
SELECT City FROM Suppliers
ORDER BY City;
```
- `SELECT` columns_names `FROM` table1 `UNION SELECT` column_name `FROM` table2;

INTERSECT set operator which is used to return the records that two SELECT
statements have in common. Generally used the same way as **UNION** (both
queries has same columns).
Returns a list of cities that have both customers and suppliers.
<br class="f">
```sql
SELECT City FROM Customers
INTERSECT
SELECT City FROM Suppliers
ORDER BY City;
```
- `SELECT` columns_names `FROM` table1 `INTERSECT SELECT` column_name `FROM` table2;

EXCEPT set operator used to return all the records in the first SELECT statement
that are not found in the second SELECT statement. Generally used the same way
as **UNION**.
Select `CustomerID` from customers without any orders:
<br class="f">
```sql
SELECT CustomerID
FROM customers
EXCEPT
SELECT CustomerID
FROM orders;
```
- `SELECT` columns_names `FROM` table1 `EXCEPT SELECT` column_name `FROM` table2;

The `ANY` and `ALL` operators allow you to perform a comparison between a single
column value and a ==range== of other values.

ANY means that the condition will be true if the operation is true for any of
the values in the range. The `ANY` operator:
- returns a `boolean` value as a result
- returns `TRUE` if ANY of the subquery values meet the condition
`ANY` means that the condition will be true if the operation is true for any of
the values in the range.
<br class="f">
List the `ProductName` if it finds `ANY` records in the `OrderDetails` table has
`Quantity` equal to 10 (this will return TRUE because the `Quantity` column has
some values of 10). SQLite does not support the `ANY` operator.
<br class="f">
```sql
SELECT ProductName
FROM Products
WHERE ProductID = ANY
  (SELECT ProductID
  FROM OrderDetails
  WHERE Quantity = 10);
```

<!-- TODO: need review from here -->

The `ALL` operator:
- returns a boolean value as a result
- returns TRUE if `ALL` of the subquery values meet the condition
- is used with `SELECT`, `WHERE` and `HAVING` statements
`ALL` means that the condition will be true only if the operation is true for all values in the range.
Lists the `ProductName` if ALL the records in the `OrderDetails` table has
`Quantity` equal to 10. This will of course return FALSE because the Quantity
column has many different values (not only the value of 10). SQLite doesn't
support `ALL` in the `WHERE` clause.
```sql
SELECT ProductName
FROM Products
WHERE ProductID = ALL
(SELECT ProductID
    FROM OrderDetails
    WHERE Quantity = 10);
```

Lists `ALL` the product names, including duplicates (using `ALL`).
<br class="f">
`ALL` is the default, and most people write just `SELECT` instead of `SELECT
ALL`.
```sql
SELECT ALL ProductName
FROM Products
WHERE TRUE;
```

<!-- TODO: very important to understand -->

The `GROUP BY` statement groups rows that have the same values into summary
rows, like "find the number of customers in each country". The `GROUP BY`
statement is often used with aggregate functions (`COUNT()`, `MAX()`, `MIN()`,
`SUM()`, `AVG()`) to group the result-set by one or more columns.
List the number of orders (`Orders.OrderID`) sent by each shipper
(`Shippers.ShipperName`):
<br class="f">
```sql
SELECT Shippers.ShipperName, COUNT(Orders.OrderID) AS NumberOfOrders FROM Orders
LEFT JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID
GROUP BY ShipperName;
```

`HAVING` this clause was added to SQL because the WHERE keyword could not be
used with aggregate functions.
How lists the number of customers in each country, sorted `high to low` (Only
include countries with more than 5 customers)?
<br class="f">
```sql
SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country
HAVING COUNT(CustomerID) > 5
ORDER BY COUNT(CustomerID) DESC;
```

<!-- TODO: example -->

`WITH` often used for retrieving hierarchical data or re-using temp result set
several times in a query. Also referred to as `"Common Table Expression"`
 `WITH RECURSIVE` cte `AS` (<br/>
    `SELECT` c0.* `FROM` categories `AS` c0 `WHERE` id = 1 `# Starting point`<br/>
    `UNION ALL`<br/>
    `SELECT` c1.* `FROM` categories `AS` c1 `JOIN` cte `ON` c1.parent_category_id = cte.id<br/>
  )<br/>
  `SELECT` *<br/>
  `FROM` cte

## Data Modification Queries

`INSERT INTO` used to insert new records/rows in a table
How to insert multiple rows of data with `INSERT`?
<br class="f">
We use the `INSERT INTO` statement, but with multiple values:
```sql
INSERT INTO Customers (CustomerID, CustomerName, ContactName, Address, City, PostalCode, Country)
VALUES
(100, 'Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway'),
(101, 'Greasy Burger', 'Per Olsen', 'Gateveien 15', 'Sandnes', '4306', 'Norway'),
(102, 'Tasty Tee', 'Finn Egan', 'Streetroad 19B', 'Liverpool', 'L1 0AA', 'UK');
```

`UPDATE` used to modify the existing records in a table.
How to update the `ContactName` to `"Juan"` for all `customers` records where
country is `"Mexico"`:
<br class="f">
```sql
UPDATE Customers
SET ContactName='Juan' -- place here additional ", column = value"
WHERE Country='Mexico';
```

`DELETE` used to delete existing records/rows in a table
Recommended using it with `WHERE` clause.
How to delete the customer `"Alfreds Futterkiste"` from the `"Customers"` table:
<br class="f">
```sql
DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';
```
<!--SR:!2024-11-12,3,250-->

## Reporting Queries

COUNT returns the number of occurrences.
Use the `COUNT()` function and the `GROUP BY` clause, to return the number
of records for each category in the `Products` table:
<br class="f">
```sql
SELECT COUNT(*) AS [Number of records], CategoryID
FROM Products
GROUP BY CategoryID;
```

`MIN()` and `MAX()` returns the smallest/largest value of the selected column.
Use the `MIN()` function and the `GROUP BY` clause, to return the smallest price
for each category in the `Products` table:
<br class="f">
```sql
SELECT MIN(Price) AS SmallestPrice, CategoryID
FROM Products
GROUP BY CategoryID;
```

`AVG()` returns the average value of a numeric column.
List all records with a higher price than average, we can use the `AVG()`
function in a sub query:
<br class="f">
```sql
SELECT * FROM Products
WHERE price > (SELECT AVG(price) FROM Products);
```

`SUM()` returns the total sum of a numeric column.
Use the `SUM()` function and the `GROUP BY` clause, to return the `Quantity` for
each `OrderID` in the `OrderDetails` table:
<br class="f">
```sql
SELECT OrderID, SUM(Quantity) AS [Total Quantity]
FROM order_details
GROUP BY OrderID;
```

## Join Queries

![[img/SQL_joins.excalidraw|SQL Join Queries diagram]]
_SQL Join Queries_

The joined table will contain all records from both the tables and fill in
==NULL values== for missing matches on either side.

**INNER JOIN returns records that have matching value in both tables.
Create the following SQL statement (that contains a `INNER JOIN`), that selects
records that have matching values in `orders` and `customers` tables,
`CustomerID` is less than 10:
<br class="f">
```sql
-- Orders                                -- Customers
SELECT CustomerID, OrderID, OrderDate    SELECT CustomerID, CustomerName
FROM orders                              FROM Customers
WHERE CustomerID < 10;                   WHERE CustomerID < 10;

CustomerID  OrderID  OrderDate           CustomerID  CustomerName
----------  -------  ----------          ----------  ----------------------------------
2           10308    1996-09-18          2           Ana Trujillo Emparedados y helados
3           10365    1996-11-27          3           Antonio Moreno Taquería
4           10355    1996-11-15          4           Around the Horn
4           10383    1996-12-16          5           Berglunds snabbköp
5           10278    1996-08-12          6           Blauer See Delikatessen
5           10280    1996-08-14          7           Blondel père et fils
5           10384    1996-12-16          8           Bólido Comidas preparadas
7           10265    1996-07-25          9           Bon app
7           10297    1996-09-04
7           10360    1996-11-22
7           10436    1997-02-05
8           10326    1996-10-10
9           10331    1996-10-16
9           10340    1996-10-29
9           10362    1996-11-25

-- Customers and Orders
SELECT Orders.OrderID, Orders.OrderDate, Orders.CustomerID, Customers.CustomerName
FROM Orders
INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID
WHERE Orders.CustomerID < 10;

OrderID  OrderDate   CustomerID  CustomerName
-------  ----------  ----------  ----------------------------------
10308    1996-09-18  2           Ana Trujillo Emparedados y helados
10365    1996-11-27  3           Antonio Moreno Taquería
10355    1996-11-15  4           Around the Horn
10383    1996-12-16  4           Around the Horn
10278    1996-08-12  5           Berglunds snabbköp
10280    1996-08-14  5           Berglunds snabbköp
10384    1996-12-16  5           Berglunds snabbköp
10265    1996-07-25  7           Blondel père et fils
10297    1996-09-04  7           Blondel père et fils
10360    1996-11-22  7           Blondel père et fils
10436    1997-02-05  7           Blondel père et fils
10326    1996-10-10  8           Bólido Comidas preparadas
10331    1996-10-16  9           Bon app
10340    1996-10-29  9           Bon app
10362    1996-11-25  9           Bon app
```
- `SELECT` column_names `FROM` table1 `INNER JOIN` table2 `ON` table1.column_name=table2.column_name;
- `SELECT` table1.column_name1, table2.column_name2, table3.column_name3 `FROM` ((table1 `INNER JOIN` table2 `ON` relationship) `INNER JOIN` table3 `ON` relationship);

`LEFT (OUTER) JOIN` returns all records from the left table (`table1`), and the
matched records from the right table (`table2`).
Select all `customers` (`CustomerName`), and any `orders` (`OrderID`) they might
have:
```sql
SELECT Customers.CustomerName, Orders.OrderID
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
ORDER BY Customers.CustomerName;
```

`RIGHT (OUTER) JOIN` returns all records from the right table (`table2`), and
the matched records from the left table (`table1`).
The result is 0 records from the left side, if there is no match.
Return all `employees` (`LastName`, `FirstName`), and any orders (`OrderID`)
they might have placed:
<br class="f">
```
SELECT Orders.OrderID, Employees.LastName, Employees.FirstName
FROM Orders
RIGHT JOIN Employees ON Orders.EmployeeID = Employees.EmployeeID
ORDER BY Orders.OrderID;
```

`FULL (OUTER)` JOIN returns all records when there is a match in either left or right table
Selects all `customers` (`CustomerName`), and all orders (`OrderID`):
<br class="f">
```sql
SELECT Customers.CustomerName, Orders.OrderID
FROM Customers
FULL OUTER JOIN Orders ON Customers.CustomerID=Orders.CustomerID
ORDER BY Customers.CustomerName;
```

Self JOIN a regular join, but the table is joined with itself, as if the table
were two tables, temporarily renaming at least one table in the SQL statement.
Match `customers` (`CustomerName`) that are from the same `city` (`City`):
<br class="f">
```sql
SELECT A.CustomerName AS CustomerName1, B.CustomerName AS CustomerName2, A.City
FROM Customers A, Customers B
WHERE A.CustomerID <> B.CustomerID
AND A.City = B.City
ORDER BY A.City;
```

CARTESIAN JOIN: returns the Cartesian product of the sets of records from the
two or more joined tables. It's essentially a multiplication operation between
the rows of the involved tables.
Create a new result set that contains every possible combination of a `customer`
(`CustomerName`) and `order` (`OrderId`).
<br class="f">
```sql
SELECT Customers.CustomerName, Orders.OrderID
FROM Customers
CROSS JOIN Orders;
```

## View Queries

What is a view?
Creates a view that shows all `customers` from Brazil:
<br class="f">
In SQL, a view is a virtual table based on the result-set of an SQL statement.
```sql
CREATE VIEW [Brazil Customers] AS
SELECT CustomerName, ContactName
FROM Customers
WHERE Country = 'Brazil';

SELECT * FROM [Brazil Customers];
```

Is it possible to overwrite a view?
<br class="f">
Yes, by using `CREATE OR REPLACE VIEW`:
```sql
CREATE OR REPLACE VIEW [Brazil Customers] AS
SELECT CustomerName, ContactName, City
FROM Customers
WHERE Country = 'Brazil';
```

How to drop the "Brazil Customers" view:
<br class="f">
```sql
DROP VIEW [Brazil Customers];
```
<!--SR:!2024-11-10,1,230-->

## Altering Table Queries

How to add a `"Email"` column to the `"Customers"` table?
<br class="f">
```sql
ALTER TABLE Customers
ADD Email varchar(255);
```

How to delete the `"Email"` column from the `"Customers"` table?
<br class="f">
```sql
ALTER TABLE Customers
DROP COLUMN Email;
```

How to rename the `"City"` column to `"Location"`?
<br class="f">
```sql
ALTER TABLE Customers
RENAME COLUMN City TO Location;
```

How to change the data type of the `"City"` column to `"varchar(100)"` in
`Customers` table?
<br class="f">
```sql
# MySQL dialect
ALTER TABLE Customers
MODIFY COLUMN City varchar(100);
```

## Creating Table Query

Create a table called `"Persons"` that contains five columns: `PersonID`,
`LastName`, `FirstName`, `Address`, and `City`:
```sql
CREATE TABLE Persons (
    PersonID int,
    LastName varchar(255),
    FirstName varchar(255),
    Address varchar(255),
    City varchar(255)
);
```

## Security

Methods to avoid SQL injection?
<br class="f">
1. First refer to language/library documentation, how to use placeholder for
   user's input. [Avoiding SQL injection risk - The Go Programming Language](https://go.dev/doc/database/sql-injection)
2. Filter query elements from user's input (or need just avoid this) with elements
   allowlist. <!--SR:!2024-11-12,3,230-->

[^1]: [SQL in 10 Minutes a Day](https://www.amazon.com/gp/product/0135182794/)
[^2]: [enochtangg/quick-SQL-cheatsheet](https://github.com/enochtangg/quick-SQL-cheatsheet)
