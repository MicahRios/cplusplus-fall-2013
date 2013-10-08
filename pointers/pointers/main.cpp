#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int* growByOne(int*, int);

int main ()
{
	//		int numbers[] = { 1,2,3,4,5 };		// Static array
	int* numbers = new int[5];			// Array pointer
	int* more_numbers = new int[10];

	numbers[0] = 5;
	more_numbers[0] = 99;

	numbers = more_numbers;

	cout << numbers[0] << endl;

	numbers = growByOne(numbers, 5);

	cout << numbers[5];


	_getch();
	return 1;
}

int* growByOne(int* myarray, int myarray_length)
{
	// Declare new array
	int* new_array = new int[myarray_length +1];

	// Copy old values into array
	for (int i = 0; i < myarray_length; i++)
	{
		new_array[i] = myarray[i];
	}
	new_array[myarray_length] = 0;

	// Return new array
	return new_array;
}

void pointers()
{
	int i = 5;
	int* p = new int;

	// (*p) = "get me the value from address p
	(*p) = 6;

	cout << "int i: " << i << endl;
	cout << "int* p: " << p << endl;
	cout << "*p" << *p << endl;
	cout << "&p" << &p << endl;

	p = &i;  // any changes made to i happen to p.
	cout << "*p after &i: " << *p << endl;
}