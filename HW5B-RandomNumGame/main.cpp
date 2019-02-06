// RandomNumberGame.cpp
#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time function
// Hyunwook Jung
using namespace std;

int main()
{
    // Get the time seed
    unsigned seed = time(0);

    // Seed the random number generator
    srand(seed);

    // Set the range of random numbers
    int goal = (rand() % (100 - 1 + 1)) + 1;

    // User's Guess
    int numbertry;

    cout << "Guess what the number is. (integer between 1 ~ 100)\n";
    do  {
            cin >> numbertry;
            if (numbertry <= 0) // Filtering negative input
                cout << "Invalid Input. Enter a integer between 1 - 100.\n";
            else if (numbertry > goal)
                cout << "Too high. Try again.\n";
            else if (numbertry < goal)
                cout << "Too low. Try again.\n";
        }while (numbertry != goal);

    // Guess Correctly!!
    cout << "\nCongratulations! You figured out my number!";

    return 0;
}
