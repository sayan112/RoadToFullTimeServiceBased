1. What is DBMS?
 = DBMS is a collection of programs that facilitates users to create and maintain a database.
  In other words, DBMS provides us an interface or tool for performing different operations such as the creation of a database, inserting data into it, deleting data from it, updating the data, etc. DBMS is a software in which data is stored in a more secure way as compared to the file-based system. Using DBMS, we can overcome many problems such as- data redundancy, data inconsistency, easy access, more organized and understandable, and so on. There is the name of some popular Database Management System- MySQL, Oracle, SQL Server, Amazon simple DB (Cloud-based).

2.  What is a database?
 = A Database is a logical, consistent and organized collection of data that it can easily be accessed, managed and updated

```
3. What are the advantages of DBMS?

 =
 -  ( Data Redundancy) control ,
 -  (Data Security) Restriction for unauthorized access ,
 -   Provides multiple user interfaces ,
 -  (Data Backup and Recovery) Provides backup and recovery,
 -  (Data Inegrity) Enforces integrity constraints,
 -  (Data Consistency) Ensure data consistency,
 -   Easy accessibility,
 -   Easy data extraction and data processing due to the use of queries

```
4.  What is a checkpoint in DBMS?
 = A checkpoint is like a snapshot of the DBMS state. 
 Checkpoints are used for the recovery of the database after the system crash. Checkpoints are used in the log-based recovery system. When due to a system crash we need to restart the system then at that point we use checkpoints. So that, we don't have to perform the transactions from the very starting.  

5.  What is RDBMS?
= RDBMS stands for Relational Database Management Systems.

RDBMS is a specific type of DBMS that is based on the relational model of data. The relational model organizes data into tables, where each table consists of rows (records) and columns (attributes). RDBMS provides a structured and standardized way of organizing and accessing data, using a set of rules known as ACID properties (Atomicity, Consistency, Isolation, Durability) to ensure data integrity and reliability.

store data more efficiently than DBMS. RDBMS stores data in the form of tables as compared to DBMS which stores data as files. Storing data as rows and columns makes it easier to locate specific values in the database and makes it more efficient as compared to DBMS.

Examples of popular RDBMS systems are MySQL, Oracle DB, etc.





6. What is the Relationship?

= The Relationship is defined as an association among two or more entities. There are three type of relationships in DBMS-

One-To-One: Here one record of any object can be related to one record of another object.
One-To-Many (many-to-one): Here one record of any object can be related to many records of other object and vice versa.
Many-to-many: Here more than one records of an object can be related to n number of records of another object.


```
7. What are the disadvantages of file processing systems?
= 
 -   Inconsistent
 -   Not secure 
 -  Data redundancy
 -  Difficult in accessing data 
 -  Data isolation
 -  Data integrity
 -  Concurrent access is not possible
 -  Limited data sharing
 -  Atomicity problem


```
8. What is data abstraction in DBMS? 
    = Data abstraction in DBMS refers to the concept of hiding the complex details of data storage and organization from users and applications, providing them with a simplified and consistent view of the data. It allows users to interact with the database at a higher level of understanding without needing to be aware of the underlying implementation details.

    levels Of Abstraction ->

 -    Physical level: It is the lowest level of abstraction. It describes how data are stored.

 -    Logical level: It is the next higher level of abstraction. It describes what data are stored in the database and what the relationship among those data is.

 -    View level: It is the highest level of data abstraction. It describes only part of the entire database.

 -    For example- User interacts with the system using the GUI and fill the required details, but the user doesn't have any idea how the data is being used. So, the abstraction level is entirely high in VIEW LEVEL.

    Then, the next level is for PROGRAMMERS as in this level the fields and records are visible and the programmers have the knowledge of this layer. So, the level of abstraction here is a little low in VIEW LEVEL.
    
    And lastly, physical level in which storage blocks are described.

9. What is the E-R model?
    = E-R model is a short name for the Entity-Relationship model. This model is based on the real world. It contains necessary objects (known as entities) and the relationship among these objects.

    An ER (Entity-Relationship) diagram is a visual representation of the entities (objects), relationships, and attributes within a database system. It is used to design and illustrate the logical structure of a database.

    The Entity is a set of attributes in a database. An entity can be a real-world object which physically exists in this world. All the entities have their attribute which in the real world considered as the characteristics of the object.

    For example: In the employee database of a company, the employee, department, and the designation can be considered as the entities. These entities have some characteristics which will be the attributes of the corresponding entity.


