#include <iostream> 
#include<iomanip>
using namespace std; 

double f(double);
int main()
{
	 

double a[3],d;
int b,c,e;
double m=0,n=0;

cout<<"ÊäÈëÊ±¼ä";
	for(b=0;b<3;b++)
	{
		cin>>a[b];
	}
	
	cout<<"car    hours    charge"<<endl;
	
	for(c=0;c<3;c++)
{
   d=a[c];
   e=c+1;
   cout<<e<<setw(9)<<d<<setw(9);
	cout<<f(d)<<endl;
	n=n+f(d);
	m=m+d;
	}
	cout<<"Totlal  "<<m<<"      "<<n;

system("pause");
}
double f(double x)
{
	double y;
	if(x>=0&&x<=3)
		 y=2;
	if(x>3&&x<=17)
		 y=2+(x-3)*0.5;
	if(x>17)
		 y=10;
	return y;
}