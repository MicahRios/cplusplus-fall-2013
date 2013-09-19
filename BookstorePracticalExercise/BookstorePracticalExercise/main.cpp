#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>


using namespace std;

int main()
{
	int books = 0;
	double price = 0;
	double total = 0;

	cout << "Welcome to the Bookstore!" << endl;
	cout << "=========================" << endl;
	cout << "Please enter the number of books you want to purchase: "; 
	cin >> books;
	cout << endl << "Please enter the price you would like to pay per book: ";
	cin >> price;
	total = books*price;

	cout << endl;

	cout << fixed << setprecision(2) << "Your total is $" << total << endl;
	cout << endl;
	cout << "Press any key to quit.";

	_getch();
	return 0;
}