10. Weak attribute and Strong attribute?

= 
- Strong Attribute:
    A strong attribute is an attribute that is fully functional and can uniquely identify, exist as  an entity on its own. It is not dependent on any other attribute within the entity. Strong attributes are represented inside the entity rectangle in an ER diagram.

    For example, consider an entity "Student" with attributes such as "Student ID" and "Name." The "Student ID" attribute can uniquely identify a student, even without considering any other attributes. Hence, it is a strong attribute.

-  Weak Attribute: 
    A weak attribute is an attribute that depends on some other attribute(strong attribute) within the entity to uniquely identify an entity. It cannot function independently to identify the entity on its own. Weak attributes are represented with dashed lines in an ER diagram.

    Continuing with the "Student" entity example, suppose we introduce an attribute called "Course Enrollment" to represent the courses a student is enrolled in. This attribute cannot uniquely identify a student because multiple students can be enrolled in the same courses. It relies on the "Student ID" attribute to establish uniqueness. Therefore, "Course Enrollment" would be a weak attribute.


11. ACID property?  

 = ACID is an acronym that represents a set of properties or characteristics that ensure reliability, consistency, and integrity in database transactions. These properties are fundamental for maintaining the correctness and reliability of data in a DBMS (Database Management System). Let's dive into each property ->

   -  Atomicity: Atomicity refers to the "all-or-nothing" property of a transaction. It ensures that a transaction is treated as a single, indivisible unit of work. Either all the operations within a transaction are executed successfully, and the changes are committed to the database, or none of the operations take effect, and the database remains unchanged. If any part of the transaction fails or encounters an error, all changes made by the transaction are rolled back to the previous consistent state. Atomicity ensures data integrity and prevents the database from being left in an inconsistent state.

 -    Consistency: Consistency ensures that a transaction brings the database from one consistent state to another consistent state. It enforces predefined rules or constraints on the data, maintaining the validity and integrity of the database. In other words, a transaction should not violate any integrity constraints, such as unique key constraints or referential integrity, during its execution. If a transaction violates any consistency rules, the entire transaction is rolled back, and the database remains unchanged.
 
 -    Isolation: Isolation ensures that concurrent transactions do not interfere with each other. Each transaction should be executed in isolation, as if it were the only transaction running in the system. Isolation prevents various concurrency problems, such as dirty reads, non-repeatable reads, and phantom reads. It ensures that the intermediate states of a transaction are not visible to other transactions until the changes are committed. Isolation guarantees data consistency and prevents conflicts between concurrent transactions.

 -    Durability: Durability ensures that once a transaction is committed, its changes are permanent and will survive any subsequent failures, such as power outages, system crashes, or hardware failures. The committed data is stored in a stable and permanent manner, typically on disk or other non-volatile storage, to ensure its durability. Even in the event of a system failure, the database can recover the committed state and restore data consistency.

12. Keys in DBMS 
= Keys play an important role in the relational database.
It is used to uniquely identify any record or row of data from the table. It is also used to establish and identify relationships between tables.  
Sure! Let's discuss the concepts of primary key, candidate key, super key, and foreign key with examples:

   -  1. Super Key / key :
    A super key is a set of all the keys (with single or multiple attributes) which can uniquely identify the records of the table.
    Example:
    Consider a table called "Employees" with columns such as EmployeeID, Name, Age, and Department. The EmployeeID column can be designated as the primary key since it uniquely identifies each employee.

  -   2. Candidate Key:
    A candidate key is a column (or a set of columns) that can also uniquely identify each record in a table. In other words, it is a potential primary key. A table can have one or more candidate keys, but only one of them is selected as the primary key.

    Example:
    In the "Employees" table, besides the EmployeeID, suppose there is another column called SocialSecurityNumber (SSN) that also uniquely identifies each employee. In this case, both EmployeeID and SSN are candidate keys, but only one of them can be chosen as the primary key.

  -   3. Primary Key:
    A primary key is a unique identifier for each record (or row) in a database table. It uniquely identifies each record and ensures that there are no duplicate values. 
    A primary key cannot have null values, and every table should have a primary key.
    Only one primary key is allowed per table. (candidate key also identfies unique records int the table but DBA choose only one primary key among candidate key )
        Example:
    In the "Employees" table, a combination of EmployeeID and Department can uniquely identify each employee. 
    This combination (EmployeeID + Department) is a super key because it satisfies the uniqueness requirement.
     However, it is not the minimum set of columns required for a candidate key since the EmployeeID itself is sufficient. Hence, EmployeeID is the candidate key, and (EmployeeID + Department) is a super key.

  -   4. Foreign Key:
    A foreign key is a column or a set of columns in one table that refers to the primary key of another table. It establishes a relationship between two tables, enforcing referential integrity. The values in the foreign key column(s) must exist in the referenced table's primary key or be null (if allowed).

    Example:
    Suppose we have two tables, "Employees" and "Departments." The "Employees" table has a foreign key column called DepartmentID, which references the primary key column DepartmentID in the "Departments" table. The DepartmentID in the "Employees" table ensures that each employee is associated with a valid department by referencing the corresponding department record in the "Departments" table.

    In summary, the primary key uniquely identifies each record in a table, while a candidate key is a potential primary key. A super key is a combination of columns that can uniquely identify records. Foreign keys establish relationships between tables by referencing the primary key of another table.

