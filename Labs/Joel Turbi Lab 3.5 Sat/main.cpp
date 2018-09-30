// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.
// Joel Turbi Lab 3.5 Sat

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream dataIn;
    fstream dataOut;
    int quantity;
    float itemPrice;
    float totalBill;
    string file;

    dataIn.open("C:\\Users\\joelt\\Dropbox\\Notes\\Spring 2017\\CS 151\\CS 151 Labs\\Joel Turbi Lab 3.5 Sat\\transaction.txt");
    dataOut.open("C:\\Users\\joelt\\Dropbox\\Notes\\Spring 2017\\CS 151\\CS 151 Labs\\Joel Turbi Lab 3.5 Sat\\bill.txt");

    cout << setprecision(2) << fixed << showpoint;
    dataIn >> quantity;
    dataIn >> itemPrice;
    totalBill = quantity * itemPrice;
    dataIn.close();
    dataOut << "The total bill is: $" << totalBill;
    dataOut.close();

    dataOut.open("C:\\Users\\joelt\\Dropbox\\Notes\\Spring 2017\\CS 151\\CS 151 Labs\\Joel Turbi Lab 3.5 Sat\\bill.txt");
    getline(dataOut, file);
    cout << file;
    return 0;
}