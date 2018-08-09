#include<iostream>
#include<iomanip>
#include<time.h>
#include<ctime>
#include<string>
#ifndef DATE_H
#define DATE_H
using namespace std;

class Date 
{
public:
   Date(); 
   bool isleap();
   void print() const;
  void printDDDYYYY() const;
   void printMMDDYY() const;
   void printMonthDDYYYY() const;
private:
   int month; 
   int day; 
   int year;
   int year2;
   int day2;
   string a;
}; 

#endif


Date::Date()
{
   // pointer of type struct tm which holds calendar time components
   struct tm *ptr; 

   time_t t = time( &t ); // determine current calendar time      
                          
   // convert current calendar time pointed to by t into
   // broken down time and assign it to ptr
   ptr = localtime( &t ); 
                               
   day = ptr->tm_mday; // broken down day of month
   month = 1 + ptr->tm_mon; // broken down month since January
   year = ptr->tm_year + 1900; // broken down year since 1900

   string m[12]={"January","February","March","April","May","June","july","August","september","October","November","December"};
	a=m[month-1];
	int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	day2=day;
	if(isleap())
		d[1]=29;
	for(int i=0;i<month-1;i++)
	{
	  day2+=d[i];
	}

	year2=year%100;
}

bool Date::isleap()
{
	return (year%4==0||year%400==0)&&year%100!=0;
}

void Date::print()const
{
	cout<<month<<"/"<<day<<"/"<<year;
}

void Date::printDDDYYYY()const
{
	cout<<day2<<" "<<year;
}

void Date::printMMDDYY()const
{
cout<<month<<" "<<day<<" "<<year2;
}

void Date::printMonthDDYYYY()const
{
cout<<a<<" "<<day<<" "<<year;
}

