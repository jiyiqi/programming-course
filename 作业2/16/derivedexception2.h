#include<string>
#include<stdexcept>
using namespace std;
 
class derivedexception2: public runtime_error
{
public:
	derivedexception2::derivedexception2(const string&message)
		:runtime_error(message)
	{}
};