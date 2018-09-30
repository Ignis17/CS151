// This program has the user input a number n and then finds the
// mean of the first n positive integers
// Joel Turbi Lab 5.3 Sat

#include <iostream>
using namespace std;


int main()
{
    int value1,value2, number, Num;
    int total = 0;
    float mean;

    cout << "Please enter first positive integer:" << endl;
    cin >> value1;
    cout << "Please enter second positive integer:" << endl;
    cin >> value2;

    Num= (value2-value1)+1;

    if (value2-value1 > 0)
    {
        for (number = value1; number <= value2; number++)
        {
            total += number;
        }

        mean = float(total) / Num;

        cout << "The mean average between numbers " << value1 << " and "
             << value2 << " is "<< mean << "." << endl;
    }
    else
        cout << "Invalid input - value2 should be greater than value1." << endl;

    return 0;
}