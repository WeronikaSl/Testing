#include "StringCalculatorClass.hpp"
#include <iostream>
#include <string>


int main()
{
	StringCalculator sc;
	try
	{
		std::cout << sc.add("65\n3\n");
	}
	catch (const std::invalid_argument& error)
	{
		std::cout << error.what() << std::endl;
	}
}
