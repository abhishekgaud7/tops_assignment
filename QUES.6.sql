USE ASSIGNEMENT;

CREATE TABLE PRODUCT(
	PRO_ID INT PRIMARY KEY AUTO_INCREMENT,
    PRO_NAME VARCHAR (50),
    PRO_PRICE FLOAT,
    PRO_COMM INT
);

SELECT * FROM PRODUCT;

INSERT INTO PRODUCT(PRO_ID,PRO_NAME,PRO_PRICE,PRO_COMM)
VALUES(101,"MOTHER BOARD",3200.00,15);

INSERT INTO PRODUCT(PRO_NAME,PRO_PRICE,PRO_COMM)
VALUES("Key Board",450.00,16), 
("ZIP drive",250.00,14), 
("Speaker",550.00,16), 
("Monitor",5000.00,11), 
("DVD drive",900.00,12), 
("CD drive",800.00,12), 
("Printer",2600.00,13), 
("Refill cartridge",350.00,13), 
("Mouse","250.00",12);

SELECT PRO_ID,PRO_NAME,PRO_PRICE,PRO_COMM FROM PRODUCT
WHERE PRO_PRICE<200 OR PRO_PRICE<600;

-- 21.From the following table, write a SQL query to calculate the average price 
-- for a manufacturer code of 16. Return avg. 

SELECT AVG(PRO_PRICE) AS avg_price
FROM PRODUCT
WHERE PRO_COMM = 16;

-- 22. From the following table, write a SQL query to display the pro_name as 
-- 'Item Name' and pro_priceas 'Price in Rs.' 

SELECT PRO_NAME AS "ITEM NAME",PRO_PRICE AS "PRICE IN RS"
FROM PRODUCT;

-- 23. From the following table, write a SQL query to find the items whose prices 
-- are higher than or equal to $250. Order the result by product price in 
-- descending, then product name in ascending. Return pro_name and 
-- pro_price.

SELECT PRO_NAME,PRO_PRICE FROM PRODUCT
WHERE PRO_PRICE>=250 ORDER BY  PRO_PRICE DESC,PRO_NAME ASC;

-- 24. From the following table, write a SQL query to calculate average price of the 
-- items for each company. Return average price and companycode. 

SELECT PRO_COMM AS companycode, AVG(PRO_PRICE) AS average_price
FROM PRODUCT
GROUP BY PRO_COMM;
