#include "BankAccount.hpp"
#include "DebitBankAccount.hpp"
#include <iostream>


int main()
{
	DebitBankAccount d(500);
	d.deposit(1000);
	std::cout << d.getAvailableFunds();

}