13. What is Attribute?
= An attribute refers to a database component. It is used to describe the property of an entity. An attribute can be defined as the characteristics of the entity. Entities can be uniquely identified using the attributes. Attributes represent the instances in the row of the database.
     

    For example: If a student is an entity in the table then age will be the attribute of that student. 


    -         Simple attribute : 
        An attribute that cannot be further subdivided into components is a simple attribute. 
        Example: The roll number of a student, the id number of an employee. 
 
    -     Composite attribute : 
        An attribute that can be split into components is a composite attribute. 

        Example: The address can be further split into house number, street number, city, state, country, and pin code, the name can also be 
        split into first name middle name, and last name. 

        Single-valued attribute : 
        The attribute which takes up only a single value for each entity instance is a single-valued attribute. 

        Example: The age of a student. 

     -    Multi-valued attribute : 
        The attribute which takes up more than a single value for each entity instance is a multi-valued attribute. 

        Example: Phone number of a student: Landline and mobile. 

     -    Derived attribute : 
        An attribute that can be derived from other attributes is derived attributes. 

        Example: Total and average marks of a student. 

     -    Complex attribute :
        Those attributes, which can be formed by the nesting of composite and multi-valued attributes, are called Complex  Attributes. These 
        attributes are rarely used in DBMS(DataBase Management System). That’s why they are not so popular.

        Stored attribute :
        The stored attribute are those attribute which doesn’t require any type of further update since they are stored in the database.

        Example: DOB(Date of birth) is the stored attribute.

      -   Key attribute:
        Key attributes are those attributes that can uniquely identify the entity in the entity set.

        Example: Roll-No is the key attribute because it can uniquely identify the student. 


14. How many types of database languages are?
=  There are four types of database languages:

        Data Definition Language (DDL) e.g., CREATE, ALTER, DROP, TRUNCATE, RENAME, etc. All these commands are used for updating the data that's why they are known as Data Definition Language.

        Data Manipulation Language (DML) e.g., SELECT, UPDATE, INSERT, DELETE, etc. These commands are used for the manipulation of already updated data that's why they are the part of Data Manipulation Language.

        DATA Control Language (DCL) e.g., GRANT and REVOKE. These commands are used for giving and removing the user access on the database. So, they are the part of Data Control Language.

        Transaction Control Language (TCL) e.g., COMMIT, ROLLBACK, and SAVEPOINT. These are the commands used for managing transactions in the database. TCL is used for managing the changes made by DML.

15. Difference  Schema and tables?
= 
    Schema:
    A schema is a logical container or a namespace that represents the overall structure and organization of a database. It acts as a blueprint for the database, defining the database's structure, relationships, constraints, and permissions. It provides a way to group related database objects together, such as tables, views, indexes, and stored procedures.

    In a schema, you define the database's logical structure, including the tables and their relationships, without specifying the actual data. It represents the overall design and organization of the database and serves as a conceptual framework for understanding and managing the database.

    A schema can be thought of as a container that holds one or more tables and other objects. It provides a logical separation and allows for better organization and management of database objects.

    Table:
    A table is a fundamental database object that represents a collection of related data organized in rows and columns. It is used to store and represent the actual data within a database. Tables consist of columns (also known as attributes or fields) that define the types of data that can be stored and rows (also known as records or tuples) that represent individual instances or records within the table.

    Each table is associated with a specific schema and is defined by its name, columns, and various constraints, such as primary keys, foreign keys, and uniqueness constraints. Tables store the actual data in a structured manner, following the defined schema.

    In summary, a schema represents the logical structure and organization of a database, providing a blueprint for the database design. It serves as a container for tables and other database objects. Tables, on the other hand, store the actual data within the database and represent collections of related information organized in rows and columns.


