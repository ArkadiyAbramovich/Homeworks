#pragma once
#include <pqxx/pqxx>
#include <string>
#include <iostream>

class Database {
    private:
        pqxx::connection* connection_ptr_;
        
    public:

        Database(std::string str_connection);

        ~Database();

        void CreateTable(std::string sql_request);

        void AddClient(std::string first_name, std::string last_name, std::string email);

        void AddPhone(std::string sql_request);

        void ChangeClientInfo(std::string sql_request);

        std::string GetClientInfo(std::string sql_request);

        void DeletePhone(std::string sql_request);

        void DeleteClient(std::string sql_request);

};


