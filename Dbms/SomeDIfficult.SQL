SHOW DATABASES;

-- CREATE DATABASE CUSTOMER ;
 USE CUSTOMER;

CREATE TABLE CUSTOMER (
CUSTOMERID INT PRIMARY KEY,
CUSTOMERNAME VARCHAR(255) NOT NULL,
CONTACTNAME VARCHAR(255) NOT NULL,
 ADDRESS VARCHAR(255) NOT NULL,
  CITY VARCHAR(255) NOT NULL,
  POSTALCODE VARCHAR(255) ,
  COUNTRY VARCHAR(255)
 
);


-- CHECK THE SCHEMA
 DESC CUSTOMER;

INSERT INTO Customer (CustomerID, CustomerName, ContactName, Address, City, PostalCode, Country)
VALUES
(1, 'Alfreds Futterkiste', 'Maria Anders', 'Obere Str', 'México D.F.', '05023', 'Mexico' ),
(2, 'Ana Trujillo Emparedados y helados', 'Ana Trujillo', 'Avda. de la Constitución 2222', 'México D.F.', '05021', 'Mexico'),
(3, 'Antonio Moreno Taquería', 'Antonio Moreno', 'Mataderos 2312', 'México D.F.', '05023', 'Mexico'),
(4, 'Around the Horn', 'Thomas Hardy', '120 Hanover Sq.', 'London', 'WA1 1DP', 'UK'),
(5, 'Berglunds snabbköp', 'Christina Berglund', 'Berguvsvägen 8', 'Luleå', 'S-958 22', 'Sweden'),
(6, 'Blauer See Delikatessen', 'Hanna Moos', 'Forsterstr. 57', 'Mannheim', '68306', 'Germany'),
(7, 'Blondel père et fils', 'Frédérique Citeaux', '24, place Kléber', 'Strasbourg', '67000', 'France'),
(8, 'Bólido Comidas preparadas', 'Martín Sommer', 'C/ Araquil, 67', 'Madrid', '28023', 'Spain'),
(9, 'Bon app', 'Laurence Lebihans', '12, rue des Bouchers', 'Marseille', '13008', 'France'),
(10, 'Bottom-Dollar Marketse', 'Elizabeth Lincoln', '23 Tsawassen Blvd.', 'Tsawassen', 'T2F 8M4', 'Canada'),
(11, 'Bs Beverages', 'Victoria Ashworth', 'Fauntleroy Circus', 'London', 'EC2 5NT', 'UK'),
(12, 'Cactus Comidas para llevar', 'Patricio Simpson', 'Cerrito 333', 'Buenos Aires', '1010', 'Argentina'),
(13, 'Centro comercial Moctezuma', 'Francisco Chang', 'Sierras de Granada 9993', 'México D.F.', '05022', 'Mexico'),
(14, 'Chop-suey Chinese', 'Yang Wang', 'Hauptstr. 29', 'Bern', '3012', 'Switzerland'),
(15, 'Comércio Mineiro', 'Pedro Afonso', 'Av. dos Lusíadas, 23', 'São Paulo', '05432-043', 'Brazil'),
(16, 'Consolidated Holdings', 'Elizabeth Brown', 'Berkeley Gardens 12 Brewery', 'London', 'WX1 6LT', 'UK'),
(17, 'Drachenblut Delikatessend', 'Sven Ottlieb', 'Walserweg 21', 'Aachen', '52066', 'Germany'),
(18, 'Du monde entier', 'Janine Labrune', '67, rue des Cinquante Otages', 'Nantes', '44000', 'France'),
(19, 'Eastern Connection', 'Ann Devon', '35 King George', 'London', 'WX3 6FW', 'UK'),
(20, 'Ernst Handel', 'Roland Mendel', 'Kirchgasse 6', 'Graz', '8010', 'Austria'),
(21, 'Familia Arquibaldo', 'Aria Cruz', 'Rua Orós, 92', 'São Paulo', '05442-030', 'Brazil'),
(22, 'FISSA Fabrica Inter. Salchichas S.A.', 'Diego Roel', 'C/ Moralzarzal, 86', 'Madrid', '28034', 'Spain'),
(23, 'Folies gourmandes', 'Martine Rancé', '184, chaussée de Tournai', 'Lille', '59000', 'France'),
(24, 'Folk och fä HB', 'Maria Larsson', 'Åkergatan 24', 'Bräcke', 'S-844 67', 'Sweden'),
(25, 'Frankenversand', 'Peter Franken', 'Berliner Platz 43', 'München', '80805', 'Germany'),
(26, 'France restauration', 'Carine Schmitt', '54, rue Royale', 'Nantes', '44000', 'France'),
(27, 'Franchi S.p.A.', 'Paolo Accorti', 'Via Monte Bianco 34', 'Torino', '10100', 'Italy'),
(28, 'Furia Bacalhau e Frutos do Mar', 'Lino Rodriguez', 'Jardim das rosas n. 32', 'Lisboa', '1675', 'Portugal'),
(29, 'Galería del gastrónomo', 'Eduardo Saavedra', 'Rambla de Cataluña, 23', 'Barcelona', '08022', 'Spain'),
(30, 'Godos Cocina Típica', 'José Pedro Freyre', 'C/ Romero, 33', 'Sevilla', '41101', 'Spain'),
(31, 'Gourmet Lanchonetes', 'André Fonseca', 'Av. Brasil, 442', 'Campinas', '04876-786', 'Brazil'),
(32, 'Great Lakes Food Market', 'Howard Snyder', '2732 Baker Blvd.', 'Eugene', '97403', 'USA'),
(33, 'GROSELLA-Restaurante', 'Manuel Pereira', '5ª Ave. Los Palos Grandes', 'Caracas', '1081', 'Venezuela'),
(34, 'Hanari Carnes', 'Mario Pontes', 'Rua do Paço, 67', 'Rio de Janeiro', '05454-876', 'Brazil'),
(35, 'HILARIÓN-Abastos', 'Carlos Hernández', 'Carrera 22 con Ave. Carlos Soublette #8-35', 'San Cristóbal', '5022', 'Venezuela'),
(36, 'Hungry Coyote Import Store', 'Yoshi Latimer', 'City Center Plaza 516 Main St.', 'Elgin', '97827', 'USA'),
(37, 'Hungry Owl All-Night Grocers', 'Patricia McKenna', '8 Johnstown Road', 'Cork', '', 'Ireland'),
(38, 'Island Trading', 'Helen Bennett', 'Garden House Crowther Way', 'Cowes', 'PO31 7PJ', 'UK'),
(39, 'Königlich Essen', 'Philip Cramer', 'Maubelstr. 90', 'Brandenburg', '14776', 'Germany'),
(40, 'La corne dabondance', 'Daniel Tonini', '67, avenue de lEurope', 'Versailles', '78000', 'France');



 -- UPDATE A VALUE 
  UPDATE CUSTOMER SET PostalCode ='894893' WHERE CUSTOMERID=37;

    SELECT * FROM CUSTOMER;


    -- Basic SELECT Query: 

  --  Retrieve the names of all customers in the dataset. 
   SELECT CUSTOMERNAME  FROM CUSTOMER;
   SELECT CUSTOMERNAME FROM CUSTOMER ORDER BY CUSTOMERNAME DESC;
   SELECT CUSTOMERID,  CUSTOMERNAME   FROM CUSTOMER ORDER BY CUSTOMERID;


   -- Customers with Long Postal Codes:
   -- Find the names of customers with postal codes longer than 5 characters.

   SELECT CUSTOMERNAME,POSTALCODE  FROM CUSTOMER WHERE  LENGTH(POSTALCODE)>5; 

   -- Customers in Germany or Switzerland:
   -- Retrieve the names of customers located in either Germany or Switzerland.

   SELECT CUSTOMERNAME, COUNTRY  FROM CUSTOMER WHERE COUNTRY IN ('GERMANY','SWitzerland');
   SELECT CUSTOMERNAME, COUNTRY  FROM CUSTOMER WHERE (COUNTRY='GERMANY' OR COUNTRY='SWITZERLAND'); 


   -- Find the names of customers whose ContactName contain the word "Delikatessen."

   SELECT CUSTOMERNAME , ContactName  FROM CUSTOMER WHERE ContactName  LIKE '%Anders%';

   -- List the addresses of customers located in London, UK. 

   SELECT COUNTRY, CUSTOMERNAME FROM CUSTOMER WHERE Country IN ('Venezuela','UK');



   -- List the names of customers located in either Mexico or Canada. 

   SELECT CUSTOMERNAME , COUNTRY  FROM CUSTOMER WHERE COUNTRY IN ('Mexico','Canada');


   -- Find the names and addresses of customers in France whose address contains the word "Paris."

