/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Assignment 6 - TempConversion                    **
** Purpose: Convert Temperature from Celsius to Fahrenheit   **
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
	double celsius;		// Holds input Celsius value
	double fahrenheit;	// Holds calculated conversion value

	// Prompt user for temperature in Celsius.
	cout << "Please input a temperature in degrees Celsius: ";
	cin >> celsius;
	
	// Display input.
	cout << "You entered: " << fixed << setprecision(2) << celsius << endl;
	cout << endl;		// Blank Line

	// Perform calculations to convert Celsius to Fahrenheit.
	fahrenheit = ((celsius * 9) / 5) + 32;

	// Display Celsius temperature converted to Fahrenheit.
	cout << "The temperature converted to Fahrenheit is:    " << fixed 
		 << setprecision(2) << fahrenheit << endl;

	// Pause for a keystroke before exiting program.
	getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}