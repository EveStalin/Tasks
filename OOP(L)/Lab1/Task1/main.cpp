#include "calculator.h"
#include <iostream>

int main()
{
    double first;
    double second;
    char operation;

    std::cout << "Enter an expression (example: 12.5 * 4): ";

    if (!(std::cin >> first >> operation >> second))
    {
        std::cout << "Invalid input.\n";
        return 1;
    }

    Calculator calculator;
    std::cout << "Result: "
              << calculator.calculate(first, operation, second) << '\n';

    return 0;
}
