#include "calculator.h"

double Calculator::calculate(double first, char operation, double second)
{
    switch (operation)
    {
    case '+':
        return first + second;
    case '-':
        return first - second;
    case '*':
        return first * second;
    case '/':
        if (second == 0.0)
        {
            return 0.0;
        }
        return first / second;
    default:
        return 0.0;
    }
}
