DECIMAL TO BINARY CONVERTER

Description
-----------
This C++11 program converts a non-negative decimal number to binary using the
BinaryConverter class.

Files
-----
decimal_to_binary.h  Declares the BinaryConverter class and its conversion function.
converter.cpp        Converts integer and fractional parts to binary.
main.cpp             Reads input, validates it, calls the converter, and displays the result.

How It Works
------------
The integer part is repeatedly divided by 2. Each remainder is a binary digit, and the
remainders are inserted from right to left. The fractional part is repeatedly multiplied
by 2; each integer part becomes the next binary digit after the decimal point.

Compile
-------
g++ -std=c++11 converter.cpp main.cpp -o converter

Run
---
./converter

The program accepts zero or any positive decimal number. Negative input is rejected.
Fractional output is limited to 32 binary digits.
