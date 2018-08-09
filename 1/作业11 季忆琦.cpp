#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	 int n=2,b=-1;
	double sum=4;

	cout<<"Accuracy set at:1000 term pi"<<endl;

	while(n<=1000)
	{   
		sum=sum+(double)(4*b)/(2*n-1);
		cout<< n<<" "<<setprecision(10)<<sum<<endl;
		n++;
		b=-1*b;
	}
	
system("pause");
return 0;
}
