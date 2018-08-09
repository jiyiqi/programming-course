
// Exercise 9.23 Sample Solution: HugeInteger.h
// HugeInteger class definition.
#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <string>
using namespace std;

class HugeInteger 
{
public:
	HugeInteger();
   // addition operator; HugeInteger + HugeInteger
   HugeInteger add( HugeInteger &);

   HugeInteger subtract( HugeInteger &); 

   bool isEqualTo( HugeInteger &); // is equal to
   bool isNotEqualTo( HugeInteger & ); // not equal to
   bool isGreaterThan( HugeInteger & ); // greater than
   bool isLessThan( HugeInteger & ); // less than
   bool isGreaterThanOrEqualTo( HugeInteger &); 
                                      
   bool isLessThanOrEqualTo( HugeInteger &); 
   bool isZero(); 
   void output();   
   void input();
private:
   int a[ 40 ]; 
   int len;
}; 

#endif

bool HugeInteger::isZero()
{
   if( len == 0 )
      return true;

   for ( int i = 0; i < len; i++ )
      if ( a[ i ] != 0 )
         return false;
       
   return true;
}

HugeInteger :: HugeInteger()
{
	for (int i = 0 ; i < 40 ; i ++)
	{
		a[i] = 0 ;
	}
}

void HugeInteger :: input()
{
	char inputnumber[41];
	cout << "Input number : " << endl;
	cin.getline(inputnumber,41);
	len=strlen(inputnumber);
	for (int i = 0 ; i < len ; i ++)
	{
		a[39 - i] = inputnumber[len - 1 - i] - '0';
	}
}



bool HugeInteger::isEqualTo( HugeInteger &op2)	
{
	if( len != op2.len )
		return false;
	for( int i = 0; i < len; i++)
		if( a[i] != op2.a[i] )
			return false;
	return true;
}

bool HugeInteger::isNotEqualTo( HugeInteger &op2 )
{
	if( isEqualTo(op2) )
		return false;
	else
		return true;
}

bool HugeInteger::isGreaterThan( HugeInteger &op2)		
{
	if( len> op2.len )
		return true;
	if( len < op2.len)
		return false;
	for( int i = len - 1; i >= 0; i--)
	{
		if( a[i] > op2.a[i] )
			return true;
		if( a[i] < op2.a[i] )
			return false;
	}
	return false;
}


bool HugeInteger::isLessThan( HugeInteger &op2 )		
{
	return op2.isGreaterThan( *this );
}

bool HugeInteger::isGreaterThanOrEqualTo( HugeInteger &op2 )	
{
	if( len > op2.len )
		return true;
	if( len < op2.len )
		return false;
	for( int i = len - 1; i >= 0; i--)
	{
		if( a[i] > op2.a[i] )
			return true;
		if( a[i] < op2.a[i] )
			return false;
	}
	return true;
}

bool HugeInteger:: isLessThanOrEqualTo( HugeInteger &op2 )	
{
	if( len > op2.len )
		return false;
	if( len < op2.len )
		return true;
	for( int i = len - 1; i >= 0; i-- ){
		if( a[i] > op2.a[i] )
			return false;
		if( a[i] < op2.a[i] )
			return true;
	}
	return true;
}

HugeInteger HugeInteger::add( HugeInteger &op2 )
{
		HugeInteger add ;
	int carry = 0 ;
	for (int i = 39 ; i >=0 ; i --)
	{
		add.a[i] = a[i] + op2.a[i] + carry ;
		if (add.a[i] >= 10) 
		{
			carry = add.a[i] / 10  ;
			add.a[i] = add.a[i] % 10 ;
		}
		else 
		{
			carry = 0 ;
		}
	}
	return add ;
}

HugeInteger HugeInteger::subtract( HugeInteger &op2 )
{

	HugeInteger sub ;
	int borrow = 0 ;
	for (int i = 39 ; i >=0 ; i --)
	{
		if (a[i] - borrow < op2.a[i] ) 
		{
			sub.a[i] = (10 + a[i] - op2.a[i] - borrow);
			borrow = 1 ;
		}
		else 
		{
			sub.a[i] = a[i] - op2.a[i] - borrow ;
			borrow = 0 ;
		}
	}
	return sub;
}

void HugeInteger::output()
{
	int i ;
	for(i = 0 ; a[i] == 0 && i< 40 ; i ++);
	if (i == 40)
	{
		cout <<a[39] ;
	}
	else
	{
		for (;i < 40; i ++)
		{
			cout << a[i];
		}
	}
   
} 
