#include "pch.h"
#include "../Zad7/StringStatistics.hpp"

TEST(TestStringStatistics, CountLetters_Letters_ReturnNoOfLetters)
{
	StringStatistics s("AAstr%%");
	EXPECT_EQ(5, s.countLetters());

	StringStatistics s1("ZZSTRI111");
	EXPECT_EQ(6, s1.countLetters());

	StringStatistics s2("aazzSTRIng");
	EXPECT_EQ(10, s2.countLetters());

	StringStatistics s3("");
	EXPECT_EQ(0, s3.countLetters());

}

TEST(TestStringStatistics, CountDigits_Digits_ReturnNoOfDigits)
{
	StringStatistics s("0234");
	EXPECT_EQ(4, s.countDigits());

	StringStatistics s1("STRI119");
	EXPECT_EQ(3, s1.countDigits());

	StringStatistics s2("STRIng4");
	EXPECT_EQ(1, s2.countDigits());

	StringStatistics s3("");
	EXPECT_EQ(0, s3.countDigits());

}

TEST(TestStringStatistics, CountSpecialChars_SpecialChars_ReturnNoOfSpecialChars)
{
	StringStatistics s("!//");
	EXPECT_EQ(3, s.countSpecialChars());

	StringStatistics s1(":d4@");
	EXPECT_EQ(2, s1.countSpecialChars());

	StringStatistics s2("[``STRIng4");
	EXPECT_EQ(3, s2.countSpecialChars());

	StringStatistics s3("{~hj4");
	EXPECT_EQ(2, s3.countSpecialChars());

	StringStatistics s4("");
	EXPECT_EQ(0, s4.countSpecialChars());

}