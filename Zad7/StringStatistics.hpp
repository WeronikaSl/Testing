#pragma once
#include <string>

class StringStatistics
{
private:
	std::string _s = {};

public:
	StringStatistics(std::string s) : _s(s)
	{}
	int countLetters()
	{
		int noOfLetters = 0;
		for (size_t i = 0; i < _s.length(); ++i)
		{
			if (((_s[i] >= 65) && (_s[i] <= 90)) || ((_s[i] >= 97) && (_s[i] <= 122)))
			{
				noOfLetters++;
			}
		}
		return noOfLetters;
	}
	int countDigits()
	{
		int noOfDigits = 0;
		for (size_t i = 0; i < _s.length(); ++i)
		{
			if ((_s[i] >= 38) && (_s[i] <= 57))
			{
				noOfDigits++;
			}
		}
		return noOfDigits;
	}
	int countSpecialChars()
	{
		int noOfSpecialChars = 0;
		for (size_t i = 0; i < _s.length(); ++i)
		{
			if (((_s[i] >= 33) && (_s[i] <= 47)) || ((_s[i] >= 58) && (_s[i] <= 64)) || ((_s[i] >= 91) && (_s[i] <= 96)) || ((_s[i] >= 123) && (_s[i] <= 126)))
			{
				noOfSpecialChars++;
			}
		}
		return noOfSpecialChars;
	}

};
