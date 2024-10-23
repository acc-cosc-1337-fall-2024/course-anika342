#include "func.h"
#include <iostream>
#include <string>

int main() 
{	
	int menuSelection;
	std::string dna;
	double result;
	std::string resultString; 
	std::string confirmation = "n";

	do {
		std::cout << "" << std::endl;
		std::cout << "1-Get GC Content" << std::endl;
		std::cout << "2-Get DNA Complement" <<std::endl;
		std::cout << "3-Exit" << std::endl;
		std::cin >> menuSelection;
		if (menuSelection==1)
		{
			std::cout << "Please enter a dna string for GC content:" << std::endl;
			std::cin >> dna;
			result=get_gc_content(dna);
			std::cout << "GC content for your string is " << result*100.00 << std::endl;
		}
		else if (menuSelection==2)
		{
			std::cout << "Please enter dna string for dna complement:" << std::endl;
			std::cin >> dna;
			resultString=get_dna_complement(dna);
			std::cout << "dna complement for your string is " << resultString << std::endl;
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
				menuSelection == 1;
			}
		}
		
	} while (menuSelection == 1 || menuSelection == 2 || confirmation == "n") ;
	
	return 0;
}
