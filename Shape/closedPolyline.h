#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public OpenPolyline
	{
	public:
		ClosedPolyline(IWindowAPI & _window);
		
		void add(Point point);
		void draw();
	private:
		Point premierPoint;
	};
}