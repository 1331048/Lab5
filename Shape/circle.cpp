#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI &window)
	:Shape(window)
{
	centre = NULL;
	//this->windowAPI = &window;
}

 void Circle::draw()
{
	 if (centre == NULL)
	 {
		 throw	 runtime_error("Le cercle n'a pas de centre");
	 }
	 this->windowAPI->setDrawingColor(Color());
	 this->windowAPI->drawCircle(*centre, rayon);
	 this->windowAPI->fillCircle(*centre, rayon);
}

 void Circle::setCenter(Point& _centre)
 {
	 centre = &_centre;
 }

 void Circle::setRadius(int _rayon)
 {
	 if (_rayon < 0)
	 {
		 throw invalid_argument("trop petit rayon");
	 }
	 rayon = _rayon;
 }
 void Circle::setFillColor(Color _couleur)
 {
	 fillColor = _couleur;
 }

 void Circle::setLineColor(Color _couleur)
 {
	 linecolor = _couleur;
 }
 void Circle::add(Point _point)
 {

 }