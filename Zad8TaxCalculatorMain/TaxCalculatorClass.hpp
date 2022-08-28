#pragma once

class TaxCalculator
{
private:
	int inWhichTaxThreshold(double amountOfMoney);
	int inFirstTaxThreshold(double amountOfMoney);
	double inSecondTaxThreshold(double amountOfMoney);
	double inThirdTaxThreshold(double amountOfMoney);
	double inFourthTaxThreshold(double amountOfMoney);
public:
	double countTax(double amountOfMoney);
};