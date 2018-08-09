#include <string>
#include <stdexcept>
using namespace std;

class test2 : public runtime_error
 {
 public:
test2::test2()
 : runtime_error( "TestException1" )
{}
}; 