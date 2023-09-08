#include <iostream>
#include <fstream>
#include <string>

class Address {
    
    private:
    std::string city, street;
    static int numberbuilding, numberApartment;

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

    void sort(Address* addr, int size) {
        for(int i{}; i < size; i++) {
            for(int j{}; j <size - i; j++) {
                std::string str1 = addr[j].getCity();
                std::string str2 = addr[j + 1].getCity();
                if(str1 > str2) {
                    std::string city, street;
                    int building, apartment;

                    city = addr[j].city;
                    street = addr[j].street;
                    building = addr[j].numberbuilding;
                    apartment = addr[j].numberApartment;

                    addr[j].city = addr[j + 1].city;
                    addr[j].street = addr[j + 1].street;
                    addr[j].numberbuilding = addr[j + 1].numberbuilding;
                    addr[j].numberApartment = addr[j + 1].numberApartment;

                    addr[j + 1].city = city;
                    addr[j + 1].street = street;
                    addr[j + 1].numberbuilding = numberbuilding;
                    addr[j + 1].numberApartment = numberApartment;    
                }
            }
        }
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
        Address addr(city, street, building, apartment);
        pAddr[i] = addr;
    }

    std::ofstream writeAddr("out.txt");

    if(!writeAddr) {
        std::cout << "Failed open file out.txt" << std::endl;
    } else {
        std::cout << "File out.txt is opened" << std::endl;
    }

    pAddr->sort(pAddr, numberOfAddress);

    writeAddr << numberOfAddress << std::endl;


    for(int i{}; i < numberOfAddress; i++) {

        writeAddr << pAddr[i].getCity() << ", " << pAddr[i].getStreet() << ", " << pAddr[i].getNumberBuilding() << ", " << pAddr->getNumberApartment();
        writeAddr << '\n';
    }

    readAddr.close();
    writeAddr.close();
    delete[] pAddr;

}




