#include "pch.h"
#include "../Kata1/Kata1Header.hpp"

class FizzBuzzFixture : public ::testing::Test 
{
protected:
	Fizzbuzz fizzBuzz;
};

TEST_F(FizzBuzzFixture, FizzBuzz_ConvertsInToString_ReturnsString)
{
	EXPECT_EQ("1", fizzBuzz.fizzBuzz(1));
	EXPECT_EQ("-2", fizzBuzz.fizzBuzz(-2));
	EXPECT_EQ("0", fizzBuzz.fizzBuzz(0));
	EXPECT_EQ("-1", fizzBuzz.fizzBuzz(-1));

}
TEST_F(FizzBuzzFixture, FizzBuzz_ConvertsMultiplesOfThreeInToFizz_ReturnsFizz)
{
	EXPECT_EQ("Fizz", fizzBuzz.fizzBuzz(3));
	EXPECT_EQ("Fizz", fizzBuzz.fizzBuzz(9));
}

TEST_F(FizzBuzzFixture, FizzBuzz_ConvertsMultiplesOfFiveInToBuzz_ReturnsBuzz)
{
	EXPECT_EQ("Buzz", fizzBuzz.fizzBuzz(5));
	EXPECT_EQ("Buzz", fizzBuzz.fizzBuzz(20));
}

TEST_F(FizzBuzzFixture, FizzBuzz_ConvertsMultiplesOfThreeAndFiveInToFizzBuzz_ReturnsFizzBuzz)
{
	EXPECT_EQ("FizzBuzz", fizzBuzz.fizzBuzz(15));
	EXPECT_EQ("FizzBuzz", fizzBuzz.fizzBuzz(30));
}