// peopleandages.cpp
// 5 NOVEMBER 2018
// Hyunwook Jung
// Given a list of ages (1 to 100) from the keyboard, the program will tally how many people are in each age group.
#include <iostream>

using namespace std;

void addPerson(int []);             // Add one to subscript input by user
void feelArray(int [], int);        // make a array filled with 0
void showNumberPeople(int [], int); // Show every subscripts that is not 0

const int SIZE = 100;

int main()
{
    int numPeople[SIZE];        // make a array filled with 0

    feelArray(numPeople, SIZE);
    addPerson(numPeople);
    showNumberPeople(numPeople, SIZE);

    return 0;
}

void feelArray(int array[], int size)   // make a array filled with 0
{
    for (int i = 0; i < size; i++)
        array[i] = 0;
}

void addPerson(int array[])         // Add one to subscript input by user
{
    int userCommand = 0;        // index of subscript input by user
    while(userCommand != -99)
    {

        cout << "Please input an age from one to 100, put -99 to stop" << endl;

        cin >> userCommand;
        if (userCommand == -99)     // QUIT
            cout << "You choose to quit" << endl << endl;
        else if (userCommand < 1 || userCommand > 100)  // Filtering
            cout << "Invalid Value." << endl;
        else if (userCommand != -99)    // Proper job process
            array[userCommand - 1]++;
    }
}

void showNumberPeople(int array[], int size)    // Show every subscripts that is not 0
{
    int count = 0;
    while (count < size)
    {
        if (array[count] != 0)
        {
            cout    << "The number of people " << count + 1
                    << " years old is " << array[count] << endl;
        }
        count++;
    }
}
