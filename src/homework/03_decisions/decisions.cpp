//write include statement for decisions header
#include "decisions.h"
#include <string>

//Write code for function(s) code here

string get_letter_grade_using_if(int numberGgrade)
    {
        string letterGrade;

        if (numberGgrade >= 90 && numberGgrade <= 100)
        {
            letterGrade = "A";
        } 
        else if (numberGgrade >= 80 && numberGgrade < 90) 
        {
            letterGrade = "B";
        }   
        else if (numberGgrade >= 70 && numberGgrade < 80) 
        {
            letterGrade = "C";
        } 
        else if (numberGgrade >= 60 && numberGgrade < 70) 
        {
            letterGrade = "D";
        } 
        else if (numberGgrade >= 0 && numberGgrade < 60) 
        {
            letterGrade = "F";
        }
        return letterGrade;

    }

string get_letter_grade_using_switch(int numberGgrade)
    {
        string letterGrade;
        switch (numberGgrade / 10) {
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
