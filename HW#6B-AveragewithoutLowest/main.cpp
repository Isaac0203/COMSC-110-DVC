// LowestScoreDropped.cpp
// 23 Oct 2018
// Hyunwook Jung
/* Write a program that calculates the average
   of a group of test scores, where the lowest score
   in the group is dropped.*/

#include <iostream>

using namespace std;

// Function prototypes
void getScore(int&, int&, int&, int&, int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    int score1, score2, score3, score4, score5;

    getScore(score1, score2, score3, score4, score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

/***************************************************************
    A void function, Get user input for scores and 'store'
    their data to score variables, reference
 ***************************************************************/
void getScore(int& num1, int& num2, int& num3, int& num4, int& num5)
{

    cout << "Enter the test score(separated by space or enter): ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // INPUT VALIDATION:
    // DO NOT ACCEPT TEST SCORES LOWER THAN 0 OR HIGHER THAN 100
    while (num1 < 0 || num1 > 100 || num2 < 0 || num2 > 100 ||
           num3 < 0 || num3 > 100 || num4 < 0 || num4 > 100 || num5 < 0 || num5 > 100)
    {
        cout    << "Invalid Input.\n"
                << "Enter a test score between 0 to 100(separated by space or enter): ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
    }
}

/***************************************************************
    A void function, Get lowest score from findLowest() and
            print the average of the rest four scores
 ***************************************************************/
void calcAverage(int num1, int num2, int num3, int num4, int num5)
{
    int lowestNum = findLowest(num1, num2, num3, num4, num5);

    double averageFour, total;
    total = num1 + num2 + num3 + num4 + num5;
    averageFour = (total - lowestNum) / 4;

    cout << "The average of the four highest scores is " << averageFour;
}

/***************************************************************
    An int function, Get 5 scores, calculate the lowest score,
            and return it to calcAverage() function
 ***************************************************************/
int findLowest(int num1, int num2, int num3, int num4, int num5)
{
    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
    {
        return num1;
    }
    else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5)
    {
        return num2;
    }
    else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5)
    {
        return num3;
    }
    else if (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5)
    {
        return num4;
    }
    else if (num5 <= num1 && num5 <= num2 && num5 <= num3 && num5 <= num4)
    {
        return num5;
    }
    else cout << "@@@@@@@@@@@@@@@@@@UNDEFINED ERROR@@@@@@@@@@@@@@@@@@@@@";
}
