#include<iostream>
#include<string>
using namespace std;

int main()
{
	char str[]={'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
	string a;
	cout<<"enter a string:"<<endl;
	getline(cin,a);
	string::iterator b=a.begin();
	 while(b!=a.end())
	 {
		 int m=*b;
	if(m<=90&&m>=65)
	{
	*b=str[m-39];
	cout<<*b;
	b++;
	}
	if(m<=122&&m>=97)
	{
	*b=str[m-97];
	cout<<*b;
	b++;
	}
	else
	{
	cout<<*b;
	b++;
	}
	 }
	 cout<<endl;

	 cout<<"enter decrypt string"<<endl;
	 string c;
	 getline(cin,c);
	 	string::iterator d=c.begin();
	 while(d!=c.end())
	 {
		 int m=*d;
	if(m<=90&&m>=65)
	{
	*d=str[m-39];
	cout<<*d;
	d++;
	}
	if(m<=122&&m>=97)
	{
	*d=str[m-97];
	cout<<*d;
	d++;
	}
	else
	{
	cout<<*d;
	d++;
	}
	 }
	 cout<<endl;
	 system("pause");
}