#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

class Address {
    
    private:
    std::string city, street;
    int numberbuilding, numberApartment = 0;

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

    std::string getOutAddress() {
        std::string str = city + ", " + street + ", " + std::to_string(numberbuilding) + ", " + std::to_string(numberApartment);
        return str;
    }

};

void sort(Address* addres, int size) {
    for(int i{}; i < size - 1; i++) {
        for(int j{}; j < size - 1 - i; j++) {
            std::string str1 = addres[j].getCity();
            std::string str2 = addres[j+1].getCity();
            if(str1 > str2) {
                Address temp;
                temp = addres[j];
                addres[j] = addres[j+1];
                addres[j+1] = temp;
            }
        }
    }
}



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
    
    sort(pAddr, numberOfAddress);

    std::ofstream writeAddr("out.txt");

    if(!writeAddr) {
        std::cout << "Failed open file out.txt" << std::endl;
    } else {
        std::cout << "File out.txt is opened" << std::endl;
    }

    writeAddr << numberOfAddress << std::endl;

    for(int i{}; i < numberOfAddress; i++) {

        writeAddr << pAddr[i].getOutAddress() << std::endl;
    }
    readAddr.close();
    writeAddr.close();
    delete[] pAddr;

    return 0;

}




