#include<iostream>
using namespace std;
int main()
{
	int number;
	int a;
	int result=1;

	cout<<"Enter a positive integer:";
	cin>>number;

     for(a=1;a<=number;a++)
		{
			result=result*a;
	 }
	  cout<<number<<"! is:"<<result<<endl;
		
system("pause");
return 0;
}