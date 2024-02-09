 insert  into genre(name) values('hip-hop');
 insert  into genre(name) values('rock');
 insert  into genre(name) values('jazz');
 insert  into genre(name) values('country');

 insert  into singer(name) values('Eminem');
 insert  into singer(name) values('Scorpion');
 insert  into singer(name) values('louis Armstrong');
 insert  into singer(name) values('John Denver');

 insert  into album(name, year_) values('Marshall Mathers LP', 2000);
 insert  into album(name, year_) values('Kamikaze', 2018);
 insert  into album(name, year_) values('Revival', 2017);
 insert  into album(name, year_) values('Hot Heavy', 1982);
 insert  into album(name, year_) values('Live Bites', 1995);
 insert  into album(name, year_) values('Comeblack', 2011);
 insert  into album(name, year_) values('The Blues Heritage', 1973);
 insert  into album(name, year_) values('The Geat Summit', 1961);
 insert  into album(name, year_) values('The Blues Heritage', 1973);
 insert  into album(name, year_) values('A Single Stap', 2019);
 insert  into album(name, year_) values('Take Me Home', 2010);
 insert  into album(name, year_) values('Colorado Sunsat', 2020);

 insert  into treck(name, duration) values('White Dove', 4.20);
 insert  into treck(name, duration) values('Take Me Home', 3.10);
 insert  into treck(name, duration) values('Lose Yourself', 5.20);
 insert  into treck(name, duration) values('What a Wonderful World', 2.20);
 insert  into treck(name, duration) values('Superman', 5.50);
 insert  into treck(name, duration) values('My sweet Lady', 4.50);
 insert  into treck(name, duration) values('Not Afraid', 4.10);
 insert  into treck(name, duration) values('Venom', 4.30);
 insert  into treck(name, duration) values('When I am Gone', 4.40);
 insert  into treck(name, duration) values('Stan', 6.45);
 insert  into treck(name, duration) values('Wind of Change', 5.10);
 insert  into treck(name, duration) values('Still Loving You', 6.40);
 insert  into treck(name, duration) values('No One Likes You', 3.50);
 insert  into treck(name, duration) values('Rock You Like a Hurricane', 4.10);
 insert  into treck(name, duration) values('Rock Mountain High', 4.40);
 insert  into treck(name, duration) values('Perhaps Love', 2.50);
 insert  into treck(name, duration) values('Thanks God I am a country Boy', 3.10);
 insert  into treck(name, duration) values('Calypso', 3.35);
 insert  into treck(name, duration) values('Bluberry Hill', 2.30);
 insert  into treck(name, duration) values('When the Saints', 4.40);
 insert  into treck(name, duration) values('Summertime', 5.00);
 insert  into treck(name, duration) values('Santa Baby', 3.24);
 insert  into treck(name, duration) values('All Blues', 11.35);
 insert  into treck(name, duration) values('In the Mood', 3.21);

 insert  into collection(name, year_) values('Collection1', 2018);
 insert  into collection(name, year_) values('Collection2', 2017);
 insert  into collection(name, year_) values('Collection3', 2013);
 insert  into collection(name, year_) values('Collection4', 2020);

 insert  into singer_genre(singer_id, genre_id) values(1, 1);
 insert  into singer_genre(singer_id, genre_id) values(2, 2);
 insert  into singer_genre(singer_id, genre_id) values(3, 3);
 insert  into singer_genre (singer_id, genre_id) values(4, 4);

 insert  into album_singer(album_id, singer_id) values(1, 1);
 insert  into album_singer(album_id, singer_id) values(2, 1);
 insert  into album_singer(album_id, singer_id) values(3, 1);
 insert  into album_singer(album_id, singer_id) values(4, 2);
 insert  into album_singer(album_id, singer_id) values(5, 2);
 insert  into album_singer(album_id, singer_id) values(6, 2);
 insert  into album_singer(album_id, singer_id) values(7, 3);
 insert  into album_singer(album_id, singer_id) values(8, 3);
 insert  into album_singer(album_id, singer_id) values(9, 3);
 insert  into album_singer(album_id, singer_id) values(10, 4);
 insert  into album_singer(album_id, singer_id) values(11, 4);
 insert  into album_singer(album_id, singer_id) values(12, 4);

 insert  into collection_treck(collection_id, treck_id) values(1, 3);
 insert  into collection_treck(collection_id, treck_id) values(1, 7);
 insert  into collection_treck(collection_id, treck_id) values(1, 1);
 insert  into collection_treck(collection_id, treck_id) values(1, 23);
 insert  into collection_treck(collection_id, treck_id) values(1, 19);
 insert  into collection_treck(collection_id, treck_id) values(1, 13);

 insert  into collection_treck(collection_id, treck_id) values(2, 2);
 insert  into collection_treck(collection_id, treck_id) values(2, 5);
 insert  into collection_treck(collection_id, treck_id) values(2, 7);
 insert  into collection_treck(collection_id, treck_id) values(2, 11);
 insert  into collection_treck(collection_id, treck_id) values(2, 20);
 insert  into collection_treck(collection_id, treck_id) values(2, 22);

 insert  into collection_treck(collection_id, treck_id) values(3, 19);
 insert  into collection_treck(collection_id, treck_id) values(3, 18);
 insert  into collection_treck(collection_id, treck_id) values(3, 17);
 insert  into collection_treck(collection_id, treck_id) values(3, 16);
 insert  into collection_treck(collection_id, treck_id) values(3, 14);
 insert  into collection_treck(collection_id, treck_id) values(3, 23);

 insert  into collection_treck(collection_id, treck_id) values(4, 3);
 insert  into collection_treck(collection_id, treck_id) values(4, 4);
 insert  into collection_treck(collection_id, treck_id) values(4, 5);
 insert  into collection_treck(collection_id, treck_id) values(4, 6);
 insert  into collection_treck(collection_id, treck_id) values(4, 8);
 insert  into collection_treck(collection_id, treck_id) values(4, 9);

 insert  into treck_album (treck_id, album_id) values(1, 5);
 insert  into treck_album (treck_id, album_id) values(2, 11);
 insert  into treck_album (treck_id, album_id) values(3, 1);
 insert  into treck_album (treck_id, album_id) values(4, 9);
 insert  into treck_album (treck_id, album_id) values(5, 2);
 insert  into treck_album (treck_id, album_id) values(6, 10);
 insert  into treck_album (treck_id, album_id) values(7, 4);
 insert  into treck_album (treck_id, album_id) values(8, 2);
 insert  into treck_album (treck_id, album_id) values(9, 1);
 insert  into treck_album (treck_id, album_id) values(10, 1);
 insert  into treck_album (treck_id, album_id) values(11, 4);
 insert  into treck_album (treck_id, album_id) values(12, 5);
 insert  into treck_album (treck_id, album_id) values(13, 6);
 insert  into treck_album (treck_id, album_id) values(14, 5);
 insert  into treck_album (treck_id, album_id) values(15, 6);
 insert  into treck_album (treck_id, album_id) values(16, 4);
 insert  into treck_album (treck_id, album_id) values(17, 11);
 insert  into treck_album (treck_id, album_id) values(18, 10);
 insert  into treck_album (treck_id, album_id) values(19, 12);
 insert  into treck_album (treck_id, album_id) values(20, 8);
 insert  into treck_album (treck_id, album_id) values(21, 7);
 insert  into treck_album (treck_id, album_id) values(22, 10);
 insert  into treck_album (treck_id, album_id) values(23, 8);
 insert  into treck_album (treck_id, album_id) values(24, 7);





 