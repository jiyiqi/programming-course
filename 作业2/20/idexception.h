#ifndef IDEXCEPTION_H
#define IDEXCEPTION_H

#include<stdexcept>
#include<string>
using namespace std;

class idexception : public runtime_error
{
public:
   idexception::idexception( const string &message )
      : runtime_error( message ) 
   {}
}; 
#endif