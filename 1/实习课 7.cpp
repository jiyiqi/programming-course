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

int search(int a[],int num,int low,int high)
{ 
	int mid=(low+high)/2;
	if(num<=a[0]&&num>a[mid])
	{
	   return search(a,num,low,mid);
	}
	if(num>=a[19]&&num<a[mid])
	{
		return search(a,num,mid,high);
	}
	if(num==a[mid])
	{
		mid=mid+1;
	  return mid;
	}

	if(num<a[19]||num>a[0])
	{
	return -1;
	}
}

int main()
{
	int answer=1;
	int num;
	int low=0,high=19;
	int a[20]={ };
	cout<<"<1>start\n<2>end\n";
	cin>>answer;
   while(answer==1)
   {
      rand(a);
	  bubble(a);
      cout<<"please input a number that you want to search:";
      cin>>num;
     int element= search(a,num,low,high);
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