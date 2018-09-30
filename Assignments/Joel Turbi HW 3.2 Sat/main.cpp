//This program calculates interest rate.
// Joel Turbi HW 3.2 Sat

#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int compoundedT;
    double Amount, Principal, Rate, percentRate, Interest;

    cout << "Enter the principal: " << endl;
    cin >> Principal;
    cout << "Enter the interest rate: " << endl;
    cin >> Rate;
    cout << "Enter # of times interest is compounded: " << endl;
    cin >> compoundedT;
    cout << "\n";

    percentRate = Rate / 100;
    Amount = Principal * pow(1 + (percentRate/compoundedT), compoundedT);
    Interest = Amount - Principal;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Interest Rate: " << setw(12) << Rate << "%" << endl;
    cout << "Times Compounded: " << setw(8) << compoundedT << endl;
    cout << "Principal: " << setw(12) << "$" << Principal << endl;
    cout << "Interest: " << setw(13) << "$" << Interest << endl;
    cout << "Amount in Saving: " << setw(5) << "$" << Amount << endl;
    return 0;
}