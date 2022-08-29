#include "StringCalculatorClass.hpp"
#include <stdexcept>

char StringCalculator::whichCharIsTheSpeparator(std::string str)
{
    char separator = str[2]; //zakładamy, ze zawsze będzie na drugim miejscu

    for (int i = 4; i < str.length(); ++i)
    {
        char a = str[i];
        bool condition = ((str[i] == separator) || ((str[i] >= 48) && (str[i] <= 57)));
        if (!condition)
        {
            throw std::invalid_argument("Wrong separator was found");
        }
    }
    return separator;
}

void StringCalculator::isSeparatorAtTheEnd(std::string str)
{
    if ((whichCharIsTheSpeparator(str) == str.back()))
    {
        throw std::invalid_argument("Separator is not allowed at the end of string");
    }
}

char StringCalculator::isCommaOrNewLine(std::string str) //pkt 4, już nie potrzebne
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
    for (int i = 4; i < str.length(); ++i)
    {
        char a = str[i];
        if ((str[i] >= 48) && (str[i] <= 57))
        {
            s.push_back(str[i]);
        }
        if (c == str[i])
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
    isSeparatorAtTheEnd(s);
    if ("" == s)
    {
        return 0;
    }
    else
    {
        return sumOfDigits(s, whichCharIsTheSpeparator(s));
    }
}
