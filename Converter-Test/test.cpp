#include "pch.h"
#include "../Converter/ConverterClass.hpp"

TEST(TestConverter, TestFeetToMeters)
{
	Converter c;
	EXPECT_DOUBLE_EQ(30.48, c.feetToMeters(100));
}


TEST(TestConverter, TestMetersToFeet)
{
	Converter c;
	EXPECT_DOUBLE_EQ(328.08399, c.metersToFeet(100));
}


TEST(TestConverter, TestCelsiusToFarenheit)
{
	Converter c;
	EXPECT_DOUBLE_EQ(212, c.celsiusToFarenheit(100));
}


TEST(TestConverter, TestFarenheitToCelsius)
{
	Converter c;
	EXPECT_DOUBLE_EQ(37.7777778, c.farenheitToCelsius(100));
}
