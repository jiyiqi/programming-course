#include<iostream>
#include<ctime>
#include"test1.h"
#include"test2.h"
using namespace std;
void generateException()
{
int type=1+ rand() % 3;
 test1 exception1;
 test2 exception2;

 switch( type )
{
 case 1: // throw int exception
   cout << "\nThrowing exception of type int...\n";
   throw( 10 );
case 2: // throw TestException1
   cout << "\nThrowing exception of type TestException1...\n";
   throw( exception1 );
case 3: // throw TestException2
   cout << "\nThrowing exception of type TestException2...\n";
   throw( exception2 );
}
 }

int main()
{
	srand( time( 0 ) ); 
 for ( int i = 0; i < 5; i++ )
 {
try 
 {
 generateException();
 }
catch( ... )
{
cerr << "The \"catch all\" exception handler was invoked\n";
 } 
} 

system("pause");
}