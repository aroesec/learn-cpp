#include <iostream>
#include "io.h"
int readNumber()
{
    std::cout << "Please enter an integer: ";
    int integer{};
    std::cin >> integer;
    return integer;
}

void writeAnswer(int answer)
{
    std::cout << answer << "\n";
}