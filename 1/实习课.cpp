#include<iostream>
using namespace std;
int main()
{
	int number1,number2;
	int a,b,c,d,e,f;
	cout<<"please input the first number:";
	cin>>number1;
	cout<<"please input the second number:";
	cin>>number2;

	for(a=2;a<=number1;a++)
		{
			if(number1%a==0) break;
		 	}
		if(number1==a)
			cout<<number1<<"is the prime number"<<endl;
	  else
			   cout<<number1<<"is not the prime number"<<endl;

		for(b=2;b<=number2;b++)
		{
			if(number2%b==0) break;
	   }
	   if(number2==b)
		  cout<<number2<<" is the prime number"<<endl;
		else
			cout<<number2<<" is not the prime number"<<endl;

	     if(number1>number2)
		   c=number2;
		 else 
			 c=number1;
	   for(d=c;d>0;d--)
	   {
	   if(number1%d==0&&number2%d==0)
		   break;
		   }
	   cout<<"<"<<number1<<","<<number2<<"> ="<<d<<endl;

	   if(number1>number2)
		   e=number1;
	   else
		   e=number2;
	   for(f=e;f>=number1&&f>=number2;f++)
	   {
		   if(f%number1==0&&f%number2==0)
			   break;
	   }
	   cout<<"["<<number1<<","<<number2<<"] ="<<f<<endl;

system("pause");
return 0;
}