#include<string>
#include<stdexcept>
using namespace std;

class derivedexception1: public runtime_error
{
public:
	derivedexception1::derivedexception1(const string&message)
		:runtime_error(message)
	{}
};