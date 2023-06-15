#include <iostream>
#include <windows.h>

#define MODE 1

#if !defined MODE
#error "Необходимо определить #define MODE"
#endif

int add (int x, int y)
{
    return x + y;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

#ifdef MODE
    
        std::cout << "MODE определена" << std::endl;

    #if MODE == 0
    
        std::cout << "Работаю в режиме тренировки" << std::endl;
    
    #elif MODE == 1
    
        std::cout << "Работаю в боевом режиме" << std::endl;

        int num1;
        int num2;
        std::cout << "Введите число 1: ";
        std::cin >> num1;
        std::cout << "Введите число 2: ";
        std::cin >> num2;

        std::cout << "Результат сложения: " << add(num1, num2) << std::endl;

    #else
    
        std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    
    #endif

#endif
}