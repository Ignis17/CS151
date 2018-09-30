// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.
// Joel Turbi Lab 3.4 Sat

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, hyp;

    cout << "Please input the value of the two sides: " << endl;
    cin >> a >> b;

    hyp = sqrt(pow(a, 2.0) + pow(b, 2.0));

    cout << "The sides of the right triangle are " << a << " and " << b << "." << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << "The hypotenuse is " << hyp;
    return 0;
}