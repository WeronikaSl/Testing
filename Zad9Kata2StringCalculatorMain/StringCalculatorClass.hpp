#pragma once
#include <string>
#include <numeric>
#include <vector>

class StringCalculator
{
private:
	char whichCharIsTheSpeparator(std::string);

	void isSeparatorAtTheEnd(std::string str);
	char isCommaOrNewLine(std::string str); //do podpunktu 4, teraz już niepotrzebne
	int sumOfDigits(std::string str, char c);

public:
	int add(std::string s);
};