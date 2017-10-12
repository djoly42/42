/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:53:20 by djoly             #+#    #+#             */
/*   Updated: 2017/10/02 20:06:20 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

int		Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" + std::to_string(Account::getNbAccounts()) + ";total:" + std::to_string(Account::getTotalAmount()) + 
			";deposits:" + std::to_string(Account::getNbDeposits()) + ";withdrawals:" + std::to_string(Account::getNbWithdrawals())+ "\n";
	return;
}

Account::Account( int initial_deposit ){
	this->_nbDeposits = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount +=initial_deposit ;
	Account::_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";amount:" + std::to_string(this->_amount) + ";created\n";
	return;
}

Account::~Account( void ){
	Account::_displayTimestamp();

	std::cout << "index:" + std::to_string(this->_accountIndex) + ";amount:" + std::to_string(this->_amount) + ";closed\n"; 
	return;
}

void	Account::makeDeposit( int deposit ){
	int		p_amount;

	p_amount = this->_amount;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";p_amount:" + std::to_string(p_amount) + 
				";deposit:" + std::to_string(deposit) +";amount:"+ std::to_string(this->_amount) +
			   ";nb_deposits:"+ std::to_string(this->_nbDeposits) + "\n";
	return;
}

bool	Account::makeWithdrawal( int withdrawal ){
	int		p_amount;
	Account::_displayTimestamp();
	if(this->_amount <  withdrawal){
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";p_amount:" + std::to_string(this->_amount) + 
				";withdrawal:refused\n";	
		return false;
	}
	p_amount = this->_amount;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";p_amount:" + std::to_string(p_amount) + 
				";withdrawal:" + std::to_string(withdrawal) +";amount:"+ std::to_string(this->_amount) +
			   ";nb_withdrawals:"+ std::to_string(this->_nbWithdrawals) + "\n";

	return true;
}

int		Account::checkAmount( void )const{
	
	return this->_amount;
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";amount:" + std::to_string(this->_amount) +
				";deposits:" + std::to_string(this->_nbDeposits) + ";withdrawals:" + std::to_string(this->_nbWithdrawals) + "\n";	

	return ;
}

void	Account::_displayTimestamp( void ){

		//std::cout << "[20150406_153629] ";
		char		tmp[80];
		std::time_t result = std::time(NULL);
		struct tm *		timeinfo = std::localtime(&result);

		strftime(tmp,80,"[%Y%d%m_%H%M%S] ", timeinfo);
		std::cout << tmp;
	return ;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;








