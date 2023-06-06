# Write your MySQL query statement below
select v1.name, v2.bonus from Employee v1 left join Bonus v2 on v1.empId = v2.empId where bonus <1000 or bonus is null;