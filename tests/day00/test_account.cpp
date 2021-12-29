#include "Account.hpp"
#include <iomanip>
#include <iostream>

int main()
{
	Account account = Account(876);

	account.displayStatus();

	account.makeDeposit(1);

	account.displayStatus();

	account.makeWithdrawal(900);
	account.displayStatus();
}
