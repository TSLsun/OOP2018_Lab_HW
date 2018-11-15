#include "Fraction.h"

Fraction::Fraction(std::istream& strm)
{
    std::cout << "Enter the name for Fraction: ";
    strm >> this->name;
    std::cout << "Enter the values for numerator and denominator: ";
    strm >> this->num >> this->den; 
}    
void Fraction::setName(std::string s)
{
    this->name = s;
} 
Fraction& Fraction::setName(Fraction* ptr_f)
{
    this->name = ptr_f->getName();
    return *this;
} 

std::ostream& printFraction(std::ostream& strm, const Fraction& f)
{
    strm << "Fraction " << f.getName() << ": " << f.getNum() << "/" << f.getDen() << "\n";
    return strm;
}
