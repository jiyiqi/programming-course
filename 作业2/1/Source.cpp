#include <iostream>
using namespace std;
#include "Date.h"
// function main begins program execution

Date::Date(int m,int d,int y)
{
	month=m;
	day=d;
	year=y;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
return year;
}

void Date::displaydate()
{
	 cout << month << '/' << day << '/' << year;
}

void Date::setmonth(int m)
{
	month=(m>0&&m<=12)? m : 1;
}

void Date::setday(int d)
{
	day=d;
}

void Date::setyear(int y)
{
	year=y;
}


int main()
{
   // create a Date object for May 6, 1981
   Date date(5,6,1981);
   // display the values of the three Date data members
   cout << "Month: " << date.getMonth() << endl;
   cout << "Day: " << date.getDay() << endl;
   cout << "Year: " << date.getYear() << endl;

   cout << "\nOriginal date:" << endl;
   date.displaydate(); // output the Date as 5/6/1981

   // modify the Date 
   date.setmonth( 13 ); // invalid month
   date.setday( 1 );
   date.setyear( 2005 );
   
   cout << "\nNew date:" << endl;
   date.displaydate(); // output the modified date (1/1/2005)
   system("pause");
} // end main
