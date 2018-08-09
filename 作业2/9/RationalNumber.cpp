#include <cstdlib>
#include <iostream> 
#include "RationalNumber.h"
using namespace std;

// RationalNumber constructor sets n and d and calls reduction
RationalNumber::RationalNumber(int a, int b)
{
  numerator=a;
  denominator=b;
}

// overloaded + operator
 RationalNumber RationalNumber::operator+( const RationalNumber & n2)
 {
   RationalNumber a;
	 a.numerator=numerator*n2.denominator+n2.numerator*denominator;
    a.denominator=denominator* n2.denominator;
  return a;
 }

// overloaded - operator
 RationalNumber RationalNumber::operator-( const RationalNumber & n2)
 {
	  RationalNumber a;
  a.numerator=numerator*n2.denominator-n2.numerator*denominator;
	a.denominator= denominator* n2.denominator;
	 return a;
 }

// overloaded * operator
 RationalNumber RationalNumber::operator*( const RationalNumber & n2)
 {
	  RationalNumber a;
     a.numerator=numerator*n2.numerator;
	 a.denominator= denominator* n2.denominator;
	  return a;
 }

// overloaded / operator
 RationalNumber RationalNumber::operator/( const RationalNumber & n2)
 {
	  RationalNumber a=*this;
     a.numerator=numerator*n2.denominator;
	 a.denominator= denominator* n2.numerator;
	  return a;
 }

// overloaded < operator
 bool RationalNumber::operator<( const RationalNumber &n2 ) const
  {
     return ((double)numerator/(double)denominator-(double)n2.numerator/(double)n2.denominator)<0? 1:0;
  }

// overloaded > operator
 bool RationalNumber::operator>( const RationalNumber &n2 ) const
  {
    return ((double)numerator/(double)denominator-(double)n2.numerator/(double)n2.denominator)>0? 1:0;
  }

// overloaded <= operator
 bool RationalNumber::operator<=( const RationalNumber & n2) const
  {
  return ((double)numerator/(double)denominator-(double)n2.numerator/(double)n2.denominator)<=0? 1:0;
  }

// overloaded >= operator
bool RationalNumber::operator>=( const RationalNumber & n2) const
  {
  return ((double)numerator/(double)denominator-(double)n2.numerator/(double)n2.denominator)>=0? 1:0;
  }

// overloaded == operator
bool RationalNumber::operator==( const RationalNumber &n2 ) const
  {
  return ((double)numerator/(double)denominator-(double)n2.numerator/(double)n2.denominator)==0? 1:0;
  }

// overloaded != operator
 bool RationalNumber::operator!=( const RationalNumber &n2 ) const
  {
  return ((double)numerator/(double)denominator-(double)n2.numerator/(double)n2.denominator)!=0? 1:0;
  }

// function printRational definition
 void RationalNumber::printRational() 
 {
	 reduction();
 cout<<numerator<<"/"<<denominator;
 }

// function reduction definition
  void RationalNumber::reduction()
   {
    int c=0;
	 if(numerator>=denominator)
	 {
	  for(int i=numerator;i>0;i--)
	  {
	   if(numerator%i==0&&denominator%i==0)
 	  {
	   c=i;
	   break;
	  }
	  }
	 }
	 if(denominator>numerator)
	 {
		  for(int i=denominator;i>0;i--)
	  {
	   if(numerator%i==0&&denominator%i==0)
 	  {
	    c=i;
	   break;
	  }
		  }
	 }
	  numerator=numerator/c;
	  denominator=denominator/c;
   }