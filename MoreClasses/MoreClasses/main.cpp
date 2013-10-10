#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Point.h"

using namespace std;

int main ()
{
	// std::cout << "hello" << std::endl;

	cout << "hello" << endl;

	Point p;
	p.set_latitude(44.2656);
	p.set_longitude(88.4017);

	Point p2(44.2656,88.4017);

	Point p3 = Point::random_point();

	cout << "Point latitude,longitude: " << p.latitude() << "," << p.longitude() << endl;
	cout << "Point latitude,longitude: " << p2.latitude() << "," << p2.longitude() << endl;
	cout << "Point latitude,longitude: " << p3.latitude() << "," << p3.longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	cout << Point::random_latitude() << endl;
	cout << Point::random_longitude() << endl;

	_getch();
	return 0;
}