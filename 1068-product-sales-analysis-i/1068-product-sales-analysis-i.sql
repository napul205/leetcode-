# Write your MySQL query statement below
select a.product_name, b.year, b.price from Product a join Sales b where a.product_id = b.product_id;