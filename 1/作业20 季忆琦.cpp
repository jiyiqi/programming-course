#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	
    int answer1;
	int a[11]={0};
	int b=0;
	int first=1,eco=6;;
	char answer2='y';
	char answer3='y';
	

	while(b<10)
{
	cout<<"please type 1 for first class\nplease type 2 for economy\n";
	cin>>answer1;
if(answer1==1)
	{
		if(first<=5)
		{
	        cout<<"You assignments is "<<first<<" in the first class section\n";
	        a[first++]=1;
	        b++;
	    }
	    if(first>5&&eco<=10)
	   {
	        cout<<"The firstclass section is full.\n would you like to sit in the economy section(y or n)";
		    cin>>answer2;
	     if(answer2 == 'y')
	    {
		   cout<<"you seat assignment is "<<eco<<"in the economy section\n";
	       a[eco++]=1;
		   b++;
	    }
	     else
	    {
	       b=11;
	    }
	  }
  else if(eco>10&&first>5)
		 {
			 cout<<"all seat for this flight are sold\n";
		}
}

else 
{
	if(eco<=10)
		{
			cout<<"You assignments is "<<eco<<" in the economy section\n";
	        a[eco++]=1;
		    b++;
	    }
     if(eco>10&&first<=5)
	    {
	        cout<<"The economy section is full.\n would you like to sit in the first class section(y or n)";
		     cin>>answer2;
	      if(answer3 == 'y')
	      {
	         cout<<"you seat assignment is "<<first<<"in the first class section\n";
		     a[first++]=1;
		     b++;
	       }
	      else
	      {
	        b=11;
	      }
	    }
   else if(eco>10&&first>5)
	 {
		cout<<"all seat for this flight are sold\n";
	  }
}
}

system("pause");
return 0;
}