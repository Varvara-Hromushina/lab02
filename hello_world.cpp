#include <iostream>
#include <string>

// Основная функция, которая запрашивает имя пользователя и печатает приветствие
int main() {
std::string name;
std::cout << "Enter your name: ";
std::cin >> name;
std::cout << "Hello world from " << name << "!" << std::endl;
return 0;
}
