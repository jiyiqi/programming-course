#include<iostream>
using namespace std;

void bubble(int arr[])
{
 int x,y,z,e;
 for(x=0;x<=19;x++)
 {
  for(y=0;y<=19;y++)
   if(arr[y+1]>arr[y])
    {
     z=arr[y];
            arr[y]=arr[y+1];
      arr[y+1]=z;
   }
 }
 for(e=0;e<=19;e++)
   cout<<arr[e]<<" ";
 cout<<endl;
}

int main()
{
       int a;
	   int b;
	   int arr[20];
	   cout<<"enter 20 integers between 10~100:"<<endl;

     for(b=0;b<20;b++)
   {
	  leap: cin>> a;
      if(a>=100||a<=10)
	{
		cout<<"invalid number"<<endl;
	  goto leap;
    }
	  else
  {
       for (int i=0;i<b;i++)
    {
	    if(arr[i]==a)
	 {
		cout<<"duplicate number"<<endl;
		goto leap;
	  }
    }
 }
	   arr[b]=a;
	 }
	 cout<<"the nonduplicate values\n";
	bubble(arr);

 system("pause");
 return 0;
}