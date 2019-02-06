 // Lab 6 kiloConverter.cpp
 // This menu-driven program lets the user convert
 // pounds to kilograms and kilograms to pounds.
 // Hyunwook Jung
 #include <iostream>
 #include <cstdlib>
 using namespace std;

 // Function prototypes
 // WRITE PROTOTYPES FOR THE displayMenu, getChoice,
 // kilosToPounds and poundsToKilos FUNCTIONS HERE.
  void displayMenu();
  int getChoice(int, int);
  void kilosToPounds(double);
  void poundsToKilos(double);

const double    KILTOPOUNDS = 2.2,
                POUNDSTOKIL = 1 / 2.2;

const int   MENUMIN = 1,
            MENUMAX = 3;

 /*****     main     *****/
 int main()
{
    int choice;// DECLARE ANY VARIABLES MAIN USES HERE.
    double weight;
do
    {
        displayMenu();
        choice = getChoice(MENUMIN, MENUMAX);

        // WRITE THE CODE HERE TO CARRY OUT THE STEPS
        // REQUIRED BY THE PROGRAM SPECIFICATIONS.
        if (choice == 3)
        {
            // QUIT!!!
            exit(0);
        }
        cout << "Enter the number to convert with: ";
        cin >> weight;
        while (weight < 0)  // Validate Weight!
        {
            cout << "The number of weight cannot be negative.\n";
            cout << "Enter the number to convert with: ";
            cin >> weight;
        }

        if (choice == 1)
        {
            kilosToPounds(weight);
        }
        else if (choice == 2)
        {
            poundsToKilos(weight);
        }
        else
        {
            cout << "@@@@@@@@@@@@@@UNDEFINED ERROR@@@@@@@@@@@@@";
            exit(0);
        }
        cout << "\n\n";
    } while (choice != 3);
    return 0;
}

 /*****     displayMenu     *****/
 void displayMenu()
 // WRITE THE displayMenu FUNCTION HERE.
 // THIS void FUNCTION DISPLAYS THE MENU CHOICES
 //  1. Convert kilograms to pounds
 //  2. Convert pounds to kilograms
 //  3. Quit
 {
    cout << "1. Convert kilograms to pounds\n"
         << "2. Convert pounds to kilograms\n"
         << "3. Quit" << endl;
    cout << "Enter a number from the list of the menu: ";
 }

 /*****     getChoice     *****/
 // THIS IS THE SAME FUNCTION YOU WROTE EARLIER IN THIS SET
 // OF LAB EXERCISES. JUST FIND IT AND PASTE IT HERE.
int getChoice(int min, int max)
 {
    int input;

    // Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {   cout << "Invalid input. Enter an integer between " << min << " and " << max << endl << endl;
        displayMenu();
        cin  >> input;
    }
    return input;
 }

 /*****     kilosToPounds     *****/
 // WRITE THE kilosToPounds FUNCTION HERE.
 // IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
 // AND RETURN THE EQUIVALENT NUMBER OF POUNDS.
void kilosToPounds(double kilos)
{
    double pounds;
    pounds = kilos * KILTOPOUNDS;

    cout << "It is " << pounds << " pounds.\n";
}

 /*****    poundsToKilos     *****/
 // WRITE THE poundsToKilos FUNCTION HERE.
 // IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
 // AND RETURN THE EQUIVALENT NUMBER OF KILOS.
void poundsToKilos(double pounds)
{
    double kilos;
    kilos = pounds * POUNDSTOKIL;

    cout << "It is " << kilos << " kilograms.\n";
}
