#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std ;
class Shape
{
	friend ostream& operator<<(ostream & , Shape &);
public:
	Shape(double = 0 , double = 0);
	double getCenterX();
	double getCenterY();
	virtual void print() = 0;
private:
	double Xcenter ;
	double Ycenter ;
};
#endif