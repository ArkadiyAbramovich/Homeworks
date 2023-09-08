#include <iostream>
#include <fstream>
#include <string>

class Address {
    
    private:
    std::string city, street;
    int numberbuilding, numberApartment;

    public:

    Address(){}

    Address(std::string city, std::string street, int numberbuilding, int numberApartment) {
        this->city = city;
        this->street = street;
        this->numberbuilding = numberbuilding;
        this->numberApartment = numberApartment;
    }

    std::string getCity() {
        return city;
    }

    std::string getStreet() {
        return street;
    }

    int getNumberBuilding() {
        return numberbuilding;
    }

    int getNumberApartment() {
        return numberApartment;
    }

};


int main(int, char**) {

    std::ifstream readAddr("in.txt");
 
    if(!readAddr) {
        std::cout << "Failed open file in.txt" << std::endl;
    } else {
        std::cout << "File in.txt is opened" << std::endl;
    }

    std::string city, street; 
    int building, apartment, numberOfAddress;

    readAddr >> numberOfAddress;
    Address* pAddr = new Address[numberOfAddress];

    for(int i{}; i < numberOfAddress; i++) {

        readAddr >> city >> street >> building >> apartment;
        Address addr(city, street,building, apartment);
        pAddr[i] = addr;
    }

    std::ofstream writeAddr("out.txt");

    if(!writeAddr) {
        std::cout << "Failed open file out.txt" << std::endl;
    } else {
        std::cout << "File out.txt is opened" << std::endl;
    }

    writeAddr << numberOfAddress << std::endl;

    for(int i = numberOfAddress - 1; i >= 0; i--) {

        writeAddr << pAddr[i].getCity() << ", " << pAddr[i].getStreet() << ", " << pAddr[i].getNumberBuilding() << ", " << pAddr[i].getNumberApartment();
        writeAddr << '\n';
    }
    readAddr.close();
    writeAddr.close();
    delete[] pAddr;

}




