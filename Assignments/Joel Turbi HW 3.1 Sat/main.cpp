// This program calculates a theater's gross and net box office profit for a night,
// and the amount paid to the movie distributor.
// Joel Turbi HW 3.1 Sat

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int adultTickets, childrenTickets;
    string movieName;
    double grossProfit, netProfit, distributorPay;
    double adultPrice = 6.00, childrenPrice = 3.00, theaterPercentage = 0.20;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter the name of the movie: " << endl;
    getline(cin, movieName);
    cout << "Enter # of adult tickets sold: " << endl;
    cin >> adultTickets;
    cout << "Enter # of child tickets sold: " << endl;
    cin >> childrenTickets;
    cout << "\n";

    grossProfit = (adultTickets*adultPrice) + (childrenTickets*childrenPrice);
    netProfit = grossProfit * theaterPercentage;
    distributorPay = grossProfit - netProfit;

    cout << "Movie Name:" << setw(16) << "\"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold:" << setw(14) << adultTickets << endl;
    cout << "Child Tickets Sold:" << setw(14) << childrenTickets << endl;
    cout << "Gross Box Office Profit:" << setw(6) << "$" << grossProfit << endl;
    cout << "Net Box Office Profit:" << setw(8) << "$" << netProfit << endl;
    cout << "Amount Paid to Distributor:" << setw(3) << "$" << distributorPay << endl;
    return 0;
}