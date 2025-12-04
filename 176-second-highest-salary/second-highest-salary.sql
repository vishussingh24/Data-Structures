# Write your MySQL query st
SELECT mAX(salary) as SecondHighestSalary 
FROM Employee
WHERE salary < (Select mAX(salary) from Employee);