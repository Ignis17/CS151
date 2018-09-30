//  This program demonstrates the use of characters and strings
//  Joel Turbi Lab 2.4 Sat

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string FAVORITESODA = "Dr. Dolittle";
    const char BESTRATING = 'A';
    char rating = 'B';
    string favoriteSnack = "crackers";
    int numberOfPeople = 250;
    int topChoiceTotal = 148;
    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people "
         << topChoiceTotal << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating << endl;
    return 0;
}