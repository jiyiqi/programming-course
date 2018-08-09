#include "Sphere.h"
Sphere::Sphere(double r , double x ,double y)
	:ThreeDimensionalShape(x,y)
{
	radius = (r > 0) ? r : 0 ;
}
double Sphere::getradius()
{
	return radius ;
}
double Sphere::getarea()
{
	return 4 * 3.14159 * getradius() * getradius() ;
}
double Sphere::getvolume()
{
	return ( 4.0 /3.0 ) * 3.14159 * getradius() * getradius() * getradius();
}
void Sphere::print()
{
	cout << "Sphere with radius " << getradius() << "; center at (" << getCenterX() << ", " << getCenterY() << ")" ;
}