16. Transparency In DBMS , Types ?

= In the context of Distributed Database Management Systems (DDBMS),Transparent hides implementation details from the user. 
Transparency aims to provide a simplified and unified view of the distributed database, allowing users to interact with it as if it were a single, centralized database.
There are several types of transparency in DDBMS:

        1. Distribution Transparency: Distribution transparency hides the fact that the data is distributed across multiple nodes or sites. Users and applications can access and manipulate the data without being aware of its distribution. It allows the system to handle data distribution and replication transparently, ensuring that users can operate on the distributed data as if it were stored locally.

        2. Location Transparency: Location transparency hides the physical location of data in a distributed system. Users and applications can access the data using logical names or identifiers, without needing to know the specific node or site where the data is stored. The system handles the process of locating and retrieving the data transparently, regardless of its actual physical location.

        3. Replication Transparency: Replication transparency hides the fact that data is replicated across multiple sites for improved availability, fault tolerance, and performance. Users and applications can access the data without being aware of its replicated copies. The system ensures that data modifications are propagated to all replicas and that consistency is maintained across the distributed copies, providing a transparent view of the data.

        4. Fragmentation Transparency: Fragmentation transparency hides the fact that data is divided into fragments or subsets across multiple nodes or sites. Users and applications can access and manipulate the data as if it were stored in a single logical unit. The system handles the process of data fragmentation and aggregation transparently, ensuring that users can work with the distributed data without explicitly dealing with the fragmentation details. user thinks that they are interacting with a single data source entity.

        By providing transparency in these various aspects, DDBMS aims to simplify the interaction with distributed databases, shielding users and applications from the complexities of data distribution, replication, and fragmentation. It allows for seamless integration and access to data across multiple nodes or sites, providing a unified and transparent view of the distributed database system.


17. Are NULL values in a database the same as that of blank space or zero ?

    = No, a NULL value is very different from that of zero and blank space as it represents a value that is assigned, unknown, unavailable, or not applicable as compared to blank space which represents a character and zero represents a number.

    Example: NULL value in “number_of_courses” taken by a student represents that its value is unknown whereas 0 in it means that the student hasn't taken any courses.


18.  Explain the difference between the DROP ,  DELETE and TRUNCATE command in a DBMS ?

= In SQL, `DROP`, `DELETE`, and `TRUNCATE` are three different commands used to remove data or database objects, but they have distinct purposes and consequences:

  DROP:
   - The `DROP` command is used to remove database objects like tables, views, indexes, or entire databases.
   - When you use `DROP`, the object and all its associated data are permanently deleted from the database, and it cannot be recovered.
   - The syntax to drop a table is as follows:
     ```sql
     DROP TABLE table_name;
     ```
   - Make sure to use this command with caution, as data loss is irreversible.

  DELETE:
   - The `DELETE` command is used to remove rows (records) from a table based on a specified condition.
   - Unlike `DROP`, `DELETE` only removes the data and not the entire table or other objects.
   - Deleted rows can be rolled back (if executed within a transaction) or recovered from backups, but it's essential to be careful when using this command to avoid unintentional data loss.
   - The syntax to delete rows from a table is as follows:
     ```sql
     DELETE FROM table_name WHERE condition;
     ```

  TRUNCATE:
   - The `TRUNCATE` command is used to remove all rows from a table quickly. It is more efficient than `DELETE` when you want to empty a table entirely.
   - Like `DELETE`, `TRUNCATE` only removes the data and not the table structure or other objects.
   - `TRUNCATE` is not logged row by row, making it faster and less resource-intensive for large tables. However, it cannot be used with tables that have foreign key constraints referencing them, and it cannot be rolled back.
   - The syntax to truncate a table is as follows:
     ```sql
     TRUNCATE TABLE table_name;
     ```

