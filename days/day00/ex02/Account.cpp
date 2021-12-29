#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>


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

Account::Account()
{
    Account(0);
}

Account::~Account()
{
    std::cout << "index:" << this->_accountIndex << ";" <<\
        "amount:" << this->_amount << ";" <<\
        "closed"; // NB: careful with endl
}

void    Account::makeDeposit(int deposit)
{
    // To ours

    // show previous amount
    std::cout << "index:" << _accountIndex << ";" <<\
        "p_amount:" << _amount << ";" << "deposit:" << deposit;

    // Update account
    this->_amount += deposit;
    this->_nbDeposits++;

    // show final amount
    std::cout << "amount:" << _amount << ";" <<\
        "nb_deposits:" << _nbDeposits;

    // To theirs
    _totalNbDeposits++;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    // Show previous amount
    std::cout << "index:" << _accountIndex << ";" <<\
        "p_amount:" << _amount << ";" << "withdrawal:";

    /*
    Q: This logging decision is bad 
        but the exercise imposes this.
        A method shouldn't do both logging and object modification.
            It would be better to leave the logging to a function
        which knows what operation was envoked.
            Or TODO: write a logger decorator for makeWithdrawal and makeDeposit
        to save before-state of Account before execution of the methods,
        print it and print the after-state
    */ 

    // Check withdrawal status
    if (withdrawal > _amount)
    {   
        std::cout << "refused"; // or print it higher
        return (false);
    }
    
    // Update account
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;

    // Show final amount
    std::cout << withdrawal << ";" <<\
        "amount:" << _amount << ";" <<\
            "nb_withdrawals:" << _nbWithdrawals;

    // To theirs
    _totalNbWithdrawals++;
    return (true);
}

void    Account::_displayTimestamp()
{
    std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);

    std::cout << "[" <<\
        (now->tm_year + 1900) <<\
            std::setfill('0') << std::setw(2) <<\
        now->tm_mon + 1 <<\
            std::setfill('0') << std::setw(2) <<\
        now->tm_mday;

    std::cout << '_';

    // TODO: check all this
    std::cout << std::setfill('0') << std::setw(2) <<\
        now->tm_hour <<\
            std::setfill('0') << std::setw(2) <<\
        now->tm_min <<\
            std::setfill('0') << std::setw(2) <<\
        now->tm_sec;
    
    std::cout << "] ";
    
}

// Public amount getter (for logs)
int Account::checkAmount()const
{
    return (this->_amount);
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

