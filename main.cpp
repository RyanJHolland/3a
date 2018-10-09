#include <iostream>
#include <string>
#include "Box.hpp"

int main()
{
	Box box1;
	Box box2(2, 3, 1);

	std::cout << "volume of box1: " << box1.calcVolume() << std::endl;
	std::cout << "surface of box1: " << box1.calcSurfaceArea() << std::endl;

	std::cout << "volume of box2: " << box2.calcVolume() << std::endl;
	std::cout << "surface of box2: " << box2.calcSurfaceArea() << std::endl;

	return 0;
}