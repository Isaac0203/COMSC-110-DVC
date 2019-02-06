#include <iostream>
#include <cstdlib>
// 9 DEC 2018
// Diablo Valley College 1728369 Hyunwook Jung
// Pointers Homework Lab 9.4 - Option 2
/* Option 2: This program will read in id numbers and place them in an array.
The array is dynamically allocated large enough to hold the number of id
numbers given by the user. The program will then input an id and call a
function to search for that id in the array. It will print whether the id is in
the array or not. */

using namespace std;

int askSize();  // Get the number of size of ID array
void makeIDArray(int *, int);  // Make the ID array
void printArray(const int *, int);  // Just printing. (Check)
void copyArray(const int *, int [], int);    // Make a copy of ID array to sort
void sortArrayInOrder(int [], int);  // Sort the copied array for search
int askSearchNum(); // Ask user the number to search for
bool searchNum(int [], int, int);   // Is the number in the array or not?

int main()
{
    int size = askSize();   // Get the number of size of ID array

    int *IDptr = nullptr;   // IDptr: Main array that has IDs in it
    IDptr = new int[size];
    makeIDArray(IDptr, size); // Make the ID array

    int IDptrCopy[size];    // Array with same elements to sort
    copyArray(IDptr, IDptrCopy, size);  // Make a copy of ID array to sort

    sortArrayInOrder(IDptrCopy,size);   // Sort the copied array for search

    int numSearch = askSearchNum(); // Ask user the number to search for

    bool inArrayOrNot = searchNum(IDptrCopy, size, numSearch);  // Is the number in the array or not?

    cout << endl << "The ID " << numSearch << " is ";

    if(inArrayOrNot == true)
        cout << "in the array.";
    else
        cout << "not in the array.";

    return 0;
}

int askSize()   // Get the number of size of ID array
{
    int size;
    do
    {
        cout << "How many IDs do you have? ";
        cin >> size;
        if (size == 0)  //  NO ID!
        {
            cout << "There is no ID to search.";
            exit(0);
        }
        else if (size < 0)  //  Filtering invalid value (size < 0)
        {
            cout << "Please enter a positive integer.\n";
        }
        else return size;   // Succeed in getting number of size
    } while(size <0);
}

void makeIDArray(int *IDptr, int size)
{

    for (int count = 0; count < size; count++)
    {
        cout << "The #" << (count + 1) << "ID: ";
        cin >> IDptr[count];
    }
}

void printArray(const int *array, int size) // For Checking error
{
    for (int count = 0; count < size; count++)
    {
        cout << "The #" << (count + 1) << "ID: " << array[count] << endl;
    }
}

void copyArray(const int *array, int IDptrCopy[], int size) // Make a copy of ID array to sort
{
    for (int count = 0; count < size; count++)
    {
        IDptrCopy[count] = array[count];
    }
}

void sortArrayInOrder(int IDArray[], int size)  // Sort the copied array for search
{
    int minValue, minIndex, count, i;
    for (count = 0; count < size; count++)
    {
        minValue = IDArray[count];
        minIndex = count;
        for (i = count; i < size; i++)
        {
            if (minValue > IDArray[i])
            {
                minValue = IDArray[i];
                minIndex = i;
            }
        }
        IDArray[minIndex] = IDArray[count];
        IDArray[count] = minValue;
    }
}

int askSearchNum()
{
    int numSearch;
    cout << "\nWhat is the ID you are searching for?\n";
    cin >> numSearch;
    return numSearch;
}

bool searchNum(int IDArray[], int size, int numSearch)
{
    bool itIsIn = false;    // Is the number in the array or not?

    for (int count = 0; count < size; count++)
    {
        if (IDArray[count] == numSearch)
            itIsIn = true;
    }
    return itIsIn;
}

/*  -Ask the size of the int array
    -and then make the dynamic allocated int array
    -and then ask and input the int values for each elements SIZE times.

    -Make one more pointer array that has same elements of ID array
    -addressArray[index] == array[index]

    -Sort the addressArray in specific order to get ID in ascend order in ID array
    -Ask user the ID to search in the ID array

    <Searching function>
    Compare the value input by user and in the array
    if there is the value user is looking for,
        return true
    else return false       */
