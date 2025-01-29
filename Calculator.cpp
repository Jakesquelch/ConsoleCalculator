
#include "Calculator.h"

#include <iostream>

using namespace std;

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            cout << "Error: Enter a valid operation";
            return 0.0;
    }
}
