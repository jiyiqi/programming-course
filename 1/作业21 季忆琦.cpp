#include<iostream>
#include<string>
using namespace std;
int main()
{   
	int h=0;
	char a[100];
    gets(a);
	int b=strlen(a);
for(int c=0;c<b/2;c++)
{
	   if(a[c]!=a[b-c-1])
	   {
		   h=1;
	   }
}

	if(h==0)  
{
    for(int d=0;d<=b;d++)
		 {
		 cout<<a[d];
		 }
	     cout<<"is a palinedrome"<<endl;
}
	  else
	   {
		   for(int e=0;e<=b;e++)
		 {
		 cout<<a[e];
		 }
	   cout<<"is not a palinedrome"<<endl;
	   }
	
	system("pause");
	return 0;
}
