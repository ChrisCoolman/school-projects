/**
* Name: Chris Coleman
* Program Name: Calculator.cpp
* Date: 9/12/2024
* Extra: if statements, rounding, and error detection with return values
*/

#include <iostream>
#include <cmath> // gives rounding method

using namespace std;

string op;
double num1;
double num2;
int main(void)
{
    // Ask user for operation
    cout << "Enter an operation, add, sub, mul, div ";
    cin >> op;
    // If user selects operation
    if(op == "add")
    {
        cout << "Enter number one " << endl;
        cin >> num1;
        cout << "Enther number two " << endl;
        cin >> num2;
        // Calculate number and round it
        cout << round(num1 + num2);
    }
    else if(op == "sub")
    {
        cout << "Enter number one " << endl;
        cin >> num1;
        cout << "Enther number two " << endl;
        cin >> num2;
        cout << round(num1 - num2);
    }
    else if(op == "mul")
    {
        cout << "Enter number one " << endl;
        cin >> num1;
        cout << "Enther number two " << endl;
        cin >> num2;
        cout << round(num1 * num2);
    }
    else if(op == "div")
    {
        cout << "Enter number one " << endl;
        cin >> num1;
        cout << "Enther number two " << endl;
        cin >> num2;
        cout << round(num1 / num2) << endl;
        cout << "The remainder is " << (int)num1 % (int)num2 << endl;
    }
    else
    {
        // If user doesn't select an operation throw an error
        cout << "ERROR: Enter a valid operation";
        // If a program returns anything other then 0 then something bad happened, here it means that the user did not enter a valid operation
        return 1;
    }
    // Return zero if everything went right
    return 0;
}
