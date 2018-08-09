#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	 int a=0;
	int b=0;
	int na[6]={0};
	int nb[6]={0};
	double sum[6]={0},total;
	cout<<"Enter product number(1-5) (-1 to stop):";
		cin>>a;
	while(a!=-1)
	{
		cout<<"Enter quantity sold : ";
		cin>>b;
		na[a]=a;
		nb[a]=b;

		switch(a)
	{
	case 1:
		sum[1]=static_cast<double>(nb[1])*2.98;
		break;
	case 2:
		sum[2]=static_cast<double>(nb[2])*4.50;
		break;
	case 3:
		sum[3]=static_cast<double>(nb[3])*9.98;
		break;
	case 4:
		sum[4]=static_cast<double>(nb[4])*4.49;
		break;
	case 5:
		sum[5]=static_cast<double>(nb[5])*6.87;
		cout<<"²âÊÔ";
		break;
		}
			cout<<"Enter product number (1-5) (-1 to stop ): ";
		cin>>a;
	}

	cout<<"Product1:$"<<sum[1]<<endl;
	cout<<"Product2:$"<<sum[2]<<endl;
	cout<<"Product3:$"<<sum[3]<<endl;
	cout<<"Product4:$"<<sum[4]<<endl;
	cout<<"Product5:$"<<sum[5]<<endl;

	total=sum[1]+sum[2]+sum[3]+sum[4]+sum[5];
	cout<<"Total:$"<<total<<endl;



system("pause");
return 0;
}