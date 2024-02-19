#include "client_manager.hxx"

    ClientManager::ClientManager(const std::string& connection) {
        
        try {

            connection_ptr_ = std::make_unique<pqxx::connection>(connection);

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void ClientManager::InitDb() {

        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec("CREATE TABLE IF NOT EXISTS Client( "
                "id SERIAL4 Primary Key, " 
                "first_name VARCHAR(40) NOT NULL, "
                "last_name VARCHAR(40) NOT NULL, "
                "email VARCHAR(40) NOT NULL, "
                "phone_number TEXT);");

            new_transaction.exec("CREATE TABLE IF NOT EXISTS Client_Phone( " 
                                                    "id serial4 Primary Key, "
                                                    "phone_number TEXT, "
                                                    "client_id INT REFERENCES Client(id));");

            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }
        
    }

    void ClientManager::AddClient(const std::string& first_name, const std::string& last_name, const std::string& email) {

        try {

            connection_ptr_->prepare("add_client", "INSERT INTO Client(first_name, last_name, email) values($1, $2, $3);");

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared("add_client", first_name, last_name, email);
            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void ClientManager::AddPhoneNumber(const std::string& phone_number, int client_id) {

        try {

            connection_ptr_->prepare("add_phone", "INSERT INTO Client_Phone(phone_number,client_id ) values($1, $2);");

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared("add_phone", phone_number, client_id);
            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void ClientManager::UpdateClient(int client_id, const std::string& first_name, const std::string& last_name, const std::string& email) {

        try {
    
            connection_ptr_->prepare("update_client", "UPDATE Client SET first_name = $1, last_name = $2, email = $3 WHERE id = $4;");


            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared0("update_client", first_name, last_name, email, client_id);
            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void ClientManager::RemovePhoneNumber(int client_id) {

        try {

            connection_ptr_->prepare("delete_phone", "DELETE FROM Client_Phone WHERE client_id = $1;");
            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared("delete_phone", client_id);
            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void ClientManager::RemoveClient(int client_id) {

        try {

            connection_ptr_->prepare("delete_client", "DELETE FROM Client WHERE id = $1;");
            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared("delete_client", client_id);
            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void ClientManager::FindClient(const std::string& search_value) {
        
        try {

            connection_ptr_->prepare("find_client", "SELECT * FROM Client WHERE first_name = $1 OR "
                                                                               "last_name = $1 OR "  
                                                                               "email = $1;");
            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared("find_client", search_value);
            new_transaction.commit();

        } catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
        }

    }