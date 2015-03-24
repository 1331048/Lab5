#include "stdafx.h"
#include <algorithm>
using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI &window)
	:ClosedPolyline(window)
{
	this->windowAPI = &window;
}

void Polygon::add(Point _point)
{
	if (vecteur.size() >= 2)
	{
		for (unsigned int i = 0; i < vecteur.size() - 1; i++)
		{
			if (onSegment(vecteur.at(i), vecteur.at(i++), _point)) throw runtime_error("Point sur une ligne existante");
		}
		for (unsigned int i = 0; i < vecteur.size() - 2; i++)
		{
			if (intersectionLigne(vecteur.at(i), vecteur.at(i + 1), vecteur.at(i + 2), _point)) throw runtime_error("Traverse une ligne existante");
		}
	}
	vecteur.push_back(_point);


}

void Polygon::draw()
{

}

bool Polygon::onSegment(Point& point1, Point& point2, Point& pTest)
{

	return (pTest.x <= max(point1.x, point2.x) && pTest.x >= min(point1.x, point2.x) && pTest.y <= max(point1.y, point2.y) && pTest.y >= min(point1.y, point2.y));
}

bool Polygon::intersectionLigne(Point p1, Point p2, Point p3, Point p4)
{

	float x1 = p1.x, x2 = p2.x, x3 = p3.x, x4 = p4.x;
	float y1 = p1.y, y2 = p2.y, y3 = p3.y, y4 = p4.y;

	float d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
	if (d == NULL)
	{
		return false;
	}
	return true;

}