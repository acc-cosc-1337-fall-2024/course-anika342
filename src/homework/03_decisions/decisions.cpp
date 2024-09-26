//write include statement for decisions header
#include "decisions.h"
#include <string>
#include "decisions.h"
#include <string>

//Write code for function(s) code here
using std::string;
string get_letter_grade_using_if(int numberGrade)
    {
        string letterGrade;

        if (numberGrade >= 90 && numberGrade <= 100)
        {
            letterGrade = "A";
        } 
        else if (numberGrade >= 80 && numberGrade < 90) 
        {
            letterGrade = "B";
        }   
        else if (numberGrade >= 70 && numberGrade < 80) 
        {
            letterGrade = "C";
        } 
        else if (numberGrade >= 60 && numberGrade < 70) 
        {
            letterGrade = "D";
        } 
        else if (numberGrade >= 0 && numberGrade < 60) 
        {
            letterGrade = "F";
        }
        return letterGrade;

    }

string get_letter_grade_using_switch(int numberGrade)
    {
        string letterGrade;
        switch (numberGrade / 10) {
            case 10:
            case 9:
                letterGrade = "A";
                break;
            case 8:
                letterGrade = "B";
                break;
            case 7:
                letterGrade = "C";
                break;
            case 6:
                letterGrade = "D";
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                letterGrade = "F";
                break;
            default:
                letterGrade = "invalid";
                break;
        }
        
        return letterGrade;
    }