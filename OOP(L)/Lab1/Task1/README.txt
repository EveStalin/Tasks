SIMPLE CALCULATOR

Description
-----------
This C++11 program performs addition, subtraction, multiplication, and division
using a Calculator class.

Files
-----
calculator.h   Declares the Calculator class and calculate() method.
calculator.cpp Implements the four arithmetic operations.
main.cpp       Reads two numbers and an operator, then displays the result.

Usage
-----
Enter an expression such as:
12.5 * 4

Supported operators: +, -, * and /

Compile
-------
g++ -std=c++11 calculator.cpp main.cpp -o calculator

Run
---
./calculator

Invalid input, division by zero, and unsupported operators return 0.
