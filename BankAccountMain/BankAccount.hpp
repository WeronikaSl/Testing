#pragma once
 
class BankAccount
{
protected:
	int _avaliableFunds = 0;
public:
	BankAccount(int avaliableFunds);
	BankAccount();
	bool withdraw(int toWithdraw);
	void deposit(int toDeposit);
	int getAvailableFunds() const;

};