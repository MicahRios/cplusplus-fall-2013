#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>


using namespace std;

int main()
{
	cout << "Hello!" << endl;

	// string test = "hello";
	// cout << test;

	// Initialize test array.
	int test[] = {1,2,3,4,5};
	int test2[] = {99,88,77,66};

	// Create a corresponding variable to track length of test array
	int test_length = 5;
	cout << test[test_length - 1] << " " << endl;

	// To display the address of the data, put a '*' in front of variable
	cout << "Address of test: " << *test << endl;

	cout << *(test + 5) << endl;

	_getch();
	return 0;
}