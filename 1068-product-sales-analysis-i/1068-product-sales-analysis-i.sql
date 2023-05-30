# Write your MySQL query statement below


select distinct P.product_name , S.year , S.price from Sales as S inner join Product as P using (product_id) ; 