#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i;
	do
	{
		cout<<"please input the odd height of the rhombus<3~15>:";
		cin>>a;
		if(a<=2||a>=16||a%2==0)
			cout<<"You enter the wrong number please inout anain:"<<endl;
		else
		{
		c=(a+1)/2;
		for(b=1;b<=c;b++)
		{
		 for(d=(a-3);d>=b;d--)
		 {
		 cout<<" ";
		 }
		 for(e=1;e<(2*b);e++)
		 {
			 cout<<"*";
		 }
		 cout<<endl;
		}
		
		f=(a-1)/2;
		for(g=1;g<=f;g++)
		{
		 for(h=1;h<=g;h++)
		 {
		 cout<<" ";
         }
		for(i=1;i<=(a-g*2);i++)
		{
		cout<<"*";
		}
		 cout<<endl;
		}

	}
	}
	while(a!=-1);
system("pause");
return 0;
}