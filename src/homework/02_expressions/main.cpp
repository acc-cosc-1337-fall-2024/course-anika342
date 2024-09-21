//write include statements
#include "hwexpressions.h"
#include <iostream>


//write namespace using statement for cout
using namespace std;

int main()
{ 
	double meal_amount = 0.0; 
	double tip_rate = 0.0;
	double tip_amount = 0.0;
	double tax_amount = 0.0;
	double total = 0.0;
	
	cout << "Meal Amount:   " ;
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout << "Sales Tax:     " << tax_amount << endl;

	cout << "Enter tip % :  " ;
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount,tip_rate);
	cout << "Tip Amount:    " << tip_amount << endl;;

	total = meal_amount + tip_amount + tax_amount;

	cout << "Total:         " << total << endl;
	return 0;
}
