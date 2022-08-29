#pragma once
#include <string>
#include <numeric>
#include <vector>

class StringCalculator
{
private:
	void isSeparatorAtTheEnd(std::string str);
	char isCommaOrNewLine(std::string str);
	int sumOfDigits(std::string str, char c);

public:
	int add(std::string s);
};