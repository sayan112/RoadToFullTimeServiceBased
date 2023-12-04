
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




-- practice SQL

 SHOW DATABASES;
use testdb;

SELECT * from persons;

insert into persons (PersonID,FirstName,LastName,Address,City,DOB) values (101 ,"john","doe","london",'lawra','2002-11-02'),
(102 ,"john","lodu","london",'lawra' ,'2004-11-02'), 
(103 ,"sumit","doe","colombo",'lawra' ,'2003-02-03'), 
(104 ,"Kaku","doe","new jersy",'lawra' ,'2002-11-04'), 
(104 ,"lawra","som","london",'lawra' ,'2011-05-01') ,
(106 ,"tohar","behen","new york",'lawra' ,'2045-12-08'), 
(107 ,"kalin","bhaiya","jodhpur",'lawra' ,'2014-03-12') ,
(108 ,"munna bhaiya","doe","mirzapur",'lawra' ,'2012-01-11') ,
(109 ,"john","doe","london",'lawra' ,'2001-01-01') 
;

SELECT firstName, lastName
FROM persons
WHERE
   Address  ='london'
ORDER BY
    PersonID;







    --  Practice SQL ---

1. from the imdb dataset print the title and rating of those movies which have a genre starting from c released in 2014 with a budget higher than 4 crore download the dataset from console


SELECT IMDB.Title, IMDB.Rating
FROM IMDB
    JOIN genre on IMDB.Movie_id = genre.Movie_id
WHERE
    genre.genre LIKE 'C%'
    AND IMDB.title LIKE '%2014%'
    AND IMDB.Budget > 40000000;



2.Find the total purchase amount for all orders 

 SELECT SUM(purch_amt) FROM orders;     


3. write a SQL query to calculate the average purchase amount of all orders.Return average purchase amount.

SELECT AVG(purch_amt) FROM orders;

4. write a SQL query that counts the number of unique salespeople.Return number of salespeople.

    SELECT COUNT(DISTINCT(salesman_id )) FROM orders;


5. write a SQL query to count the number of customers.Return number of customers.

   SELECT COUNT(customer_id ) FROM customer ;
6. write a SQL query to determine the number of customers who received at least one grade for their activity.

SELECT COUNT(customer_id) FROM CUSTOMER WHERE GRADE>=0;

7. write a SQL query to find the maximum purchase amount. 

 SELECT MAX(purch_amt ) FROM CUSTOMER;

8. write a SQL query to find the minimum purchase amount. 

SELECT MIN(purch_amt ) FROM CUSTOMER;

9. From the following table, write a SQL query to find the highest grade of the customers in each city. Return city, maximum grade.  

SELECT CITY ,  MAX(GRADE) FROM customer GROUP BY city ORDER BY MAX(GRADE) ; 

 
10. write a SQL query to find the highest purchase amount ordered by each customer.Return customer ID,
maximum purchase amount.

SELECT CUSTOMER_ID ,  MAX(purch_amt ) FROM customer GROUP BY CUSTOMER_ID ORDER BY CUSTOMER_ID ;


11. write a SQL query to find the highest purchase amount ordered by each customer on a particular 
order date
and highest purchase amount.

 SELECT customer_id,ord_date ,MAX(purch_amt) FROM orders GROUP BY customer_id,ord_date 
 ORDER BY ord_date ,MAX(purch_amt); 



 12. write a SQL query to determine the highest purchase amount made by each salesperson on '2012-08-17'.Return salesperson ID,
purchase amount.

 SELECT salesman_id, MAX(purch_amt)  FROM ORDERS  where ord_date ='2012-08-17' GROUP BY salesman_id  ; 

 13. write a SQL query to find the highest order (purchase) amount by each customer on a particular order date. Filter the result by highest order (purchase) amount above 2000.00. Return customer id, order date and maximum purchase amount.

 SELECT customer_id ,ord_date ,  MAX(purch_amt)  FROM ORDERS GROUP BY customer_id ,ord_date HAVING MAX(purch_amt) >2000;













 CREATE DATABASE ORG;
SHOW DATABASES;
USE ORG;

CREATE TABLE Worker (
	WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	FIRST_NAME CHAR(25),
	LAST_NAME CHAR(25),
	SALARY INT(15),
	JOINING_DATE DATETIME,
	DEPARTMENT CHAR(25)
);

