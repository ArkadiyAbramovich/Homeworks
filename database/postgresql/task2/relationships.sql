create table if not exists Employee (
	id serial4 primary key,
	name varchar(40) not null,
	department integer not null,
	id_director integer references Employee(id)
);
