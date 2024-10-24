#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t		now = time(0);
    tm			*ltm = localtime(&now);

    std::cout << "[" << 1900 + ltm->tm_year;
    if (1 + ltm->tm_mon < 10)
        std::cout << "0";
    std::cout << 1 + ltm->tm_mon;
    if (ltm->tm_mday < 10)
        std::cout << "0";
    std::cout << ltm->tm_mday << "_";
    if (ltm->tm_hour < 10)
        std::cout << "0";
    std::cout << ltm->tm_hour;
    if (ltm->tm_min < 10)
        std::cout << "0";
    std::cout << ltm->tm_min;
    if (ltm->tm_sec < 10)
        std::cout << "0";
    std::cout << ltm->tm_sec << "] ";
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (this->_amount >= withdrawal) {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
        std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
    std::cout << ";withdrawal:refused" << std::endl;
    return false;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}