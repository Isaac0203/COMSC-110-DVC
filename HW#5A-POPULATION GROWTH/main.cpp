// HW#5A.cpp
#include <iostream>
#include <fstream>
// Hyunwook Jung
using namespace std;
int main()
{   // Number of people and year.
    int people, year;
    char star = '*';
    double numStar;
    // * = 1000 people
    const double ASTERISK = 1000;
    // Minimum & Maximum data for year
    const int MINIMUM = 1900;
    const int MAXIMUM = 2000;
    cout << "Reading the input file.\n\n";
    ifstream inputFile;
    inputFile.open("People.txt");


        if (inputFile)
        {
            cout << "---------------------------------\n";
            cout << "PRAIRIEVILLE POPULATION GROWTH\n\n";
            cout << "(each * represents 1000 people)\n\n";

        for (year = MINIMUM; year <= MAXIMUM; year += 20)
            {
                inputFile >> people;

                // Get the number of stars!!
                numStar = people / ASTERISK;

                // Show your stars LOOP
                cout << year << " ";
                // Don't forget to Round
                while (numStar-- >= 0.5)
                    cout << star;

                cout << endl << endl;
            }
        }
        else cout << "Read Error! Please Restart The Program.";
    inputFile.close();
    return 0;
}
