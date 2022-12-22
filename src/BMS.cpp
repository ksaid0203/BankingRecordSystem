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
