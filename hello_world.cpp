#include <iostream>
#include <string>

// Основная функция программы
int main() {
    std::string name;                     // Переменная для хранения имени пользователя
    std::cout << "Enter your name: ";    // Запрос имени
    std::cin >> name;                    // Чтение имени
    std::cout << "Hello world from " << name << "!" << std::endl; // Приветствие
    return 0;
}