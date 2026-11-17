# Write your MySQL query statement below
-- select distinct l1.num as ConsecutiveNums
-- from Logs l1
-- join Logs l2 on l1.id = l2.id - 1
-- join Logs l3 on l2.id = l3.id - 1
-- where l1.num = l2.num
-- and l2.num = l3.num;

select distinct num as ConsecutiveNums 
from (
    select
        num, 
        LEAD(num, 1) over (order by id) as next_num1,
        LEAD(num, 2) over (order by id) as next_num2
    from Logs
) as temp_table 
where num = next_num1 and num = next_num2;