#ifndef FRACTION_H
#define FRACTION_H

#include <string>
#include <iostream>
class Fraction
{
private:
    std::string name = "anonymous";
    int num = 0;
    int den = 1; 

public: 
    Fraction(){ }
    Fraction(int n): num(n){ }
    Fraction(int n, int d): num(n), den(d){ } 
    Fraction(std::istream&);
      
    std::string getName() const { return name; }
    int getNum() const { return num; }
    int getDen() const { return den; } 

    void setName(std::string s); 
    Fraction& setName(Fraction* ptr_f); 
    
};

std::ostream& printFraction(std::ostream& strm, const Fraction& f);

#endif
