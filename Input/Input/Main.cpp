#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float test_num;
	bool quit = false;
	char test_input;

	while (!quit)
	{
		cout << "Please enter a number: ";		
		cin >> test_num;

		// When using setprecision(), number in parenthesis is set to total digits without decimal point
		// Example:  if input = 25.255, setprecision(4) will result in the input being recognized as
		// 25.30
		cout << "You entered " << setprecision(4) << test_num << endl;

		cout << "Press any key to continue, or 'q' to quit: ";
		//cin >> test_input;
		test_input = _getch();
		/*
		if (test_input = "q")
		{
			quit = true;
		}
		*/

		quit = (test_input == 'q');

	}

	// _getch();
	return 0;
}