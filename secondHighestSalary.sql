-- Write your MySQL query statement below
SELECT max(Salary) as SecondHighestSalary
FROM Employee
WHERE Salary not in (SELECT max(Salary) FROM Employee)
