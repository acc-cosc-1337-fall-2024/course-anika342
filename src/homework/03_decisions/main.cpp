//write include statements
#include "decisions.h"
#include <iostream>

using namespace std;

int main() 
{
	int numberGrade;
	string letterGrade;
	int menuSelection;

	cout << "	        MAIN MENU" << endl;
	cout << "1-Letter grade using if" << endl;
	cout << "2-Letter grade using switch" << endl;
	cout << "3-Exit" << endl;
	cin >> menuSelection;
	if (menuSelection==1 || menuSelection==2)
	{
		cout << "Please enter a grade between 0 and 100:" << endl;
		cin >> numberGrade;
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
		cout << "The number is out of range!"
		letterGrade = "invalid"
	}
	
	cout << "The letter grade is " << letterGrade << endl;
	

	return 0;
}
