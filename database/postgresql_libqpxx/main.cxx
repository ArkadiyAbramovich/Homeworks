#include <pqxx/pqxx>
#include "database.hxx"
#include <iostream>    
#include <string>                                      

int main() {

    std::string connection_str = "host=127.0.0.1 "
                                    "port=5432 "
                                    "dbname=newdb "
                                    "user=new_user "
                                    "password=new_user";

    Database database(connection_str);

    std::string sql_request_1 = "CREATE TABLE IF NOT EXISTS Client( " 
                                                    "id serial4 Primary Key, "
                                                    "first_name VARCHAR NOT NULL, "
                                                    "last_name VARCHAR NOT NULL, "
                                                    "email VARCHAR NOT NULL, "
                                                    "phone BIGINT);";

    std::string sql_request_2 = "CREATE TABLE IF NOT EXISTS Client_Phone( " 
                                                    "id serial4 Primary Key, "
                                                    "phone BIGINT, "
                                                    "client_id INT REFERENCES Client(id));";

    database.CreateTable(sql_request_1);
    database.CreateTable(sql_request_2);

    std::string first_name, last_name, email = " ";
    std::cout << "Enter first name: ";  std::cin >> first_name;
    std::cout << "Enter last name: ";   std::cin >> last_name;
    std::cout << "Enter email: ";       std::cin >> email;
    database.AddClient(first_name, last_name, email);


    std::string sql_request_3 = "INSERT INTO Client_Phone(phone, client_id) VALUES(9233350733, 8);";
    database.AddPhone(sql_request_3);


    std::string sql_request_4 = "UPDATE client SET first_name = 'Arkady' WHERE id = 1";
    database.ChangeClientInfo(sql_request_4);


    std::string sql_request_5 = "SELECT first_name FROM Client WHERE id = 1";
    std::string result = database.GetClientInfo(sql_request_5);
    std::cout << result;


    std::string sql_request_6 = "DELETE FROM Client_Phone WHERE id = 1";
    database.DeletePhone(sql_request_6);


    std::string sql_request_7 = "DELETE FROM Client WHERE id = 1";
    database.DeleteClient(sql_request_7);

    return 0;
}