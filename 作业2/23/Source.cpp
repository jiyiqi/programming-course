#include<iostream>
#include<string>
using namespace std;
int main()
{
string a;
cout<<"input a sentence"<<endl;
getline(cin,a);
string::iterator b=a.begin();
int count=0;
char str[100]={ };
int m=0;
int k=1;

while(b!=a.end())
{
	str[m]=*b;
	b++;
	m++;
	if(str[m-1]==' '||str[m-1]==','||str[m-1]=='.')
	{
	     int i,j;
		 for(i=0,j=m-2;i<j;i++,j--)
		 {
		   if(str[i]!=str[j])
		   {
		   k=0;
		   }
		 }
	   if(k==1)
	   {
	   count++;
	   }
	   if(k==0)
	   {
	   k=1;
	   }
	   m=0;
	
	  }
}

cout<<"the number of pail "<<count<<endl;
system("pause");
}