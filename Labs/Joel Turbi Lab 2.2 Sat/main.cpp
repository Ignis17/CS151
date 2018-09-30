// This program will output the circumference and area
// of the circle with a given radius.
// Joel Turbi Lab 2.2 Sat
#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14, RADIUS = 5.4;
    double area, circumference;
    circumference = 2 * PI * RADIUS;
    area = PI * RADIUS * RADIUS;
    cout << "The circumference of a circle is " << circumference << endl;
    cout << "The area of a circle is " << area;
    return 0;
}