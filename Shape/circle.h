#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI & _window);
		
		void draw();
		void setCenter(Point& point);
		void setRadius(int);
		void setFillColor(Color _couleurFill);
		void setLineColor(Color _couleurLigneParam);
		void add(Point _point);
	protected:
		int rayon;
		Point* centre;
	
	};
}
