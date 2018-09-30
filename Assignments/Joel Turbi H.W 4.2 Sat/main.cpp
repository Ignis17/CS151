// This program prompts the user for the number of shirts required and then computes the
// total price.
// Joel Turbi H.W 4.2 Sat

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int shirts; // Holds amount of shirts.
    double costPerShirt, discount, discountRate;
    double retailPrice = 12.00; // Price per shirt.

    cout << "How many shirts would you like? " << endl;
    cin >> shirts;

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // If 4 or less shirts - 0% discount.
    if (shirts >= 0 && shirts <= 4)
    {
        costPerShirt = shirts * retailPrice;
        cout << "The cost per shirt is $" << retailPrice << " and the total cost is $" << costPerShirt;
    }
    // Otherwise if 5 ~ 10 shirts - 10% discount.
    else if (shirts >= 5 && shirts <= 10)
    {
        discountRate = 0.10;
        discount = discountRate * retailPrice;
        retailPrice = retailPrice - discount;
        costPerShirt = shirts * retailPrice;

        cout << "The cost per shirt is $" << retailPrice << " and the total cost is $" << costPerShirt;
    }
    // Otherwise if 11 ~ 20 shirts - 15% discount.
    else if (shirts >= 11 && shirts <=20)
    {
        discountRate = 0.15;
        discount = discountRate * retailPrice;
        retailPrice = retailPrice - discount;
        costPerShirt = shirts * retailPrice;

        cout << "The cost per shirt is $" << retailPrice << " and the total cost is $" << costPerShirt;
    }
    // Otherwise if 21 ~ 30 shirts - 20% discount.
    else if (shirts >= 21 && shirts <= 30)
    {
        discountRate = 0.20;
        discount = discountRate * retailPrice;
        retailPrice = retailPrice - discount;
        costPerShirt = shirts * retailPrice;

        cout << "The cost per shirt is $" << retailPrice << " and the total cost is $" << costPerShirt;
    }
    // Otherwise if 31 or more shirts - 25% discount.
    else if (shirts >=31)
    {
        discountRate = 0.25;
        discount = discountRate * retailPrice;
        retailPrice = retailPrice - discount;
        costPerShirt = shirts * retailPrice;

        cout << "The cost per shirt is $" << retailPrice << " and the total cost is $" << costPerShirt;
    }
    // If negative integer entered display the following message.
    else
        cout << "Invalid Input: Please enter a non-negative integer" << endl;
    return 0;
}