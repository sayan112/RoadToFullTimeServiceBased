show DATABASES;
 USE Practice ;

CREATE table EmployeeDetails (

  EmpId  int  PRIMARY KEY,
     FullName VARCHAR (40) ,
     ManagerId int ,
     DateOfJoining  DATE,
     City VARCHAR(30)
)


INSERT INTO EmployeeDetails (EmpId, FullName, ManagerId, DateOfJoining, City)
VALUES
 (121, 'John Snow', 321, '2019-01-31', 'Toronto'),
    (321, 'Walter White', 986, '2020-01-30', 'California'),
    (421, 'Kuldeep Rana', 876, '2021-11-27', 'New Delhi'),
    (531, 'Jane Doe', 321, '2022-03-15', 'New York'),
    (752, 'Michael Johnson', 986, '2023-01-10', 'Los Angeles'),
    (982, 'Emma Smith', 876, '2023-06-20', 'London'),
    (843, 'James Brown', 321, '2022-09-05', 'Chicago'),
    (561 ,"lawra lasun",NULL,"2014-03-23","Sydney") ,
    (235, 'Sophia Lee', 876, '2023-03-28', 'Sydney'),
    (101, 'John lawra', 221, '2009-01-31', 'Toronto');



 CREATE table EmployeeSalary  (
    EmpId int,
    FOREIGN KEY (EmpId ) REFERENCES EmployeeDetails (EmpId ),
    Project  VARCHAR(10), 
    Salary int ,
    Variable int 
 );


INSERT INTO EmployeeSalary (EmpId, Project, Salary, Variable)
VALUES
    (121, 'P1', 8000, 500),
    (321, 'P2', 10000, 1000),
    (421, 'P1', 12000, 0),
    (531, 'P1', 9000, 700),
    (752, 'P3', 9500, 800),
    (982, 'P2', 11000, 500),
    (843, 'P1', 8500, 600),
    (235, 'P3', 9200, 400),
    (561,"NULL",10000,0);

SELECT * from EmployeeDetails ;

SELECT * from EmployeeSalary ;

--  Write an SQL query to fetch the EmpId and FullName of all the employees working under the Manager with id – ‘986’.

SELECT
    `EmpId`,
    `FullName`,
    ManagerId
FROM EmployeeDetails
where `ManagerId` = '986';

--   Write an SQL query to fetch the different projects available from the EmployeeSalary table.

SELECT DISTINCT(Project) from EmployeeSalary ;

--  Write an SQL query to fetch the count of employees working in project ‘P1’.


        SELECT COUNT(EmpId)
        from EmployeeSalary
        WHERE `Project` = 'P1';


SELECT *
from EmployeeDetails
WHERE `EmpId` IN (
        SELECT EmpId
        from EmployeeSalary
        WHERE `Project` = 'P1'
    );

-- Write an SQL query to uppercase the name of the employee and lowercase the city values.

SELECT UPPER(FullName) , LOWER(`City`) FROM EmployeeDetails ;

-- Fetch all the employees who are not working on any project.

SELECT `EmpId` from EmployeeSalary WHERE `Project`=NULL;

--Write an SQL query to fetch employee names having a salary greater than or equal to 5000 and less than or equal to 10000.

SELECT FullName
from Employeedetails
WHERE `EmpId` IN (
        SELECT `EmpId`
        from Employeesalary
        WHERE
            `Salary` >= 5000
            AND `Salary` <= 10000
    );

-- using inner join

SELECT Fullname, Salary
from Employeedetails
    INNER JOIN EmployeeSalary on Employeedetails.`EmpId` = EmployeeSalary.`EmpId`
WHERE
    `Salary` >= 5000
    AND `Salary` <= 10000;

-- highest , LOWest salary

SELECT MAX(Salary) from Employeesalary;

SELECT MIN(Salary) from Employeesalary;

SELECT AVG(salary) from Employeesalary;

-- 2nd highest , 3rd highest ADD

SELECT Salary
FROM Employeesalary
ORDER BY `Salary` DESC
LIMIT 1
OFFSET 2;

SELECT Salary
FROM Employeesalary
ORDER BY `Salary` DESC
LIMIT 1
OFFSET 3;

--  Write an SQL query to find the current date-time.

SELECT NOW();

--Write an SQL query to fetch the project-wise count of employees sorted by project’s count in descending order.

SELECT
    Project,
    COUNT(empId) AS EmpCountOnProject
from employeesalary
GROUP BY (`Project`)
ORDER BY
    EmpCountOnProject DESC;

-- Write a query to fetch employee names and salary records. Display the employee details even if the salary record is not present for the employee.

SELECT Fullname, Salary
FROM EmployeeDetails
    LEFT JOIN EmployeeSalary ON EmployeeDetails.EmpId = EmployeeSalary.EmpId;

-- first 10 records of salary with emp id and manager id ADD order decending

SELECT EmpId, Salary
from EmployeeSalary
ORDER BY EmpId DESC
LIMIT 10;

-- Fetching distinct values from a column:

SELECT DISTINCT( Project) from EmployeeSalary ;

-- What is query to find distinct records without using distinct keyword?(Asked 90 % of Interview Questions for IBM)

SELECT Project from EmployeeSalary GROUP BY Project;

--Using LIKE to perform partial string matching: (return all the name starts with J)

SELECT FullName
from Employeedetails
where `FullName` LIKE '% J';

-- return all the name s end with surname "white"

SELECT FullName
from Employeedetails
where `FullName` LIKE '% White';


-- What is query to display first 50% records from table employee?
SELECT * FROM Employeedetails LIMIT (SELECT COUNT(*)/2 FROM Employeedetails);


-- SELECT return only 9th no record 
SELECT * FROM Employeedetails  ORDER BY EmpId  LIMIT 1 OFFSET 9;

-- How to Show the Max marks and min marks together from student table? 

SELECT MAX(Salary) FROM Employeesalary UNION SELECT MIN(Salary) FROM Employeesalary ;