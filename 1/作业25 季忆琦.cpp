#include<iostream>
#include<ctime>
using namespace std;
void mazeGenerator(char a[][12],int ,int);     
void mazeTraverse(char a[][12] ,int);        
int main()
{
  char a[12][12];      
  srand (time (0));  
    int p=rand()%(12-2)+1,q=rand()%(12-2)+1;       
    int k=p;                                    
   mazeGenerator(a,p,q);
    mazeTraverse(a,k);
system("pause");
}
void mazeGenerator(char a[][12],int p,int q)
{
	int i,j;
 for(i=0;i<12;i++)
  for(j=0;j<12;j++)
   a[i][j]='#';
 
 for(int i=1;i<11;i++)
  for(int j=1;j<11;j++)
   {
	   if(rand()%3==1)
     a[i][j]='#';
    else 
		a[i][j]='.';
  }
 a[p][0]='x';
 a[p][1]='.';
 a[q][11]='.';
 a[q][10]='.';
 
 for(i=0;i<12;i++)
  {
	  for(j=0;j<12;j++)
   cout<<a[i][j];cout<<endl;
 }
}

void mazeTraverse(char a[][12],int k)
                      
{int i,j,t=3,l=0;char ch;
	do
{
	switch(t)
                    
  {
	case 2:                   
   {
	   if(a[k+1][l]=='#')                   
	{
		if(a[k][l+1]=='#')
		{
			if(a[k-1][l]!='#')
			{
			   a[k-1][l]='x';//向上
                k=k-1;
			    t=1;}
		   else  
		   {
			   a[k][l-1]='x';//向左
			   l=l-1;
			   t=4;
          }
		 }
	  else
		{
			a[k][l+1]='x';//向右
			l=l+1;
			t=2;
		 }
    }
   else
	{
		a[k+1][l]='x';//向下
		k=k+1;
		t=3;
	 };
	cout<<"hit return to see next move";
  do
  {cin.get(ch);}
  while(ch!='\n');  
  for(i=0;i<12;i++)
   {for(j=0;j<12;j++)
	   cout<<a[i][j];
         cout<<endl;
   } ch=NULL;
}break;

case 1:
	{
		if(a[k][l+1]=='#')
	{
		if(a[k-1][l]=='#')
		{
			if(a[k][l-1]!='#')
          {
			  a[k][l-1]='x';//向左
			  l=l-1;
			  t=4;
			}
		 else
		 {
			 a[k+1][l]='x';//向下
			 k=k+1;
			 t=3;
		 }
		}
	else
	{
		a[k-1][l]='x';//向上
			k=k-1;
			t=1;
		}
   }
else
 {
	 a[k][l+1]='x';//向右
		l=l+1;
		t=2;
	}
cout<<"hit return to see next move";
do
  {cin.get(ch);}
  while(ch!='\n');
	for(i=0;i<12;i++)
   {for(j=0;j<12;j++)
	   cout<<a[i][j];
         cout<<endl;
   }	 ch=NULL;
}break;

case 4:
	{
		if(a[k-1][l]=='#')
    {
		if(a[k][l-1]=='#')
	   {
		   if(a[k+1][l]!='#')
		{
			a[k+1][l]='x';//向下
			k=k+1;
			t=3;}
		else
		{
			a[k][l+1]='x';//向右
			l=l+1;
			t=2;
		   }
		}
	else
		{
			a[k][l-1]='x';//向左
			l=l-1;
			t=4;
		}
	}
else
 {
	 a[k-1][l]='x';//向上
		k=k-1;
		t=1;
 }
cout<<"hit return to see next move";
do
  {cin.get(ch);}
  while(ch!='\n');
	for(i=0;i<12;i++)
   {for(j=0;j<12;j++)
	   cout<<a[i][j];
         cout<<endl; 
   }	ch=NULL;
}break;

case 3:
	{
		if(a[k][l-1]=='#')
	{
		if(a[k+1][l]=='#')
	 {
		 if(a[k][l+1]!='#')
		{
			a[k][l+1]='x';//向右
			l=l+1;
			t=2;
		 }
		else
		{
			a[k-1][l]='x';//向上
			k=k-1;
			t=1;
		 }
		}
		else
		{
			a[k+1][l]='x';//向下
			k=k+1;
			t=3;
		}
	}
	else
	{
		a[k][l-1]='x';//向左
		l=l-1;
		t=4;
	}
		cout<<"hit return to see next move";
do
  {cin.get(ch);}
  while(ch!='\n');
for(i=0;i<12;i++)
   {for(j=0;j<12;j++)
	   cout<<a[i][j];
         cout<<endl; 
   }ch=NULL;
}break;
}
}while((l<11)&&(l>0));

if(l==0)
cout<<"back to the begin"<<endl;
else if(l==11)
cout<<"maze successfully exited"<<endl;
}

