#include <iostream>
#include <string>
#include "Account.h"
#include "BMS.h"

using namespace std;

void printMenu() {
	cout << "MAIN MENU\n";
	cout << "01. NEW ACCOUNT\n";
	cout << "02. DEPOSIT AMOUNT\n";
	cout << "03. WITHDRAW AMOUNT\n";
	cout << "04. BALANCE ENQUIRY\n";
	cout << "05. ALL ACCOUNT HOLDER LIST\n";
	cout << "06. CLOSE AN ACCOUNT\n";
	cout << "07. MODIFY AN ACCOUNT\n";
	cout << "08. EXIT\n";
	cout << "Select Your Option (1-8)\n";
}

void programEnd() {
	cout << "This Program Ends normally\n";
}

int main(int argc, char* argv[]) {
	BMS bms;
	int tmp = 0;

	// Banking Record System
	
	do {
		printMenu();
		cin >> tmp;
		if(tmp == 1) {
			// NEW ACCOLUNT, 계좌 개설
			bms.addAccount();
			cout << "계좌 개설 완료\n";
		}
		else if (tmp == 2) {
			// DEPOSIT AMOUNT, 입금
		}

		else if (tmp == 3) {
			// WITHDRAW AMOUNT, 출금
		}

		else if (tmp == 4) {
			// BALANCE ENQUIRY, 잔액 조회
		}

		else if (tmp == 5) {
			// ALL ACCOUNT HOLDER LIST, 
		}


		else if (tmp == 6) {
			// CLOSE AN ACCOUNT, 계좌 해지
		}
		else if (tmp == 7) {
			// MODIFY AN ACCOUNT
		}
	} while(tmp != 8);

	// Program End	
	programEnd();
	
	return 0;
}
