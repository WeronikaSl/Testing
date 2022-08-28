#include "ConverterClass.hpp"

double Converter::feetToMeters(double feet)
{
    return feet/ 3.281;
}

double Converter::metersToFeet(double meters)
{
    return meters* 3.281;
}

double Converter::celsiusToFarenheit(double Celsius)
{
    return (Celsius * 9 / 5) + 32;
}

double Converter::farenheitToCelsius(double Farenheit)
{
    return (Farenheit - 32) * 5 / 9;
}
