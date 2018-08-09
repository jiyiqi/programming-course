#include<iostream>
#include<iomanip>
using namespace std;
void fun(int a)
{
	int m=1;
	int b,c;
	int *num=new int[a];
	for(b=1;b>0;b++)
	{
	for(c=2;c<=b;c++)
	{
	 if(m<a)
	 {
	   if(b%c==0)
		break;
	   if(b==(c+1))
        {  
			num[m-1]=b;
		    cout<<setw(5)<<num[m-1];
	        m++;
		   if(m%10==0)
		  {
		    cout<<endl;
		  }
	    }
	  }
    }
	if(m==a)
		break;
   }
		delete []num;
}

int main()
{
	int a,d=2;
	cout<<"Enter the number of prime you would like:";
	cin>>a;
	cout<<setw(5)<<d;
	fun(a);

system("pause");
return 0;
}