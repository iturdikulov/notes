---
date: 2025-07-23T08:24:36+03:00
created: 2025-07-23T08:24:22+03:00
tags:
  - blog
  - work-tool-main
---

# Data Definition Language

DDL is short name of ==Data Definition Language==, which deals with database **schemas and descriptions**, of how the data should reside in the database. Think of DDL as an architect, which able to create and modify databases and tables.

> [!PDF|] [[books/postgresql-18-A4.pdf#page=98&selection=0,26,0,27|postgresql-18-A4, p.59]]
>
>> Chapter 5. Data Definition

Is ordering of rows guaranteed when we read a table?
<br class="f">
No unless requested. When a table is read, the rows will appear in an unspecified order, unless sorting is explicitly requested.

Which frequently used data types you know (SQl/[[PostgreSQL]])?
<br class="f">
- `integer` for whole number
- `numeric` for possible fractional numbers
- `text` for character strings
- `date` for dates
- `time` for time-of-day values
- `timestamp` for values containing both date and time.

## CREATE

Create new tables/databases (like building a new room). In this command need to specify at least a name of new table, names of the columns and the datatype of each column.

Usually you also specify default value of column.

```sql
CREATE TABLE products ( 
	-- product_no is identifier, a-z_0-9, 64 len
	-- type is also identifier, but there are some exceptions
	product_no integer, 
	name text null,
	-- Price can store fractional components, 
	-- as would be typical of monetary amounts
	price numeric DEFAULT 9.99 
);
```

> [!PDF|] [[books/postgresql-18-A4.pdf#page=99&selection=12,0,14,65|postgresql-18-A4, p.60]]
>
>> When you create many interrelated tables it is wise to choose a ==consistent== naming pattern for the tables and columns. For instance, there is a choice of using singular or plural nouns for table names, both of which are favored by some theorist or other.

How to remove table?
<br class="f">
Need to use `DROP TABLE` command, for example:

```sql
DROP TABLE products;
-- or
DROP TABLE IF EXISTS products; -- this will ignore error message
```

## ALTER

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

How to change the datatype of the `"City"` column to `"varchar(100)"` in `Customers` table?
<br class="f">
```sql
# MySQL dialect
ALTER TABLE Customers
MODIFY COLUMN City varchar(100);
```

- `ALTER` - Change existing structure (like modify building plan)
- `DROP` - Dropping structures (like demolition)
- `TRUNCATE` - Table truncation, saving structure (like removing everything from room, but keeping walls)

## View Queries

What is a view? Creates a view that shows all `customers` from Brazil:
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