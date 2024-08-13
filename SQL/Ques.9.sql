-- TRIGGER IS CALLED AUTOMATICALLY
-- BEFORE INSERT
USE 21_SEP;

CREATE TABLE RESULT1(
	ID INT PRIMARY KEY,
	MARK1 INT  NOT NULL,
    MARK2 INT NOT NULL,
    TOTAL INT
);

CREATE TRIGGER SET_DATA
BEFORE INSERT ON RESULT1
FOR EACH ROW
SET NEW.TOTAL=NEW.MARK1+NEW.MARK2;


INSERT INTO RESULT1(ID,MARK1,MARK2)
VALUES(101,98,97),
(102,89,87),
(103,79,78),
(104,69,68);

SELECT * FROM RESULT1;