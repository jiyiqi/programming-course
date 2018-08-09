#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date(int,int,int);
	void displaydate();
	void setmonth(int);
	void setday(int);
	void setyear(int);
	int getMonth();
	int getDay();
	int getYear();
private:
	int month;
	int day;
	int year;
};
#endif