// Exercise 12.10: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double a,double rate)
	:Account(a)
{
interestrate=rate;
}

// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
double interest=getBalance()*interestrate;
return interest;
}
