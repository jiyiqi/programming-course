#include <iostream> 
#include "Date.h" 
using namespace std;

int main()
{
   Date date1; 
   date1.print();
   cout << '\n';

  date1.printDDDYYYY(); 
   cout << '\n';

   date1.printMMDDYY(); 
   cout << '\n';

   date1.printMonthDDYYYY();
   cout << endl;
  
   system("pause");
} 
