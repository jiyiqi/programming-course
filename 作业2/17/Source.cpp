#include<iostream>
using namespace std;
 int main()
 {
 try
 {
     int a=10;
	 double b=7.7;

	 throw a<b? a:b;
 }
 catch(int x)
 {
   cerr<<"the int value is"<<x<<"was thrown"<<endl;
 }
 catch(double y)
 {
 cerr<<"the double value is"<<y<<"was thrown"<<endl;
 }
 system("pause");
 }