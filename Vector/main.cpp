#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;

    myVector.push_back(5);


    cout << "Vector: " << endl;
    cout << myVector.size() << endl;
    for (unsigned int count = 0; count < myVector.size(); count++)
    {
        cout << "\n--------------------------------\n";
        cout << myVector.at(count);
        cout << "\n--------------------------------\n";
    }
    int z = myVector.at(0);
    for (unsigned int count = 0; count < myVector.size(); count++)
    {
        cout << "\n--------------------------------\n";
        cout << myVector[count];
        cout << "\n--------------------------------\n";
    }
    cout << z;
    return 0;
}
