/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Assignment 5 - Formatting Output                 **
** Purpose: Format/Manipulate values and Display Appearance  **
** Author:  Micah Rios                                       **
**                                                           **
**************************************************************/

// #include <iostream> statement needed in order to use 'cout' keyword.
#include <iostream>

// #include <iomanip> statement needed in order to use the 'fixed', 'hex', 
// 'oct', 'setw()', and 'setprecision()' identifier.
#include <iomanip>

// #include <conio.h> statement needed in order to use '_getch' keyword.
#include <conio.h>

// using statement needed to instruct compiler where to find
// header files where it can access predefined classes and functions.
using namespace std;

// main() function is required for a program to run.
int main()
{
	// Variable Declaration
	const int firstnum = 32;
	double secnum = 42.98765;

	// Instruct program to output text to display
	// 'oct(n or variable name)' converts value to octal (Base 8) format
	// 'hex(n or variable name)' converts value to hexadecimal (Base 16) format
	// The 'setw(n)' instructs the program to set the width of the current field to (n) places.
	// The keyword 'fixed' combined with 'setprecision(n)' instructs the program
	// to output real numbers to a set number (n) of decimal places.

	cout << endl;     // blank line
	cout << "The hex of " << firstnum << " is " << hex << firstnum << endl;

	cout << setiosflags(ios::dec); // Resets format of numbers to decimal format in iostream

	cout << "The octal of " << firstnum << " is " << oct << firstnum << endl;

	cout.setf(ios::dec); // Also resets format of numbers to decimal format in iostream

	cout << endl;
	cout << "|" << setw(10) << fixed << setprecision(3) << secnum << "|" << endl;
	cout << "|" << setw(10) << fixed << setprecision(4) << secnum << "|" << endl;
	cout << "|" << setw(10) << fixed << setprecision(5) << secnum << "|" << endl;
	cout << "|" << setw(10) << fixed << setprecision(6) << secnum << "|" << endl;
	cout << endl;
	cout << "|" << setw(5) << firstnum << "|" 
		 << setw(10) << fixed << setprecision(2) << secnum << "|" << endl;

	// Pause for a keystroke before exiting program.
	getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}