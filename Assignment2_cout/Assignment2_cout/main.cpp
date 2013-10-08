/*******************************************
**                                        **
** Course:  80920 Programming C++         **
** Name:    Assignment 2 - cout           **
** Purpose: Display output to a console.  **
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
	cout << "Computers, computers everywhere";

	// The '\n' instructs program to go to the next line of the
	// display before continuing output.
	cout << "\n  as far as I can C.";
	cout << "\nI really, really like these things.";
	cout << "\n  Oh joy.  Oh joy for me!";

	// Pause for a keystroke before exiting program.
	_getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}