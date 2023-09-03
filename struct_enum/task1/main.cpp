#include <iostream>

enum months {
Январь = 1,
Февраль,
Март,
Апрель,
Май,
Июнь,
Июль,
Август,
Сентябрь,
Октябрь,
Ноябрь,
Декабрь,
};

int main(int, char**) {
  
//   std::setlocale(LC_ALL, "rus");

  while(true) {

    int num;
    std::cout << "Введите номер месяца: ";
    std::cin >> num;
    if(num < 0 || num >12) {
        std::cout << "Неправильный номер!" << std::endl;
    } else if(num == 0) {
        std::cout << "До свидания!" << std::endl;
        break;
    } 

    switch(num) {

        case 1: {
            months month1 = static_cast<months>(1);
            // std::cout << static_cast<int>(month1) << std::endl;
            std::cout << "Январь" << std::endl;
            break;
        }

        case 2: {
            months month2 = static_cast<months>(2);
            // std::cout << static_cast<int>(month2) << std::endl;
            std::cout << "Февраль" << std::endl;
            break;
        }

        case 3: {
            months month3 = static_cast<months>(3);
            // std::cout << static_cast<int>(month3) << std::endl;
            std::cout << "Март" << std::endl;
            break;
        }

        case 4: {
            months month4 = static_cast<months>(4);
            // std::cout << static_cast<int>(month4) << std::endl;
            std::cout << "Апрель" << std::endl;
            break;
        }

        case 5: {
            months month5 = static_cast<months>(5);
            // std::cout << static_cast<int>(month5) << std::endl;
            std::cout << "Май" << std::endl;
            break;
        }

        case 6: {
            months month6 = static_cast<months>(6);
            // std::cout << static_cast<int>(month6) << std::endl;
            std::cout << "Июнь" << std::endl;
            break;
        }

        case 7: {
            months month7 = static_cast<months>(7);
            // std::cout << static_cast<int>(month7) << std::endl;
            std::cout << "Июль" << std::endl;
            break;
        }

        case 8:{
            months month8= static_cast<months>(8);
            // std::cout << static_cast<int>(month8) << std::endl;
            std::cout << "Август" << std::endl;
            break;
        }

        case 9:{
            months month9 = static_cast<months>(9);
            // std::cout << static_cast<int>(month9) << std::endl;
            std::cout << "Сентябрь" << std::endl;
            break;
        }

        case 10: {
            months month10 = static_cast<months>(10);
            // std::cout << static_cast<int>(month10) << std::endl;
            std::cout << "Октябрь" << std::endl;
            break;
        }

        case 11: {
            months month11 = static_cast<months>(11);
            // std::cout << static_cast<int>(month11) << std::endl;
            std::cout << "Ноябрь" << std::endl;
            break;
        }

        case 12: {
            months month12 = static_cast<months>(12);
            // std::cout << static_cast<int>(month12) << std::endl;
            std::cout << "Декабрь" << std::endl;
            break;
        }

    }

    }  
}