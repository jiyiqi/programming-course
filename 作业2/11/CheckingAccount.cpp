// Exercise 12.10: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
#include "CheckingAccount.h" // CheckingAccount class definition

using namespace std;

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double a,double fee1)
	:Account(a)
{
fee=fee1;
}

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit(double b)
{

Account::credit(b);

}

// debit (subtract) an amount from the account balance and charge fee
void CheckingAccount::debit(double b)
{
	if( Account::debit(b) )
      { 
      Account::debit(b);
      cout << "$" << fee << " transaction fee charged" << endl;
      }
}

// subtract transaction fee


