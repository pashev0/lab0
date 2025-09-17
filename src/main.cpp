#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char sym;
    std::cout << u8"Hello World!\n";
    std::cout << u8"Введите символ:";
    std::cin >> sym;

    return 0;
} 