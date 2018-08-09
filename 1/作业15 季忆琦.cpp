#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1;
	int num2;
	char answer = 'y';
	srand(time(0));
	
	while (answer == 'y')
	{
		num1=rand()%100+1;
        cout<<"I have a number between 1 and 100"<<endl;
	    cout<<"Can you guess my number?"<<endl;
	    cout<<"Please type your first guess."<<endl;
	    cin>>num2;

	while (num1 != num2 )
	{
		if(num1<num2)
      {
		  cout<<"Too high. Try again."<<endl;
		  cin>>num2;
		}
		if(num1>num2)
		{
			cout<<"Too low. Try again."<<endl;
			cin>>num2;
		}
	}
	cout << "Excellent! You guessed the number!\nWould you like to play again (y or n)?";
      cin >> answer;
   }
  system("pause");
   return 0;
}