-- first request

select name, count(sg.singer_id) from genre g 
left join singer_genre sg on g.id  = sg.genre_id
group by name;

-- second request

select name, count(treck_id) from album a 
left join treck_album ta on a.id = ta.album_id 
where a.year_ between 2019 and 2020
group by name; 

-- third request

select a.name, sum(t.duration)/count(ta.treck_id) from album a
left join treck_album ta on a.id = ta.album_id
left join treck t on ta.treck_id = t.id 
group by a.name
order by sum(t.duration)/count(ta.treck_id) desc;

--fourth request

select distinct s.name from singer s 
join album_singer as2 on s.id = as2.singer_id 
join album a on a.id = as2.album_id
where a.year_ != 2020;

--fifth request

select distinct name from collection c 
left join collection_treck ct on c.id = ct.collection_id 
left join treck_album ta on ct.treck_id = ta.treck_id
left join album_singer as2 on ta.album_id = as2.album_id 
where as2.singer_id = 1;

