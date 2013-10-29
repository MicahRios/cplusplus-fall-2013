/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Exam 2B (Practical Portion of Test               **
** Purpose: Finds the average of three numbers input by user **
** Author:  Micah Rios                                       **
** Date:    10/29/2013                                       **
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
double find_average(double, double, double);
void clear_screen();


int main()
{
	/*******************************************
	**                                        **
	**  Joe:  Did not use my book (don't      **
	**        actually have one).  =)         **
	**                                        **
	*******************************************/

	// Variable Declarations.
	double number_01 = 0;
	double number_02 = 0;
	double number_03 = 0;
	char again = 'y';

	while (again == 'y' || again == 'Y')
	{
		cout << "This program will accept three numbers and calculate the average for you." 
			 << endl << endl;
		cout << "Enter a number: ";
		cin >> number_01;
		cout << "Enter a second number: ";
		cin >> number_02;
		cout << "Enter a third number: ";
		cin >> number_03;

		cout << endl << endl;
		cout << "The average of " << number_01 << ", " << number_02 << ", " << number_03 << " is: "
			 << fixed << setprecision(1) << find_average (number_01, number_02, number_03) << "." << endl << endl;

		cout << "Would you like to find the average of three new numbers?  (y or n): ";
		cin >> again;

		if (again == 'y' || again == 'Y')
		{
			clear_screen();
		}
	}

	cout << endl << endl << "Press any key to end program.";
	_getch();
	return 0;
}

double find_average(double a, double b, double c)
{
	double sum = a + b + c;
	double avg = sum / 3;
	return avg;
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
