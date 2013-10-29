/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Assignment 7 - Salary                            **
** Purpose: Calculates Weekly Salary with Adj for Overtime   **
** Author:  Micah Rios                                       **
** Date:    10/26/2013   11:09 AM                            **
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

// #include <limits> and <Windows.h>s statement needed to use 'numeric_limits<double>::max()'
#include <limits>
#include <Windows.h>

// #include <math.h> needed for math operations
#include <math.h>

// using statement needed to instruct compiler where to find
// header files where it can access predefined classes and functions.
using namespace std;

// Function Declarations
void validate_input(double*, bool*);		// Validates input is a positive numeric entry.
void invalid_input(double);					// Routine to handle 2nd and 3rd input attempts.
void clear_screen();						// Clears screen to receive new input.
void bad_input();							// Function to display input entry error message.
double calculate_regular_pay(double*, double, double*);		// Calculates regular pay.
double calculate_overtime_pay(double*, double, double*);	// Calculates overtime pay.

int main()
{
	// Variable Declaration
	int input_attempt_count = 0;		// Number of times program has asked for valid input.
	double hours = 0;
	double regular_hours = 0;
	double overtime_hours = 0;
	double regular_pay_rate = 8.00;
	double overtime_pay_rate = 12.00;
	double pay_for_week = 0;
	double regular_pay_for_week = 0;
	double overtime_pay_for_week = 0;
	bool is_valid = false;

	do
	{
		input_attempt_count++;		// Increment try counter.

		cout << "This program calculates an employee's salary for the week." << endl << endl;
		cout << "Please enter the number of hours worked for the week: ";
		cin >> hours;

		if (!(cin >> hours))
		{
			invalid_input(input_attempt_count);
			continue;
		}

		if (cin >> hours)
		{
			double *test_input = &hours;
			bool *test_numeric = &is_valid;
			validate_input(test_input, test_numeric);
		}

	} while (is_valid == false && input_attempt_count <= 3);

		if (is_valid == true && hours <= 40.00)
		{
			regular_hours = hours;
			double *reg_hours = &regular_hours;
			double *reg_pay = &regular_pay_for_week;

			cout << endl << "The employee worked a total of " << fixed
			<< setprecision(2) << hours << " hours this week." << endl;
			cout << endl << "The employee's Gross Pay for the week is: $ "
			<< fixed << setprecision(2)
			<< calculate_regular_pay(reg_hours, regular_pay_rate, reg_pay) << endl;
		}

		if (is_valid == true && hours > 40.00)
		{
			regular_hours = 40;
			overtime_hours = hours - regular_hours;
			double *reg_hours = &regular_hours;
			double *ot_hours = &overtime_hours;
			double *reg_pay = &regular_pay_for_week;
			double *ot_pay = &overtime_pay_for_week;

			// Display Total Hours
			cout << endl << "The employee worked a total of " << fixed
			<< setprecision(2) << hours << " hours this week." << endl;

			// Display Regular Pay
			cout << endl << "The employee's Gross Regular Pay for the week is: $"
			<< fixed << setprecision(2) 
			<< calculate_regular_pay(reg_hours, regular_pay_rate, reg_pay) << endl;

			// Display Overtime Pay
			cout << "The employee's Gross Overtime Pay for the week is: $"
			<< fixed << setprecision(2)
			<< calculate_overtime_pay(ot_hours, overtime_pay_rate, ot_pay) << endl;

			// Display Total Wages for the Week (Regular Pay + Overtime)
			pay_for_week = regular_pay_for_week + overtime_pay_for_week;
			cout << "The employee's Total Gross Pay for the week is: $"
			<< fixed << setprecision(2) << pay_for_week << endl;
		}	

	if (is_valid = true || input_attempt_count > 3)
	{
		if (input_attempt_count > 3)
		{
			clear_screen();
			cout << "Sorry!  You have made 3 invalid entries." << endl;
			cout << "The program will close once you press a key." << endl;
		}

		cout << endl << "Press any key to end the program.";
	}

	_getch();
	return 0;
}

void validate_input(double *input, bool *valid)
{
	if (*input > 0)
	{
		*valid = true;
	}

	if (*input <= 0)
	{
		// No change.
	}
}

void invalid_input(double count)
{
	if (count == 2)
	{
		clear_screen();
		bad_input();
	}

	if (count == 3)
	{
		clear_screen();
		bad_input();
		cout << "This is your last oppurtunity to enter a valid number of hours worked." << endl;
		cout << "If an invalid entry is made for a third time, this program will end." << endl << endl;
	}	
}

double calculate_regular_pay(double* hrs, double rate, double* pay)
{
	*pay = *hrs * rate;
	return *pay;
}

double calculate_overtime_pay(double* hrs, double rate, double* pay)
{	 
	*pay = *hrs * rate;
	return *pay;
}

void clear_screen()
{
	// Clear input stream.
	cin.clear();	

	// Clear the input buffer.
	// 'cin.ignore(arguments)' instructs program to ignore input for the next
	// n number of characters in the arguments '( )' // Default is 1 character
	// 'numeric_limits<double>::max()' instructs program to ignore all input
	// characters up to the maximum value of a double data type
	cin.ignore((numeric_limits<double>::max)(),'\n');

	// Clear the screen.
	system("cls");	
}

void bad_input()
{
	cout << "Bad input:  Entry must be a valid positive number." << endl;
	cout << "Please try again. <Press any key to continue.>";

	_getch();

	clear_screen();
}