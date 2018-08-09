#include<iostream>
using namespace std;

class Rational
{
public:
	Rational(int,int,int,int);
	void jia();
	void jian();
	void cheng();
	void chu();
private:
	int numerator1;
	int denominator1;
	int numerator2;
	int denominator2;
	double reduced;
};
 Rational::Rational(int num1,int den1,int num2,int den2)
 {
  numerator1=num1;
  denominator1=den1;
  numerator2=num2;
  denominator2=den2;
 }
 
 void Rational::jia()
 {
	 int a=numerator1*denominator2+numerator2*denominator1;
	 int b= denominator1* denominator2;
	 int c=0;
	 if(a>=b)
	 {
	  for(int i=a;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	   c=i;
	   break;
	  }
	  }
	 }
	 if(b>a)
	 {
		  for(int i=b;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	    c=i;
	   break;
	  }
		  }
	 }
	 int d=a/c;
	 int e=b/c;
	 
	 cout<<numerator1<<"/"<<denominator1<<"+"<<numerator2<<"/"<<denominator2
		 <<"="<<d<<"/"<<e<<endl;
	 cout<<d<<"/"<<e<<"="<<(double)d/(double)e<<endl;
 }

  void Rational::jian()
 {
	 int a=numerator1*denominator2-numerator2*denominator1;
	 int b= denominator1* denominator2;
	 int c=0;
	 if(a>=b)
	 {
	  for(int i=a;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	   c=i;
	   break;
	  }
	  }
	 }
	 if(b>a)
	 {
		  for(int i=b;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	    c=i;
	   break;
	  }
		  }
	 }
	 int d=a/c;
	 int e=b/c;
	 
	 cout<<numerator1<<"/"<<denominator1<<"-"<<numerator2<<"/"<<denominator2
		 <<"="<<d<<"/"<<e<<endl;
	 cout<<d<<"/"<<e<<"="<<(double)d/(double)e<<endl;
 }

   void Rational::cheng()
 {
	 int a=numerator1*numerator2;
	 int b= denominator1* denominator2;
	 int c=0;
	 if(a>=b)
	 {
	  for(int i=a;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	   c=i;
	   break;
	  }
	  }
	 }
	 if(b>a)
	 {
		  for(int i=b;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	    c=i;
	   break;
	  }
		  }
	 }
	 int d=a/c;
	 int e=b/c;
	 
	 cout<<numerator1<<"/"<<denominator1<<"x"<<numerator2<<"/"<<denominator2
		 <<"="<<d<<"/"<<e<<endl;
	 cout<<d<<"/"<<e<<"="<<(double)d/(double)e<<endl;
 }

    void Rational::chu()
 {
	 int a=numerator1*denominator2;
	 int b= denominator1* numerator2;
	 int c=0;
	 if(a>=b)
	 {
	  for(int i=a;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	   c=i;
	   break;
	  }
	  }
	 }
	 if(b>a)
	 {
		  for(int i=b;i>0;i--)
	  {
	   if(a%i==0&&b%i==0)
 	  {
	    c=i;
	   break;
	  }
		  }
	 }
	 int d=a/c;
	 int e=b/c;
	 
	 cout<<numerator1<<"/"<<denominator1<<"/"<<numerator2<<"/"<<denominator2
		 <<"="<<d<<"/"<<e<<endl;
	 cout<<d<<"/"<<e<<"="<<(double)d/(double)e<<endl;
 }
int main()
{
	Rational rational(1,3,7,8);
	rational.jia();
	rational.jian();
	rational.cheng();
	rational.chu();
	system("pause");
}