#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H
#include "Shape.h"
class ThreeDimensionalShape:public Shape
{
public:
	ThreeDimensionalShape(double a , double b)
		:Shape(a,b)
	{
	}
	virtual double getarea() = 0 ;
	virtual double getvolume() = 0;
};
#endif