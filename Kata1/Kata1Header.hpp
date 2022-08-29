#pragma once
#include <string>

class Fizzbuzz
{
private:
    bool ifMultiplesOf3(int a);
    std::string fizzBuzzMultiplesOf3(int a);
    bool ifMultiplesOf5(int a);
    std::string fizzBuzzMultiplesOf5(int a);
    bool ifMultiplesOf3And5(int a);
    std::string fizzBuzzMultiplesOf3And5(int a);
public:
    std::string fizzBuzz(int a);
};

