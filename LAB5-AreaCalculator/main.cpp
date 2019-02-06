// Lab 6-5 area2.cpp
// Hyunwook Jung
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	void displayMenu();
	double findSquareArea();
	double findCircleArea();
	double findTriangleArea();
	int getChoice(int, int);

	const double PI = 3.14159; // Constant variable for PI

int main()
{


    // Variables for calculation
    int choice; // Menu control
    do
    {
        displayMenu();
    // Get menu command
    choice = getChoice(1, 4);

    cout << fixed << setprecision(4); // Formatting

    if (choice == 1)
    {
        cout << "\nArea = " << findSquareArea();
    }
    else if (choice == 2)
    {
        cout << "\nArea = " << findCircleArea();
    }
    else if (choice == 3)
    {
        cout << "\nArea = " << findTriangleArea();
    }
    else if (choice > 4 || choice < 1) // Filter out invalid numbers
        cout << "\nPlease enter a valid number between 1, 2, 3, or 4.";

        cout << "\n\n\n\n";
        }while (choice != 4);

        cout << "---------Program Off---------";
    return 0;
}

void displayMenu()
{
    // Menu Printing
    cout << "Program to calculate areas of objects\n";

    cout << "\t1 -- square" << endl
    << "\t2 -- circle" << endl
    << "\t3 -- right triangle" << endl
    << "\t4 -- quit" << endl;

}

double findSquareArea()
{
    double width, square;

    do
    {
        cout << "\nWidth of a square: ";
        cin >> width;
        if (width > 0)
        {
            square = pow (width, 2);
            return square;  // Return the value of square area
        }
        else cout << "\nThe width of a square cannot be negative or zero."; // Filter out invalid numbers
    } while (width <= 0);
}

double findCircleArea()
{
    double radius, circle;

    do
    {
        cout << "\nRadius of a circle: ";
        cin >> radius;
            if (radius > 0)
            {
                circle = PI * pow(radius, 2);
                return circle;  // Return the value of circle area
            }
        else cout << "\nThe radius of a circle cannot be negative or zero."; // Filter out invalid numbers
    } while(radius <= 0);
}

double findTriangleArea()
{
    double width, height, triangle;

    do
    {
        cout << "\nWidth of a right triangle: ";
        cin >> width;
        cout << "\nHeight of a right triangle: ";
        cin >> height;
        if (width <= 0 || height <= 0)
            cout << "\nThe width and height of a right triangle cannot be negative or zero."; // Filter out invalid numbers
        else{
            triangle = width * height / 2;
            return triangle;  // Return the value of triangle area
            }
    } while (width <= 0 || height <= 0);
}

 /*****     getChoice     *****/
 int getChoice(int min, int max)
 {
    int input;

    // Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {  cout << "Invalid input. Enter an integer between " << min << " and " << max << " : ";
       cin  >> input;
    }
    return input;
 }
