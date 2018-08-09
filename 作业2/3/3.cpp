// Exercise 9.23 Sample Solution: Ex09_23.cpp
// HugeInteger test program.
#include <iostream>
#include "HugeInteger.h" // include definition of class HugeInteger
using namespace std;

int main()
{
   HugeInteger n1;
	HugeInteger n2;
	HugeInteger n3;
	HugeInteger n4;
	HugeInteger n5;
	n1.input();
	n2.input();
	n3.input();
	n4.input();

   // outputs the sum of n1 and n2
   n5 = n1.add( n2 ); 
   cout<<endl;
   n1.output();               
   cout << " + ";         
   n2.output(); 
   cout << " = "; 
   n5.output();
   cout << "\n\n";   

   // assigns the difference of n2 and n4 to n5 then outputs n5
   n5 = n2.subtract( n4 );
   cout<<endl;
   n2.output();
   cout<< " - ";
   n4.output();
   cout << " = ";
   n5.output();
   cout << "\n\n";
    
   // checks for equality between n2 and n2 
   if ( n2.isEqualTo( n2 ) == true )
   { 
      n2.output(); 
      cout << " is equal to ";
      n2.output(); 
      cout << "\n\n"; 
   } // end if 

   // checks for inequality between n1 and n2
   if ( n1.isNotEqualTo( n2 ) == true )
   {
      n1.output(); 
      cout << " is not equal to ";
      n2.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for greater number between n2 and n1 
   if ( n2.isGreaterThan( n1 ) == true )
   {
      n2.output(); 
      cout << " is greater than ";
      n1.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for smaller number between n4 and n2
   if ( n4.isLessThan( n2 ) == true )
   {
      n4.output(); 
      cout << " is less than ";
      n2.output(); 
      cout << "\n\n";  
   } // end if 
    
   // tests for smaller or equal number between n4 and n4
   if ( n4.isLessThanOrEqualTo( n4 ) == true )
   {
      n4.output(); 
      cout << " is less than or equal to ";
      n4.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for smaller or equal number between n4 and n2
   if ( n4.isLessThanOrEqualTo( n2 ) == true )
   {
      n4.output(); 
      cout << " is less than or equal to ";
      n2.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for greater or equal number between n3 and n3
   if ( n3.isGreaterThanOrEqualTo( n3 ) == true )
   {
      n3.output(); 
      cout << " is greater than or equal to ";
      n3.output(); 
      cout << "\n\n";  
   } // end if 
    
   // tests for greater or equal number between n2 and n3
   if ( n2.isGreaterThanOrEqualTo( n3 ) == true )
   {
      n2.output(); 
      cout << " is greater than or equal to ";
      n3.output(); 
      cout << "\n\n";  
   } // end if 
    
   // tests for zero at n3
   if ( n3.isZero() == true )
   {
      cout << "n3 contains ";
      n3.output();
      cout << "\n\n";  
   } // end if statement
   system("pause");
} // end main