In summary, use `DROP` to remove entire database objects permanently, use `DELETE` to remove specific rows from a table based on a condition, and use `TRUNCATE` to quickly remove all rows from a table while preserving the table structure. Always exercise caution while using these commands to avoid unintended data loss. It's recommended to take database backups regularly to protect against accidental data deletions.

19. What is meant by normalization and denormalization?

= Normalization is a process of reducing redundancy by organizing the data into multiple tables. Normalization leads to better usage of disk spaces and makes it easier to maintain the integrity of the database. 
      Denormalization is the reverse process of normalization as it combines the tables which have been normalized into a single table so that data retrieval becomes faster. JOIN operation allows us to create a denormalized form of the data by reversing the normalization. 

20. Explain different types of Normalization forms in a DBMS.
 = 
 Normalization in a database management system (DBMS) is the process of organizing a database schema to reduce data redundancy and dependency, thereby improving data integrity and efficiency. The main goal of normalization is to structure the database in such a way that it minimizes data duplication and inconsistencies, leading to a more maintainable and scalable database design.

Normalization is needed for several reasons:

1. **Elimination of Data Redundancy**: Redundant data storage wastes space and can lead to inconsistencies when data is updated in one place but not in others. By breaking down tables into smaller, well-defined components, normalization helps remove redundant data.

2. **Data Integrity**: Normalization helps maintain data integrity by reducing the likelihood of anomalies like update anomalies (changing data in one place without updating related data), insertion anomalies (inability to insert data due to missing related data), and deletion anomalies (deleting data that causes unintended loss of other related data).

3. **Consistency**: When data is stored in multiple places, inconsistencies can arise. Normalization reduces these inconsistencies by ensuring that each piece of data is stored only once and that changes are made in a single location.

4. **Efficient Updates**: With normalized data, updates to the database are more efficient and straightforward. Updates only need to be made in one place, reducing the chances of errors and inconsistencies.

5. **Enhanced Query Performance**: Normalized data often leads to more efficient query execution. Smaller, well-structured tables make it easier for the database engine to retrieve and process data, resulting in faster query response times.

6. **Flexibility**: A normalized database schema is more flexible and adaptable to changes in requirements. New data can be added without causing major disruptions to the existing structure.


    **1NF**: It is known as the first normal form and is the simplest type of normalization that you can implement in a database. A table to be in its first normal form should satisfy the following conditions:
    Every column must have a single value and should be atomic.(Roll No , Name , Course)
    Duplicate columns from the same table should be removed.
    Separate tables should be created for each group of related data and each row should be identified with a unique column.

     **2NF**: It is known as the second normal form. A table to be in its second normal form should satisfy the following conditions:
    The table should be in its 1NF i.e. satisfy all the conditions of 1NF.
    
     example -> 
      R(abcd) ab->cd , b->c (here is the problem b is a prime attribute bcz ab is a candidate key (ab-> abcd) , so b->c , and c is a non prime attribute , so its a functional dependency )

    Every non-prime attribute of the table should be fully functionally dependent on the primary key.
    (how to identify its in 2nf-> when a part of a candidate key depent of a non prime attribute , its a functional dependency)

     **3NF**: It is known as the third normal form. A table to be in its third normal form should satisfy the following conditions:
    The table should be in its 2NF i.e. satisfy all the conditions of 2NF.
    There is no transitive functional dependency of one attribute on any attribute in the same table.
    
    (when a non prime attribute  depends on a another non prime attribute its called transitive dependency , its not allowed in 3nf , exaple-> 
     R(abcd) ab->c , c->d , but here c and d are both non prime 😊
    )

     **BCNF**:BCNF stands for Boyce-Codd Normal Form and is an advanced form of 3NF. It is also referred to as 3.5NF for the same reason. A 
    table to be in its BCNF normal form should satisfy the following conditions:
    The table should be in its 3NF i.e. satisfy all the conditions of 3NF.
    For every functional dependency of any attribute A on B
    (A->B), A should be the super key of the table. It simply implies that A can’t be a non-prime attribute if B is a prime attribute.

