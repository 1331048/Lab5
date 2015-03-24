#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI & _windowAPI);
	
	//	virtual void add(Point point);
		virtual void draw() = 0;
		void setlineColor(Color couleur);
		Color getlineColor();
		void setfillColor(Color couleur);
		Color getfillColor();
		Point getPoint(int i);
		int getNumberOfPoints();
	virtual void add(Point point) =0;
	protected :
		vector<Point>::iterator iterateur;
		vector < Point > vecteur;
		Color linecolor;
		Color fillColor;
		IWindowAPI *windowAPI;
	};

	
}
