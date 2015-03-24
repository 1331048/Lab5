#include "stdafx.h"

using namespace ShapeLibrary;


ShapeFactory::ShapeFactory(IWindowAPI & _window)
{
	this->windowAPI = &_window;
}

void ShapeFactory::add(Point point)
{

}

void ShapeFactory::draw()
{

}

void ShapeFactory::createOpenPolyLine()
{
	OpenPolyline* openPoly = new OpenPolyline;
}

void ShapeFactory::createCircle(Point centre, int rayon)
{
	Circle* cercle = new Circle(centre, rayon);
}

void ShapeFactory::createRectangle(Point depart, int longueur, int largueur)
{
	Rectangle * rectangle = new Rectangle;
	rectangle->setPosition(depart);
	rectangle->setWidth(largueur);
	rectangle->setHeight(longueur);


}



void ShapeFactory::createClosedPolyLines()
{
	ClosedPolyline* closedPoly = new ClosedPolyline;

}

void ShapeFactory::createPolygone()
{
	Polygon * polygon = new Polygon;
}