#ifndef SPHERE_H
#define SPHERE_H
#include "ThreeDimensionalShape.h"
class Sphere:public ThreeDimensionalShape
{
public:
	Sphere(double = 0 ,double =0 ,double =0);
	virtual double getarea();
	virtual double getvolume();
	virtual void print();
	double getradius() ;
	
private:
	double radius ;
};
#endif