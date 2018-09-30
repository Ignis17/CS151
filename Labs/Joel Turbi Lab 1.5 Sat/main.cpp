// Joel Turbi Lab 1.5 Sat

#include <iostream>
using namespace std;
int main()
{
    double result;
    double miles;
    double kilometer;
    kilometer = 0.612;
    miles = 0;
    cout << "Enter Kilometers traveled:" << endl;
    cin >> miles;
    result = kilometer * miles;
    cout << "You have traveled: " << endl << result << " miles.";
    return 0;
}
f