#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;
Point::Point()
{

}

Point::Point(double _x, double _y)
{
	if (_x >= 0 && _y >= 0)
	{
	x = _x;
	y = _y;
	}
	else
	{
		throw invalid_argument("les nombres ne peuvent être négatif");
	}
}
bool Point::arePointsEgal(const double _x, const double _y)
{
	if (_x == _y)
	{
		return true;
	}
	return false;
}
bool Point::operator == (const Point & point) const
{
	if (this->x == point.x && this->y == point.y)
	{
		return true;
	}
	return false;
}

bool Point::operator != (const Point & point) const
{
	if (this->x != point.x && this->y == point.y)
	{
		return true;
	}
	return false;
}
