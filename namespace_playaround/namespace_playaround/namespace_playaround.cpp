#include <iostream>
#include "add.h"
#include <string>

int main()
{

    namespace constanti = mathOperation::constants;
    namespace operazioni = mathOperation;

    std::cout << "Operation one: " << operazioni::add(3.12, 4.8) << '\n';
    std::cout << "if you want to print the neper number: " << constanti::e << '\n';


    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    int length_name = static_cast<int>(name.length());

    std::cout << "Your age + length of naem is: " << length_name + age << '\n';

    return 0;
}

