/**************************************************************
**                                                           **
** Course:  80920 Programming C++                            **
** Name:    Assignment 11 - Stars                            **
** Purpose: Outputs a pattern of stars (asterisks) using     **
**          loops to output one '*' at a time                **
** Author:  Micah Rios                                       **
** Date:    10/23/2013                                       **
**                                                           **
**************************************************************/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <Windows.h>

using namespace std;

// Function Declaration
void goto_xy( int, int );

int main()
{
	for (int i = 1; i < 11; i++)			// Main loop establishing row number
	{
		for (int j = 1; j < i + 1; j++)		// Nested Loop 1 places '*'s for Column 1
		{
			cout << "*";
		}

		goto_xy( 11, i - 1);                // Re-position cursor for Column 2 output.
			
		for (int k = 11 - i; k >= 1; k--)	// Nested Loop 2 places '*'s for Column 2
		{
			cout << "*";
		}

		goto_xy( i + 21, i - 1 );           // Re-position cursor for Column 3 output.

		for (int l = 11 - i; l >= 1; l--)	// Nested Loop 3 places '*'s for Column 3
		{
			cout << "*";
		}

		goto_xy( 43 - i, i - 1);            // Re-position cursor for Column 4 output.

		for (int m = 1; m < i + 1; m++)		// Nested Loop 4 places '*'s for Column 4
		{
			cout << "*";
		}
		cout << endl;
	}
	_getch();
	return 0;
}

// Function to move cursor to specific x,y coordinates
void goto_xy( int x, int y )
{
	COORD p = { x, y };
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}

/***********************************************************************************
**  Code used for testing while writing program                                   **
************************************************************************************
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <Windows.h>

using namespace std;

// Function Declaration
void goto_xy( int, int );

int main()
{
	// Visual representation of horizontal point (x coordinate)
	cout << "1234567890-1234567890-1234567890-1234567890" << endl << endl;

	for (int i = 1; i < 11; i++)			// Main loop establishing row number
	{
		for (int j = 1; j < i + 1; j++)		// Nested Loop 1 places '*'s for Column 1
		{
			// output for testing purposes (verifying placement of column 1 '*'s.
			cout << "1";
		}

		// 'goto_xy' coordinates moved down 2 points on the vertical axis
		// to prevent '*' pattern and horizontal position header from overlapping.
		goto_xy( 11, i + 1);
			
		for (int k = 11 - i; k >= 1; k--)	// Nested Loop 2 places '*'s for Column 2
		{
			// output for testing purposes (verifying placement of column 2 '*'s.
			cout << "2";
		}

		// 'goto_xy' coordinates moved down 2 points on the y axis for testing.
		goto_xy( 21, i + 1);

		for (int l = 11 - i; l >= 1; l--)	// Nested Loop 3 places '*'s for Column 3
		{
			// output for testing purposes (verifying placement of column 3 '*'s.
			cout << "3";
		}

		// 'goto_xy' coordinates moved down 2 points on the y axis for testing.
		goto_xy( 43 - i, i + 1);

		for (int m = 1; m < i + 1; m++)		// Nested Loop 4 places '*'s for Column 4
		{
			// output for testing purposes (verifying placement of column 4 '*'s.
			cout << "4";
		}
		cout << endl;
	}

	// Visual representation of horizontal point (x coordinate)
	cout << endl;
	cout << "1234567890-1234567890-1234567890-1234567890" << endl << endl;

	_getch();
	return 0;
}
*/