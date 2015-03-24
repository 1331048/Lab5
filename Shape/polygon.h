#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon : public ClosedPolyline
	{
	public:

		Polygon(IWindowAPI & _window);
	
		void add(Point point);
		void draw();

		//http://flassari.is/2008/11/line-line-intersection-in-cplusplus/
		bool onSegment( Point& point1, Point& point2, Point& pTest);
		bool intersectionLigne(Point p1, Point p2, Point p3, Point p4);


	private : 
		Point premierPoint;
	};
}
