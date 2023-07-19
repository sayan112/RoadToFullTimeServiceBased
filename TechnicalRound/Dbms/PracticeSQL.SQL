
-- Problem No 1 . 
-- Insert
--     below student details in students
-- table and print all data of
-- table
-- .+ ---------+--------+-------+
--        | ID | Name | Gender | + ---------+--------+-------+
-- --     | 3 | Kim | F |
--        | 4 | Molina | F |
--        | 5 | Dev | M | + ---------+--------+-------+




use practice;

create table
    student (
        Id INT primary key,
        Name varchar(100),
        Gender varchar(10)
    );

insert into
    student (Id, Name, Gender)
Values (001, "SAYAN MAITRA", "MALE"), (002, "SAYAR MIL", "MALE"), (003, "SUMITA MAITRA", "FEMALE");

SELECT * FROM student;







-- Problem no 2

-- There is a
-- table
--     World + -----------------+------------+------------+--------------+---------------+
--     | name | continent | area | population | gdp | + -----------------------+------------------+-----------------+-------------+
--     | Afghanistan | Asia | 652230 | 25500100 | 20343000 |
--     | Albania | Europe | 28748 | 2831741 | 12960000 | 
--     | Algeria | Africa | 2381741 | 37100000 | 188681000 |
--     | Andorra | Europe | 468 | 78115 | 3712000 |
--     | Angola | Africa | 1246700 | 20609294 | 100990000 | + -----------------+------------+------------+--------------+---------------+
--     A country is big if it has an area of bigger than 3 million square km
--     or a population of more than 25 million.Write a SQL solution to output big countries ' name, population and area.

-- For example, according to the above table, we should output:

-- +--------------+-------------+--------------+
-- | name         | population  | area         |
-- +--------------+-------------+--------------+
-- | Afghanistan  | 25500100    | 652230       |
-- | Algeria      | 37100000    | 2381741      |
-- +--------------+-------------+--------------+



create table country (
Name varchar(20),
Continent varchar(20),
Area int ,
Population int ,
Gdp int
);


INSERT INTO country  (Name,Continent,Area,Population,Gdp) values ('Afghanistn', 'Asia', 652230, 25500100, 20343000),
  ('Albania', 'Europe', 28748, 2831741, 12960000),
  ('Algeria', 'Africa', 2381741, 37100000, 188681000),
  ('Andorra', 'Europe', 468, 78115, 3712000),
  ('Angola', 'Africa', 1246700, 20609294, 100990000);
Select Name,Population,Area  from  country where Area>3000000 OR Population>25000000;




-- Problem no 3

-- Given three tables: salesperson, company, orders.
-- Output all the names in the table salesperson, who didn’t have sales to company 'RED'.

-- Example

-- Input

-- Table: Salesperson

-- +----------+------+--------+-----------------+-----------+
-- |sales_id | name | salary | commission_rate | hire_date |
-- +----------+------+--------+-----------------+-----------+
-- |   1      | John | 100000 |     6           | 4/1/2006  |
-- |   2      | Amy  | 120000 |     5           | 5/1/2010  |
-- |   3      | Mark | 65000  |     12          | 12/25/2008|
-- |   4      | Pam  | 25000  |     25          | 1/1/2005  |
-- |   5      | Alex | 50000  |     10          | 2/3/2007  |
-- +----------+------+--------+-----------------+-----------+
-- The table salesperson holds the salesperson information. Every salesperson has a sales_id and a name.

-- Table: Company

-- +---------+--------+------------+
-- | com_id  |  name  |    city    |
-- +---------+--------+------------+
-- |   1     |  RED   |   Boston   |
-- |   2     | ORANGE |   New York |
-- |   3     | YELLOW |   Boston   |
-- |   4     | GREEN  |   Austin   |
-- +---------+--------+------------+
-- The table company holds the company information. Every company has a com_id and a name.

-- Table: Orders

-- +----------+------------+---------+----------+--------+
-- | order_id | order_date | com_id  | sales_id | amount |
-- +----------+------------+---------+----------+--------+
-- | 1        |   1/1/2014 |    3    |    4     | 100000 |
-- | 2        |   2/1/2014 |    4    |    5     | 5000   |
-- | 3        |   3/1/2014 |    1    |    1     | 50000  |
-- | 4        |   4/1/2014 |    1    |    4     | 25000  |
-- +----------+----------+---------+----------+--------+
-- The table orders holds the sales record information, salesperson and customer company are represented by sales_id and com_id.

