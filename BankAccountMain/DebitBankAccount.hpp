#pragma once
#include "BankAccount.hpp"


class DebitBankAccount : public BankAccount
{
private:
	int _debitLimit = 0; //max o tyle więcej można wypłacić, wypłacamy to + avaliablefunds
public:
	DebitBankAccount(int avaliableFunds);
	bool withdraw(int toWithdraw);
	void setDebitLimit(int debitLimit);
	int getDebitLimit() const;
	void payDebit(int amount);

};