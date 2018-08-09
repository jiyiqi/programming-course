// Exercise 12.10: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include"Account.h"

class SavingsAccount: public Account
{
public:
	SavingsAccount(double,double);
	double	calculateInterest();

protected:
	double interestrate;
};
#endif