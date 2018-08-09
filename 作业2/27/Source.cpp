#include<iostream>
#include<iomanip>
#include<cmath>
#include<bitset>
using namespace std;

int main()
{
	int i;
	int j;
	int value;
	int count;
	int m=1;
bitset<1024> b;
for(i=2;i<1024;i++)
{
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	{
	m=0;
	}
	}
	if(m==1)
	{
		b.set(i);
	} 
	else
		m=1;
}
cout<<"The prime number in the range 2 to 1023 are"<<endl;
for(i=2,count =1; i<1024; i++)
{ 
if( b.test(i))//是否是1 是1 就输出
{ 
	cout << setw(5)<<i; 
   if(count++%12==0)
	   cout<<endl;
}
}
cout<<endl;
cout<<endl;
cout <<"Enter a valuefrom1 to 1023 (-1 to end):";
cin>> value;
while( value!=-1)
	{ 
		if( b[ value]) 
		cout << value<<"is aprimenumber\n";
		else
	{ 
		cout << value<<"is not aprimenumber\n" 
			  <<"the unique prime factorization of"<<value<<"is :"; 
	
	for(int f=2; f<1024; )
		{ 
			if( b.test(f)&& value%f==0)
				{ 
						cout <<f;     
						 value /=f; 
					if( value<=1)
					    break; 
					   
					cout<<"*";
					}
				 else
				{ 
						f++; 
				 }
	}
	cout <<endl;
	}
		cout <<"\nEnter a valuefrom 2 to 1023 (-1 to end):";
		cin>> value;
}

system("pause");
}
