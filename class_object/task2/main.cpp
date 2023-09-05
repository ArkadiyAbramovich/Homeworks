#include <iostream>
#include <string>

class Counter {

    private:

    int count;
    
    public:

    Counter() {
        count = 0;
    }

    Counter(int count) {
        this->count = count;
    }

    void increment() {
        count++;
    }

    void decrement() {
        count--;
    }

    void showCount() {
        std::cout << count << std::endl;
    }
};

int main(int, char**) {

    int count;
    char ch;
    bool flag = true;
    std::string answer;
    
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;
    if(answer == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;
    } else {
        std::cout << "До свидания!" << std::endl;
        flag = false;
    }

    Counter counter(count);    

    while(flag) {

    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    std::cin >> ch;
    

        switch(ch) {

            case '+':
                counter.increment();
                break;
            
            case '-':
                counter.decrement();
                break;

            case '=':
                counter.showCount();
                break;

            case 'x':
                std::cout << "До свидания!" << std::endl;
                flag = false;
            
             
        }
    }
}