// This program takes two values from the user and then swaps them
// before printing the values.  The user will be prompted to enter
// both numbers.
// Joel Turbi Lab 1.4 Sat
#include <iostream>
using namespace std;
int main()
{
    double firstNumber;
    double secondNumber;
    float first_number;
    float second_number;
// Prompt user to enter the first number.
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin  >> firstNumber;
// Prompt user to enter the second number.
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin  >> secondNumber;
// Echo print the input.
    cout << endl << "You input the numbers as " << firstNumber << " and " << secondNumber << endl;
// Now we will swap the values.
    first_number = secondNumber;
    second_number = firstNumber;
// Output the values.
    cout  << "After swapping, the values of the two numbers are " << first_number << " and " << second_number << endl;
    return 0;
}
