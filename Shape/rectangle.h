#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI & _window);
		void draw();
		void setPosition(Point& point);
		void setHeight(int hauteur);
		void setWidth(int largeur);
		void setFillColor(Color couleurFill);
		void setLineColor(Color couleurLigneParam);
		void add(Point _point);
	//protected:
		int hauteur = 0;
		int largeur = 0;
		Point* position;
		Color couleurFill;
		Color couleurLigne;
	};
}