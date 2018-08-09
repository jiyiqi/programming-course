#include<iostream>
#include <stdexcept>
#include"testobject.h"
using namespace std;
int main()
{
	try 
 {
testobject a( 1 );
 testobject b( 2 );
 testobject c( 3 );
 cout << '\n';

 throw runtime_error( "This is a test exception" );
} 

catch ( runtime_error &exception )
 {
cerr << exception.what() << "\n";
 } 

system("pause");

}