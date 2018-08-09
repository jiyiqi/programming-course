#include<iostream>
#include<ctime>
using namespace std;
void rand(int a[])
{
	int b,c;
    
	for(b=0;b<20;b++)
	{
	  srand(time(0));
	  leap:c=(rand()%100+1);
	  for(int i=0;i<b;i++)
	  { 
	   if(a[i]==c)
	   { 
		  goto leap;
	   }
	  }
	  a[b]=c;
	
	}

}
	
void bubble(int a[])
{
 int x,y,z,e;
 for(x=0;x<=19;x++)
 {
  for(y=0;y<=19;y++)
   if(a[y+1]>a[y])
    {
     z=a[y];
            a[y]=a[y+1];
      a[y+1]=z;
   }
 }
 for(e=0;e<=19;e++)
   cout<<a[e]<<" ";
 cout<<endl;
}

int search(int a[],int num)
{ 
	int c;
	
	for(int b=0;b<20;b++)
	{
	  if(a[b]==num)
	  {
			c=(b+1);
	       return c;
			
	  }
   }
	return-1;
	
}

int main()
{
	int answer=1;
	int num;
	int a[20]={ };
	cout<<"<1>start\n<2>end\n";
	cin>>answer;
   while(answer==1)
   {
      rand(a);
	  bubble(a);
      cout<<"please input a number that you want to search:";
      cin>>num;
     int element= search(a,num);
     if(element!=-1)
	  cout<<num<<"is in the array,and the position is:"<<element<<endl;
	 else 
		 cout<<num<<"is not in the array"<<endl;
	 cout<<"<1>start\n<2>end\n";
	 cin>>answer;
   
   }

	system("pause");
	return 0;
}