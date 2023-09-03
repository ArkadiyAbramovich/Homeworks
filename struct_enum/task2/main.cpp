#include <iostream>
#include <string>

struct BankAccount {
    long int accountNumber;
    std::string ownerName;
    double balance;
};

void changeBalance(BankAccount& owner, int newBalance) {
    owner.balance = newBalance;
}

int main(int, char**) {

    BankAccount owner;
    int newBalance;
    std::cout << "Введите номер счета: ";
    std::cin >> owner.accountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> owner.ownerName;
    std::cout << "Введите баланс: ";
    std::cin >> owner.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;
    changeBalance(owner, newBalance);
    std::cout << "Ваш счет: " << owner.ownerName << ", " << owner.accountNumber << ", " << owner.balance;
}