// ConsoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    //defining an object of Calculator called c
    Calculator c; 
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0) 
        {
            cout << "Cannot divide by 0, please try again!\n";
            continue;
        }
        else 
        {
            result = c.Calculate(x, oper, y);
            //we have added a conditional breakpoint above, so that the app pauses on the above line when we try to divide by 0
            cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
        }
    }
    return 0;
}

