#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI &window)
	:OpenPolyline(window)
{
	windowAPI = &window;
}

void ClosedPolyline::add(Point _point)
{
	if (vecteur.size() == 0)
	{
		premierPoint = _point;
	}
	vecteur.push_back(_point);
}

void ClosedPolyline::draw()
{
	if (vecteur.size() < 3)
	{
		throw runtime_error("pas assez de point");
	}
	
	
	for (iterateur = vecteur.begin(); iterateur != vecteur.end(); iterateur++) {

		
		if ((iterateur +1) < vecteur.end())
		{
			this->windowAPI->setDrawingColor(Color());
			this->windowAPI->drawLine(*iterateur, *(iterateur + 1));
		}
		else
		{
			this->windowAPI->drawLine(*iterateur, premierPoint);
		}


	}
}