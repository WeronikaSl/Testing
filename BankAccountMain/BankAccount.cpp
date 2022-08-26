#include "BankAccount.hpp"

BankAccount::BankAccount(int avaliableFunds) : _avaliableFunds(avaliableFunds)
{
}

BankAccount::BankAccount()
{
}

bool BankAccount::withdraw(int toWithdraw)
{
    if (toWithdraw > _avaliableFunds)
    {
        return false;
    }
    else 
    {
        _avaliableFunds -= toWithdraw;
        return true;
    }

}

void BankAccount::deposit(int toDeposit)
{
    _avaliableFunds += toDeposit;
}

int BankAccount::getAvailableFunds() const
{
    return _avaliableFunds;
}
