#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI  & _windowAPI)
{
	this->windowAPI = &_windowAPI;
}


void Shape::draw()
{


}

Point Shape::getPoint(int i)
{
	return	vecteur[i];
}
