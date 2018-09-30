// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// Joel Turbi Lab 4.2 Sat

#include <iostream>
using namespace std;

int main()
{
    float average;
    char grade;

    cout << "Input your average: " << endl;
    cin >> average;

    if (average <0 || average >100)
        cout << "Invalid grade.";
    else if (average >= 90)
    {
        grade = 'A';
        cout << "Your grade is " << grade << ".";
    }
    else if (average >= 80 && average <= 89)
    {
        grade = 'B';
        cout << "Your grade is " << grade << ".";
    }
    else if (average >= 60 && average <=79)
    {
        cout << "You Pass!";
    }
    else
    {
        cout << "You fail.";
    }
    return 0;
}
