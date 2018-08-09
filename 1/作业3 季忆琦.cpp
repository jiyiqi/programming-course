#include<iostream>
using namespace std;
int main()
{
  int a;
  int b;
 int c;
 int d;
 int e;
 int f;

  cout<<"Enter five-digit integer:";
  cin>>a;
  b=a/10000;
  cout<<b<<" ";
  a=a-b*10000;
  c=a/1000;
  cout<<c<<" ";
  a=a-c*1000;
  d=a/100;
  cout<<d<<" ";
  a=a-d*100;
  e=a/10;
  cout<<e<<" ";
  a=a-e*10;
  f=a;
  cout<<f<<" ";



	system("pause");
	return 0;
}