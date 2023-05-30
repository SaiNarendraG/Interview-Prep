# Write your MySQL query statement below
Select w1.id
from Weather w1, Weather w2
where w1.Temperature > w2.temperature 
and datediff(w1.recordDate, w2.recordDate) = 1;