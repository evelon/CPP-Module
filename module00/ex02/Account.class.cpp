#include <iostream>
#include <chrono>
#include <ctime>
#include "Account.class.hpp"

using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return ( _nbAccounts );
}

int	Account::getTotalAmount( void )
{
	return( _totalAmount );
}

int	Account::getNbDeposits( void )
{
	return( _totalNbDeposits );
}

int	Account::getNbWithdrawals( void )
{
	return( _totalNbWithdrawals );
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
	_nbAccounts--;
	_totalAmount -= _amount;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" \
	<< deposit;
	_amount += deposit;
	_totalAmount += deposit;
	cout << ";amount:" << _amount << ";nb_deposits:" << ++_nbDeposits << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		cout << "refused" << endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	cout << withdrawal << ";amount:" << _amount << ";nb_withdrawal:" << \
	++_nbWithdrawals << endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << endl;
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" \
	<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" \
		<< _totalNbDeposits << ";widthdrawals:" << _totalNbWithdrawals << endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	raw_time;
	tm		*time_info;
	char	buffer[20];

	time( &raw_time );
	time_info = localtime( &raw_time );
	strftime( buffer, 20, "[%Y%m%d_%H%M%S]", time_info );
	cout << buffer;
}

