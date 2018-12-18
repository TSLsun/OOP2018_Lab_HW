#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <string>

class Fraction
{
protected:
    int numer=0;
    int denom=1;
public:
    Fraction(int n, int d):numer(n),denom(d){}
    Fraction() = default;
    int getNum() { return numer; }
    int getDen() { return denom; }
    virtual void setInput(int n, int d) 
    {   
        std::cout << "setInput:";
        std::cout << n << " " << d << "\n";
        numer = n; 
        denom = d;
    }
};

std::ostream& operator << (std::ostream& out, Fraction& f)
{
    out << f.getNum() << "/" << f.getDen();    
    return out;
}

std::istream& operator >> (std::istream& in, Fraction& f)
{
    std::string s;
    in >> s;
    std::size_t pos = s.find("/");
   
    //std::cout << "s=" << s << " ";
    //std::string numStr = s.substr(0,pos);
    //std::string denStr = s.substr(pos+1);
    //std::cout << numStr<< " " << denStr << "\n";
    //std::cout << std::stoi(numStr) << "\n";
    f.setInput(std::stoi(s.substr(0, pos)), std::stoi(s.substr(pos+1)));
    return in;
}

#endif
