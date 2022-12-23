#include <list>
#include <iostream>
#include <string>
#include "Account.h"
#include "BMS.h"

BMS::BMS()
{
}

void BMS::addAccount()
{
	std::string name;
	std::string accountNumber;
	int amount = 0;
	std::cout << "INSERT NAME : ";
	std::cin >> name;
	std::cout << "INSERT ACCOUNTNUMBER : ";
	std::cin >> accountNumber;
	Account account(name, accountNumber, amount);
	accountList.push_back(account);
}

Account BMS::findAccountByNumber(std::string & accountNumber)
{
	Account ret;
	for(Account & account : accountList)
	{
		if(account.getAccountNumber() == accountNumber)
		{
			ret = account;
			break;
		}
	}
	return ret;
}

std::list<Account> BMS::getAccountList()
{
	return accountList;
}
