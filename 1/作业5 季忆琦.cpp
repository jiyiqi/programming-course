#include<iostream>
using namespace std;
int main()
{
	int number1;
	int number[9];
	int counter;
	int largest;
	counter=1;
	cout<<"Enter the first number:";
	cin>>number1;

	while(counter++<=9)
	{
		cout<<"Enter the next number:";
		cin>>number[counter];
    }
	
	largest=number1;
	for(counter=1;counter<=9;counter++)
	if(number[counter]>=largest)
	largest=number[counter];
   cout <<"largest is:"<<largest<<endl;


	system("pause");
	return 0;
}
