// This program that will read two floating point numbers (the first read into a variable
// called first and the second read into a variable called second). Then swap the order of
// the two numbers entered by user.
// Joel Turbi H.W 6.1 Sat

#include <iostream>
using namespace std;
// Function Prototype
void swap(float, float);

int main()
{
    float first, second;

    cout << "Enter the first number:" << endl << "Then hit enter" << endl;
    cin >> first;
    cout << "Enter the second number:" << endl << "Then hit enter" << endl;
    cin >> second;
    cout << "You input the numbers as " << first << " (first) and "
         << second << "(second)." << endl;
    // Function Call
    swap(first, second);

    return 0;
}

// Function Definition
void swap(float number1, float number2)
{
    float num;
    //swapping of numbers
    num = number1;
    number1 = number2;
    number2 = num;

    cout << "After swapping, the first number has a value of " << number1 << endl
         << "and the second number has the value of " << number2 <<  "." << endl;
}