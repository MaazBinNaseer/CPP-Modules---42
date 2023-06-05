/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:13:53 by mbin-nas          #+#    #+#             */
/*   Updated: 2023/06/05 15:13:54 by mbin-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>
#include <ctime>

// Static Attributes Initialization
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Public Methods

Account::Account(int initial_deposit) 
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

    _nbAccounts--;
    _totalAmount -= _amount;
}

void Account::makeDeposit(int deposit) 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
              << ";deposit:" << deposit << ";";

    _amount += deposit;
    _nbDeposits++;

    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << "amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";

    if (_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }

    std::cout << "withdrawal:" << withdrawal << ";";

    _amount -= withdrawal;
    _nbWithdrawals++;

    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << "amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount() const 
{
    return _amount;
}

void Account::displayStatus() const 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount 
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts() 
{
    return _nbAccounts;
}

int Account::getTotalAmount() 
{
    return _totalAmount;
}

int Account::getNbDeposits() 
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() 
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() 
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Private Methods

void Account::_displayTimestamp() 
{
    std::time_t t = std::time(NULL);
    std::tm *tm = std::localtime(&t);

    char timestamp[20];
    std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", tm);
    std::cout << timestamp << std::flush;
}
