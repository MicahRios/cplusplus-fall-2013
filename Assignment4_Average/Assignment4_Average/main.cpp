/************************************************************
**                                                         **
** Course:  80920 Programming C++                          **
** Name:    Assignment 4 - Average                         **
** Purpose: Using Variables to Store and Calculate Values  **
** Author:  Micah Rios                                     **
**                                                         **
************************************************************/

// #include <iostream> statement needed in order to use 'cout' keyword.
#include <iostream>

// #include <iomanip> statement needed in order to use 'setprecision' identifier.
#include <iomanip>

// #include <conio.h> statement needed in order to use '_getch' keyword.
#include <conio.h>

// using statement needed to instruct compiler where to find
// header files where it can access predefined classes and functions.
using namespace std;

// main() function is required for a program to run.
int main()
{
	// Variable Declarations
	double firstnum = 106.54;
	double secnum = 89.532;
	double thirdnum = 98.76;
	double total = firstnum + secnum + thirdnum;
	double average = total / 3;

	// Instruct program to output text to display
	// The keyword 'fixed' combined with 'setprecision(n)' instructs the program
	// to output real numbers to a set number (n) of decimal places.
	cout << "The first number is:           " << firstnum << endl;
	cout << "The second number is:          " << secnum << endl;
	cout << "The third number is:           " << thirdnum << endl;
	cout << "=======================================" << endl;
	cout << "The sum of the numbers is:     " << fixed << setprecision(4) << total << endl;
	cout << "The average of the numbers is: " << fixed << setprecision(1) << average << endl;

	// Pause for a keystroke before exiting program.
	getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}