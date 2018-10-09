#ifndef BOX_HPP
#define BOX_HPP

// Defines the interface of the Box class
class Box
{
private:
	double height;
	double width;
	double length;

public:
	Box();
	Box(double, double, double);
	void setHeight(double);
	double getHeight();
	void setWidth(double);
	double getWidth();
	void setLength(double);
	double getLength();
	double calcVolume();
	double calcSurfaceArea();
};

#endif