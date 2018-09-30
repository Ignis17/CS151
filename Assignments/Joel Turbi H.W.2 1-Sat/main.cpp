//  This program calculates an employee's annual pay.
//  Joel Turbi H.W.2 1-Sat

#include <iostream>
using namespace std;

int main()
{
    const double payAmount = 1700.25;
    double annualPay;
    const int payPeriod = 26;

    annualPay = payAmount * payPeriod;
    cout << "In a year your annual pay is estimated to be:\n" << "$" << annualPay;
    return 0;
}