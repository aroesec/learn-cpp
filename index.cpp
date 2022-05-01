#include <iostream>
#include "utils.h"
int doMath(int first, int second, int third, int fourth);
int twoSum(int x, int y);
int main()
{
    std::cout << doMath(1, 2, 3, 4) << "\n";
    std::cout << add(2, 2) << "\n";
    int x{getInteger()};
    int y{getInteger()};
    std::cout << x << " + " << y << " is " << x + y << "\n";
    return 0;
}

int doMath(int first, int second, int third, int fourth)
{
    return first + second + third + fourth;
}