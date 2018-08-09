// Exercise 11.9  Hugeint.cpp
// HugeInt member-function and friend-function definitions.
#include <iostream>
#include <cctype> // isdigit function prototype
#include "Hugeint.h" // HugeInt class definition
using namespace std;

// default constructor; conversion constructor that converts
// a long integer into a HugeInt object
HugeInt::HugeInt( long value )
{
   // initialize array to zero
   for ( int i = 0; i < digits; i++ )
      integer[ i ] = 0;

   // place digits of argument into array
   for ( int j = digits - 1; value != 0 && j >= 0; j-- )
   {
      integer[ j ] = value % 10;
      value /= 10;
   } // end for
} // end HugeInt default/conversion constructor

// conversion constructor that converts a character string
// representing a large integer into a HugeInt object
HugeInt::HugeInt( const string &number )
{
   // initialize array to zero
   for ( int i = 0; i < digits; i++ )
      integer[ i ] = 0;

   // place digits of argument into array
   int length = number.size();

   for ( int j = digits - length, k = 0; j < digits; j++, k++ )
      if ( isdigit( number[ k ] ) )
         integer[ j ] = number[ k ] - '0';

} // end HugeInt conversion constructor

// get function calculates length of integer
int HugeInt::getLength() const
{
   int i;

   for ( i = 0; i < digits; i++ )
      if ( integer[ i ] != 0 )
         break; // break when first digit is reached

   return digits - i; // length is from first digit (at i) to end of array
} // end function getLength

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+( const HugeInt &op2 ) const
{
   HugeInt temp; // temporary result
   int carry = 0;

   for ( int i = digits - 1; i >= 0; i-- )
   {
      temp.integer[ i ] = integer[ i ] + op2.integer[ i ] + carry;

      // determine whether to carry a 1
      if ( temp.integer[ i ] > 9 )
      {
         temp.integer[ i ] %= 10;  // reduce to 0-9
         carry = 1;
      } // end if
      else // no carry
         carry = 0;
   } // end for

   return temp; // return copy of temporary object
} // end function operator+

// addition operator; HugeInt + int
HugeInt HugeInt::operator+( int op2 ) const
{
   // convert op2 to a HugeInt, then invoke
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 );
} // end function operator+

// addition operator;
// HugeInt + string that represents large integer value
HugeInt HugeInt::operator+( const string &op2 ) const
{
   // convert op2 to a HugeInt, then invoke
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 );
} // end function operator+

// equality operator; HugeInt == HugeInt
bool HugeInt::operator==(const HugeInt &op2)const
{
 if( getLength() != op2.getLength() )
		return false;
	for( int i = 0; i < getLength(); i++)
		if( integer[i] != op2.integer[i] )
			return false;
	return true;
}
// inequality operator; HugeInt != HugeInt
bool HugeInt::operator!=(const HugeInt &op2)const
{
 if( getLength()!= op2.getLength() )
		return true;
	for( int i = 0; i < getLength(); i++)
		if( integer[i] != op2.integer[i] )
			return true;
	return false;
}

// less than operator; HugeInt < HugeInt
bool HugeInt::operator<(const HugeInt &op2)const
{
	if( getLength()< op2.getLength() )
		return true;
	if( getLength()> op2.getLength())
		return false;
	for( int i = digits - 1; i >= 0; i--)
	{
		if( integer[i] < op2.integer[i] )
			return true;
		if( integer[i] > op2.integer[i] )
			return false;
	}
	return false;
}

// less than or equal operator; HugeInt <= HugeInt
bool HugeInt::operator<=(const HugeInt &op2)const
{
	if( getLength()< op2.getLength() )
		return true;
	if( getLength()> op2.getLength())
		return false;
	for( int i = digits - 1; i >= 0; i--)
	{
		if( integer[i] <= op2.integer[i] )
			return true;
		if( integer[i] > op2.integer[i] )
			return false;
	}
	return false;
}
// greater than operator; HugeInt > HugeInt
bool HugeInt::operator>(const HugeInt &op2)const
{
	if( getLength()> op2.getLength() )
		return true;
	if( getLength() < op2.getLength())
		return false;
	for( int i = digits - 1; i >= 0; i--)
	{
		if( integer[i] > op2.integer[i] )
			return true;
		if( integer[i] < op2.integer[i] )
			return false;
	}
	return false;
}
// greater than or equal operator; HugeInt >= HugeInt
bool HugeInt::operator>=(const HugeInt &op2)const
{
	if( getLength()> op2.getLength() )
		return true;
	if( getLength() < op2.getLength())
		return false;
	for( int i = digits - 1; i >= 0; i--)
	{	
		if( integer[i] >= op2.integer[i] )
			return true;
		if( integer[i] < op2.integer[i] )
			return false;
	}
	return false;
}

// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; i < HugeInt::digits && num.integer[ i ] == 0; i++ )
      ; // skip leading zeros

   if ( i == HugeInt::digits )
      output << 0;
   else
      for ( ; i < HugeInt::digits; i++ )
         output << num.integer[ i ];

   return output;
} // end function operator<<

// subtraction operator, subtract op2 from (*this)
HugeInt HugeInt::operator-(const HugeInt &op2)const
{
	HugeInt sub ;
	int borrow = 0 ;
	for (int i = digits-1; i >=0 ; i --)
	{
		if ((integer[i] - borrow) < op2.integer[i] ) 
		{
			sub.integer[i] = (10 + integer[i] - op2.integer[i] - borrow);
			borrow = 1 ;
		}
		else 
		{
			sub.integer[i] = integer[i] - op2.integer[i] - borrow ;
			borrow = 0 ;
		}
	}
	return sub;
}

// multiplication operator; multiply op2 with (*this)
HugeInt HugeInt::operator*(const HugeInt &op2)const
{
    HugeInt ans;
	for(int i = digits-1; i >=0; i--)
		{
			for(int j =digits-1; j >=0; j--)
       {
		   ans.integer[i+j-30] += integer[i] * op2.integer[j];
		}
			}

        for(int i = 29; i >=0; i--)
            if(ans.integer[i] >=10)
            {
				ans.integer[i - 1] += ans.integer[i] / 10;
			    ans.integer[i] %= 10; 
			}
      
        return ans;
}

// division operator; divide op2 by (*this)

HugeInt HugeInt::operator/(const HugeInt & op2)const
{ 
     HugeInt buffer , sub(*this) , quotient ;
	for (int i = getLength() - 1 , j = op2.getLength() - 1 ; j >= 0  ; i-- , j--)
	{
		buffer.integer[digits - 1 - i] = op2.integer[digits - 1 - j ] ; 
		buffer.integer[digits - 1 - j] = 0;
	}
	int address = getLength() - op2.getLength() ;
	bool a = false ;
	while(true)
	{
		for (int i = getLength() - 1 ; i >= 0 ; i--)
		{
			if (sub.getLength() > buffer.getLength())
			{
				break;
			}
			else if (buffer.integer[digits - 1 - i] > integer[digits - 1 - i])
			{
				for(int i = digits - 1 ; i > 0  ; i --)
				{
					buffer.integer[i] = buffer.integer[i - 1] ;
				}
				address -- ; 
				if (address < 0)
				{
					a = true;
				}
				break ;
			}
		}
		
		sub = sub - buffer ;
		quotient.integer[digits - 1 - address] ++ ;

		if (a)
		{
			break;
		}
	}
	return quotient ;
}

