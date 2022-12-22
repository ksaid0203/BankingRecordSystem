#include <list>
#ifndef BMS_H
#define BMS_H
class BMS
{
private :
	std::list<Account> accountList;

public:
	BMS();
	void addAccount();
};
#endif
