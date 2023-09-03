#include <iostream>
#include <string>

struct Adress {
    std::string city, street;
    int numberHome, numberApartment, index;
};  

void getInfoAdress(Adress& adress) {

    std::cout << "Город: " << adress.city << '\n' 
    << "Улица: " << adress.street << '\n' 
    << "Номер дома: " << adress.numberHome << '\n' 
    << "Номер квартиры: " << adress.numberApartment << '\n' 
    << "Индекс: " << adress.index << '\n';
    std::cout << std::endl;
}

int main(int, char**) {

    Adress adress1;
    Adress adress2;

    adress1.city = "Москва";
    adress1.street = "Арбат";
    adress1.numberHome = 12;
    adress1.numberApartment = 8;
    adress1.index = 123456;

    adress2.city = "Ижевск";
    adress2.street = "Пушкина";
    adress2.numberHome = 59;
    adress2.numberApartment = 143;
    adress2.index = 953769;

    getInfoAdress(adress1);

    getInfoAdress(adress2);
}