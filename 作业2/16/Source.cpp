#include<iostream>
#include"derivedexception2.h"
#include"derivedexception1.h"
using namespace std;
int main()
{
	try
	{
		throw(derivedexception1("derivedexception1"));
	}
	catch(runtime_error&exception)
	{
	cerr<<exception.what()<<endl;
	}

		try
	{
		throw(derivedexception2("derivedexception2"));
	}
	catch(runtime_error&exception)
	{
	cerr<<exception.what()<<endl;
	}
	system("pause");
}

