#include "StringCalculatorClass.hpp"
#include <stdexcept>


void StringCalculator::isSeparatorAtTheEnd(std::string str)
{
    if ((44 == str.back()) || (10 == str.back()))
    {
        throw std::invalid_argument("Na końcu nie może być separatora");
    }
}

char StringCalculator::isCommaOrNewLine(std::string str)
{
    isSeparatorAtTheEnd(str);
    for (auto it = str.cbegin(); it < str.cend(); ++it)
    {
        if (44 == *it)
        {
            return ',';
        }
        else if (10 == *it)
        {
            return '\n';
        }
    }
}

int StringCalculator::sumOfDigits(std::string str, char c)
{
    std::vector<int> v = {};
    std::string s = {};
    for (auto it = str.cbegin(); it < str.cend(); ++it)
    {
        if ((*it >= 48) && (*it <= 57))
        {
            s.push_back(*it);
        }
        if (c == *it)
        {
            v.push_back(std::stoi(s));
            s.clear();
        }
    }
    v.push_back(std::stoi(s));
    return std::accumulate(v.cbegin(), v.cend(),0);
}

int StringCalculator::add(std::string s)
{
    if ("" == s)
    {
        return 0;
    }
    else
    {
        return sumOfDigits(s, isCommaOrNewLine(s));
    }
}