21. Explain the difference between a 2-tier and 3-tier architecture in a DBMS.

  = The 2-tier architecture refers to the client-server architecture in which applications at the client end directly communicate with the 
     database at the server end without any middleware involved.
    Example : Contact Management System created using MS-Access or Railway Reservation System, etc.

        The 3-tier architecture contains another layer between the client and the server to provide GUI to the users and make the system much more secure and accessible. In this type of architecture, the application present on the client end interacts with an application on the server end which further communicates with the database system.

    Example : Designing registration form which contains a text box, label, button or a large website on the Internet, etc.

22. What is SQL?
 = SQL is a standard language for retrieving and manipulating structured databases. 
  On the contrary, MySQL is a relational database management system, like SQL Server, Oracle or IBM DB2, that is used to manage SQL databases.
  
23. What are Constraints in SQL?
 =   Constraints are used to specify the rules concerning data in the table.
 a constraint is a rule or condition that is applied to a table or column to enforce data integrity and ensure that the data in the database remains consistent and accurate. Constraints define limits or restrictions on the type of data that can be inserted, updated, or deleted from a table. They help maintain data integrity and prevent data anomalies or inconsistencies.
  It can be applied for single or multiple fields in an SQL table  during the creation of the table or after creating using the ALTER TABLE command. The constraints are:

        NOT NULL - Restricts NULL value from being inserted into a column.
        CHECK - Verifies that all values in a field satisfy a condition.
        DEFAULT - Automatically assigns a default value if no value has been specified for the field.
        UNIQUE - Ensures unique values to be inserted into the field.
        INDEX - Indexes a field providing faster retrieval of records.
        PRIMARY KEY - Uniquely identifies each record in a table.
        FOREIGN KEY - Ensures referential integrity for a record in another table.

24. What is the SELECT statement?
= SELECT operator in SQL is used to select data from a database. The data returned is stored in a result table, called the result-set.

    SELECT * FROM myDB.students;

25. What are some common clauses used with SELECT query in SQL?
= Some common SQL clauses used in conjuction with a SELECT query are as follows:

        WHERE clause in SQL is used to filter records that are necessary, based on specific conditions.

        ORDER BY clause in SQL is used to sort the records based on some field(s) in ascending (ASC) or descending order (DESC).

        SELECT *
        FROM myDB.students
        WHERE graduation_year = 2019
        ORDER BY studentID DESC;

        GROUP BY clause in SQL is used to group records with identical data and can be used in conjunction with some aggregation functions to produce summarized results from the database.

        HAVING clause in SQL is used to filter records in combination with the GROUP BY clause. It is different from WHERE, since the WHERE clause cannot filter aggregated records.

        SELECT COUNT(studentId), country
        FROM myDB.students
        WHERE country != "INDIA"
        GROUP BY country
        HAVING COUNT(studentID) > 5;

26. Aggregate function?

 = An aggregate function performs operations on a collection of values to return a single scalar value. Aggregate functions are often used with the GROUP BY and HAVING clauses of the SELECT statement. Following are the widely used SQL aggregate functions:

AVG() - Calculates the mean of a collection of values.
COUNT() - Counts the total number of records in a specific table or view.
MIN() - Calculates the minimum of a collection of values.
MAX() - Calculates the maximum of a collection of values.
SUM() - Calculates the sum of a collection of values.
FIRST() - Fetches the first element in a collection of values.
LAST() - Fetches the last element in a collection of values.

27. What are the differences between OLTP and OLAP?

    = OLTP stands for Online Transaction Processing, is a class of software applications capable of supporting transaction-oriented programs. An important attribute of an OLTP system is its ability to maintain concurrency. OLTP systems often follow a decentralized architecture to avoid single points of failure. These systems are generally designed for a large audience of end-users who conduct short transactions. Queries involved in such databases are generally simple, need fast response times, and return relatively few records. A number of transactions per second acts as an effective measure for such systems.

    OLAP stands for Online Analytical Processing, a class of software programs that are characterized by the relatively low frequency of online transactions. Queries are often too complex and involve a bunch of aggregations. For OLAP systems, the effectiveness measure relies highly on response time. Such systems are widely used for data mining or maintaining aggregated, historical data, usually in multi-dimensional schemas.

