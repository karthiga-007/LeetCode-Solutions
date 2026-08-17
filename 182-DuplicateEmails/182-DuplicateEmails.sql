-- Last updated: 8/17/2026, 7:28:05 PM
# Write your MySQL query statement below
SELECT email FROM Person
GROUP BY email
HAVING COUNT(email) > 1;