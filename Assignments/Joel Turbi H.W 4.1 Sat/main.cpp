// This program prompts the user for their quarterly water bill for the last four quarters.
// Joel Turbi H.W 4.1 Sat

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float monthlyBill= 0;
    double quarter, averageMonthlyBill;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input your water bill for quarter 1: " << endl;
    cin >> quarter;
    monthlyBill += quarter;
    cout << "Please input your water bill for quarter 2: " << endl;
    cin >> quarter;
    monthlyBill += quarter;
    cout << "Please input your water bill for quarter 3: " << endl;
    cin >> quarter;
    monthlyBill += quarter;
    cout << "Please input your water bill for quarter 4: " << endl;
    cin >> quarter;
    monthlyBill += quarter;

    averageMonthlyBill = (monthlyBill)/12;

    if (averageMonthlyBill > 75)
    {
        cout << "Your average monthly bill is " << "$" << averageMonthlyBill << "." << endl;
        cout << "You are using excessive amounts of water.";
    }
    else if (averageMonthlyBill >= 25 && averageMonthlyBill <= 75)
    {
        cout << "Your average monthly bill is " << "$" << averageMonthlyBill << "." << endl;
        cout << "You are using a typical amount of water.";
    }
    else
    {
        cout << "Your average monthly bill is " << "$" << averageMonthlyBill << "." << endl;
        cout << "Good you use a very small amount of water." << endl;
        cout << "Thanks for saving water.";
    }
    return 0;
}