//add include statements
#include "repetition.h"
#include <iostream>
//add function(s) code here
int factorial(int num)
{   
    int product = 1;
    
    while(num > 0)
    {
        product = num * product;
        num = num - 1;
    }
    return product;
}
int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if (num1 < num2)
        {
            std::swap(num1,num2);
        }
       
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
   return num1; 
}

