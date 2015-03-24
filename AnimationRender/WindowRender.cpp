#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI &window)
{
	this->windowAPI = &window;
}

WindowsRender::~WindowsRender()
{

}
void WindowsRender::attach(Shape& _shape)
{
	Shapes.push_back(&_shape);
}

void WindowsRender::putOnTop(Shape & p)
{
	for (int i = 0; i < Shapes.size(); i++)
	{
		if (Shapes.at(i) == &p)
		{
			Shape* shapeALaFin;
			Shapes.pop_back();
			Shapes.push_back(&p);
			
		}
	}
}

void WindowsRender::render()
{
	this->windowAPI->clearScreen();
	this->windowAPI->displayScreen();
	this->windowAPI->wait(20000);
	for (int i = 0; i < Shapes.size(); i++)
	{
		Shapes.at(i)->draw();
	}
	if (this->windowAPI->hasEvent())
	{
		windowAPI->getEvent();
	}
}