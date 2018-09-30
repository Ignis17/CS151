// This program will will find the total number of days its
// employees were out sick for the specified past few years.
// Joel Turbi H.W 5.2 Sat

#include <iostream>
using namespace std;

int main()
{
    int numYears, numTellers, numDays;
    int totalDays = 0;

    cout << "How many past years do you want to consider?" << endl;
    cin >> numYears;
    cout << "How many tellers worked at Nation’s Bank during each of the last 3 years?" << endl;
    cin >> numTellers;

    for(int t = 1; t <= numTellers; t++)
    {
        for (int y = 1; y <= numYears; y++)
        {
            cout << "How many days was teller " << t << " out sick during year " << y << "?" << endl;
            cin >> numDays;
            totalDays += numDays;
        }
    }
    cout << "The " << numTellers << " tellers were out sick for a total of " << totalDays
         << " days during the last " << numYears << " years." << endl;

    return 0;
}


