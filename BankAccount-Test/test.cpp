#include "pch.h"
#include "../BankAccountMain/BankAccount.hpp"
#include "../BankAccountMain/DebitBankAccount.hpp"

TEST(BankAccountTest, TestEmptyAccount) 
{
	BankAccount account;
	EXPECT_EQ(0, account.getAvailableFunds()) << "nie dziala buuu";
}

TEST(BankAccountTest, TestDeposit)
{
	BankAccount account;

	account.deposit(1000);
	EXPECT_EQ(1000, account.getAvailableFunds());
}

TEST(BankAccountTest, TestWithdraw)
{
	BankAccount account(100);
	EXPECT_TRUE(account.withdraw(50));
	EXPECT_EQ(50, account.getAvailableFunds());
	EXPECT_FALSE(account.withdraw(150));

}
TEST(DebitBankAccountTest, TestGetDebit)
{
	DebitBankAccount db(100);
	EXPECT_EQ(0, db.getDebitLimit());
}

TEST(DebitBankAccountTest, TestSetDebit)
{
	DebitBankAccount db(100);
	db.setDebitLimit(100);
	EXPECT_EQ(100, db.getDebitLimit());
	EXPECT_TRUE(db.setDebitLimit(150));
	EXPECT_FALSE(db.setDebitLimit(-150));

}

TEST(DebitBankAccountTest, TestWithdraw)
{
	DebitBankAccount db(100);
	db.setDebitLimit(100);
	EXPECT_TRUE(db.withdraw(150));
	EXPECT_FALSE(db.withdraw(250));
	db.withdraw(150);
	EXPECT_EQ(-50, db.getAvailableFunds());
}

TEST(DebitBankAccountTest, TestPayDebit)
{
	DebitBankAccount db(-100);
	db.payDebit(100);
	EXPECT_EQ(0, db.getAvailableFunds());
}