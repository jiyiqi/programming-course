#include<iostream>
#include<string>
using namespace std;
void sort(string a[])
{
	int i,j;
	for(i=0;i<10;i++)
	{
	for(j=0;j<10;j++)
	{
	if(a[i]<a[j])
		swap(a[i],a[j]);
	}
	}
}

void swap(string *a,string *b)
{
	string hold=*a;
	*a=*b;
	*b=hold;

}

int main()
{
	string a[10];
	cout<<"input 10 words"<<endl;
	for(int i=0;i<10;i++)
	{
	cin>>a[i];
	}
	cout<<"after sort"<<endl;
	sort(a);
	for(int j=0;j<10;j++)
	{
	cout<<a[j]<<endl;
	}


system("pause");
}
