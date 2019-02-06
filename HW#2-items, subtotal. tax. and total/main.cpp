// Total.cpp
// Hyunwook Jung
#include <iostream>
using namespace std;

int main()
{
    // Setting Base Variables
    float   itemOne = 12.95,
            itemTwo = 24.95,
            itemThree = 6.95,
            itemFour = 14.95,
            itemFive = 3.95,
        // Setting Calculated variables
            subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive,
            tax = subtotal * 0.06,
            total = subtotal - tax;

    // Print items, subtotal. tax. and total
    cout << "The List of items.\n";
    cout << itemOne << "$, " << itemTwo << "$, " << itemThree << "$, " << itemFour << "$, " << itemFive;
    cout << "$\nThe subtotal of the sale is " << subtotal << "$"<< endl;
    cout << "The amount of sales tax is " << tax << "$" << endl;
    cout << "The total is " << total << "$";
    return 0;
}
