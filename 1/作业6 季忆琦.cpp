#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	 
	cout<<"Enter a five-digit integer:";
	cin>>a;
	b=a/10000;
	c=(a-b*10000)/1000;
	d=(a-b*10000-c*1000)/100;
	e=(a-b*10000-c*1000-d*100)/10;
	f=(a-b*10000-c*1000-d*100-e*10);
	if(b==f&&c==e)
		cout<<a<<" is a palindrome"<<endl;
	else 
		cout<<a<<" is not a palindrome"<<endl;

system("pause");
	return 0;
}