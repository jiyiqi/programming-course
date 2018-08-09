#include<iostream>
#include<string>
using namespace std;
int increase(int a[])
{
	int b,c,d,max,e;
	for(b=0;b<=4;b++)
	{
		max=b;
	for(c=b+1;c<=4;c++)
	if(a[max]<a[c])
		{
			d=a[c];
	       a[c]=a[max];
	       a[max]=d;
	   }
	}

	e=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
	return e;
}


int decrease(int a[])
{
	int b,c,d,min,e;
	for(b=0;b<=4;b++)
	{
		min=b;
	for(c=b+1;c<=4;c++)
	if(a[min]>a[c])
	  {
		d=a[c];
	       a[c]=a[min];
	       a[min]=d;
	   }
	}
	
	e=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
	return e;
}

int max_min(int a, int b)
{
	int c;
	c=a-b;
	return c;
}

int main()
{
	int a[5];
	int b,c,d;
	int e,f;
	cout<<"please enter 5 digits numbers:"<<endl;
	cin>>d;

	a[0]=d/10000;
	a[1]=(d-a[0]*10000)/1000;
	a[2]=(d-a[0]*10000-a[1]*1000)/100;
	a[3]=(d-a[0]*10000-a[1]*1000-a[2]*100)/10;
	a[4]=(d-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10);

	e=increase(a);
	f=decrease(a);
	cout<<"The value of MAX-MIN is "<<max_min(e,f)<<" <"<<increase(a)<<"-"<<decrease(a)<<">"<<endl;

system("pause");
return 0;
}