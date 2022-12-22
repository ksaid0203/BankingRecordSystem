#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
class Account {
private :
	std::string name;
	std::string accountNumber;
	int amount;
public :
	Account(std::string _name, std::string _accountNumber, int _amount)
       	: name(_name), accountNumber(_accountNumber), amount(_amount) {}
	std::string getName();
	//void setName(std:string name) { this.name = name; }
	std::string getAccountNumber();
	//void setAccountNumber(std:string accountNumber) { this.accountNumber = accountNumber; }
	int getAmount();
	//void setAmount(int amount) { this.amount = amount; }
};
#endif
