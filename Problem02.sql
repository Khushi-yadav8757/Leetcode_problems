--1378. Replace Employee ID With The Unique Identifier
Ans:
SELECT euni.unique_id, e.name
FROM Employees e
LEFT JOIN EmployeeUNI euni
ON e.id = euni.id;
