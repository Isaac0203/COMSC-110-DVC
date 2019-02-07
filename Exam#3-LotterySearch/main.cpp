#include <iostream>                           // Let program do cout command
using namespace std;                          //   Let program create the name for variables and functions

bool searchList(const long [], int, long);    //   Function prototype that let program delay the description of it after main function

const int SIZE = 10;                          // Indicates a constant integer variable which cannot be changed later

int main()                                    // Beginning of main function
{
	long ticket[SIZE] = { 13579,  26791,       // Initializing long type values into a variable array 'ticket'
						  26792,  33445,
						  55555,  62483,
						  77777,  79422,
						  85647,  93121 };


	long winningNum;                           // Indicate long type variable without a specific value in it

	cout << "\nPlease enter this week's 5-digit "   // Make console print certain messages.
		 << "winning lottery number: ";              //    In this case, "Please enter this week's 5-digit winning lottery number: "

	cin  >> winningNum;                             // Asking user to store a value to variable winningNum


	if (searchList(ticket, SIZE, winningNum))       //  If return value from searchList function is true, then activate codes in {}
	{

		cout << "You have a winning ticket.\n";      // Print the sentence "You have a winning ticket."
	}
	else                                            //If return value from searchList function is false, then activate codes in {}
	{
		cout << "You did not win this week." << endl;    //Print the sentence "You did not win this week."
	}

	return 0;                             // Return 0 to computer to shows it is time to execute the program
}

// ********************************************************
//                                                        *
//                                                        *
//                                                        *
//                                                        *
//                                                        *
//                                                        *
// ********************************************************




bool searchList(const long list[], int numElems, long value)
{
	bool found = false;                            // Set a boolean variable to false


 //
	for (int count = 0; count < numElems && !found; count++)
	{
		if (list[count] == value)      // if the element at list[count] is same with the value of the variable 'value'
			found = true;               // then activate the code below that change the bool variable to true
	}

	return found;                     //  return the value of 'found' variable and finish the searchList function
}

