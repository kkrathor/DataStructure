#include "pch.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int length, int width) {
	x = length;
	y = width;
}
int Rectangle::getArea() {
	return x * y;
 }
Rectangle::~Rectangle()
{
}
