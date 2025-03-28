/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Account.cpp                                          ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/28 18:30:55 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/28 19:36:57 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout
		<< " accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";deposits:"<<Account::getNbDeposits()
		<< ";withdrawals:"<<Account::getNbWithdrawals()
		<< std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::getNbAccounts();
	_totalAmount += initial_deposit;
	_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"<< this->_amount<<";created" << std::endl;
	
}

Account::~Account(void) {
	_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"<< this->_amount<<";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout
		<< " index:" << this->_accountIndex
		<< ";p_amount:"<< this->_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount + deposit
		<< ";nb_deposits:" << this->_nbDeposits + 1
		<< std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount+=deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout
		<< " index:" << this->_accountIndex
		<< ";p_amount:"<< this->_amount
		<< ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout
			<< "refused"
			<< std::endl;
		return (false);
	}
	std::cout 
		<< withdrawal
		<< ";amount:" << this->_amount - withdrawal
		<< ";nb_withdrawals:" << this->_nbWithdrawals + 1
		<< std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout
		<< " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void Account::_displayTimestamp(void)
{
	char buffer[256];
	std::time_t t = std::time(0);
	std::tm tm = *std::localtime(&t);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", &tm);
	std::cout << std::string(buffer);
}
