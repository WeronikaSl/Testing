#include "TaxCalculatorClass.hpp"
#include <iostream>

int main()
{
    TaxCalculator taxCalculator;
    try
    {
        std::cout << taxCalculator.countTax(5) << std::endl;
        std::cout << taxCalculator.countTax(122344) << std::endl;
        std::cout << taxCalculator.countTax(-1242) << std::endl;
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << error.what() << std::endl;
    }

}