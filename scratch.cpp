#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

int getUserInput()
{
    PLOGD << "getUserInput called";
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cerr << x << "\n";
    return x;
}

int main()
{
    plog::init(plog::debug, "LogFile.txt");
    PLOGD << "main Called";
    int x{getUserInput()};
    int y{getUserInput()};
    std::cout << x << " " << y << "\n";

    return 0;
}