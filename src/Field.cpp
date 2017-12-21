#include "Field.h"

Field::Field():
	width_(20), 
	height_(20)
{	}

void Field::getXY(int& _width, int& _height)
{
	_width = width_;
	_height = height_; 
}
