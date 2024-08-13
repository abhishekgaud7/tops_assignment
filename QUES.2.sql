USE 21_SEP;
CREATE TABLE EMPLOYEE1(
	EMPLOYEE_ID INT PRIMARY KEY AUTO_INCREMENT,
    FIRST_NAME VARCHAR(50),
    LAST_NAME VARCHAR(50),
    SALARY INT(20),
    JOINING_DATE DATE,
    DEPARTMENT VARCHAR(50)
);
 SELECT * FROM EMPLOYEE1;
 SELECT * FROM INCENTIVE;
 
 INSERT INTO EMPLOYEE1 VALUES
(1,"ABHISHEK","GAUD",100000000,"2003-07-30","SOFTWARE ENGG.");

 INSERT INTO EMPLOYEE1 (FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES
("AADHYA","SAXENA",100000,"2003-09-21","GATE"),
("DIMPLE","BHATNAGAR",90000,"2004-03-05","FULL-STACK"),
("RUPESH","BHARGAVA",80000,"2003-02-22","GOV."),
("YASH","YADAV",75000,"2004-08-08","FINANCE"),
("ROY","THOMAS",70000,"2013-04-08","BANKING"),
("TOM","JOSE",65000,"2013-07-07","INSURANCE"),
("JERRY","PINTO",60000,"2003-07-05","FINANCE"),
("PHILIP","MATHEW",55000,"2013-07-03","FULL-STACK"),
("TESTNAME1","BINTO",50000,"2013-07-09","GATE"),
("TESTNAME2","ROJERS",45000,"2012-07-05","FINANCE"),
("TESTNAME3","STEEVE",40000,"2014-07-08","INSURANCE");

CREATE TABLE INCENTIVE(
	
    INCENTIVE_DATE VARCHAR(50),
    INCENTIVE_AMOUNT INT,
    
    EMPLOYEE_ID INT,
	FOREIGN KEY INCENTIVE(EMPLOYEE_ID) REFERENCES EMPLOYEE1(EMPLOYEE_ID)
);


INSERT INTO INCENTIVE(EMPLOYEE_ID,INCENTIVE_DATE,INCENTIVE_AMOUNT)
VALUES(1,"2013-02-01",5000),
(2,"2013-02-01",4500),
(3,"2013-02-01",4000),
(1,"2013-02-01",5000),
(2,"2013-01-01",3000);




-- 3.Get First_Name from employee table using Temp name “Employee Name”.
ALTER TABLE EMPLOYEE1 RENAME COLUMN FIRST_NAME TO EMPLOYEE_NAME;

-- 4.Get FIRST_NAME, Joining Date, and Salary from employee table.
SELECT EMPLOYEE_NAME,JOINING_DATE,SALARY FROM EMPLOYEE1;

-- 5.Get all employee details from the employee table order by First_Name 
-- Ascending and Salary descending?
SELECT * FROM EMPLOYEE1 ORDER BY EMPLOYEE_NAME ASC,SALARY DESC;

-- 6.Get employee details from employee table whose first name contains ‘J’. 

SELECT * FROM EMPLOYEE1
WHERE EMPLOYEE_NAME LIKE "J   %";  

-- 7.Get department wise maximum salary from employee table order by salaryascending? 

SELECT DEPARTMENT, MAX(SALARY) AS max_salary
FROM EMPLOYEE1
GROUP BY DEPARTMENT
ORDER BY max_salary ASC;

-- 8.Select first_name, incentive amount from employee and incentives table 
-- forthose employees who have incentives and incentive amount greater than 
-- 3000 

-- -----------------ERROR-------------


-- 9. Create After Insert trigger on Employee table which insert records in 
-- viewtable 


-- --------------------------ERROR-----------------------------------






