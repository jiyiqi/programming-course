#include<iostream>
using namespace std;
int perfectnum();

int main()
{
	perfectnum();
		system("pause");
		return 0;
}

void perfectnum()
{
int n,i,sum;
for(n=1;n<=1000;n++)
{
 int a=0,b=1;
 sum=0;

    for(i=1;i<n;i++)
      if(n%i==0)
           {
                sum=sum+i;
                      a=a+1;
            }

      if(sum==n)
	 {
      cout<<n<<" =";
     for(i=1;i<n;i++)
    
		 if(n%i==0)
         {
              if(b<a)
              cout<<i<<"+";
              else
              b=i;
         }
     cout<<b<<endl;
	 
	}
}
}
