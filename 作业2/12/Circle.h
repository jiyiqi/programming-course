#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDimensionalShape.h"
class Circle:public TwoDimensionalShape
{
public:
	Circle(double = 0 ,double =0 ,double =0);
	virtual double getradius() ;
	virtual double getarea();
	virtual void print();
private:
	double radius ;
};
#endif