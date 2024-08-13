USE practice;

CREATE TABLE PAYMENT(
	CUSTOMER_ID INT PRIMARY KEY AUTO_INCREMENT,
    CUSTOMER VARCHAR(50),
    MODE VARCHAR(50),
    CITY VARCHAR(50)
);

INSERT INTO PAYMENT(CUSTOMER_ID,CUSTOMER,MODE,CITY)
VALUES(101,"OLIVIA BARRETT","NET BANKING","PORTLAND");
INSERT INTO PAYMENT(CUSTOMER,MODE,CITY)
VALUES
("ETHAN SINCLAIR","CREDIT CARD","MIAMI"),
("MAYA HERNANDEZ","CREDIT CARD","SEATTLE"),
("LIAM DONOVAN","NET BANKING","DENVER"),
("SOPHIA NGUYEN","CREDIT CARD","NEW ORLEANS"),
("CALEB FOSTER","DEBIT CARD","MINNEAPOLIS"),
("AVA PATEL","DEBIT CARD","PHOENIX"),
("LUCAS CARTER","NET BANKING","COSTON"),
("ISABELLA MARTINEZ","NET BANKING","NASHVILLE"),
("JACKSON BROOKS","CREDIT CARD","BOSTON");

DROP TABLE PAYMENT;
SELECT * FROM PAYMENT;

SELECT MODE ,COUNT(CUSTOMER)
FROM PAYMENT
GROUP BY MODE;




SELECT MODE,COUNT(MODE)
FROM PAYMENT
GROUP BY MODE;