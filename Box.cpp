#include "Box.hpp"

/*******************************************************************************
** Author:       Ryan Holland
** Date:         10/7/18
** Description:  A class called Box that has three double fields called height,
**               width and length.  Calculates and returns the volume and
**               surface area of the Box.
*******************************************************************************/

Box::Box()
{
	setHeight(1);
	setWidth(1);
	setLength(1);
}

Box::Box(double heightIn, double widthIn, double lengthIn)
{
	setHeight(heightIn);
	setWidth(widthIn);
	setLength(lengthIn);
}

void Box::setHeight(double heightIn)
{
	height = heightIn;
}

double Box::getHeight()
{
	return height;
}

void Box::setWidth(double widthIn)
{
	width = widthIn;
}

double Box::getWidth()
{
	return width;
}

void Box::setLength(double lengthIn)
{
	length = lengthIn;
}

double Box::getLength()
{
	return length;
}

double Box::calcVolume()
{
	return height * width * length;
}

double Box::calcSurfaceArea()
{
	return 2 * width * height + 2 * width * length + 2 * height * length;
}

