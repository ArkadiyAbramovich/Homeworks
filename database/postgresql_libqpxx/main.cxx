#include <pqxx/pqxx>
#include "client_manager.hxx"
#include <iostream>    
#include <string>                                      

int main() {

    std::string connection_str = "host=127.0.0.1 "
                                    "port=5432 "
                                    "dbname=postgres "
                                    "user=new_user "
                                    "password=new_user";

    ClientManager client_manager(connection_str);

    client_manager.InitDb();

    // std::string first_name, last_name, email = " ";
    // std::cout << "Enter first name: ";  std::cin >> first_name;
    // std::cout << "Enter last name: ";   std::cin >> last_name;
    // std::cout << "Enter email: ";       std::cin >> email;

    // client_manager.AddClient(first_name, last_name, email);

    // client_manager.AddPhoneNumber("89233350735",1);
    // client_manager.AddPhoneNumber("89233350715",2);
  
    // client_manager.UpdateClient(1, "Vasy", "Ivanych", "Ivan@gmail.com");
    
    // client_manager.RemovePhoneNumber(2);

    // client_manager.RemoveClient(2);
    
    // client_manager.FindClient("Vasy");


    return 0;
}