# Write your MySQL query statement below
SELECT D.name "Department", E.name "Employee", E.salary "Salary" FROM Employee E
INNER JOIN
(SELECT departmentId, MAX(salary) salary FROM Employee
    GROUP BY departmentId) max_salaries
ON E.salary = max_salaries.salary AND E.departmentId = max_salaries.departmentId
LEFT JOIN Department D
ON E.departmentId = D.id;