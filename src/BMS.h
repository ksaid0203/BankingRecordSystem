#include <list>
#include <string>
#ifndef BMS_H
#define BMS_H
class BMS
{
private :
	std::list<Account> accountList;

public:
	BMS();
	std::list<Account> getAccountList();
	void addAccount();
	Account findAccountByNumber(std::string &);
};
#endif
