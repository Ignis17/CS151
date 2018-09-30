/* This program will read in the quantity of a particular item and its price.
It will then print out the total price.
 The input will come from the keyboard and the output will go to the screen.*/
//  Joel Turbi Lab 3.1 Sat

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string itemName;
    int quantity;
    float itemPrice, totalBill;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the name of the item: " << endl;
    getline(cin, itemName);
    cout << "Please input the number of items bought: " << endl;
    cin >> quantity;
    cout << "Please input the price for each item: " << endl;
    cin >> itemPrice;
    totalBill = itemPrice * quantity;
    cout << "The item that you bought is: " << itemName << endl;
    cout << "The total bill is: $" << totalBill;
    return 0;
}