#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i;

	cout<<"(a)"<<setw(12);
	cout<<"(b)"<<setw(12);
	cout<<"(c)"<<setw(12);
	cout<<"(d)"<<endl;

	for(a=1;a<=10;a++)
	{  
		for(b=1;b<=a;b++) 
		{
			cout<<"*";
		}
		for(c=10;c>=a;c--)
		{
		cout<<" ";
		}
		for(d=10;d>=a;d--)
		{
		cout<<"*";
		}
		for(e=1;e<=a;e++)
		{
		cout<<" ";
		}
		for(f=1;f<=a;f++)
		{
		cout<<" ";
		}
		for(g=10;g>=a;g--)
		{
		cout<<"*";
		}
		for(h=10;h>=a;h--)
		{
		cout<<" ";
		}
		for(i=1;i<=a;i++)
		{
		cout<<"*";
		}
		cout<<endl;
	} 

	

	

system("pause");
return 0;
}