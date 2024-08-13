use 21_sep;
create table emp_data(
id int primary key,
name varchar(20) not null,
age int check(age>18),
branch varchar(50)
);
create table dep(
dep_id  int ,
dep_name varchar(50),
id int,
foreign key dep(id) references emp_data(id)
);
drop table dep;
insert into emp_data values
(101,"janvi",50,"ahm"),
(102,"anjali",60,"surat,"),
(103,"chetan",28,"baroda"),
(104,"rahul",40,"ahm");

insert into dep values
(1,"HR",101),
(2,"technical",101),
(3,"finance",104),
(4,"marketing",103);

select * from emp_data;

select * from dep;

insert into dep values (5,"sales",105);
-- joins is used to display columns of diffrent tables

-- 1)inner join:display matching data from tables
-- syntax: select col_names from 1st table inner join 2nd table on matching columns;

select * from emp_data inner join dep on emp_data.id=dep.id;

select emp_data.id,emp_data.name,dep.dep_name from emp_data inner join dep on emp_data.id=dep.id; 

-- with alias
select e.id,e.name,d.dep_name from emp_data as e inner join dep as d on e.id=d.id;

-- 2)left join:display matching data from tables and display all records from left table

select e.id,e.name,d.dep_name from emp_data as e left join dep as d on e.id=d.id;

-- 3)right join:display matching data from tables and display all records from right table

select * from emp_data as e right join dep as d on e.id=d.id;

-- full join
select * from emp_data as e left join dep as d on e.id=d.id
union
select * from emp_data as e right join dep as d on e.id=d.id;
