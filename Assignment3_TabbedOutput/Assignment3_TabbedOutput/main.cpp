/*******************************************
**                                        **
** Course:  80920 Programming C++         **
** Name:    Assignment 3 - Output w Tabs  **
** Purpose: Output with Escape Sequences  **
** Author:  Micah Rios                    **
**                                        **
*******************************************/

// #include <iostream> statement needed in order to use 'cout' keyword.
#include <iostream>

// #include <conio.h> statement needed in order to use '_getch' keyword.
#include <conio.h>

// using statement needed to instruct compiler where to find
// header files where it can access predefined classes and functions.
using namespace std;

// main() function is required for a program to run.
int main()
{
	// Instruct program to output text to display
	// The '\t' instructs program to go to tab over to a new column
	// on display before continuing output.
	cout << "PART NO.\t" << "  PRICE" << endl;
	cout << "T1267   \t" << "  $6.34" << endl;
	cout << "T1300   \t" << "  $8.92" << endl;
	cout << "T2401   \t" << " $65.40" << endl;
	cout << "T4482   \t" << "$103.45" << endl;

	// Pause for a keystroke before exiting program.
	getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}