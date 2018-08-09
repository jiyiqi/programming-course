#include<iostream>
#include"idexception.h"
using namespace std;

class  id
{
public:
	id(int n)
		:idnumber(n)
	{
	cout << "Constructor for IDObject " << idnumber << '\n';
	if ( idnumber < 0 ) 
 throw idexception( "ERROR: Negative ID number" );
	}
private:
	int idnumber;
};