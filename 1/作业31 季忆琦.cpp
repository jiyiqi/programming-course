#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main ()
{
	int ans;
	char a,b,c,d ;
	ifstream file1("compare1.txt",ios :: in);
	ifstream file2("compare2.txt",ios :: in);
	char c1 [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2 [] = "abcdefghijklmnopqrstuvwxyz";
	
	file1 >> a ;
	c = a ;
	file2 >> b ;
	d = b ;
	while (! file1.eof() && ! file2.eof() )
	{
		for (int i = 0 ; i < 26 ; i++)
		{
			if ( c == c1[i])
			{
				c = c2[i];
			}
			if ( d == c1[i])
			{
				d = c2[i];
			}
		}

		if (c != d)
		{
			cout << "The two files are different !" << endl << endl;
			cout << "The first defferent of file1 : " << a << endl;
			cout << "The first defferent of file2 : " << b << endl;
			ans=0;
			break ;
		}
		file1 >> a ;
		c = a ;
		file2 >> b ;
		d = b ;
	}
	

	if ( ans== 1 )
	{
		if (! file1.eof() || ! file2.eof())
		{
			ans = 0 ;
			cout << "The two files are different !" << endl ;
			cout << "The leagths of two files are different ! " << endl;
		}
		else
		{
			cout << "The two files are same ! " << endl;
		}
	}
	system ("pause");
}