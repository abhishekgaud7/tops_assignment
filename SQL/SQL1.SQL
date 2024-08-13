USE STUDENT;

CREATE TABLE CLASS(
		stu_id INT PRIMARY KEY auto_increment default 1,
        stu_name varchar(50),
        stu_roll_no INT NOT NULL,
        stu_clas_name varchar(50),
        stu_phone_no varchar(50),
        stu_DOB DATE
);
INSERT INTO CLASS(stu_name,stu_roll_no,stu_clas_name,stu_phone_no,stu_DOB)VALUES("ABHISHEK",1002,1,"9171","2003-07-30");

SELECT * FROM STUDENT.CLASS;