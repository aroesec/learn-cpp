#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

int add(int x, int y)
{
    return x + y;
}

void printResult(int z)
{
    std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cerr << x << "\n";
    return x;
}

int main()
{
    int x{getUserInput()};
    int y{getUserInput()};
    std::cerr << x << " " << y << "\n";
    int z{add(x, y)};
    printResult(z);

    return 0;
}