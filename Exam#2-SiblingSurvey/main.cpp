#include <iostream>
#include <string>   // For name of sibling
// Sibling_Survey.cpp
// Hyunwook Jung
// 25 OCTOBER 2018
// Ask a number of siblings and name for each of them
// Different messages according to the numbers

using namespace std;

int main()
{
    int numberSib;    // How many brothers or sisters?
    string name;    // What is his/her name?

    cout << "How many brothers and sisters do you have? ";
    cin >> numberSib;

    if (numberSib < 0)
        cout << "How could that be? ";

    else if (numberSib == 0)
        cout << "Oh, you were an only child!";

    else if (1 <= numberSib && numberSib <= 3)
    {
        cout << "Sounds like a nice size family \n";
        for (int count = 1; count <= numberSib; count++)  // Loop for getting name input
            {
                    cout << "What's the name of your #" << count << " sibling? ";
                    cin >> name;
            }
    }

    else if (numberSib >= 4)
    {
        cout << "A big family! \n";
        for (int count = 1; count <= numberSib; count++)  // Loop for getting name input
            {
                    cout << "What's the name of your #" << count << " sibling? ";
                    cin >> name;
            }
    }
    else cout << "Unknown error";

    return 0;
}
