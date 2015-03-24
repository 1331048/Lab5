#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI &window)
	:Shape(window)
{
	position = NULL;
	//this->windowAPI = &window;
}

void Rectangle::draw()
{
	if (position==NULL)
	{
		throw runtime_error("la position n'est pas valide");
	}
	this->windowAPI->setDrawingColor(Color());
	this->windowAPI->fillRectangle(*position, largeur, hauteur);
	this->windowAPI->drawRectangle(*position, largeur, hauteur);
}

void Rectangle::setPosition(Point& pointPosition)
{
	
	position = &pointPosition;
}

void Rectangle::setHeight(int _hauteur)
{
	if (_hauteur < 0)
	{
		throw invalid_argument("trop petite hauteur)");
	}
	hauteur = _hauteur;
}

void Rectangle::setWidth(int _largeur)
{
	if (_largeur < 0)
	{
		throw invalid_argument("trop petite largeur)");
	}
	largeur = _largeur;
}

void Rectangle::setFillColor(Color couleur)
{
	fillColor = couleur;
}

void Rectangle::setLineColor(Color ligneCouleur)
{
	couleurLigne = ligneCouleur;
}

void Rectangle::add(Point _point)
{

}