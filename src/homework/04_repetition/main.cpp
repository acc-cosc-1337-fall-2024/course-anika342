//write include statements
//2#include "repetition.h"
#include "repetition.h"
#include <iostream>
#include <string>
//write using statements
int main() 
{
	int menuSelection;
	int num;
	int num1;
	int num2;
	int result;
	std::string confirmation = "n";

	do {
		std::cout << "" << std::endl;
		std::cout << "1-Factorial" << std::endl;
		std::cout << "2-Greatest Common Divisor" <<std::endl;
		std::cout << "3-Exit" << std::endl;
		std::cin >> menuSelection;
		if (menuSelection==1)
		{
			std::cout << "Please enter a positive number to know its factorial:" << std::endl;
			std::cin >> num;
			result=factorial(num);
			std::cout << "Factorial for your number is " << result << std::endl;
		}
		else if (menuSelection==2)
		{
			std::cout << "Please enter two positive numbers to find out their GCD:" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			result=gcd(num1,num2);
			std::cout << "GCD for your numbers is " << result << std::endl;
		}
		else if (menuSelection==3)
		{
			std::cout << "Are you sure you want to exit? (enter y or n)" << std::endl;
			std::cin >> confirmation;
			if (confirmation=="y")
			{
				break;
			}
			else
			{
				menuSelection = 1;
			}
		}
		
	} while (menuSelection == 1 || menuSelection == 2 || confirmation == "n") ;
	
	return 0;
}
