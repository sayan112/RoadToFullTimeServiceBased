use testdb;


CREATE TABLE CUSTOMER(
    CUSTOMERID INT PRIMARY KEY,
    CUSTOMERNAME VARCHAR(255),
    AGE INT , 
    COUNTRY VARCHAR(255)
);

INSERT INTO CUSTOMER (CUSTOMERID ,CUSTOMERNAME ,AGE,COUNTRY ) VALUES  (101, 'John Smith', 30, 'United States'),
    (102, 'Mary Johnson', 28, 'Canada'),
    (103, 'David Lee', 35, 'United Kingdom'),
    (104, 'Sarah Brown', 27, 'Australia'),
    (105, 'James Davis', 32, 'Germany'),
    (106, 'Linda Wilson', 29, 'France'),
    (107, 'Michael Clark', 40, 'Italy'),
    (108, 'Emily Moore', 26, 'Spain'),
    (109, 'Robert Hall', 33, 'Japan'),
    (110, 'Susan Young', 31, 'South Korea'),
    (111, 'Laura White', 36, 'Brazil'),
    (112, 'Daniel Harris', 24, 'Mexico'),
    (113, 'Patricia King', 37, 'India'),
    (114, 'Christopher Taylor', 29, 'China'),
    (115, 'Jennifer Martin', 38, 'Russia'),
    (116, 'Matthew Turner', 25, 'South Africa'),
    (117, 'Jessica Turner', 29, 'New Zealand'),
    (118, 'William Smith', 34, 'Sweden'),
    (119, 'Elizabeth Wilson', 30, 'Netherlands'),(120, 'Andrew Anderson', 28, 'Switzerland');

    CREATE TABLE ORDERS (
        ORDERID INT PRIMARY KEY ,
        CUSTOMERID INT , 
        ORDERNAME VARCHAR(255),
        ORDERDATE DATE,
        PRICE DECIMAL(10,2),
        FOREIGN KEY (CUSTOMERID) REFERENCES CUSTOMER(CUSTOMERID)
        );
INSERT INTO ORDERS  (orderid, customerid, ordername, orderdate, price)
VALUES
    (1, 101, 'Laptop', '2023-01-15', 1200.00),
    (2, 102, 'Smartphone', '2023-01-16', 800.00),
    (3, 103, 'TV', '2023-01-20', 1500.00),
    (4, 104, 'Headphones', '2023-02-05', 100.00),
    (5, 105, 'Gaming Console', '2023-02-10', 350.00),
    (6, 106, 'Camera', '2023-02-15', 900.00),
    (7, 107, 'Tablet', '2023-03-02', 500.00),
    (8, 108, 'Watch', '2023-03-10', 250.00),
    (9, 109, 'Home Theater', '2023-03-15', 1200.00),
    (10, 110, 'Refrigerator', '2023-03-20', 800.00),
    (11, 101, 'Microwave Oven', '2023-04-05', 150.00),
    (12, 102, 'Blender', '2023-04-10', 50.00),
    (13, 103, 'Coffee Maker', '2023-04-15', 80.00),
    (14, 104, 'Vacuum Cleaner', '2023-05-02', 200.00),
    (15, 105, 'Toaster', '2023-05-10', 30.00),
    (16, 106, 'Hair Dryer', '2023-05-15', 20.00),
    (17, 107, 'Air Purifier', '2023-06-02', 150.00),
    (18, 108, 'Iron', '2023-06-10', 40.00),
    (19, 109, 'Electric Kettle', '2023-06-15', 25.00),
    (20, 110, 'Rice Cooker', '2023-06-20', 60.00),
    (21,101,'TOY','2023-01-15',1300.00);


SELECT * FROM customer;
 SELECT * FROM Orders ;


--------------------------------- BASIC QUERY -----------------------------------------

--1. Retrieve all columns from a table called "CUSTOMER." 
SELECT * FROM customer;
-- 2. SELECT ONLY FIRST 10 DATA FROM "CUSTOMER"
 SELECT * FROM customer LIMIT 10;
-- 3. Get the details of the order with ORDERID 12. 

SELECT * FROM orders JOIN customer ON ORDERS.CUSTOMERID=CUSTOMER.CUSTOMERID where ORDERID=12;

-- List the order names and their corresponding prices. 
SELECT ORDERNAME ,PRICE FROM orders;

--Find the total number of orders in the table. 

SELECT COUNT(ORDERID) FROM orders;

-- Retrieve the orders placed by a specific customer (e.g., CUSTOMERID 101).
SELECT ORDERNAME, ORDERID ,CUSTOMERNAME , AGE ,orders.CUSTOMERID FROM CUSTOMER  JOIN orders  ON orders.CUSTOMERID =CUSTOMER.CUSTOMERID WHERE CUSTOMER.CUSTOMERID=101 ;

-- Get the orders placed on a specific date 

SELECT * FROM orders WHERE ORDERDATE ='2023-01-15' ;

-- Find the highest-priced order in the table. 

SELECT * FROM orders ORDER BY PRICE DESC LIMIT 1;

--Calculate the total revenue generated from all orders. 

SELECT SUM(PRICE) FROM orders;


--Find the average age of customers in the Customer table. 

SELECT AVG(AGE) FROM customer;

-- List the orders placed by customers from Germany. 

SELECT CUSTOMERNAME,COUNTRY FROM customer WHERE COUNTRY='Germany';

--Retrieve the customer names and their respective countries for customers aged 35 or younger.

SELECT CUSTOMERNAME,AGE,COUNTRY FROM customer WHERE AGE<=35;


--List the orders placed by customers from Canada and Australia. 

SELECT CUSTOMERNAME,AGE,COUNTRY FROM customer WHERE COUNTRY IN ('Canada','Australia');

--Find the customer who has placed the most orders. 

SELECT CUSTOMERNAME , ORDERS.CUSTOMERID, COUNT(ORDERS.CUSTOMERID) FROM  orders JOIN customer ON ORDERS.CUSTOMERID=CUSTOMER.CUSTOMERID GROUP BY ORDERS.CUSTOMERID LIMIT 1; 






------------------- sorting ------------------------

--Find the customers with ages in ascending order (smallest age first).

SELECT CUSTOMERNAME,AGE FROM CUSTOMER ORDER BY AGE ;


--List the orders from the Order table in ascending order of their prices.

SELECT ORDERNAME ,PRICE FROM ORDERS ORDER BY PRICE ;

--List the orders placed in the year 2023 in descending order of their prices.


SELECT ORDERNAME , PRICE , ORDERDATE FROM ORDERS WHERE ORDERDATE LIKE '2023%' ORDER BY PRICE DESC;

--Retrieve the customers from Germany in ascending order of their customer names.

SELECT CUSTOMERNAME , COUNTRY FROM  customer WHERE COUNTRY ='Germany' ORDER BY CUSTOMERNAME ;


-- List the orders placed by the customer with customerid 106 in descending order of their prices.

SELECT ORDERID , ORDERNAME , PRICE FROM ORDERS WHERE CUSTOMERID =106 ORDER BY PRICE ;


---  THIS IS AN VERY IMPORTANT QUERY OF SORTING 
-- Query the Name of any student in STUDENTS who scored higher than  Marks. Order your output by the last three characters of each name. If two or more students both have names ending in the same last three characters (i.e.: Bobby, Robby, etc.), secondary sort them by ascending ID.

-- SELECT NAME FROM STUDENTS WHERE MARKS > 75 ORDER BY RIGHT(NAME,3) , ID;   