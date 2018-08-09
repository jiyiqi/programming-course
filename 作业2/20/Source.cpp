#include <iostream>
#include "id.h" 
#include "idexception.h"
using namespace std;

 int main()
 {
 try 
 {
id valid( 10 ); 
id invalid( -1 ); 
 }
catch ( idexception &exception ) 
{
      cerr << exception.what() << '\n';
   } 
 system("pause");
} 
