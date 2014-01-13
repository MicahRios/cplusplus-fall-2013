#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	int length = 7;
	int numbers[] = {7, 23, 21, 55, 6, 9, 76};

	// Display unsorted numbers

	cout << "Unsorted numbers from array." << endl;
	cout << "----------------------------" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << numbers[i] << endl;
	}

	// Sort the array using a "Bubble Sort"

	bool is_sorted = true;
	int pass = 0;

	

	do
	{
		is_sorted = true;
		pass++;		

		// Check every elemented to see if the array is sorted.
		for (int i = 0; i < length - 1; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				int temp = numbers[i + 1];
				numbers[i + 1] = numbers[i];
				numbers[i] = temp;
				is_sorted = false;
			}			
		}

		cout << endl << "Sorting Pass-Through #: " << pass << endl;
		cout << "----------------------------" << endl;

		for (int i = 0; i < length; i++)
		{
			cout << numbers[i] << endl;
		}
			cout << endl;
			_getch(); 

	} while (!is_sorted);

	// Display unsorted numbers

	cout << endl << "Sorted numbers from array." << endl;
	cout << "----------------------------" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << numbers[i] << endl;
	}
	
	_getch();

	return 0;
}