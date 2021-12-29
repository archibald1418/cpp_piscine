#include "Account.hpp"
#include <iostream>



Account::Account(int initial_deposit)
{
    // To myself
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 1;
    _nbWithdrawals = 0;
    
    // To all the others
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _totalNbDeposits++;
}

Account::~Account()
{
    std::cout << "index:" << this->_accountIndex << ";" <<\
        "amount:" << this->_amount << ";" <<\
        "closed"; // NB: careful with endl
}




// Static getters
// NOTE: could be modified in progress
int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

