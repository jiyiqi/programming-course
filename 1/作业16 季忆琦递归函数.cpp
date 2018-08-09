#include<iostream>
using namespace std;

void han(int n, int a, int b, int c)
{  
	 if(n==1)
	cout<<a<<"→"<<c<<endl;
   else
  {
    han(n-1,a,c,b);
    cout<<a<<"→"<<c<<endl;
    han(n-1,b,a,c);
  }
}

int main()
{
   int n;
   cout<<"输入可移动圆盘个数:";
   cin>>n;
   int a=1,b=2,c=3;
   han(n,a,b,c);
   system("pause");
   return 0;
}
