# Write your MySQL query statement below
SELECT d.name AS Department, 
e.name AS Employee, e.Salary AS Salary
FROM Employee e
JOIN Department d ON e.departmentId=d.id
WHERE e.salary=(
    SELECT MAX(salary)
    FROM Employee
    WHERE departmentID = e.departmentId
)