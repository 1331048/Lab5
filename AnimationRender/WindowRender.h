#pragma once
#include "stdafx.h"

using namespace std;
using namespace ShapeLibrary;

namespace WindowRender
{
	class WindowsRender 
	{
	public:
		WindowsRender(IWindowAPI &windowAPI);
		~WindowsRender();
		void attach(Shape & _shape);
		void render(); 
		void putOnTop(Shape & p);
	
		IWindowAPI * windowAPI;
		vector <Shape*> Shapes;

	};
}