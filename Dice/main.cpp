#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int getRandom(int MIN_VALUE, int MAX_VALUE);

int main()
{
    cout << getRandom(1, 6) + getRandom(1, 6);
    return 0;
}

int getRandom(int MIN_VALUE, int MAX_VALUE)
{
            // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    int randomValue = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    return randomValue;
}
