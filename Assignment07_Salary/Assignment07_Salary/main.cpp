/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Assignment 7 - Salary                            **
** Purpose: Calculates Weekly Salary with Adj for Overtime   **
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

// #include <string> statement needed in order to use strings
#include <string>

// #include <math.h> statement needed to use math functions
#include <math.h>

// using statement needed to instruct compiler where to find
// header files where it can access predefined classes and functions.
using namespace std;

// Function Declarations
double input();		// Function to accept and evaluate input.

// main() function is required for a program to run.
int main()
{
	// Variable Declarations
	double regular_pay_rate = 8.00;
	double overtime_pay_rate = 12.00;
	double hours = 0;
	double pay_for_week = 0;
	bool fail = true;

	while (fail = true)
	{
		input();			// Call input function to accept and evaluate input.
	}

	if (fail = false)
	{
		if (hours <= 40.00)
		{
			pay_for_week = hours * regular_pay_rate;
			cout << "The employee worked a total of " << fixed
				 << setprecision(2) << hours << " hours this week." << endl;
			cout << endl << "The employee's Gross Pay for the week is: $ "
				 << fixed << setprecision(2) << pay_for_week;
		}
		if (hours > 40.00)
		{
			pay_for_week = 40 * regular_pay_rate;		// Set total to 40 hours at regular rate.

			// Display Total Hours
			cout << "The employee worked a total of " << fixed
				 << setprecision(2) << hours << " hours this week." << endl;

			// Display Regular Pay
			cout << endl << "The employee's Gross Regular Pay for the week is: $"
				 << fixed << setprecision(2) << pay_for_week << endl;

			hours = hours - 40;		// Subtract regular hours

			// Display Overtime Pay
			cout << "The employee's Gross Overtime Pay for the week is: $"
				 << fixed << setprecision(2) << hours * overtime_pay_rate << endl;

			pay_for_week += hours * overtime_pay_rate;		// Add overtime pay to total.

			// Display Total Wages for the Week (Regular Pay + Overtime)
			cout << "The employee's Total Gross Pay for the week is: $"
				 << fixed << setprecision(2) << pay_for_week << endl;
		}
	}

	cout << "Press any key to end the program.";

	// Pause for a keystroke before exiting program.
	_getch();

	// Required return statement.  For this program, 0 is returned.
	return 0;
}

double input(double hours)
{
	cout << "This program calculates an employee's salary for the week." << endl << endl;
	cout << "Please enter the number of hours worked for the week: ";
	cin >> hours;

	while (true)
	{
		if (cin.fail() || hours <= 0)
		{
			// Clear input stream.
			cin.clear();			

			// Clear the screen.
			system("cls");

			cout << "Bad input:  Entry must be a valid positive number." << endl;
			cout << "Please try again. <Press any key to continue.>";

			_getch();

			// Clear the screen.
			system("cls");

			hours = 0;
			return hours;
		}

		else
		{
			bool fail = false;
			return hours;
		}
	}
}