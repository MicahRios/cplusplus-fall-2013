#include <iostream>
#include "Point.h"



Point::Point()
{
	latitude_ = 0;
	longitude_ = 0;
}

Point::Point(double latitude, double longitude)
{
	latitude_ = latitude;
	longitude_ = longitude;
}

double Point::latitude()
{
	return latitude_;
}

double Point::longitude()
{
	return longitude_;
}

void Point::set_latitude(double latitude)
{
	latitude_ = latitude;
}

void Point::set_longitude(double longitude)
{
	longitude_ = longitude;
}

double Point::random_latitude()
{
	double new_latitude = rand() % 91;
	double negative_or_not = rand() % 2;
	double hundredths = (rand() % 101) / 100.0;
	new_latitude += hundredths;
	if (negative_or_not == 1)
	{
		new_latitude *= -1;
	}
	return new_latitude;
}

double Point::random_longitude()
{
	double new_longitude = rand() % 91;
	double negative_or_not = rand() % 2;
	double hundredths = (rand() % 101) / 100.0;
	new_longitude += hundredths;
	if (negative_or_not == 1)
	{
		new_longitude *= -1;
	}
	return new_longitude;
}

Point Point::random_point()
// Factory Function
{
	Point p(random_latitude(), random_longitude());
	return p;
}