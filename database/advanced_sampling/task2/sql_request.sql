--first request

select name, duration from treck
order by duration desc
limit 1; 

--second request

select name from treck t 
where duration >= 3.5;

--third request

select name from collection c
where  year_ between 2018 and 2020;

--fourth request

select name from singer s 
where name not like '% %';

--fifth request

select name from treck t 
where name like '%My%';