-- Output

-- +------+
-- | name | 
-- +------+
-- | Amy  | 
-- | Mark | 
-- | Alex |
-- +------+






 create  table Salesperson   (
    sales_id  int , 
    name  varchar(15),
    salary int ,
    commission_rate int , 
    hire_date date
 );
 
  insert into Salesperson (sales_id,name,salary,commission_rate,hire_date) values (1,'John',100000,6,'2006-01-04') , (2, 'Amy', 120000, 5, '2010-05-01'),(3, 'Mark', 65000, 12, '2008-12-25'),(4, 'Pam', 25000, 25, '2005-01-01'),(5, 'Alex', 50000, 10, '2007-02-03');
  select * from Salesperson;
  
  create table Company (
  com_id int , 
   name varchar(15),
   city varchar(15)
  );
  insert into Company (com_id,name,city) values (1,'Red','Boston'),(2,'orange','New York'),(3,'yellow','Boston'),(4,'Green','Austin');
  
  create table Orders (
  order_id int , 
  order_date date,
  com_id int , 
  sales_id int , 
  amount int 
  );
  
  INSERT INTO orders (order_id, order_date, com_id, sales_id, amount) VALUES (1, '2014-01-01', 3, 4, 100000),(4, '2014-01-04', 1, 4, 25000),(2, '2014-01-02', 4, 5, 5000),(3, '2014-01-03', 1, 1, 50000);
  
  select name from Salesperson where sales_id NOT IN (select sales_id from orders where com_id=1);




--  JOins

-- In MySQL, a join is used to combine rows from two or more tables based on a related column between them. There are different types of joins in MySQL, including inner join, left join, right join, and full outer join. I'll provide you with a simple example that demonstrates each type of join along with code and a table diagram.

-- Consider the following two tables:

-- **Table 1: Customers**

-- | CustomerID | CustomerName |
-- |------------|--------------|
-- | 1          | John         |
-- | 2          | Sarah        |
-- | 3          | David        |

-- **Table 2: Orders**

-- | OrderID | CustomerID | OrderDate |
-- |---------|------------|-----------|
-- | 1       | 1          | 2023-07-01|
-- | 2       | 2          | 2023-07-05|
-- | 3       | 1          | 2023-07-10|

-- Now, let's explore each type of join:

1. **Inner Join**: Returns only the rows that have matching values in both tables.

```sql
SELECT Customers.CustomerName, Orders.OrderDate
FROM Customers
INNER JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;
```

This query will produce the following result:

| CustomerName | OrderDate   |
|--------------|-------------|
| John         | 2023-07-01  |
| Sarah        | 2023-07-05  |
| John         | 2023-07-10  |

2. **Left Join**: Returns all the rows from the left table and the matched rows from the right table. If there are no matches, it returns NULL values for the right table columns.

```sql
SELECT Customers.CustomerName, Orders.OrderDate
FROM Customers
LEFT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;
```

The result will be:

| CustomerName | OrderDate   |
|--------------|-------------|
| John         | 2023-07-01  |
| Sarah        | 2023-07-05  |
| John         | 2023-07-10  |
| David        | NULL        |

3. **Right Join**: Returns all the rows from the right table and the matched rows from the left table. If there are no matches, it returns NULL values for the left table columns.

```sql
SELECT Customers.CustomerName, Orders.OrderDate
FROM Customers
RIGHT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;
```

The result will be:

| CustomerName | OrderDate   |
|--------------|-------------|
| John         | 2023-07-01  |
| Sarah        | 2023-07-05  |
| John         | 2023-07-10  |
| NULL         | NULL        |

4. **Full Outer Join**: Returns all the rows from both tables. If there are no matches, it returns NULL values for the respective columns.

```sql
SELECT Customers.CustomerName, Orders.OrderDate
FROM Customers
FULL OUTER JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;
```

This type of join is not directly supported in MySQL, but it can be achieved using a combination of left and right joins or using UNION.

Using UNION:

```sql
SELECT Customers.CustomerName, Orders.OrderDate
FROM Customers
LEFT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID
UNION
SELECT Customers.CustomerName, Orders.OrderDate
FROM Customers
RIGHT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;
```

The result will be:

| CustomerName | OrderDate   |
|--------------|-------------|
| John         | 2023-07-01  |
| Sarah        | 2023-07-05  |
| John         | 2023-07-10  |
| David        | NULL        |
| NULL         | NULL        |

That covers the different types of joins in MySQL.