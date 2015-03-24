#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class	ShapeFactory
	{
	public:
		ShapeFactory(IWindowAPI & _window);
		void draw();
		void add(Point point);
		void createOpenPolyLine();
		void createCircle(Point centre, int rayon);
		void createRectangle(Point depart, int longueur, int largueur);
		void createClosedPolyLines();
		void createPolygone();
	private : 
		IWindowAPI *windowAPI;
	};
}