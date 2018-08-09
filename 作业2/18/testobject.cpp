#include<iostream>
#include"testobject.h"
using namespace std;

testobject::testobject(int val)
	:value(val)
{
	cout<<"testobject"<<value<<"constructor"<<endl;
}

testobject::~testobject()
{
cout<<"testobject"<<value<<"destructor"<<endl;
}