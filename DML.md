---
date: 2025-07-23 19:10
tags:
  - blog
  - DB
---

# Data Manipulation Language

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