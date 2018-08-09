#include <iostream>
#include<iomanip>
#include "Complex.h"
using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart )
   : real( realPart ),
   imaginary( imaginaryPart )
{
   // empty body
} // end Complex constructor
ostream &operator<<(ostream &output, const Complex & a)
{
	output<<"("<<a.real<<","<<a.imaginary<<")";
	return output;
}
istream &operator>>(istream &input, Complex & a)
{
	input.ignore();
	input>>setw(2)>>a.real;
	input.ignore();
	input>>setw(2)>>a.imaginary;
	input.ignore();
	return input;
}
// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real,
      imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real,
      imaginary - operand2.imaginary );
} // end function operator-

Complex Complex::operator*( const Complex &operand2 ) const
{
	   return Complex( real * operand2.real,
      imaginary * operand2.imaginary );
}

bool Complex::operator!=( const Complex &operand2 ) const
{
	return ((real==operand2.real)&& (imaginary ==operand2.imaginary))? 0:1;

}

bool Complex::operator==( const Complex &operand2 ) const
{
	return ((real==operand2.real)&& (imaginary ==operand2.imaginary))? 1:0;
}
void Complex::print() const
{
	cout << '(' << real << ", " << imaginary << ')';
} // end function print

