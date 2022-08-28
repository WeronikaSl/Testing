#include "pch.h"
#include "../Kata1/Kata1Header.hpp"

TEST(FizzBuzz, FizzBuzz_ConvertsInToString_ReturnsString) 
{
	EXPECT_EQ("1", fizzBuzz(1));
	EXPECT_EQ("-2", fizzBuzz(-2));
	EXPECT_EQ("0", fizzBuzz(0));
	EXPECT_EQ("-1", fizzBuzz(-1));

}