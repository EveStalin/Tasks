#include "decimal_to_binary.h"
using namespace std;
string BinaryConverter::decimalToBinary(double decimal)
{
    unsigned long long integerPart = static_cast<unsigned long long>(decimal);
    double fractionalPart = decimal - integerPart;
    string binary;
    if (integerPart == 0)
    {
        binary = "0";}
    else
    {while (integerPart > 0)
        {
            binary.insert(binary.begin(), static_cast<char>('0' + integerPart % 2));
            integerPart /= 2;
        }}
    if (fractionalPart > 0.0)
    {binary += ".";
        for (int bit = 0; bit < 32 && fractionalPart > 0.0; ++bit) {
            fractionalPart *= 2.0;
            if (fractionalPart >= 1.0){
                binary += "1";
                fractionalPart -= 1.0;}
            else{
                binary += "0";
            }
        }
    }
    return binary;
}