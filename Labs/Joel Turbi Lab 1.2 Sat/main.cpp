// This program demonstrates a compile error.
// Joel Turbi Lab 1.2 Sat

#include <iostream>
using namespace std;
int main()
{
    int number;
    float total;
    cout << "Today is a great day for Lab." << endl;
    cout << "Let's start off by typing a number of your choice: " << endl;
    cin >> number;
    total = number * 2;
    cout << total << " is twice the number you typed" << endl;
}