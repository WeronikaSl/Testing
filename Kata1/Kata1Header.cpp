#include "Kata1Header.hpp"

bool Fizzbuzz::ifMultiplesOf3(int a)
{
    return ((0 == a % 3) && (a!=0));
}

std::string Fizzbuzz::fizzBuzzMultiplesOf3(int a)
{
    return "Fizz";
}

bool Fizzbuzz::ifMultiplesOf5(int a)
{
    return ((0 == a%5) && (a!=0));
}

std::string Fizzbuzz::fizzBuzzMultiplesOf5(int a)
{
    return "Buzz";
}

bool Fizzbuzz::ifMultiplesOf3And5(int a)
{
    return ((0 == a % 3) && (0 == a % 5) && (a != 0));
}

std::string Fizzbuzz::fizzBuzzMultiplesOf3And5(int a)
{
    return "FizzBuzz";
}

std::string Fizzbuzz::fizzBuzz(int a)
{
    if (ifMultiplesOf3And5(a))
    {
        return fizzBuzzMultiplesOf3And5(a);
    }
    else if (ifMultiplesOf3(a))
    {
        return fizzBuzzMultiplesOf3(a);
    }
    else if (ifMultiplesOf5(a))
    {
        return fizzBuzzMultiplesOf5(a);
    }
    else
    {
        return std::to_string(a);
    }
}
