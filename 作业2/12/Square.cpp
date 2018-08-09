#include "Square.h"
Square::Square(double l ,double x , double y)
	:TwoDimensionalShape(x,y)
{
	sidelength = (l > 0)? l : 0 ; 
}
double Square::getsidelength()
{
	return sidelength ;
}

double Square::getarea()
{
	return sidelength * sidelength ;
}

void Square::print()
{
	cout << "Square with side length " << getsidelength() << "; center at (" << getCenterX() << ", " << getCenterY() << ")" ;
}