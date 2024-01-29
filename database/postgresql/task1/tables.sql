create table if not exists Genr (
	id serial4 primary key,
	name varchar(40) not null
);

create  table if not exists Singer ( 
	id serial4 primary key,
	name varchar(40) not null,
	genr_id integer not null references Genr(id)
);

create table if not exists Albom (
	id serial4 primary key,
	name varchar(40) not null,
	year_ integer not null,
	singer_id integer not null references Singer(id)
);

create table if not exists Treck (
	id serial4 primary key,
	name varchar(40) not null,
	duration integer not null,
	albom_id integer not null references Albom(id)
);

create table if not exists Colection (
	id serial4 primary key,
	name varchar(40) not null,
	year_ integer not null,
	treck_id integer not null references Treck(id)
);
