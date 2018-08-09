#include < iostream > 
#include < fstream > 
#include<string>
using namespace std ; 
int main( ) 
{ 
	ifstream infile ("s1021454-hw30.cpp",ios :: in);
	ofstream outfile ("WithoutComments.cpp",ios :: out);
	int c=1;
	char a , b;

	/* Output test statement to the screen: */
	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	while (!infile.eof())
	{
		infile.get(a);					/*   infile = "/"  */
		if ( a == '/') 
		{
			infile.get(b); 
			if (b == '*')				/*   infile = "*"  */
			{
				c = 0;
			}
			else
			{
				infile.putback(b);		/*   infile = "/"  */
			}
		}
		if ( a == '*') 
		{
			infile.get(b);				/*   infile = "/"  */
			if (b == '/')				
			{
				c = 1 ;
				infile.get(a);
			}
		}

		if (c == 1) 
		{
			outfile << a ;
			cout << a ;
		}
	}

	  
	system("pause") ; 
} 