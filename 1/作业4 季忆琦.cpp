#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a;
   int b;
   int c;
   cout<<"integer"<<setw(3)<<" ";
	cout<<"square"<<setw(3)<<" ";
	cout<<"cube"<<setw(3)<<endl;

  
   for(a=1;a<=10;a=a+1)
   {
	   cout<<setw(4)<<a;
       

	   b=a*a;
	   cout<<setw(9)<<b;

       c=a*a*a;
	   cout<<setw(9)<<c;
	   cout<<endl;
   }
	   
	   system("pause");
	   return 0;
} 