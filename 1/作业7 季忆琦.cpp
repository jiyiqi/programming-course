#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int radius,diamter;
	double circumference,area,¦Ð;
	¦Ð=3.14159;
	cout<<"Enter the radius:";
	cin>>radius;
	diamter=2*radius;
	cout<<"The diamter is:"<<diamter<<endl;
	circumference=static_cast<double>(2*¦Ð*radius);
	cout<<"The circumference is:"<<setprecision(5)<<circumference<<endl;
	area=static_cast<double>(¦Ð*radius*radius);
	cout<<"The area is:"<<setprecision(6)<<area<<endl;


system("pause");
return 0;
}