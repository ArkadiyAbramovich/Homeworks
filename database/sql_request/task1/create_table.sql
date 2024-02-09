create table if not exists genre (
	id serial4 primary key,
	name varchar not null
); 

create table if not exists singer (
	id serial4 primary key,
	name varchar not null
);

create table if not exists album (
	id serial4 primary key,
	name varchar not null,
	year_ int not null 
);

create table if not exists singer_genre (
	genre_id int not null references genre(id),
	singer_id int not null references singer(id)
);

create table if not exists album_singer (
	album_id int not null references album(id),
	singer_id int not null references singer(id)
);

create  table if not exists treck (
	id serial4 primary key,
	name varchar not null,
	duration float not null
);

create table if not exists collection (
	id serial4 primary key,
	name varchar not null,
	year_ int not null
);

create table if not exists collection_treck (
	collection_id int not null references collection(id),
	treck_id int not null references treck(id)
);

create table if not exists treck_album(
	treck_id int not null references treck(id),
	album_id int not null references album(id)
);