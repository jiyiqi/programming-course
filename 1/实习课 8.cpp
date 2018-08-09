#include<iostream>
#include<string>
using namespace std;

int main()
{
	char id[11]={0};
	int rightnum;
	int b,c,total=0;
	
	char answer='y';
	while(answer=='y')
	{
	cout<<"please input your id number:";
	cin>>id;
	int a=strlen(id);
	b=id[0]-65;
	c=idnum[b];
	 total=(c%10)*9+c/10+(id[1]-'0')*8+(id[2]-'0')*7+(id[3]-'0')*6+(id[4]-'0')*5+(id[5]-'0')*4+(id[6]-'0')*3+(id[7]-'0')*2+(id[8]-'0');
	rightnum=10-(total%10);
   if(a==10)
	{
	if(id[9]-'0'==rightnum)
		cout<<"The ID is right "<<endl;
	else 
		cout<<"input error"<<endl;
	}
	else 
	{
			cout<<"input error"<<endl;
	}
	cout<<"input again <y/n>";
		cin>>answer;
  }


system("pause");
return 0;
}