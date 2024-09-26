//write include statements
#include "decisions.h"
#include <iostream>
#include <string>

//using namespace std;

int main() 
{
	int numberGrade;
	std::string letterGrade;
	int menuSelection;

	std::cout << "	        MAIN MENU" << std::endl;
	std::cout << "1-Letter grade using if" << std::endl;
	std::cout << "2-Letter grade using switch" <<std::endl;
	std::cout << "3-Exit" << std::endl;
	std::cin >> menuSelection;
	if (menuSelection==1 || menuSelection==2)
	{
		std::cout << "Please enter a grade between 0 and 100:" << std::endl;
		std::cin >> numberGrade;
	}
	if (numberGrade>=0 && numberGrade<=100 && menuSelection==1)
	{
		letterGrade = get_letter_grade_using_if(numberGrade);
	}
	else if (numberGrade>=0 && numberGrade<=100 && menuSelection==2)
	{
		letterGrade = get_letter_grade_using_switch(numberGrade);
	}
	else
	{
		std::cout << "The number is out of range!" << std::endl;
		letterGrade = "invalid";
	}
	
	std::cout << "The letter grade is " << letterGrade << std::endl;
	

	return 0;
}
