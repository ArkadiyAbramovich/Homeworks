#include "database.hxx"


    Database::Database(std::string str_connection) {
        try {

            connection_ptr_ = new pqxx::connection(str_connection);

        } catch (const pqxx::sql_error& ex) {
            std::cout << ex.what();
        }
        
    }

    Database::~Database() {
        delete connection_ptr_;
    }

    void Database::CreateTable(std::string sql_request) {

        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec(sql_request);

            new_transaction.commit();

        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }

    }     

    void Database::AddClient(std::string first_name, std::string last_name, std::string email) {

        try {

            connection_ptr_->prepare("add_client", "INSERT INTO Client(first_name, last_name, email) values($1, $2, $3)");

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec_prepared("add_client", first_name, last_name, email);

            new_transaction.commit();

        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    void Database::AddPhone(std::string sql_request) {
        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec(sql_request);

            new_transaction.commit();

        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }
    }

    void Database::ChangeClientInfo(std::string sql_request) {
        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec(sql_request);

            new_transaction.commit();

        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }
    }

    std::string Database::GetClientInfo(std::string sql_request) {
        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            std::string result = new_transaction.query_value<std::string>(sql_request);
            return result;
        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }
    }

    void Database::DeletePhone(std::string sql_request) {
        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec(sql_request);

            new_transaction.commit();

        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }
    }

    void Database::DeleteClient(std::string sql_request) {
        try {

            pqxx::transaction new_transaction(*connection_ptr_);
            new_transaction.exec(sql_request);

            new_transaction.commit();

        } catch (const pqxx::sql_error ex) {
            std::cout << ex.what() << std::endl;
        }
    }