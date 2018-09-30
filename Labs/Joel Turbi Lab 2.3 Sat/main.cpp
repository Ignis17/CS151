// This program will determine the area and perimeter of a rectangle.
// Joel Turbi Lab 2.3 Sat

#include <iostream>
using namespace std;

int main()
{
    const int LENGTH = 8, WIDTH = 3;
    int area,perimeter;

    area = WIDTH * LENGTH;
    perimeter = 2 * (LENGTH + WIDTH);
    cout << "The area of a rectangle is " << area << endl;
    cout << "The perimeter of a rectangle is " << perimeter << endl;
    return 0;
}