#pragma once
#include <pqxx/pqxx>
#include <string>
#include <iostream>
#include <memory>

class ClientManager {
    public:
        ClientManager(const std::string& connection);
        void InitDb();
        void AddClient(const std::string& first_name, const std::string& last_name, const std::string& email);
        void AddPhoneNumber(const std::string& phone_number, int client_id);
        void UpdateClient(int client_id, const std::string& first_name, const std::string& last_name, const std::string& email);
        void RemovePhoneNumber(int client_id);
        void RemoveClient(int client_id);
        void FindClient(const std::string& search_value);


    private:
        std::unique_ptr<pqxx::connection> connection_ptr_;

};


