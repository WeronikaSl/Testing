#include "pch.h"
#include "../Converter/ConverterClass.hpp"

TEST(TestConverter, TestFeetToMeters)
{
	Converter c;
	EXPECT_DOUBLE_EQ(32.808399, c.feetToMeters(10));
}


TEST(TestConverter, TestMetersToFeet)
{
	Converter c;
	EXPECT_DOUBLE_EQ(3.04800, c.metersToFeet(10));
}


TEST(TestConverter, TestCelsiusToFarenheit)
{
	Converter c;
	EXPECT_DOUBLE_EQ(33.8, c.celsiusToFarenheit(1));
	EXPECT_DOUBLE_EQ(21.9, c.celsiusToFarenheit(-5.55555556));

}


TEST(TestConverter, TestFarenheitToCelsius)
{
	Converter c;
	EXPECT_DOUBLE_EQ(10, c.farenheitToCelsius(50));
	EXPECT_DOUBLE_EQ(10, c.farenheitToCelsius(50));

}
