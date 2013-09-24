/*************************************************************
**                                                          **
** Name:     Exam 1 Practical                               **
** Purpose:  Calculate MPG (Miles Per Gallon)               **
** Author:   Micah Rios								        **
** Date:     09/24/2013                                     **
** Course:   80920 Computer Programming C++                 **
**                                                          **
*************************************************************/

// Bring in external libraries
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	// Declare variables for storing user input.
	double miles_driven;
	double gallons_used;

	// Declare variable for MPG calculation.
	double miles_per_gallon;

	// Prompt for user input.
	/*cout << "Enter the miles driven: "; 
	cin >> miles_driven;
	cout << endl << "Enter the gallons of gas used: ";
    cin >> gallons_used;
	
	// Perform calculations for MPG
	miles_per_gallon = miles_driven / gallons_used;

	cout << endl;

	// Set the number of decimal places to round to, and display calculated MPG.
	cout << fixed << setprecision(1) << "Calculated Miles Per Gallon: " << miles_per_gallon << endl;
	cout << endl;
	*/

	// ***** Testing

	int amt = 0;

	cout << "amt = amt + 1: ";
	amt = amt + 1;
	cout << amt;
	cout << endl << "amt ++ :";
	amt ++;
	cout << amt;
	cout << endl << "++amt :";
	++amt ;
	cout << amt;


	


	// End Testing *****

	// Prompt for user action to exit program.
	cout << "Press any key to quit.";

	// Wait for key press and exit program.
	_getch();
	return 0;
}

