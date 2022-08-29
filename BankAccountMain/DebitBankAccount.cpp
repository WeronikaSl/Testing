#include "DebitBankAccount.hpp"
#include "stdexcept"

DebitBankAccount::DebitBankAccount(int avaliableFundsDebit) : BankAccount(avaliableFundsDebit)
{
}

bool DebitBankAccount::withdraw(int toWithdraw)
{
	if ((_avaliableFunds + _debitLimit) >= toWithdraw)
	{
		_avaliableFunds -= toWithdraw;
		return true;
	}
	else
	{
		return false;
	}
}

void DebitBankAccount::setDebitLimit(int debitLimit)
{
	if (debitLimit < 0)
	{
		throw std::invalid_argument("Limit debetu nie może być mniejszy niż 0!");
	}
	else
	{
		_debitLimit = debitLimit;
	}

}

int DebitBankAccount::getDebitLimit() const
{
	return _debitLimit;
}

void DebitBankAccount::payDebit(int amount)
{
	_avaliableFunds += amount;
}
