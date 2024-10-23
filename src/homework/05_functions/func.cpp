//add include statements
#include <string>
#include <iostream>
#include <algorithm>
//include <bits/stdc++.h> 
#include "func.h"
//add function code here
double get_gc_content(const string dna)
{
    double counterCG = 0.0;

    for (int i = 0; i < dna.length(); i++) 
    {
        if (dna[i]=='C' || dna[i]=='G')
        {
            counterCG=counterCG+1.0;
            //std::cout << "updated counterCG:" << counterCG << std::endl;
        }

    }

    return (  counterCG/(dna.length())  );
}
std::string get_reverse_string(string dna)
{
    std::reverse(dna.begin(), dna.end());
    return dna;
}
std::string get_dna_complement(string dna)
{
    std::string reversedDNA; 
    reversedDNA = get_reverse_string(dna);
    for (int i = 0; i < reversedDNA.length(); i++) 
    {
        if(reversedDNA[i]=='A')
        {
            reversedDNA[i]='T';
            std::cout << "Reversing A to T" << std::endl;
            std::cout << "updated char:" << reversedDNA[i] << std::endl;
            my_str.at(i)
        }
        else if(reversedDNA[i]=='T')
        {
            reversedDNA[i]='A';
        }
        else if(reversedDNA[i]=='G')
        {
            reversedDNA[i]='C';
        }
        else if(reversedDNA[i]=='C') 
        {
            reversedDNA[i]='G';
        }
    }

    return reversedDNA;
}

