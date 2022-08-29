#include "pch.h"
#include "../Zad9Kata2StringCalculatorMain/StringCalculatorClass.hpp"

class StringCalculatorFixture : public ::testing::Test
{
protected:
	StringCalculator calculator;
};

//TEST_F(StringCalculatorFixture, Add_RandomStringsWithCommaSeparator_ReturnsSumOfInts)
//{
//	EXPECT_EQ(0, calculator.add(""));
//	EXPECT_EQ(6, calculator.add("1,2,3"));
//	EXPECT_EQ(13, calculator.add("5,2,6"));
//	EXPECT_EQ(32, calculator.add("24,2,6"));
//	EXPECT_EQ(59, calculator.add("24,29,6"));
//}
//
//TEST_F(StringCalculatorFixture, Add_RandomStringsNewLineSeparator_ReturnsSumOfInts)
//{
//	EXPECT_EQ(0, calculator.add(""));
//	EXPECT_EQ(6, calculator.add("1\n2\n3"));
//	EXPECT_EQ(59, calculator.add("24\n29\n6"));
//}

TEST_F(StringCalculatorFixture, Add_RandomStrings_ReturnsSumOfInts)
{
	EXPECT_EQ(6,calculator.add("//,\n1,5"));
	EXPECT_EQ(59, calculator.add("//\n\n24\n29\n6"));
	EXPECT_EQ(7, calculator.add("//.\n1.3.3"));

}
TEST_F(StringCalculatorFixture, Add_SeparatorAtTheEnd_ThrowInvalidArgument)
{
	EXPECT_THROW(calculator.add("1,5,"), std::invalid_argument);
	EXPECT_THROW(calculator.add("//\n\n24.29\n"), std::invalid_argument);
	EXPECT_THROW(calculator.add("24\n29\n"), std::invalid_argument);

}