INSERT INTO Worker 
	(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
		(001, 'Monika', 'Arora', 100000, '21-02-20 09.00.00', 'HR'),
		(002, 'Niharika', 'Verma', 80000, '21-06-11 09.00.00', 'Admin'),
		(003, 'Vishal', 'Singhal', 300000, '21-02-20 09.00.00', 'HR'),
		(004, 'Amitabh', 'Singh', 500000, '21-02-20 09.00.00', 'Admin'),
		(005, 'Vivek', 'Bhati', 500000, '21-06-11 09.00.00', 'Admin'),
		(006, 'Vipul', 'Diwan', 200000, '21-06-11 09.00.00', 'Account'),
		(007, 'Satish', 'Kumar', 75000, '21-01-20 09.00.00', 'Account'),
		(008, 'Geetika', 'Chauhan', 90000, '21-04-11 09.00.00', 'Admin');

CREATE TABLE Bonus (
	WORKER_REF_ID INT,
	BONUS_AMOUNT INT(10),
	BONUS_DATE DATETIME,
	FOREIGN KEY (WORKER_REF_ID)
		REFERENCES Worker(WORKER_ID)
        ON DELETE CASCADE
);

INSERT INTO Bonus 
	(WORKER_REF_ID, BONUS_AMOUNT, BONUS_DATE) VALUES
		(001, 5000, '23-02-20'),
		(002, 3000, '23-06-11'),
		(003, 4000, '23-02-20'),
		(001, 4500, '23-02-20'),
		(002, 3500, '23-06-11');
CREATE TABLE Title (
	WORKER_REF_ID INT,
	WORKER_TITLE CHAR(25),
	AFFECTED_FROM DATETIME,
	FOREIGN KEY (WORKER_REF_ID)
		REFERENCES Worker(WORKER_ID)
        ON DELETE CASCADE
);

INSERT INTO Title 
	(WORKER_REF_ID, WORKER_TITLE, AFFECTED_FROM) VALUES
 (001, 'Manager', '2023-02-20 00:00:00'),
 (002, 'Executive', '2023-06-11 00:00:00'),
 (008, 'Executive', '2023-06-11 00:00:00'),
 (005, 'Manager', '2023-06-11 00:00:00'),
 (004, 'Asst. Manager', '2023-06-11 00:00:00'),
 (007, 'Executive', '2023-06-11 00:00:00'),
 (006, 'Lead', '2023-06-11 00:00:00'),
 (003, 'Lead', '2023-06-11 00:00:00');



 Q-1. Write an SQL query to fetch “FIRST_NAME” from the Worker table using the alias name <WORKER_NAME>.

SELECT * FROM WORKER;
 SELECT FIRST_NAME AS "WORKER_NAME" from worker;


Q-2. Write an SQL query to fetch “FIRST_NAME” from the Worker table in upper case.

 SELECT UPPER(FIRST_NAME) AS "WORKER_NAME" from worker;

Q-3. Write an SQL query to fetch unique values of DEPARTMENT from the Worker table.

 SELECT DISTINCT(DEPARTMENT) FROM WORKER;


 Q-4. Write an SQL query to print the first three characters of  FIRST_NAME from the Worker table.


SELECT LEFT(FIRST_NAME, 3) FROM WORKER;


Q-5. Write an SQL query to print the FIRST_NAME from the Worker table after removing white spaces from the right side.


Select RTRIM(FIRST_NAME) from Worker;
--SELECT LTRIM('  SQL Tutorial') AS LeftTrimmedString;
--SELECT RIGHT('SQL Tutorial   ', 3) AS ExtractString;
--SELECT LEFT('SQL Tutorial', 3) AS ExtractString; Extract 3 characters from a string (starting from left): 
--SELECT RIGHT('SQL Tutorial', 3) AS ExtractString; Extract 3 characters from a string (starting from right): 
--SELECT SUBSTRING('SQL Tutorial', 1, 3) AS ExtractString;  Extract 3 characters from a string, starting in position 1: 
--SELECT REVERSE('SQL Tutorial');Reverse a string: 


Q-6. Write an SQL query to print the DEPARTMENT from the Worker table after removing white spaces from the left side.

SELECT LTRIM(DEPARTMENT) FROM WORKER;

Q-8. Write an SQL query that fetches the unique values of DEPARTMENT from the Worker table and prints its length.

SELECT DISTINCT(DEPARTMENT) , LENGTH(DEPARTMENT) FROM WORKER;

Q-9. Write an SQL query to print the FIRST_NAME from the Worker table after replacing ‘a’ with ‘A’.

SELECT REPLACE(FIRST_NAME,'a','A') FROM WORKER;

Q-10. Write an SQL query to print the FIRST_NAME and LAST_NAME from the Worker table into a single column COMPLETE_NAME. A space char should separate them.

SELECT CONCAT(FIRST_NAME, ' ', LAST_NAME) AS NAME FROM WORKER;


Q-11. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending.

SELECT * FROM WORKER ORDER BY FIRST_NAME ASC;

Q-12. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending and DEPARTMENT Descending.

SELECT * FROM WORKER ORDER BY FIRST_NAME ASC , DEPARTMENT DESC;


Q-13. Write an SQL query to print details for Workers with the first names “Vipul” and “Satish” from the Worker table.

SELECT * FROM WORKER WHERE FIRST_NAME = 'Vipul' || FIRST_NAME  = 'Satish';


Q-15. Write an SQL query to print details of Workers with DEPARTMENT name as “Admin”.

SELECT * FROM WORKER WHERE DEPARTMENT = 'Admin';

Q-16. Write an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.

SELECT * FROM WORKER WHERE DEPARTMENT = '%a%';

Q-17. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘a’.

SELECT * FROM WORKER WHERE DEPARTMENT = '%a';

Q-18. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.

SELECT * FROM WORKER WHERE FIRST_NAME LIKE '_____h';


Q -19. Write an SQL query to print details of the Workers whose SALARY lies between 100000 and 500000.

SELECT * FROM WORKER WHERE SALARY>=100000 && SALARY<=500000;

Q -20. Write an SQL query to print details of the Workers who joined in Feb 2021.


Select * from Worker where year(JOINING_DATE) = 2021 and month(JOINING_DATE) = 2;

Q-21. Write an SQL query to fetch the count of employees working in the department ‘Admin’.

SELECT COUNT(*) FROM WORKER WHERE DEPARTMENT ='Admin';

Q -23. Write an SQL query to fetch the number of workers for each department in descending order.


SELECT COUNT(DEPARTMENT ), DEPARTMENT FROM WORKER GROUP BY DEPARTMENT ORDER BY COUNT(DEPARTMENT ) ;


Q -24. Write an SQL query to print details of the Workers who are also Managers.


 SELECT * FROM WORKER;
  SELECT * FROM TITLE;

SELECT CONCAT (WORKER.FIRST_NAME , WORKER.LAST_NAME) AS FULLNAME , TITLE.WORKER_TITLE  FROM WORKER JOIN TITLE ON WORKER.WORKER_ID = TITLE.WORKER_REF_ID where TITLE.WORKER_TITLE='Manager';


Q-25. Write an SQL query to fetch duplicate records having matching data in some fields of a table.


SELECT
    WORKER_TITLE,
    AFFECTED_FROM,
    COUNT(*)
FROM Title
GROUP BY
    WORKER_TITLE,
    AFFECTED_FROM
HAVING COUNT(*) > 1;


Q-26. Write an SQL query to show only odd rows from a table. 

SELECT * FROM WORKER WHERE MOD(WORKER_ID,2)=1;

Q-27. Write an SQL query to show only odd rows from a table. 

SELECT * FROM WORKER WHERE MOD(WORKER_ID,2)=0;


Q-31. Write an SQL query to show the current date and time. Ans. 


SELECT NOW();

SELECT CURDATE();

Q -32. Write an SQL query to
show the top n (say 5) records of a
table.

    SELECT * FROM WORKER ORDER BY WORKER_ID  LIMIT 5; 


Q -33. Write an SQL query to determine the nth (say n = 5) highest salary
from a
table.

SELECT * FROM WORKER ORDER BY SALARY DESC LIMIT 1 OFFSET 4;


Q -36. Write an SQL query to
show the second - highest salary
from a
table.

 SELECT * FROM WORKER

Q -35. Write an SQL query to fetch the list of employees
with the same salary.


SELECT *
FROM WORKER
WHERE SALARY IN (
        SELECT SALARY
        FROM WORKER
        GROUP BY SALARY
        HAVING COUNT(*) > 1
    );




    Q -39. Write an SQL query to fetch the first 50 % of records
from a
table.

SELECT *
FROM WORKER
WHERE WORKER_ID <= (
        SELECT count(WORKER_ID) / 2
        from Worker
    );


SELECT VERSION() ;

 SELECT * from WORKER ORDER BY WORKER_ID  LIMIT (SELECT CEIL(COUNT(*)/2) FROM WORKER) ;

Q -40. Write an SQL query to fetch the departments that have less than FOUR people in them.


SELECT COUNT(DEPARTMENT),DEPARTMENT FROM WORKER GROUP BY DEPARTMENT  HAVING COUNT(DEPARTMENT)<4;


Q -41. Write an SQL query to
show all departments along
with the number of people in there.

SELECT COUNT(DEPARTMENT),DEPARTMENT FROM WORKER GROUP BY DEPARTMENT ORDER BY DEPARTMENT;


Q-42. Write an SQL query to show the last record from a table. 

SELECT * FROM WORKER ORDER BY WORKER_ID DESC LIMIT 1;

Q-43. Write an SQL query to fetch the first row of a table. 

SELECT * FROM WORKER LIMIT 1;

Q -44. Write an SQL query to fetch the last five records
from a
table.


SELECT * FROM WORKER ORDER BY WORKER_ID DESC LIMIT 5;



Q -45. Write an SQL query to print the names of employees
having  the highest salary in each department.


    SELECT MAX(SALARY),DEPARTMENT FROM WORKER GROUP BY DEPARTMENT ;

Q -49. Write an SQL query to fetch departments along
with  the total salaries paid for each of them.


     SELECT SUM(SALARY) , DEPARTMENT FROM WORKER GROUP BY DEPARTMENT ;


Q -50. Write an SQL query to fetch the names of workers who earn the highest salary.


     SELECT  CONCAT(FIRST_NAME,' ',LAST_NAME) AS NAME , SALARY FROM WORKER ORDER BY SALARY DESC LIMIT 1 ; 










--     ************      JOINS    **************


1. SELECT salesman.salesman_id ,  salesman.name ,customer.cust_name , customer.city from salesman , customer WHERE salesman.city=customer.city;


2. SELECT ord_no  , purch_amt ,  cust_name , city   FROM  orders JOIN  customer ON orders.customer_id=customer.customer_id WHERE purch_amt>=500 AND purch_amt<=2000;

3. SELECT customer.cust_name, customer.city, salesman.name, salesman.commission , salesman.salesman_id  FROM customer JOIN salesman ON customer.salesman_id =salesman.salesman_id ;


4. SELECT customer.cust_name ,  customer.city ,salesman.salesman_id, salesman.name, salesman.commission from customer join salesman on customer.salesman_id=salesman.salesman_id where commission>0.12;


5.SELECT customer.cust_name ,  customer.city AS CUSTOMERCITY ,salesman.salesman_id, salesman.name, salesman.city AS SALESMANCITY, salesman.commission from customer join salesman on customer.salesman_id=salesman.salesman_id where (commission>0.12) AND customer.city!=salesman.city;


6. SELECT orders.ord_no,orders.ord_date,orders.purch_amt, customer.cust_name ,customer.grade,salesman.name,salesman.commission from orders join customer on orders.customer_id=customer.customer_id  join salesman on orders.salesman_id=salesman.salesman_id;


7. SELECT * FROM orders NATURAL JOIN customer NATURAL JOIN salesman;

8.SELECT customer.cust_name , customer.city ,customer.grade,salesman.name , salesman.city from customer join salesman on customer.salesman_id=salesman.salesman_id ORDER BY customer.customer_id ASC;

9. SELECT customer.cust_name ,  customer.city  AS customerCity ,customer.grade ,salesman.name , salesman.city AS salesmanCity FROM customer join salesman on customer.salesman_id=salesman.salesman_id WHERE customer.grade<300 ORDER BY customer.customer_id;


10.SELECT customer.cust_name, customer.city , orders.ord_no  , orders.ord_date , orders.purch_amt FROM orders join customer on orders.customer_id=customer.customer_id order by orders.ord_date ASC;

11.








