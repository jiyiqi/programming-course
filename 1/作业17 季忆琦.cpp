#include<iostream>
using namespace std;
void gcd(int,int);
int main()
{
	int a,b;

	cout<<"Enter two interges:";
	cin>>a>>b;
	cout<<"Greatest common divisor of "<<a<<"and"<<b<<":";
    gcd(a,b);
	system("pause");
	return 0;
}
void gcd(int a,int b)
{
   int c,d;
  if(a>b)
		   c=a;
		 else 
			 c=b;
	   for(d=c;d>0;d--)
	   {
	   if(a%d==0&&b%d==0)
		   break;
		   }
	   cout<<d;
}