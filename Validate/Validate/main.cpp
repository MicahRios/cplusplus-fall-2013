/*********************
**                  **
**   Validation     **
**   09/26/2013     **
**                  **
*********************/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <math.h>

using namespace std;

// First example in class.
void validate();
bool isNumeric(string);
int convertToInt(string);

int main()
{
	string user_value;

	cout << "Please enter a value: ";
	cin >> user_value;

	if(isNumeric(user_value))
	{
		cout << "success" << endl;
		int user_number = convertToInt(user_value);
		cout << "You entered the number: " << user_number;
	}
	else
	{
		cout << "fail" << endl;
	}

	_getch();
	return 0;
}

bool isNumeric(string s)
{
	int total = 0;
	bool success = false;

	for (int i = s.length() -1; i >= 0; i--)
	{
		char c = s[i];
		
		if (c == '0')
		{
			success = true;
		}
		else if (c == '1') 
		{
			success = true;
		}
		else if (c == '2') 
		{
			success = true;
		}
		else if (c == '3') 
		{
			success = true;
		}
		else if (c == '4') 
		{
			success = true;
		}
		else if (c == '5') 
		{
			success = true;
		}
		else if (c == '6') 
		{
			success = true;
		}
		else if (c == '7') 
		{
			success = true;
		}
		else if (c == '8') 
		{
			success = true;
		}
		else if (c == '9') 
		{
			success = true;
		}
		else
		{
			success = false;
			break;
		}
	}

	return success;
}

int convertToInt(string s)
{
	int total = 0;
	int exp = 0;
	
	for (int i = s.length() -1; i >= 0; i--)
	{
		char c = s[i];
		int value = 0;
		
		if (c == '0')
		{
			value = 0;
		}
		else if (c == '1') 
		{
			value = 1;
		}
		else if (c == '2') 
		{
			value = 2;
		}
		else if (c == '3') 
		{
			value = 3;
		}
		else if (c == '4') 
		{
			value = 4;
		}
		else if (c == '5') 
		{
			value = 5;
		}
		else if (c == '6') 
		{
			value = 6;
		}
		else if (c == '7') 
		{
			value = 7;
		}
		else if (c == '8') 
		{
			value = 8;
		}
		else if (c == '9') 
		{
			value = 9;
		}

		total = total + (value * pow(10, exp));
		exp++;
	}

	return total;
}

void validate()
{
	int test1, test2;

	while (true)
	{
		cout << "Please enter a number: ";
		cin >> test1;

		// Validate test1 input.
		if (cin.fail())
		{
			cout << endl << "Bad Input, Try Again!: ";

			// Clear input stream.
			cin.clear();

			// The ignore (#, '\n')  the # indicates the number of keystrokes to ignore
			// and the '\n' indicates to continue ignoring until the enter key is pressed.
			cin.ignore(10000, '\n');
		}
		else
		{
			cout << endl << "You entered: " << test1 << endl;
		}
	}
}