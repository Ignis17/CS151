//  This program calculates the price of stocks bought and commission paid.
//  Joel Turbi H.W.2 2-Sat

#include <iostream>
using namespace std;

int main()
{
    double cal_1, cal_2, cal_3;
    const int SHARESBOUGHT = 600;
    const double STOCKPRICE = 21.77;

    cal_1 = SHARESBOUGHT * STOCKPRICE;
    cout << "The amount paid for the stocks alone is:\n" << "$" << cal_1<< endl;
    cal_2 = cal_1 * 0.02;
    cout << "The amount of paid for commission is:\n" << "S" << cal_2<< endl;
    cal_3 = cal_1 + cal_2;
    cout << "The total amount paid is:\n" << "$" <<cal_3;
    return 0;
}