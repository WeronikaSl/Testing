#include "TaxCalculatorClass.hpp"
#include <stdexcept>

int TaxCalculator::inWhichTaxThreshold(double amountOfMoney)
{
    if ((amountOfMoney >= 0) && (amountOfMoney < 10000))
    {
        return 1;
    }
    else if ((amountOfMoney >= 10000) && (amountOfMoney < 30000))
    {
        return 2;
    }
    else if ((amountOfMoney >= 30000) && (amountOfMoney < 120000))
    {
        return 3;
    }
    else if (amountOfMoney >= 120000)
    {
        return 4;
    }
    else
    {
        throw std::invalid_argument("Ilość pieniędzy do wyliczenia podatku nie może być mniejsza niż 0!");
    }

}

int TaxCalculator::inFirstTaxThreshold(double amountOfMoney)
{
    return 0;
}

double TaxCalculator::inSecondTaxThreshold(double amountOfMoney)
{
    return ((amountOfMoney - 10000)*0.1);
}

double TaxCalculator::inThirdTaxThreshold(double amountOfMoney)
{
    return (20000 * 0.1 + (amountOfMoney - 30000) * 0.25);
}

double TaxCalculator::inFourthTaxThreshold(double amountOfMoney)
{
    return (20000 * 0.1 + 90000 * 0.25 + (amountOfMoney - 120000) * 0.4);
}

double TaxCalculator::countTax(double amountOfMoney)
{
    if (1 == inWhichTaxThreshold(amountOfMoney))
    {
        return inFirstTaxThreshold(amountOfMoney);
    }
    else if (2 == inWhichTaxThreshold(amountOfMoney))
    {
        return inSecondTaxThreshold(amountOfMoney);
    }
    else if (3 == inWhichTaxThreshold(amountOfMoney))
    {
        return inThirdTaxThreshold(amountOfMoney);
    }
    else
    {
        return inFourthTaxThreshold(amountOfMoney);
    }
}
