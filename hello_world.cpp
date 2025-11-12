#include <iostream>
#include <string>


// Основная функция, которая запрашивает имя пользователя и печатает приветствие
// Main function that asks for user name and prints greeting
int
main()
{
>>>>>>> 1156b8d (Apply Mozilla code style with clang-format)
std::string name;
std::cout << "Enter your name: ";
std::cin >> name;
std::cout << "Hello world from " << name << "!" << std::endl;
return 0;
}
