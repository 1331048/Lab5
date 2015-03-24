#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI & _window);

		void add(Point _point);

		void draw();
	};
}
