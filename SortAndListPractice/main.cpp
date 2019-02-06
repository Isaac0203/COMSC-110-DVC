#include <iostream>
// Hyunwook Jung DVC
using namespace std;
const int SIZE = 8;
int main()
{
    int array[SIZE] = {23, 0, 45, -3, -78, 1, -1, 9};
    int temp;
    bool sortDone;

    int minValue;
    int minIndex;
    for (int i = 0; i < SIZE; i++)   //Print & Check array
        cout << array[i] << ' ';

    cout << "\n----------------------------------------------\n";
    /* {{Go through array[0] ~ array[SIZE] and contrast minimum Value.}
    Store value to minValue and index to minIndex
    Store array[0] to temp
    Store minValue to array[0]
    Store temp to array[minIndex]}
    Repeat, Go through array[1] ~ array [SIZE-1] and contrast minimum Value.
    */
    int countFirst, countMin;
    for (countFirst = 0; countFirst < SIZE; countFirst++)
    {
        minValue = array[countFirst];
        minIndex = countFirst;
        for (countMin = countFirst; countMin < SIZE; countMin++)  // Get MiNIMUM
        {
            if (minValue > array[countMin])   //Checking
            {
                minValue = array[countMin];
                minIndex = countMin;
            }
        }
        temp = array[countFirst];
        array[countFirst] = minValue;
        array[minIndex] = temp;
    }
    cout << "\n----------------------------------------------\n";

    for (int i = 0; i < SIZE; i++)   //Print & Check array
    cout << array[i] << ' ';

    return 0;
}
