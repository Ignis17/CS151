// This program will convert miles to kilometers or kilometers to miles.
// Joel Turbi H.W. 6.2

#include <iostream>
using namespace std;
double milesToKilometers(double miles);
double kilometersToMiles(double kms);

int main()
{
    int choice;
    double miles, kilometers;

    do
    {
        cout << "\n*************************************************************************" << endl;
        cout << "*\t This program converts miles to kilometers or kilometers to miles.\t*" << endl;
        cout << "*************************************************************************" << endl;
        cout << "1. Convert miles to kilometers" << endl;
        cout << "2. Convert kilometers to miles" << endl;
        cout << "3. Quit" << endl;

        cout << "\nYour Choice:" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nPlease input miles to be converted: " << endl;
                cin >> miles;

                cout << "\n" <<  miles << " miles = " << milesToKilometers(miles) << " Kilometers." << endl;
                break;
            }
            case 2:
            {
                cout << "Please input kilometers to be converted :" << endl;
                cin >> kilometers;

                cout << "\n" << kilometers << " Kilometers = " << kilometersToMiles(kilometers) << " Miles." << endl;
                break;
            }

            case 3:
                cout << "\nThe program is finishing. Thank you for using the program!" << endl;
                break;
            default:
                cout << "\nInvalid input!" << endl;
                break;
        }
    }while(choice!=3);

}
// This function converts miles to kilometers
double milesToKilometers(double miles)
{
    return miles*1.61;
}
// This function converts kilometers to miles
double kilometersToMiles(double kms)
{
    return kms * 0.621;
}