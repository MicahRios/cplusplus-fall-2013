/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Assignment 8 - If Temp                           **
** Purpose: Accept Temperature Input (Degrees / Scale)       **
**          Convert from Celsius to Fahrenheit (or F to C)   **
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
	double temp_degrees;	// Holds input temperature
	char temp_scale;		// Holds input temperature scale
	double celsius;			// Holds input Celsius value
	double fahrenheit;		// Holds calculated conversion value

	// Instructions for user.
	cout << "============================================================" << endl;
	cout << "|  This program will convert temperatures from Celsius     |" << endl;
	cout << "|  to Fahrenheit, OR from Fahrenheit to Celsius.  You      |" << endl;
	cout << "|  will be prompted to enter a number for the degrees,     |" << endl;
	cout << "|  and either an 'F' or a 'C' to indicate the temperature  |" << endl;
	cout << "|  scale you are starting with.                            |" << endl;
	cout << "============================================================" << endl << endl << endl;

	// Prompt user for a temperature to convert.
	cout << "Please input a number for the temperature in degrees: ";
	while (!(cin >> temp_degrees))		// While statement to validate numeric input
	{
		cout << "Must be a number: " << endl;
		cout << "Please input a number for the temperature in degrees: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << endl;		// Blank Line

	// Prompt user for temperature scale.
	cout << "Please input a 'C' for Celsius or 'F' for Fahrenheit: ";
	cin >> temp_scale;
	cout << endl;		// Blank Line

	// if statement to check for Celsius entry
	if(temp_scale == 'C' || temp_scale == 'c')
	{
		cout << "You entered: " << temp_degrees << " degrees Celsius." << endl;

		// Perform calculations to convert Celsius to Fahrenheit.
		fahrenheit = (9.0 / 5.0) * temp_degrees + 32;

		// Display Celsius temperature converted to Fahrenheit.
		cout << "The temperature converted to Fahrenheit is:    " << fixed 
			 << setprecision(2) << fahrenheit << " degrees." << endl << endl;
	}

	// else if statement to check for Fahrenheit entry
	else if(temp_scale == 'F' || temp_scale == 'f')
	{
		cout << "You entered: " << temp_degrees << " degrees Fahrenheit." << endl;

		// Perform calculations to convert Fahrenheit to Celsius.
		celsius = (5.0 / 9.0) * (temp_degrees - 32);

		// Display Fahrenheit temperature converted to Celsius.
		cout << "The temperature converted to Celsius is:    " << fixed 
			 << setprecision(2) << celsius << " degrees." << endl << endl;
	}

	// else statement to process invalid character entry.
	else
	{
		cout << "Sorry, " << temp_scale << " is not a valid entry." << endl;
		cout << "You must enter either the letter 'C' or letter 'F'" << endl << endl;		
	}

	// Pause for a keystroke before exiting program.
	cout << "The program will terminate after you press a key." << endl;
	getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}