28. Types of join in SQL?

    = In SQL, there are several types of joins that allow you to combine data from multiple tables based on common columns. The most commonly used types of joins are:

            1. Inner Join: Returns only the rows that have matching values in both tables being joined.

            Example:
            ```sql
            SELECT Orders.OrderID, Customers.CustomerName
            FROM Orders
            INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID;
            ```

            2. Left Join (or Left Outer Join): Returns all the rows from the left table and the matching rows from the right table. If there are no matches, it returns NULL values for the right table columns.

            Example:
            ```sql
            SELECT Customers.CustomerName, Orders.OrderID
            FROM Customers
            LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID;
            ```

            3. Right Join (or Right Outer Join): Returns all the rows from the right table and the matching rows from the left table. If there are no matches, it returns NULL values for the left table columns.

            Example:
            ```sql
            SELECT Customers.CustomerName, Orders.OrderID
            FROM Customers
            RIGHT JOIN Orders ON Customers.CustomerID = Orders.CustomerID;
            ```

            4. Full Join (or Full Outer Join): Returns all the rows from both tables, including the unmatched rows. If there is no match, NULL values are returned for the columns of the table that does not have a match.

            Example:
            ```sql
            SELECT Customers.CustomerName, Orders.OrderID
            FROM Customers
            FULL JOIN Orders ON Customers.CustomerID = Orders.CustomerID;
            ```

            5. Cross Join (or Cartesian Join): Returns the Cartesian product of the two tables, resulting in a combination of all rows from both tables. This join does not require a common column.

            Example:
            ```sql
            SELECT Customers.CustomerName, Orders.OrderID
            FROM Customers
            CROSS JOIN Orders;
            ```


29. what group by in sql example?

    = In SQL, the GROUP BY clause is used to group rows based on one or more columns and apply aggregate functions to each group. It is commonly used in combination with aggregate functions like COUNT, SUM, AVG, MAX, or MIN to perform calculations on grouped data. Here's an example to illustrate the usage of GROUP BY:

    Consider a table called "Orders" with the following columns: OrderID, CustomerID, ProductID, and Quantity. We want to calculate the total quantity of products ordered for each customer. Here's how the query would look like:

    ```sql
    SELECT CustomerID, SUM(Quantity) AS TotalQuantity
    FROM Orders
    GROUP BY CustomerID;
    ```

    In this example, we are grouping the rows by the CustomerID column using the GROUP BY clause. The SUM(Quantity) function calculates the total quantity of products for each customer. The result is returned as "TotalQuantity" in the output.

    The output of the above query might look something like this:

    ```
    CustomerID | TotalQuantity
    --------------------------
    1          | 35
    2          | 48
    3          | 22
    ```

    This result shows the total quantity of products ordered by each customer. The GROUP BY clause allows us to summarize the data by grouping it based on a specific column (in this case, CustomerID).

    It's important to note that when using the GROUP BY clause, any columns included in the SELECT statement must either be part of the GROUP BY clause or be used with an aggregate function. In the example above, the CustomerID column is included in the GROUP BY clause, and the Quantity column is used with the SUM function.

    The GROUP BY clause is a powerful tool for analyzing and summarizing data in SQL. It allows you to break down the data into meaningful groups and perform calculations on each group, providing valuable insights into your data.


30. what is subquery in dbms?

    = In database management systems (DBMS), a subquery, also known as a nested query or inner query, is a query that is embedded within another query. It is used to retrieve data from one or more tables and use that result as a part of the larger query.

        Subqueries can be used in various parts of a query, such as the SELECT, FROM, WHERE, HAVING, or JOIN clauses. The result of a subquery is treated as a temporary table, and it can be used in conjunction with other operators, functions, or conditions to filter, sort, or manipulate data in the main query.

        Subqueries are particularly useful when you need to perform operations that involve multiple steps or when you need to filter data based on a condition that cannot be directly expressed in a single query. They provide a way to break down complex problems into smaller, more manageable parts.

        Here's a simple example to illustrate the concept of a subquery. Let's say you have two tables, "Employees" and "Departments," and you want to retrieve the names of all employees who belong to the "Sales" department:

        ```sql
        SELECT EmployeeName
        FROM Employees
        WHERE DepartmentID = (
            SELECT DepartmentID
            FROM Departments
            WHERE DepartmentName = 'Sales'
        );
        ```

        In this example, the subquery `(SELECT DepartmentID FROM Departments WHERE DepartmentName = 'Sales')` retrieves the DepartmentID for the "Sales" department. This result is then used in the main query to filter the employees based on the DepartmentID.

        Subqueries can be powerful tools for performing complex queries and data manipulations in a database. They allow you to break down problems into smaller steps and combine the results to achieve the desired outcome.


