#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int twoSum(int x, int y)
{
    return x * 2;
}

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}