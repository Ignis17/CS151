// This program tests whether or not an initialized value of num2
// is equal to a value of num1 input by the user.

// Joel Turbi Lab 4.1 Sat

#include <iostream>
using namespace std;

int main()
{
    int num1, num2 = 10;

    cout << "Please enter an integer: " << endl;
    cin >> num1;
    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
    if (num1 == num2)
    {
        cout << "The values are the same." << endl;
        cout << "Hey, that" << "\'s" " a coincidence!" << endl;
    }
    else
        cout << "The values are not the same." << endl;
    return 0;
}