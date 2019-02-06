#include <iostream>
#include <iomanip>
//sortandlist.cpp
//28 NOV 2018
//Hyunwook Jung
//Array sort and search program

using namespace std;

int askNumSize();                       // Ask a NUMBER OF ELEMENTS
void askArray(int [], int);             // ARRAY MAKING WITH SIZE VALUE
void printArray(int [], int);           // Print array values (for checking)
void sortArray(int [], int);            // Sort in ascend order
int askNumSearched();                   // ASK A VALUE WHICH IS SEARCHED FOR
int binSearch(int [], int, int);        // BINARY SEARCH, RETURN INDEX OR -1
void saveOriginal(int [], int, int []); // SAVE ORIGINAL ARRAY FOR LATER PRINT
double getMean(int [], int);            // CALCULATE MEAN

int main()
{
    int size = askNumSize();    // Get the size of the array

    int array[size];

    askArray(array, size);      // original array made completed

    int originalArray[size];    // ORIGINAL ARRAY COPYING

    saveOriginal(array, size, originalArray);    // ORIGINAL ARRAY COPYING 2

    sortArray(array, size);     // Sort in ascend order

    int numSearched = askNumSearched();     // ASK A VALUE WHICH IS SEARCHED FOR

    int indexAimed = binSearch(array, size, numSearched);    // BINARY SEARCH, RETURN INDEX OR -1

    double mean = getMean(array, size);        // CALCULATE MEAN

/*  PRINT   SIZE OF THE ARRAY,
            ORIGINAL ARRAY BEFORE SORT
            SORTED ARRAY
            INTEGER BEING SEARCHED FOR
            LOCATION OF THE INTEGER BEING SEARCHED FOR
            MEAN = (SUM OF ELEMENTS) / NUMBER OF ELEMENTS   */

    cout << "\n-----------------------------------------------\n";
    cout << "The size of the array is " << size;
    cout << "\nThe original array is ";
    printArray(originalArray, size);

    cout << "\nThe array after sort is ";
    printArray(array, size);

    cout << "\nThe integer value being searched for is " << numSearched;
    cout << "\nAnd that value is ";
    if (indexAimed == -1)
    {
        cout << "not in the array";
    }
    else
    {
        cout << "at " << (indexAimed + 1);
        int first = 1, second = 2, third = 3;
        if ((indexAimed + 1) % 10 == first)
            cout << "st ";
        else if ((indexAimed + 1) % 10 == second)
            cout << "nd ";
        else if ((indexAimed + 1) % 10 == third)
            cout << "rd ";
        else cout << "th ";

        cout << "place in the array";
    }

    cout << "\nThe mean value of this array's elements is ";
    cout << fixed << setprecision(2);
    cout << mean;
    cout << "\n-----------------------------------------------\n";
    return 0;
}

int askNumSize()    // Ask a NUMBER OF ELEMENTS
{
    int size;
    do
    {
        cout << "Enter a number of elements of the array(1~50): ";
        cin >> size;    // Ask Number of size
        if (size < 1 || 50 < size)  // Filter (1 <= size <= 50)
            cout << "You entered an invalid value.\n";
    } while (size < 1 || 50 < size);

    return size;
}

void askArray(int array[], int size)    // ARRAY MAKING WITH SIZE VALUE
{
    cout << "Enter the values of elements separated by a blank(a space or an enter).\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void printArray(int array[], int size)  // Print array values (for checking)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << "}";
}

void sortArray(int array[], int size)   // Sort in ascend order
{
    int minValue, minIndex;
    int i, j;
    for (i = 0; i < size; i++)
    {
        minValue = array[i];
        minIndex = i;

        for (j = i; j < size; j++)  // Get minimum value between i, i+1, i+2 ... size-1
        {
            if (minValue > array[j])
            {
                minValue = array[j];
                minIndex = j;
            }
        }
        array[minIndex] = array[i];
        array[i] = minValue;
    }
}

int askNumSearched()   // ASK A VALUE WHICH IS SEARCHED FOR
{
    cout << "\nWhat number are you searching for? ";
    int numSearched;
    cin >> numSearched;

    return numSearched;
}

int binSearch(int array[], int size, int numSearched)   // BINARY SEARCH, RETURN INDEX OR -1
{
    int minIndex = 0, maxIndex = size - 1;
    int searchAim;  // Index that search function aim for this time

    do
    {
        searchAim = (minIndex + maxIndex) / 2;

        if (array[searchAim] == numSearched)    // HIT!
        {
            return searchAim;
        }
        else if (array[searchAim] > numSearched)    // array[0] ~ numberSearched ~ array[50%]
        {
            maxIndex = searchAim - 1;
        }
        else if (numSearched > array[searchAim])    // array[50%] ~ numberSearched ~ array[100%]
        {
            minIndex = searchAim + 1;
        }

        if (numSearched < array[0]|| array[size - 1] < numSearched)    // NO DATA IN MY ARRAY!!
            return -1;
    } while (array[searchAim] != numSearched);
}

void saveOriginal(int array[], int size, int originArray[]) // SAVE ORIGINAL ARRAY FOR LATER PRINT
{
    for (int i = 0; i < size; i++)
    {
        originArray[i] = array[i];
    }
}

double getMean(int array[], int size)   // CALCULATE MEAN
{
    double sum = 0.0;
    double mean;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    mean = sum / size;

    return mean;
}
