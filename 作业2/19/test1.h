#include <string>
#include <stdexcept>
using namespace std;

class test1 : public runtime_error
 {
 public:
test1::test1()
 : runtime_error( "TestException1" )
{}
}; 