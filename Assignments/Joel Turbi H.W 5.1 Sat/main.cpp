// This program  performs a survey tally on beverages. The program should repeatedly
// prompt for the next person to enter a choice until a sentinel value of –1
// is entered to terminate the program
// Joel Turbi H.W 5.1 Sat

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int count = 1, coffee = 0, tea = 0, coke = 0, orangeJuice = 0;
    int choice;

    // *********************************************
    //                      Beverage Survey        *
    // *********************************************
    cout << "1. Coffee" << endl;
    cout << "2. Tea" << endl;
    cout << "3. Coke" << endl;
    cout << "4. Orange Juice" << endl;

    do
    {
        cout << "Please input the favorite beverage of person #" << count++ << ":" << endl;
        cout << "Choose 1,2,3,4 from the above menu or -1 to exit program:" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:coffee++;break;
            case 2:tea++;break;
            case 3:coke++;break;
            case 4:orangeJuice++;break;
            default: break;
        }
    }while(choice != -1);
    cout << "The total number of people survey is " << count-2
         << ". The results are as follows:" << endl;
    cout << "Beverage\tNumber of Votes" << endl;
    cout << "*************************************" << endl;
    cout << "Coffee" << setw(11) << right << coffee << endl;
    cout << "Tea" << setw(14) << right << tea << endl;
    cout << "Coke" << setw(13) << right << coke << endl;
    cout << "Orange Juice" << setw(5) << right << orangeJuice << endl;
    return 0;
}
