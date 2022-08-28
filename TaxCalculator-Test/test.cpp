#include "pch.h"
#include "../Zad8TaxCalculatorMain/TaxCalculatorClass.hpp"

class TaxCalculatorTest : public ::testing::Test
{
protected:
	TaxCalculator tax_calculator;
};

TEST_F(TaxCalculatorTest, CountTax_LessThan0AmountsOfMoney_Throws_Invalid_Argument_Exception)
{
	EXPECT_THROW(tax_calculator.countTax(-0.11111111111), std::invalid_argument);
	EXPECT_THROW(tax_calculator.countTax(-1), std::invalid_argument);
	EXPECT_THROW(tax_calculator.countTax(-120), std::invalid_argument);
}

TEST_F(TaxCalculatorTest, CountTax_RandomAmountsOfMoney_ReturnsProperAmountOfTax) 
{
  EXPECT_EQ(0, tax_calculator.countTax(8000));
  EXPECT_EQ(800, tax_calculator.countTax(18000));
  EXPECT_EQ(79000, tax_calculator.countTax(256250));
}

TEST_F(TaxCalculatorTest, CountTax_LessThan10000AmountsOfMoney_ReturnsProperAmountOfTax)
{
	EXPECT_EQ(0, tax_calculator.countTax(0));
	EXPECT_EQ(0, tax_calculator.countTax(1));
	EXPECT_EQ(0, tax_calculator.countTax(9999));
}

// ((10000 - 10000)*0.1) = 0
// ((10001 - 10000)*0.1) = 0.1
// ((29999 - 10000)*0.1) = 1999.9
TEST_F(TaxCalculatorTest, CountTax_MoreThan10000LessThan30000AmountsOfMoney_ReturnsProperAmountOfTax)
{
	EXPECT_DOUBLE_EQ(0, tax_calculator.countTax(10000));
	EXPECT_DOUBLE_EQ(0.1, tax_calculator.countTax(10001));
	EXPECT_DOUBLE_EQ(1999.9, tax_calculator.countTax(29999));
}

//(20000 * 0.1 + (30000 - 30000) * 0.25) = 2000
//(20000 * 0.1 + (119 999- 30000) * 0.25) = 24499.75

TEST_F(TaxCalculatorTest, CountTax_MoreThan30000LessThan120000AmountsOfMoney_ReturnsProperAmountOfTax)
{
	EXPECT_DOUBLE_EQ(2000, tax_calculator.countTax(30000));
	EXPECT_DOUBLE_EQ(24499.75, tax_calculator.countTax(119999));
}


//(20000 * 0.1 + 90000 * 0.25 + (120000 - 120000) * 0.4) = 24500
//(20000 * 0.1 + 90000 * 0.25 + (120001 - 120000) * 0.4) = 24500.4

TEST_F(TaxCalculatorTest, CountTax_MoreThan120000AmountsOfMoney_ReturnsProperAmountOfTax)
{
	EXPECT_DOUBLE_EQ(24500, tax_calculator.countTax(120000));
	EXPECT_DOUBLE_EQ(24500.4, tax_calculator.countTax(120001));

}


