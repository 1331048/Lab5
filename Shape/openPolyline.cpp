#include "stdafx.h"


using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI &window)
	:Shape(window)
{

}


void OpenPolyline::draw()
{

	Color* couleur = new Color;
	*couleur = Color::WHITE;
	this->windowAPI->setDrawingColor(*couleur);
	if (vecteur.size() < 2)
	{
		throw runtime_error("pas assez de nombre de points");
	}
	for (iterateur = vecteur.begin(); iterateur != vecteur.end(); iterateur++) {
		
		//windowAPI->setDrawingColor(Color());
	if ((iterateur + 1) < vecteur.end())
		{
		this->windowAPI->drawLine(*iterateur, *(iterateur + 1));
		}


	}
}

void OpenPolyline::add(Point _point)
{
	vecteur.push_back(_point);
}