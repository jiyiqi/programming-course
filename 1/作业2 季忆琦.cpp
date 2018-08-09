#include<iostream>
using namespace std;
int main()
{
	int number1;
	int number2;
	int number3;
	int sum;
    int average;
	int produce;
	int smallest;
	int largest;
	int A;
	int B;
	
	cout<<"Enter first integer:";
	cin>>number1;
	cout<<"Enter second integer:";
    cin>>number2;
	cout<<"Enter third integer:";
	cin>>number3;
	sum=number1+number2+number3;
	cout<<"The sum is:"<<sum<<endl;
	average=sum/3;
	cout<<"The average is : "<<average<<endl;
	produce=number1*number2*number3;
	cout<<"The produce is : "<<produce<<endl;
	
	A=number1;
	if(number2>A) A=number2;
	if(number3>A) A=number3;
	cout<<"The largest is:"<<A<<endl;

	B=number1;
	if(number2<B) B=number2;
	if(number3<B) B=number3;
	cout<<"The smallest is:"<<B<<endl;

    system("pause");
	return 0;
}


