#include "StringCalculatorClass.hpp"
#include <iostream>
#include <string>


int main()
{
	StringCalculator sc;

	try
	{
		//std::cout << sc.add("65\n3\n");
		//std::cout << sc.add("//.\n1.2");
		std::cout << sc.add("//.\n1x2");
	}
	catch (const std::invalid_argument& error)
	{
		std::cout << error.what() << std::endl;
	}
}