SELECT COUSTOMERNAME FROM CUSTOMER WHERE COUNTRY ='France' AND ADDRESS='Paris';

-- Retrieve the names of customers and sort them in alphabetical order. 

SELECT CUSTOMERNAME FROM CUSTOMER ORDER BY CUSTOMERNAME;


--Retrieve the names and postal codes of customers in Brazil, sorted by postal code in descending order.
SELECT CUSTOMERNAME , PostalCode , COUNTRY  FROM CUSTOMER  WHERE COUNTRY ='Brazil' ORDER BY PostalCode DESC ;

-- List the names, countries, and cities of customers in Mexico, sorted first by country in ascending order and then by city in alphabetical order.
-- (TRICKY :) FIRST PRIORITY IN COUNTRY , THEN CHECKS CITY
SELECT CUSTOMERNAME , COUNTRY , CITY FROM CUSTOMER ORDER BY COUNTRY ASC  ,CITY ;

--List the names and postal codes of customers in Sweden, sorted by postal code in ascending order.

SELECT CUSTOMERNAME , PostalCode , COUNTRY  FROM CUSTOMER WHERE COUNTRY='Sweden' ORDER BY PostalCode ASC;

-- AGGREGATING RELATED

-- Count of Customers in Each City 
SELECT CITY , COUNT(CITY) FROM CUSTOMER GROUP BY CITY;

-- Count of Customers in Each Country: 

SELECT COUNTRY , COUNT(COUNTRY) FROM CUSTOMER GROUP BY COUNTRY;

-- count of Customers in Each Country, Sorted by Count: 
SELECT COUNTRY , COUNT(COUNTRY) AS CUSTOMERCOUNT FROM CUSTOMER GROUP BY COUNTRY ORDER BY CUSTOMERCOUNT DESC ;

-- Count of Customers in Each Postal Code Area:

-- Calculate the number of customers in each unique postal code area (e.g., "London W1," "México D.F. 05021").

SELECT POSTALCODE , COUNT(CUSTOMERID) AS NUMBEROFCUSTOMER FROM CUSTOMER GROUP BY POSTALCODE ORDER BY POSTALCODE;