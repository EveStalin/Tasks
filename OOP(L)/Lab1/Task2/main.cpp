#include "decimal_to_binary.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a non-negative decimal number: ";
    double decimal;

    if (!(cin >> decimal) || decimal < 0)
    {
        cerr << "Please enter a valid non-negative number.\n";
        return 1;
    }
    BinaryConverter converter;
    cout << "Binary: " << converter.decimalToBinary(decimal) << '\n';
    return 0;
}