31. DBMS Vs. RDBMS ?
= DBMS (Database Management System) and RDBMS (Relational Database Management System) are related concepts but have some key differences. Let's explore the distinctions between the two:

        1. Database Management System (DBMS):
        - A DBMS is a software system that manages and controls the storage, retrieval, and manipulation of data in a database.
        - It provides an interface between the user, applications, and the database itself.
        - DBMS can be non-relational and doesn't strictly enforce a structured data model, allowing for various data models like hierarchical, 
          network, or key-value.
        - It may not support the concept of relationships between data tables, and it might not provide features like data integrity 
         constraints, normalization, or enforcing referential integrity.

        2. Relational Database Management System (RDBMS):
        - RDBMS is a type of DBMS that specifically manages relational databases.
        - It enforces a tabular structure for data representation, where data is organized in tables with rows and columns, and the 
         relationships between tables are maintained through foreign keys.
        - RDBMS follows the principles of the relational model proposed by E.F. Codd in the 1970s.
        - It provides advanced features like data integrity constraints (primary keys, unique keys, foreign keys), normalization to eliminate 
         data redundancy, ACID (Atomicity, Consistency, Isolation, Durability) properties to ensure data consistency, and support for SQL 
          (Structured Query Language) for data manipulation.

        In summary, all RDBMS are DBMS, but not all DBMS are RDBMS. RDBMS is a specialized type of DBMS that adheres to the relational model and provides additional features to ensure data integrity, consistency, and efficiency in handling relational data. Examples of popular RDBMS include MySQL, PostgreSQL, Oracle, SQL Server, and SQLite. On the other hand, non-relational databases like MongoDB, Cassandra, and Redis fall under the broader category of DBMS but are not considered RDBMS because they use different data models and may not support SQL or relational data structures.
    

32.  Advantages of Indexing ?
= Indexing in the context of a database management system (DBMS) refers to the process of creating data structures that improve the speed of data retrieval operations on a database table. An index provides a way to quickly look up records based on the values in one or more columns, similar to how an index in a book helps you quickly find specific topics or information.

Advantages of Indexing in DBMS:

1. **Faster Data Retrieval**: Indexing allows for quicker access to specific rows of data, reducing the need for a full table scan. This is especially useful for large tables where scanning the entire table can be time-consuming.

2. **Improved Query Performance**: Queries that involve filtering, sorting, or joining data based on indexed columns can benefit significantly from indexes. Indexes help the database engine narrow down the relevant rows more efficiently.

3. **Efficient Searching**: Indexes facilitate efficient searching for specific values or ranges within columns, even when dealing with a large dataset.

4. **Reduced Disk I/O**: Indexes can reduce the amount of disk input/output operations required to retrieve data, as they provide a shortcut to directly access the necessary rows.

5. **Support for Constraints**: Some indexes, like primary key and unique key indexes, enforce data integrity by ensuring that duplicate or null values are not inserted into indexed columns.

Disadvantages of Indexing in DBMS:

1. **Increased Storage Overhead**: Indexes require additional storage space to maintain their data structures. For large tables, this can lead to a significant increase in storage requirements.

2. **Slower Write Operations**: Inserting, updating, or deleting rows in a table with indexes can be slower, as the indexes need to be updated to reflect the changes. This can be particularly noticeable when performing batch operations.

3. **Maintenance Overhead**: Indexes need to be maintained whenever data is added, modified, or deleted. This can impact the performance of these operations and might require periodic index maintenance routines.

4. **Choice of Indexing Columns**: Selecting the appropriate columns to index is crucial. Indexing too many columns or the wrong columns can lead to inefficient use of indexes and increased overhead.

5. **Index Fragmentation**: Over time, indexes can become fragmented due to data changes, which can lead to reduced performance. Regular maintenance is required to defragment indexes.

6. **Complexity**: Managing indexes requires careful consideration and planning. As a database evolves, adding or modifying indexes might be necessary, which can increase the complexity of database management.

In summary, indexing in a DBMS offers significant benefits in terms of improved query performance and data retrieval speed. However, it comes with the trade-offs of increased storage overhead, potential slowdown in write operations, and the need for careful maintenance and planning to ensure optimal performance. The decision to create indexes should be based on a thorough understanding of the database schema, query patterns, and performance requirements.