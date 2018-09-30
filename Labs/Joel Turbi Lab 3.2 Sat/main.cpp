// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.
// Joel Turbi Lab 3.2 Sat
#include <iostream>
using namespace std;

int main()
{
    const int AT_BAT = 421;
    const int HITS = 123;
    double batAvg;

    batAvg = static_cast<double> (HITS) / (AT_BAT);
    cout << "The batting average is " << batAvg << endl;
    return 0;
}
