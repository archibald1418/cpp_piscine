#include "Account.hpp"
#include <iomanip>
#include <iostream>

int main()
{
	Account account = Account(7);

	account.displayStatus();

	account.makeDeposit(1);

	account.displayStatus();

	account.makeWithdrawal(877);
	account.displayStatus();

	std::cout << "ACCOUNT INFOS!\n";

	account.displayAccountsInfos();
}
