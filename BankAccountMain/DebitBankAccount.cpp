#include "DebitBankAccount.hpp"

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

bool DebitBankAccount::setDebitLimit(int debitLimit)
{
	if (debitLimit < 0)
	{
		return false;
	}
	else
	{
		_debitLimit = debitLimit;
		return true;
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
