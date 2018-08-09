#include<iostream>
#include<ctime>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{  
	vector<int>a(13);
	double c,d;
	srand(time(0));
	for(int b=1;b<=36000;b++)
	{
	a[(1+rand()%6)+(1+rand()%6)]++;
	}
	cout<<"sum     total     expected     actual"<<endl;

	for(int sum=2;sum<13;sum++)
	{   
		if(sum<=7)
		{
			c=((double)sum-1)*100/36;
		}
		else
	   {
			c=(13-(double)sum)*100/36;
	   }
		d=(double)a[sum]/360;
	cout<<sum<<setw(10)<<a[sum]<<setw(14)<<c<<setprecision(5)<<"%"<<setw(11)<<d<<setprecision(5)<<"%"<<endl;
	}
	system("pause");
	return 0;
}