#include "ConverterClass.hpp"

double Converter::feetToMeters(double feet)
{
    return feet* 0.3048;
}

double Converter::metersToFeet(double meters)
{
    return meters* 3.28084;
}

double Converter::celsiusToFarenheit(double Celsius)
{
    return Celsius* 33.8;
}

double Converter::farenheitToCelsius(double Farenheit)
{
    return (Farenheit-32.0)*5556;
}
