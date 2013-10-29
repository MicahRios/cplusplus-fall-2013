#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "Helper.h"

using namespace std;

int main()
{
	Helper::SetConsole();

	bool quit = false;

	while(quit == false)
	{
		cout << "Press q to quit ";
		string input = "";
		cin >> input;

		if (input == "q" || input == "Q")
		{
			quit = true;
		}
	}
}

