#include <iostream>

using namespace std;

const int   SIZE = 20,
            PASSORFAIL = 15;

void getAnswer(char [], int);  // Get user Input
int getScore(const char [], char [], int);  // Check the score
void showWrongNum(const char[], char[], int);   // Show wrong questions

int main()
{
    const char answer[SIZE] =  {'B', 'D', 'A', 'A', 'C',
                                'A', 'B', 'A', 'C', 'D',
                                'B', 'C', 'D', 'A', 'D',
                                'C', 'C', 'B', 'D', 'A'};

    char studentAns[SIZE];
    getAnswer(studentAns, SIZE);
    int score = getScore(answer, studentAns, SIZE);

    if (score >= PASSORFAIL)
        cout << "\nYou passed the test!";
    else cout << "\nYou failed the test!!!!!!!!!!!!!!!";
    cout << "\n-----------------------------------------------------------------------";

    int wrongAns = SIZE - score;
    cout << "\nThe total number of correctly answered questions is " << score;
    cout << "\nThe total number of incorrectly answered questions is " << wrongAns;
    cout << "\nList of the question numbers of the incorrectly answered questions.\n";
    showWrongNum(answer, studentAns, SIZE);
    if (wrongAns == 0)
        cout << "\nWow! You got full score!";

    return 0;
}

void getAnswer(char array[], int size)  // Get user Input
{
    for (int count = 0; count < size; count++)
        {
            cout << "What is the answer for Question " << count + 1 << "?(A, B, C OR D)";
            cin >> array[count];

            while (array[count] != 'A' && array[count] != 'B' && array[count] != 'C' && array[count] != 'D')
            {
                cout << "\nInvalid answer.\nPlease enter between A, B, C or D";
                cin >> array[count];
            }   // Filtering

        }
}

int getScore(const char answer[], char array[], int size)  // Check the score
{
    int correctAnswer = 0;
    for (int count = 0; count < size; count++)
    {
        if (answer[count] == array[count])
            correctAnswer ++;
    }
    return correctAnswer;
}

void showWrongNum(const char answer[], char array[], int size)
{
    for (int count = 0; count < size; count++)
    {
        if (answer[count] != array[count])
            cout << count + 1 << " ";
    }
}
