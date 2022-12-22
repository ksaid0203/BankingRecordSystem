#include <string>
#include "Account.h"

/*
Account::Account(std::string name, std::string _accountNumber, int _amount)
       	: name(_name), accountNumber(_accountNumber), amount(_amount)
{
}
*/

std::string Account::getName()
{
	return name;
}

std::string Account::getAccountNumber()
{
	return accountNumber;
}

int Account::getAmount()
{
	return amount;
}
