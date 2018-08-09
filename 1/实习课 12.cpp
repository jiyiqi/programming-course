#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

struct score
{
string id;
string name;
int grade1;
int mid;
int fin;
}r;

void in( int a)
{
	int grade2;
	fstream ingrades("grades.txt",ios::in);
	   while(!ingrades.eof() )
	   {
	     ingrades>>r.id>>r.name>>r.grade1>>r.mid>>r.fin;
		 grade2=r.grade1*0.3+r.mid*0.3+r.fin*0.4;
		  cout<<r.id<<setw(6)<<r.name<<setw(5)<<r.grade1<<setw(5)<<r.mid<<setw(5)<<r.fin<<setw(5)<<grade2<<endl;
        }
}
void out(int a)
{
	 fstream outgrades("grades.txt",ios::app);
	 outgrades<<endl;
	cout<<"please input id:"<<endl;
		cin>>r.id;
		outgrades<<r.id<<" ";
	   cout<<"please inout name:"<<endl;
	   cin>>r.name;
	   outgrades<<r.name<<" ";
	   cout<<"please input the coursework score:"<<endl;
	   cin>>r.grade1;
	   outgrades<<r.grade1<<" ";
	   cout<<"please input mid:"<<endl;
	   cin>>r.mid;
	   outgrades<<r.mid<<" ";
	   cout<<"please input final:"<<endl;
	   cin>>r.fin;
	   outgrades<<r.fin;

}
int main()
{
	int answer=0;
	
	while(answer!=3)
	{ 
	 cout<<"Please enter your choice:\n<1>show grades of all students\n<2>add a new students\n<3>exit\n";
	cin>>answer;

	if(answer==1)
	{ 
		in(answer);
    }

	if(answer==2)
	{
		out(answer);
	}
}


system("pause");
return 0;
}